class CfgSurfaces {
    class Default;
    class terreno_grass: Default {
        files = "trucotrato_grass_*";
        character = "Grass_clutter";
        soundEnviron = "grass";
        soundHit = "soft_ground";
        rough = 0.13;
        maxSpeedCoef = 0.6;
        dust = 0;
        lucidity = 4;
        grassCover = 0.050000001;
        impact = "hitGroundSoft";
        surfaceFriction = 1.9;
    };
    class terreno_forest: Default {
        files = "trucotrato_forest_*";
        character = "Forest_Clutter";
        soundEnviron = "drygrass";
        soundHit = "soft_ground";
        rough = 0.15;
        maxSpeedCoef = 0.75;
        dust = 0.20000001;
        lucidity = 3.5;
        grassCover = 0.039999999;
        impact = "hitGroundSoft";
        surfaceFriction = 1.7;
    };
    class terreno_soil: Default {
        files = "trucotrato_soil_*";
        character = "Empty";
        soundEnviron = "dirt";
        soundHit = "soft_ground";
        rough = 0.090000004;
        maxSpeedCoef = 0.7;
        dust = 0.5;
        lucidity = 1;
        grassCover = 0;
        surfaceFriction = 1.8;
    };
    class terreno_seabed: Default {
        files = "trucotrato_seabed_*";
        character = "seabed_Clutter";
        soundEnviron = "stony";
        soundHit = "hard_ground";
        rough = 0.12;
        maxSpeedCoef = 0.1;
        dust = 0.43000001;
        lucidity = 3.5;
        grassCover = 0.15000001;
        impact = "hitGroundSoft";
        surfaceFriction = 1.6;
    };
    class terreno_beach: Default {
        files = "gdt_desert_*";
        character = "Empty";
        soundEnviron = "drygrass";
        soundHit = "soft_ground";
        rough = 0.1;
        maxSpeedCoef = 0.2;
        dust = 0.33000001;
        lucidity = 1.5;
        grassCover = 0.1;
        impact = "hitGroundSoft";
        surfaceFriction = 1.7;
    };
    class k_asphalt: Default {
        files = "k_asphalt*";
        character = "Empty";
        soundEnviron = "tarmac";
        soundHit = "hard_ground";
        rough = 0;
        maxSpeedCoef = 1;
        dust = 0;
        lucidity = 0.5;
        grassCover = 0.1;
        impact = "hitGroundSoft";
        surfaceFriction = 2.5;
    };
    class georgeRock: Default {
        files = "georgerock_*";
        character = "Empty";
        soundEnviron = "tarmac";
        soundHit = "hard_ground";
        rough = 0;
        maxSpeedCoef = 1;
        dust = 0;
        lucidity = 0.5;
        grassCover = 0.1;
        impact = "hitGroundSoft";
        surfaceFriction = 2;
    };
    class georgeWheat: Default {
        files = "georgewheat_*";
        character = "Wheat_Clutter";
        soundEnviron = "tarmac";
        soundHit = "drygrass";
        rough = 0;
        maxSpeedCoef = 1;
        dust = 0.93000001;
        lucidity = 0.5;
        grassCover = 0.1;
        impact = "hitGroundSoft";
        surfaceFriction = 2;
    };
};
class CfgSurfaceCharacters {
    class Grass_Clutter {
        probability[] = {
            0.1,
            0.15,
            0.01
        };
        names[] = {
            "GrassCrookedGreen",
            "GrassGreen",
            "HeatherBrush"
        };
    };
    class Wheat_Clutter {
        probability[] = {
            0.15
        };
        names[] = {
            "Wheat"
        };
    };
    class Forest_Clutter {
        probability[] = {
            0.2,
            0.2,
            0.1,
            0.050000001,
            0.1,
            0.1,
            0.2,
            0.050000001
        };
        names[] = {
            "GrassGreen",
            "GrassDry",
            "GrassBrushHighGreen",
            "FlowerLowYellow2",
            "c_Grass_TuftDry",
            "c_GrassDead_Tuft_Stony",
            "c_GrassLong_DryBunch",
            "PlantGreenSmall"
        };
    };
    class seabed_Clutter {
        probability[] = {
            0.25,
            0.22,
            0.2,
            0.059999999,
            0.039999999,
            0.02
        };
        names[] = {
            "StrGrassDry",
            "StrThistleSmallYellow",
            "StrPlantGermaderGroup",
            "StrThornGreenSmall",
            "StrPlantGreenShrub",
            "StrThornGreenBig"
        };
    };
};