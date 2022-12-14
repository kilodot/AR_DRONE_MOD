class CfgPatches
{
	class Parrot_AR2
	{
		units[]=
		{
			"AR2_01"
		};
		weapons[]=
		{
			"AR2_item"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"cba_main",
			"ace_interaction",
			"a3_drones_f"
		};
	};
};

class CfgWeapons
{
	class ItemCore;
    class InventoryItem_Base_F;
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class AR2_item: ACE_ItemCore
	{
		scope=2;
		author="kilodot, Bohemia Interactive";
		displayName="Parrot AR 2.0 Drone";
		descriptionShort="";
		model="\A3\Drones_F\Air_F_Gamma\UAV_01\UAV_01_F.p3d";
		picture="\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UI\map_UAV_01_CA.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=70;
		};
	};
};

class CfgFunctions
{
	class funct
	{
		tag="funct";
		class AR2_Functions
		{
			file="\AR_Drone\fnc";
			class pickup
			{};
			class place
			{};
		};
	};
};

class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class Ace_SelfActions
		{
			class ACE_Equipment
			{
				class AR2_01_place
				{
					displayName="Assemble AR 2.0 Drone";
					condition="'AR2_item' in (items _player)";
					statement="[_player, 'AR2_item'] call funct_fnc_place";
					showDisabled=0;
				};
			};
		};
	};

	class ACE_Actions
	{
		class ACE_MainActions;
	};

	class UAV_01_base_F;
	class AR2_01: UAV_01_base_F
	{
		displayName="Parrot AR 2.0 Drone";

		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				selection="body";
				class AR2_01_pickup
				{
					selection="";
					displayName="Dissassemble AR 2.0 Drone";
					distance=5;
					condition="(alive _target)";
					statement="[_target,_player] call funct_fnc_pickup";
					showDisabled=0;
				};
			};
		};

		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_01_F.jpg";
		_generalMacro="AR2_01";
		scope=2;
		side=1;
		faction="BLU_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		accuracy=0.5;
		hiddenSelectionsTextures[]=
		{
			"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_CO.paa"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
	};
};