/*
 * Author: Rocko, Ruthberg
 * Place down spotting scope
 *
 * Arguments:
 * 0: unit <OBJECT>
 * 1: scope class <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "ACE_SpottingScope"] call ace_spottingscope_fnc_place
 *
 * Public: No
 */

params ["_unit", "_drone"];

_unit removeItem _drone;

private _direction = getDir _unit;
private _position = getPosATL _unit;
private _vectorUp = [0, 0, 1];

private _ar2 = "AR2_01" createVehicle (position _unit);

createVehicleCrew _ar2;

_ar2 setDir _direction;
_ar2 setPosATL _position;
_ar2 setVectorUp _vectorUp;

_unit reveal _ar2;