/*
 * Author: Rocko, Ruthberg
 * Pick up spotting scope
 *
 * Arguments:
 * 0: spotting scope <OBJECT>
 * 1: unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [spotting_scope, player] call ace_spottingscope_fnc_pickup
 *
 * Public: No
 */

params ["_drone", "_unit"];

[{
    params ["_drone", "_unit"];

    _unit addItem "AR2_item";
    deleteVehicle _drone;
}, [_drone, _unit], 1, 0]call CBA_fnc_waitAndExecute;
