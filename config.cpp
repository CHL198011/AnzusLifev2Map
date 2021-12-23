class CfgPatches {
    class Anzus_Life {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1;
        requiredAddons[] = {
            "A3_UI_F",
            "A3_Data_F",
            "A3_Roads_F",
            "A3_Plants_F",
            "A3_Structures_F",
            "A3_Map_Data",
            "A3_Map_Stratis",
            "A3_Map_Altis"
        };
        version = "16/6/2016";
        author = "ANZUS";
    };
};
class CfgWorlds {
    class DefaultWorld {
        class Weather;
    };
    class CAWorld: DefaultWorld {
        class Grid;
        class DayLightingBrightAlmost;
        class DayLightingRainy;
        class DefaultClutter;
        class Weather: Weather {
            class Overcast;
        };
    };
    class Stratis: CAWorld {
        class Weather: Weather {
            class Lighting;
            class Overcast: Overcast {
                class Weather1;
                class Weather2;
                class Weather3;
                class Weather4;
                class Weather5;
                class Weather6;
            };
        };
    };
    class DefaultLighting;
    class Anzus_Life: Stratis {
        dynLightMinBrightnessAmbientCoef = 0.5;
        dynLightMinBrightnessAbsolute = 0.05;
        class Lighting: DefaultLighting {
            groundReflection[] = {
                0.132,
                0.133,
                0.122
            };
            moonObjectColorFull[] = {
                460,
                440,
                400,
                1.0
            };
            moonHaloObjectColorFull[] = {
                465,
                477,
                475,
                1.0
            };
            moonsetObjectColor[] = {
                375,
                350,
                325,
                1.0
            };
            moonsetHaloObjectColor[] = {
                515,
                517,
                525,
                1.0
            };
            class ThunderBoltLight {
                diffuse[] = {
                    2120,
                    3170,
                    5550
                };
                ambient[] = {
                    0.001,
                    0.001,
                    0.001
                };
                intensity = 120000;
                class Attenuation {
                    start = 0.0;
                    constant = 0.0;
                    linear = 0.0;
                    quadratic = 1.0;
                };
            };
            starEmissivity = 90;
        };
        class DayLightingBrightAlmost: DayLightingBrightAlmost {
            deepNight[] = {-3.75,
                {
                    0.377,
                    0.441,
                    0.518
                },
                {
                    0.103,
                    0.227,
                    0.453
                },
                {
                    0.04,
                    0.034,
                    0.004
                },
                {
                    0.039,
                    0.049,
                    0.072
                },
                {
                    0.174,
                    0.274,
                    0.395
                },
                {
                    0.582,
                    0.72,
                    0.887
                },
                0.5
            };
            fullNight[] = {-2.75,
                {
                    0.377,
                    0.441,
                    0.518
                },
                {
                    0.103,
                    0.227,
                    0.453
                },
                {
                    0.04,
                    0.034,
                    0.004
                },
                {
                    0.039,
                    0.049,
                    0.072
                },
                {
                    0.174,
                    0.274,
                    0.395
                },
                {
                    0.582,
                    0.72,
                    0.887
                },
                0.5
            };
            sunMoon[] = {-1.75,
                {
                    0.377,
                    0.441,
                    0.518
                },
                {
                    0.103,
                    0.227,
                    0.453
                },
                {
                    0.04,
                    0.034,
                    0.004
                },
                {
                    0.039,
                    0.049,
                    0.072
                },
                {
                    0.174,
                    0.274,
                    0.395
                },
                {
                    0.582,
                    0.72,
                    0.887
                },
                0.5
            };
            earlySun[] = {-0.75,
                {
                    0.675,
                    0.69,
                    0.784
                },
                {
                    0.22,
                    0.322,
                    0.471
                },
                {
                    0.04,
                    0.034,
                    0.004
                },
                {
                    0.039,
                    0.049,
                    0.072
                },
                {
                    0.424,
                    0.549,
                    0.745
                },
                {
                    0.698,
                    0.753,
                    0.894
                },
                1
            };
            sunrise[] = {-0.75,
                {
                    0.377,
                    0.441,
                    0.518
                },
                {
                    0.103,
                    0.227,
                    0.453
                },
                {
                    0.04,
                    0.034,
                    0.004
                },
                {
                    0.039,
                    0.049,
                    0.072
                },
                {
                    0.174,
                    0.274,
                    0.395
                },
                {
                    0.582,
                    0.72,
                    0.887
                },
                0.5
            };
            earlyMorning[] = {
                3,
                {
                    {
                        0.844,
                        0.61,
                        0.469
                    },
                    0.8
                },
                {
                    0.424,
                    0.557,
                    0.651
                },
                {
                    {
                        1,
                        0.45,
                        0.2
                    },
                    1
                },
                {
                    0.12,
                    0.26,
                    0.38
                },
                {
                    {
                        0.428,
                        0.579,
                        0.743
                    },
                    2
                },
                {
                    {
                        0.844,
                        0.61,
                        0.469
                    },
                    2.7
                },
                1
            };
            midMorning[] = {
                8,
                {
                    {
                        0.822,
                        0.75,
                        0.646
                    },
                    3.8
                },
                {
                    {
                        0.383,
                        0.58,
                        0.858
                    },
                    1.3
                },
                {
                    {
                        1.3,
                        0.9,
                        0.61
                    },
                    2.8
                },
                {
                    {
                        0.12,
                        0.18,
                        0.28
                    },
                    0.5
                },
                {
                    {
                        0.322,
                        0.478,
                        0.675
                    },
                    3.5
                },
                {
                    {
                        1.0,
                        0.929,
                        0.815
                    },
                    4.7
                },
                1
            };
            morning[] = {
                16,
                {
                    {
                        1,
                        0.95,
                        0.91
                    },
                    12.2
                },
                {
                    {
                        0.12,
                        0.18,
                        0.28
                    },
                    9.2
                },
                {
                    {
                        1,
                        0.95,
                        0.91
                    },
                    11.2
                },
                {
                    {
                        0.12,
                        0.18,
                        0.28
                    },
                    8.5
                },
                {
                    {
                        0.14,
                        0.18,
                        0.24
                    },
                    11.0
                },
                {
                    {
                        0.5,
                        0.6,
                        0.9
                    },
                    13.2
                },
                1
            };
            noon[] = {
                45,
                {
                    {
                        0.98,
                        0.94,
                        0.94
                    },
                    13.8
                },
                {
                    {
                        0.2,
                        0.27,
                        0.35
                    },
                    10.8
                },
                {
                    {
                        0.98,
                        0.94,
                        0.94
                    },
                    13.8
                },
                {
                    {
                        0.2,
                        0.27,
                        0.35
                    },
                    10.8
                },
                {
                    {
                        0.5,
                        0.64,
                        1.0
                    },
                    12.0
                },
                {
                    {
                        0.5,
                        0.5,
                        0.5
                    },
                    14.8
                },
                1,
                0.5,
                0.4,
                0.5,
                0.4
            };
        };
        class DayLightingRainy: DayLightingRainy {
            deepNight[] = {-3.75,
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.035,
                    0.04
                },
                {
                    0.11,
                    0.08,
                    0.09
                },
                0.5
            };
            fullNight[] = {-3.75,
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.035,
                    0.04
                },
                {
                    0.11,
                    0.08,
                    0.09
                },
                0.5
            };
            sunMoon[] = {-3.75,
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.035,
                    0.04
                },
                {
                    0.11,
                    0.08,
                    0.09
                },
                0.5
            };
            earlySun[] = {-2.5,
                {
                    0.0689,
                    0.0689,
                    0.0804
                },
                {
                    0.06,
                    0.06,
                    0.07
                },
                {
                    0.0689,
                    0.0689,
                    0.0804
                },
                {
                    0.06,
                    0.06,
                    0.07
                },
                {
                    0.08,
                    0.07,
                    0.08
                },
                {
                    0.14,
                    0.1,
                    0.12
                },
                0.5
            };
            earlyMorning[] = {
                3,
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+3.95"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+3.0"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+3.95"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+3.0"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+4"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+5.5"
                },
                1
            };
            morning[] = {
                16,
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+5.7"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+4.5"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+5.7"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+4.5"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+7"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+8"
                },
                1
            };
            lateMorning[] = {
                25,
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+10.45"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+9.75"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+10.45"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+9.75"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+12"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+12.75"
                },
                1
            };
            noon[] = {
                45,
                {
                    {
                        1,
                        1,
                        1
                    },
                    10.0
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    9.0
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    9.0
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    8.0
                },
                {
                    {
                        0.5,
                        0.64,
                        1
                    },
                    12.0
                },
                {
                    {
                        0.5,
                        0.5,
                        0.5
                    },
                    14.8
                },
                1
            };
        };
        class Weather: Weather {
            class LightingNew {
                class Lighting0 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -24;
                    sunOrMoon = 0;
                    diffuse[] = {
                        {
                            0.14,
                            0.19,
                            0.3
                        },
                        4
                    };
                    diffuseCloud[] = {
                        {
                            0.14,
                            0.19,
                            0.3
                        },
                        0.2
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.05
                    };
                    ambientMid[] = {
                        {
                            0.1384,
                            0.1912,
                            0.2984
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.1384,
                            0.1912,
                            0.2984
                        },
                        0.044
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.04224
                    };
                    bidirect[] = {
                        0.025,
                        0.025,
                        0.023
                    };
                    bidirectCloud[] = {
                        0.0125,
                        0.0125,
                        0.0115
                    };
                    sky[] = {
                        0.231,
                        0.314,
                        0.467
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.025
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            0.5,
                            0.65,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting1 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -12;
                    sunOrMoon = 0;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting2 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -11;
                    sunOrMoon = 0.5;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting3 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -10;
                    sunOrMoon = 1;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        {
                            0.2,
                            0.25,
                            0.45
                        },
                        4.73491
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting4 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -5;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.16,
                            0.18,
                            0.28
                        },
                        3
                    };
                    diffuseCloud[] = {
                        {
                            0.16,
                            0.18,
                            0.28
                        },
                        3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.6
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.6
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.048
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.048
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        3.88608
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        3.88608
                    };
                    bidirect[] = {
                        0.0115,
                        0.012,
                        0.0125
                    };
                    bidirectCloud[] = {
                        0.0115,
                        0.012,
                        0.0125
                    };
                    sky[] = {
                        {
                            0.2,
                            0.298,
                            0.541
                        },
                        4.6
                    };
                    skyAroundSun[] = {
                        {
                            0.7,
                            0.35,
                            0.28
                        },
                        7.63695
                    };
                    fogColor[] = {
                        {
                            0.106,
                            0.161,
                            0.267
                        },
                        4.715
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting5 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.25,
                            0.21,
                            0.2
                        },
                        5
                    };
                    diffuseCloud[] = {
                        {
                            0.25,
                            0.21,
                            0.2
                        },
                        5
                    };
                    ambient[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.9
                    };
                    ambientCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.9
                    };
                    ambientMid[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.072
                    };
                    ambientMidCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.072
                    };
                    groundReflection[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        5.82912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        5.82912
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.188,
                            0.29,
                            0.576
                        },
                        6.9
                    };
                    skyAroundSun[] = {
                        {
                            1.8,
                            0.42,
                            0.2
                        },
                        12.3177
                    };
                    fogColor[] = {
                        {
                            0.11,
                            0.169,
                            0.286
                        },
                        7.0725
                    };
                    apertureMin = 7;
                    apertureStandard = 8;
                    apertureMax = 20;
                    standardAvgLum = 20;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting6 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 0;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.75,
                            0.38,
                            0.22
                        },
                        6
                    };
                    diffuseCloud[] = {
                        {
                            0.75,
                            0.38,
                            0.22
                        },
                        6
                    };
                    ambient[] = {
                        {
                            0.2497,
                            0.31,
                            0.467
                        },
                        7.8
                    };
                    ambientCloud[] = {
                        {
                            0.2497,
                            0.31,
                            0.467
                        },
                        7.8
                    };
                    ambientMid[] = {
                        {
                            0.2541,
                            0.314,
                            0.467
                        },
                        6.864
                    };
                    ambientMidCloud[] = {
                        {
                            0.2541,
                            0.314,
                            0.467
                        },
                        6.864
                    };
                    groundReflection[] = {
                        {
                            0.235,
                            0.318,
                            0.467
                        },
                        6.58944
                    };
                    groundReflectionCloud[] = {
                        {
                            0.235,
                            0.318,
                            0.467
                        },
                        6.58944
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.173,
                            0.282,
                            0.612
                        },
                        7.8
                    };
                    skyAroundSun[] = {
                        {
                            2,
                            0.42,
                            0.2
                        },
                        13.3888
                    };
                    fogColor[] = {
                        {
                            0.118,
                            0.18,
                            0.31
                        },
                        7.995
                    };
                    apertureMin = 8;
                    apertureStandard = 9;
                    apertureMax = 22;
                    standardAvgLum = 45;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting7 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.95,
                            0.42,
                            0.22
                        },
                        8.4
                    };
                    diffuseCloud[] = {
                        {
                            0.95,
                            0.42,
                            0.22
                        },
                        8.4
                    };
                    ambient[] = {
                        {
                            0.306,
                            0.357,
                            0.463
                        },
                        8.4
                    };
                    ambientCloud[] = {
                        {
                            0.306,
                            0.357,
                            0.463
                        },
                        8.4
                    };
                    ambientMid[] = {
                        {
                            0.365,
                            0.361,
                            0.396
                        },
                        7.392
                    };
                    ambientMidCloud[] = {
                        {
                            0.365,
                            0.361,
                            0.396
                        },
                        7.392
                    };
                    groundReflection[] = {
                        {
                            0.416,
                            0.38,
                            0.388
                        },
                        7.09632
                    };
                    groundReflectionCloud[] = {
                        {
                            0.416,
                            0.38,
                            0.388
                        },
                        7.09632
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.157,
                            0.275,
                            0.651
                        },
                        8.4
                    };
                    skyAroundSun[] = {
                        {
                            2.2,
                            0.8,
                            0.2
                        },
                        13.3888
                    };
                    fogColor[] = {
                        {
                            0.125,
                            0.192,
                            0.329
                        },
                        8.61
                    };
                    apertureMin = 8;
                    apertureStandard = 10;
                    apertureMax = 24;
                    standardAvgLum = 50;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting8 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 6;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.95,
                            0.55,
                            0.35
                        },
                        10.2
                    };
                    diffuseCloud[] = {
                        {
                            0.95,
                            0.55,
                            0.35
                        },
                        10.2
                    };
                    ambient[] = {
                        {
                            0.337,
                            0.404,
                            0.525
                        },
                        9.6
                    };
                    ambientCloud[] = {
                        {
                            0.337,
                            0.404,
                            0.525
                        },
                        9.6
                    };
                    ambientMid[] = {
                        {
                            0.412,
                            0.408,
                            0.443
                        },
                        8.448
                    };
                    ambientMidCloud[] = {
                        {
                            0.412,
                            0.408,
                            0.443
                        },
                        8.448
                    };
                    groundReflection[] = {
                        {
                            0.475,
                            0.435,
                            0.431
                        },
                        8.11008
                    };
                    groundReflectionCloud[] = {
                        {
                            0.475,
                            0.435,
                            0.431
                        },
                        8.11008
                    };
                    bidirect[] = {
                        0.01375,
                        0.0132,
                        0.01265
                    };
                    bidirectCloud[] = {
                        0.01375,
                        0.0132,
                        0.01265
                    };
                    sky[] = {
                        {
                            0.145,
                            0.263,
                            0.686
                        },
                        9.6
                    };
                    skyAroundSun[] = {
                        {
                            0.4,
                            0.32,
                            0.6
                        },
                        13.3888
                    };
                    fogColor[] = {
                        {
                            0.133,
                            0.204,
                            0.357
                        },
                        9.84
                    };
                    apertureMin = 8;
                    apertureStandard = 16;
                    apertureMax = 26;
                    standardAvgLum = 100;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.027,
                        0.045
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting9 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 12;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.65,
                            0.45
                        },
                        12.3
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.65,
                            0.45
                        },
                        12.3
                    };
                    ambient[] = {
                        {
                            0.388,
                            0.471,
                            0.612
                        },
                        10.9
                    };
                    ambientCloud[] = {
                        {
                            0.388,
                            0.471,
                            0.612
                        },
                        10.9
                    };
                    ambientMid[] = {
                        {
                            0.482,
                            0.475,
                            0.506
                        },
                        9.81
                    };
                    ambientMidCloud[] = {
                        {
                            0.482,
                            0.475,
                            0.506
                        },
                        9.81
                    };
                    groundReflection[] = {
                        {
                            0.557,
                            0.51,
                            0.494
                        },
                        9.4176
                    };
                    groundReflectionCloud[] = {
                        {
                            0.557,
                            0.51,
                            0.494
                        },
                        9.4176
                    };
                    bidirect[] = {
                        0.01875,
                        0.018,
                        0.01725
                    };
                    bidirectCloud[] = {
                        0.01875,
                        0.018,
                        0.01725
                    };
                    sky[] = {
                        {
                            0.129,
                            0.259,
                            0.722
                        },
                        10.9
                    };
                    skyAroundSun[] = {
                        {
                            0.13,
                            0.25,
                            0.8
                        },
                        13.524
                    };
                    fogColor[] = {
                        {
                            0.145,
                            0.224,
                            0.396
                        },
                        11.1725
                    };
                    apertureMin = 20;
                    apertureStandard = 25;
                    apertureMax = 35;
                    standardAvgLum = 250;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.018,
                        0.04
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        12.24
                    };
                    swBrightness = 1;
                };
                class Lighting10 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 24;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.75,
                            0.62
                        },
                        15.8
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.75,
                            0.62
                        },
                        15.8
                    };
                    ambient[] = {
                        {
                            0.435,
                            0.533,
                            0.698
                        },
                        13.8
                    };
                    ambientCloud[] = {
                        {
                            0.435,
                            0.533,
                            0.698
                        },
                        13.8
                    };
                    ambientMid[] = {
                        {
                            0.545,
                            0.541,
                            0.569
                        },
                        12.696
                    };
                    ambientMidCloud[] = {
                        {
                            0.545,
                            0.541,
                            0.569
                        },
                        12.696
                    };
                    groundReflection[] = {
                        {
                            0.635,
                            0.58,
                            0.557
                        },
                        12.1882
                    };
                    groundReflectionCloud[] = {
                        {
                            0.635,
                            0.58,
                            0.557
                        },
                        12.1882
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.118,
                            0.251,
                            0.753
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.115,
                            0.245,
                            0.8
                        },
                        13.662
                    };
                    fogColor[] = {
                        {
                            0.15,
                            0.251,
                            0.488
                        },
                        14.145
                    };
                    apertureMin = 45;
                    apertureStandard = 60;
                    apertureMax = 80;
                    standardAvgLum = 800;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.4
                    };
                    swBrightness = 1;
                };
                class Lighting11 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 45;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17.2
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17.2
                    };
                    ambient[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    ambientMidCloud[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    groundReflection[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.2139
                    };
                    groundReflectionCloud[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.2139
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        15
                    };
                    apertureMin = 70;
                    apertureStandard = 120;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting12 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 90;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17.2
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17.2
                    };
                    ambient[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    ambientMidCloud[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    groundReflection[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.2139
                    };
                    groundReflectionCloud[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.2139
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        15
                    };
                    apertureMin = 70;
                    apertureStandard = 120;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting13 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -24;
                    sunOrMoon = 0;
                    diffuse[] = {
                        {
                            0.14,
                            0.19,
                            0.3
                        },
                        4
                    };
                    diffuseCloud[] = {
                        {
                            0.14,
                            0.19,
                            0.3
                        },
                        3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.1384,
                            0.1912,
                            0.2984
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.1384,
                            0.1912,
                            0.2984
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0.025,
                        0.025,
                        0.023
                    };
                    bidirectCloud[] = {
                        0.0245,
                        0.0245,
                        0.02254
                    };
                    sky[] = {
                        0.231,
                        0.314,
                        0.467
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.025
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            0.5,
                            0.65,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting14 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -12;
                    sunOrMoon = 0;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting15 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -11;
                    sunOrMoon = 0.5;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting16 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -10;
                    sunOrMoon = 1;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        {
                            0.2,
                            0.25,
                            0.45
                        },
                        4.73491
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting17 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -5;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.16,
                            0.18,
                            0.28
                        },
                        2.25
                    };
                    diffuseCloud[] = {
                        {
                            0.16,
                            0.18,
                            0.28
                        },
                        1.6875
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.6
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.6
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.048
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.048
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        3.88608
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        3.88608
                    };
                    bidirect[] = {
                        0.0115,
                        0.012,
                        0.0125
                    };
                    bidirectCloud[] = {
                        0.01127,
                        0.01176,
                        0.01225
                    };
                    sky[] = {
                        {
                            0.2,
                            0.298,
                            0.541
                        },
                        4.6
                    };
                    skyAroundSun[] = {
                        {
                            0.7,
                            0.35,
                            0.28
                        },
                        7.63695
                    };
                    fogColor[] = {
                        {
                            0.106,
                            0.161,
                            0.267
                        },
                        4.715
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting18 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.25,
                            0.21,
                            0.2
                        },
                        3.75
                    };
                    diffuseCloud[] = {
                        {
                            0.25,
                            0.21,
                            0.2
                        },
                        2.8125
                    };
                    ambient[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.9
                    };
                    ambientCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.9
                    };
                    ambientMid[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.072
                    };
                    ambientMidCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.072
                    };
                    groundReflection[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        5.82912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        5.82912
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.188,
                            0.29,
                            0.576
                        },
                        6.9
                    };
                    skyAroundSun[] = {
                        {
                            1.8,
                            0.42,
                            0.2
                        },
                        12.3177
                    };
                    fogColor[] = {
                        {
                            0.11,
                            0.169,
                            0.286
                        },
                        7.0725
                    };
                    apertureMin = 7;
                    apertureStandard = 8;
                    apertureMax = 20;
                    standardAvgLum = 20;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting19 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 0;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.75,
                            0.38,
                            0.22
                        },
                        4.5
                    };
                    diffuseCloud[] = {
                        {
                            0.75,
                            0.38,
                            0.22
                        },
                        3.375
                    };
                    ambient[] = {
                        {
                            0.2497,
                            0.31,
                            0.467
                        },
                        7.8
                    };
                    ambientCloud[] = {
                        {
                            0.2497,
                            0.31,
                            0.467
                        },
                        7.8
                    };
                    ambientMid[] = {
                        {
                            0.2541,
                            0.314,
                            0.467
                        },
                        6.864
                    };
                    ambientMidCloud[] = {
                        {
                            0.2541,
                            0.314,
                            0.467
                        },
                        6.864
                    };
                    groundReflection[] = {
                        {
                            0.235,
                            0.318,
                            0.467
                        },
                        6.58944
                    };
                    groundReflectionCloud[] = {
                        {
                            0.235,
                            0.318,
                            0.467
                        },
                        6.58944
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.173,
                            0.282,
                            0.612
                        },
                        7.8
                    };
                    skyAroundSun[] = {
                        {
                            2,
                            0.42,
                            0.2
                        },
                        13.3888
                    };
                    fogColor[] = {
                        {
                            0.118,
                            0.18,
                            0.31
                        },
                        7.995
                    };
                    apertureMin = 8;
                    apertureStandard = 9;
                    apertureMax = 22;
                    standardAvgLum = 45;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting20 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.95,
                            0.42,
                            0.22
                        },
                        6.72
                    };
                    diffuseCloud[] = {
                        {
                            0.95,
                            0.42,
                            0.22
                        },
                        5.04
                    };
                    ambient[] = {
                        {
                            0.306,
                            0.357,
                            0.463
                        },
                        8.4
                    };
                    ambientCloud[] = {
                        {
                            0.306,
                            0.357,
                            0.463
                        },
                        8.4
                    };
                    ambientMid[] = {
                        {
                            0.365,
                            0.361,
                            0.396
                        },
                        7.392
                    };
                    ambientMidCloud[] = {
                        {
                            0.365,
                            0.361,
                            0.396
                        },
                        7.392
                    };
                    groundReflection[] = {
                        {
                            0.416,
                            0.38,
                            0.388
                        },
                        7.09632
                    };
                    groundReflectionCloud[] = {
                        {
                            0.416,
                            0.38,
                            0.388
                        },
                        7.09632
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.157,
                            0.275,
                            0.651
                        },
                        8.4
                    };
                    skyAroundSun[] = {
                        {
                            2.2,
                            0.8,
                            0.2
                        },
                        13.3888
                    };
                    fogColor[] = {
                        {
                            0.125,
                            0.192,
                            0.329
                        },
                        8.61
                    };
                    apertureMin = 8;
                    apertureStandard = 10;
                    apertureMax = 24;
                    standardAvgLum = 50;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting21 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 6;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.95,
                            0.55,
                            0.35
                        },
                        10.2
                    };
                    diffuseCloud[] = {
                        {
                            0.95,
                            0.55,
                            0.35
                        },
                        7.65
                    };
                    ambient[] = {
                        {
                            0.337,
                            0.404,
                            0.525
                        },
                        9.6
                    };
                    ambientCloud[] = {
                        {
                            0.337,
                            0.404,
                            0.525
                        },
                        9.6
                    };
                    ambientMid[] = {
                        {
                            0.412,
                            0.408,
                            0.443
                        },
                        8.448
                    };
                    ambientMidCloud[] = {
                        {
                            0.412,
                            0.408,
                            0.443
                        },
                        8.448
                    };
                    groundReflection[] = {
                        {
                            0.475,
                            0.435,
                            0.431
                        },
                        8.11008
                    };
                    groundReflectionCloud[] = {
                        {
                            0.475,
                            0.435,
                            0.431
                        },
                        8.11008
                    };
                    bidirect[] = {
                        0.01375,
                        0.0132,
                        0.01265
                    };
                    bidirectCloud[] = {
                        0.01375,
                        0.0132,
                        0.01265
                    };
                    sky[] = {
                        {
                            0.145,
                            0.263,
                            0.686
                        },
                        9.6
                    };
                    skyAroundSun[] = {
                        {
                            0.4,
                            0.32,
                            0.6
                        },
                        13.3888
                    };
                    fogColor[] = {
                        {
                            0.133,
                            0.204,
                            0.357
                        },
                        9.84
                    };
                    apertureMin = 8;
                    apertureStandard = 16;
                    apertureMax = 26;
                    standardAvgLum = 100;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.027,
                        0.045
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting22 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 12;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.65,
                            0.45
                        },
                        12.3
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.65,
                            0.45
                        },
                        9.225
                    };
                    ambient[] = {
                        {
                            0.388,
                            0.471,
                            0.612
                        },
                        10.9
                    };
                    ambientCloud[] = {
                        {
                            0.388,
                            0.471,
                            0.612
                        },
                        10.9
                    };
                    ambientMid[] = {
                        {
                            0.482,
                            0.475,
                            0.506
                        },
                        9.81
                    };
                    ambientMidCloud[] = {
                        {
                            0.482,
                            0.475,
                            0.506
                        },
                        9.81
                    };
                    groundReflection[] = {
                        {
                            0.557,
                            0.51,
                            0.494
                        },
                        9.4176
                    };
                    groundReflectionCloud[] = {
                        {
                            0.557,
                            0.51,
                            0.494
                        },
                        9.4176
                    };
                    bidirect[] = {
                        0.01875,
                        0.018,
                        0.01725
                    };
                    bidirectCloud[] = {
                        0.01875,
                        0.018,
                        0.01725
                    };
                    sky[] = {
                        {
                            0.129,
                            0.259,
                            0.722
                        },
                        10.9
                    };
                    skyAroundSun[] = {
                        {
                            0.13,
                            0.25,
                            0.8
                        },
                        13.524
                    };
                    fogColor[] = {
                        {
                            0.145,
                            0.224,
                            0.396
                        },
                        11.1725
                    };
                    apertureMin = 20;
                    apertureStandard = 25;
                    apertureMax = 35;
                    standardAvgLum = 250;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.018,
                        0.04
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        12.24
                    };
                    swBrightness = 1;
                };
                class Lighting23 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 24;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.75,
                            0.62
                        },
                        15.8
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.75,
                            0.62
                        },
                        11.85
                    };
                    ambient[] = {
                        {
                            0.435,
                            0.533,
                            0.698
                        },
                        13.8
                    };
                    ambientCloud[] = {
                        {
                            0.435,
                            0.533,
                            0.698
                        },
                        13.8
                    };
                    ambientMid[] = {
                        {
                            0.545,
                            0.541,
                            0.569
                        },
                        12.696
                    };
                    ambientMidCloud[] = {
                        {
                            0.545,
                            0.541,
                            0.569
                        },
                        12.696
                    };
                    groundReflection[] = {
                        {
                            0.635,
                            0.58,
                            0.557
                        },
                        12.1882
                    };
                    groundReflectionCloud[] = {
                        {
                            0.635,
                            0.58,
                            0.557
                        },
                        12.1882
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.118,
                            0.251,
                            0.753
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.115,
                            0.245,
                            0.8
                        },
                        13.662
                    };
                    fogColor[] = {
                        {
                            0.15,
                            0.251,
                            0.488
                        },
                        14.145
                    };
                    apertureMin = 45;
                    apertureStandard = 60;
                    apertureMax = 80;
                    standardAvgLum = 800;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.4
                    };
                    swBrightness = 1;
                };
                class Lighting24 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 45;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        12.75
                    };
                    ambient[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        13.616
                    };
                    ambientMidCloud[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        13.616
                    };
                    groundReflection[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.2139
                    };
                    groundReflectionCloud[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.2139
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        13.9564
                    };
                    apertureMin = 70;
                    apertureStandard = 120;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting25 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 90;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        13.94
                    };
                    ambient[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    ambientMidCloud[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    groundReflection[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.2139
                    };
                    groundReflectionCloud[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.2139
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        15
                    };
                    apertureMin = 70;
                    apertureStandard = 120;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting26 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -24;
                    sunOrMoon = 0;
                    diffuse[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        1
                    };
                    diffuseCloud[] = {
                        {
                            0,
                            0,
                            0
                        },
                        0.75
                    };
                    ambient[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.8624
                    };
                    ambientMidCloud[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.8624
                    };
                    groundReflection[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.758912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.758912
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        0.231,
                        0.314,
                        0.467
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        0.09,
                        0.137,
                        0.22
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting27 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -12;
                    sunOrMoon = 0;
                    diffuse[] = {
                        0.16954,
                        0.239,
                        0.37673
                    };
                    diffuseCloud[] = {
                        0.042385,
                        0.05975,
                        0.094183
                    };
                    ambient[] = {
                        {
                            0.16954,
                            0.239,
                            0.37673
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.16954,
                            0.239,
                            0.37673
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8624
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8624
                    };
                    groundReflection[] = {
                        {
                            0.14705,
                            0.20315,
                            0.31705
                        },
                        0.758912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.14705,
                            0.20315,
                            0.31705
                        },
                        0.758912
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        0.122,
                        0.169,
                        0.255
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting28 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -11;
                    sunOrMoon = 0.5;
                    diffuse[] = {
                        0.129,
                        0.18,
                        0.271
                    };
                    diffuseCloud[] = {
                        0.03225,
                        0.045,
                        0.06775
                    };
                    ambient[] = {
                        {
                            0.129,
                            0.18,
                            0.271
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.129,
                            0.18,
                            0.271
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.129,
                            0.184,
                            0.267
                        },
                        0.8624
                    };
                    ambientMidCloud[] = {
                        {
                            0.129,
                            0.184,
                            0.267
                        },
                        0.8624
                    };
                    groundReflection[] = {
                        {
                            0.125,
                            0.176,
                            0.263
                        },
                        0.758912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.125,
                            0.176,
                            0.263
                        },
                        0.758912
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        0.122,
                        0.169,
                        0.255
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting29 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -10;
                    sunOrMoon = 1;
                    diffuse[] = {
                        0.129,
                        0.18,
                        0.271
                    };
                    diffuseCloud[] = {
                        0.03225,
                        0.045,
                        0.06775
                    };
                    ambient[] = {
                        {
                            0.129,
                            0.18,
                            0.271
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.129,
                            0.18,
                            0.271
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.129,
                            0.184,
                            0.267
                        },
                        0.8624
                    };
                    ambientMidCloud[] = {
                        {
                            0.129,
                            0.184,
                            0.267
                        },
                        0.8624
                    };
                    groundReflection[] = {
                        {
                            0.125,
                            0.176,
                            0.263
                        },
                        0.758912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.125,
                            0.176,
                            0.263
                        },
                        0.758912
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        {
                            0.2,
                            0.25,
                            0.45
                        },
                        4.73491
                    };
                    fogColor[] = {
                        0.122,
                        0.169,
                        0.255
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting30 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -5;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.157,
                            0.212,
                            0.306
                        },
                        0.5625
                    };
                    diffuseCloud[] = {
                        {
                            0.03925,
                            0.053,
                            0.0765
                        },
                        0.39375
                    };
                    ambient[] = {
                        {
                            0.157,
                            0.212,
                            0.306
                        },
                        3.22
                    };
                    ambientCloud[] = {
                        {
                            0.157,
                            0.212,
                            0.306
                        },
                        3.22
                    };
                    ambientMid[] = {
                        {
                            0.157,
                            0.208,
                            0.298
                        },
                        3.96704
                    };
                    ambientMidCloud[] = {
                        {
                            0.157,
                            0.208,
                            0.298
                        },
                        3.96704
                    };
                    groundReflection[] = {
                        {
                            0.149,
                            0.204,
                            0.29
                        },
                        3.64968
                    };
                    groundReflectionCloud[] = {
                        {
                            0.149,
                            0.204,
                            0.29
                        },
                        3.64968
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.2,
                            0.298,
                            0.541
                        },
                        4.6
                    };
                    skyAroundSun[] = {
                        {
                            0.7,
                            0.35,
                            0.28
                        },
                        7.63695
                    };
                    fogColor[] = {
                        {
                            0.141,
                            0.192,
                            0.282
                        },
                        3.96704
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting31 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.184,
                            0.247,
                            0.341
                        },
                        0.9375
                    };
                    diffuseCloud[] = {
                        {
                            0.046,
                            0.06175,
                            0.08525
                        },
                        0.65625
                    };
                    ambient[] = {
                        {
                            0.184,
                            0.247,
                            0.341
                        },
                        6.9
                    };
                    ambientCloud[] = {
                        {
                            0.184,
                            0.247,
                            0.341
                        },
                        6.9
                    };
                    ambientMid[] = {
                        {
                            0.184,
                            0.243,
                            0.329
                        },
                        5.95056
                    };
                    ambientMidCloud[] = {
                        {
                            0.184,
                            0.243,
                            0.329
                        },
                        5.95056
                    };
                    groundReflection[] = {
                        {
                            0.176,
                            0.231,
                            0.322
                        },
                        5.59353
                    };
                    groundReflectionCloud[] = {
                        {
                            0.176,
                            0.231,
                            0.322
                        },
                        5.59353
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.188,
                            0.29,
                            0.576
                        },
                        6.9
                    };
                    skyAroundSun[] = {
                        {
                            1.8,
                            0.42,
                            0.2
                        },
                        12.3177
                    };
                    fogColor[] = {
                        {
                            0.165,
                            0.22,
                            0.31
                        },
                        5.95056
                    };
                    apertureMin = 7;
                    apertureStandard = 7;
                    apertureMax = 20;
                    standardAvgLum = 20;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting32 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 0;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.216,
                            0.286,
                            0.384
                        },
                        1.125
                    };
                    diffuseCloud[] = {
                        {
                            0.054,
                            0.0715,
                            0.096
                        },
                        0.7875
                    };
                    ambient[] = {
                        {
                            0.216,
                            0.286,
                            0.384
                        },
                        7.8
                    };
                    ambientCloud[] = {
                        {
                            0.216,
                            0.286,
                            0.384
                        },
                        7.8
                    };
                    ambientMid[] = {
                        {
                            0.22,
                            0.278,
                            0.365
                        },
                        6.72672
                    };
                    ambientMidCloud[] = {
                        {
                            0.22,
                            0.278,
                            0.365
                        },
                        6.72672
                    };
                    groundReflection[] = {
                        {
                            0.204,
                            0.267,
                            0.353
                        },
                        6.45765
                    };
                    groundReflectionCloud[] = {
                        {
                            0.204,
                            0.267,
                            0.353
                        },
                        6.45765
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.173,
                            0.282,
                            0.612
                        },
                        7.8
                    };
                    skyAroundSun[] = {
                        {
                            2,
                            0.42,
                            0.2
                        },
                        13.3888
                    };
                    fogColor[] = {
                        {
                            0.188,
                            0.247,
                            0.341
                        },
                        6.72672
                    };
                    apertureMin = 8;
                    apertureStandard = 8;
                    apertureMax = 22;
                    standardAvgLum = 45;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting33 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.255,
                            0.325,
                            0.42
                        },
                        1.68
                    };
                    diffuseCloud[] = {
                        {
                            0.06375,
                            0.08125,
                            0.105
                        },
                        1.176
                    };
                    ambient[] = {
                        {
                            0.255,
                            0.325,
                            0.42
                        },
                        8.4
                    };
                    ambientCloud[] = {
                        {
                            0.255,
                            0.325,
                            0.42
                        },
                        8.4
                    };
                    ambientMid[] = {
                        {
                            0.259,
                            0.314,
                            0.396
                        },
                        7.24416
                    };
                    ambientMidCloud[] = {
                        {
                            0.259,
                            0.314,
                            0.396
                        },
                        7.24416
                    };
                    groundReflection[] = {
                        {
                            0.239,
                            0.294,
                            0.376
                        },
                        7.09928
                    };
                    groundReflectionCloud[] = {
                        {
                            0.239,
                            0.294,
                            0.376
                        },
                        7.09928
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.157,
                            0.275,
                            0.651
                        },
                        8.4
                    };
                    skyAroundSun[] = {
                        {
                            2.2,
                            0.8,
                            0.2
                        },
                        13.3888
                    };
                    fogColor[] = {
                        {
                            0.216,
                            0.275,
                            0.373
                        },
                        7.24416
                    };
                    apertureMin = 8;
                    apertureStandard = 8;
                    apertureMax = 24;
                    standardAvgLum = 50;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting34 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 6;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.298,
                            0.365,
                            0.451
                        },
                        2.55
                    };
                    diffuseCloud[] = {
                        {
                            0.0745,
                            0.09125,
                            0.11275
                        },
                        1.785
                    };
                    ambient[] = {
                        {
                            0.298,
                            0.365,
                            0.451
                        },
                        9.6
                    };
                    ambientCloud[] = {
                        {
                            0.298,
                            0.365,
                            0.451
                        },
                        9.6
                    };
                    ambientMid[] = {
                        {
                            0.302,
                            0.349,
                            0.416
                        },
                        8.27904
                    };
                    ambientMidCloud[] = {
                        {
                            0.302,
                            0.349,
                            0.416
                        },
                        8.27904
                    };
                    groundReflection[] = {
                        {
                            0.275,
                            0.318,
                            0.384
                        },
                        8.11346
                    };
                    groundReflectionCloud[] = {
                        {
                            0.275,
                            0.318,
                            0.384
                        },
                        8.11346
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.145,
                            0.263,
                            0.686
                        },
                        9.6
                    };
                    skyAroundSun[] = {
                        {
                            0.4,
                            0.32,
                            0.6
                        },
                        13.3888
                    };
                    fogColor[] = {
                        {
                            0.243,
                            0.306,
                            0.408
                        },
                        8.27904
                    };
                    apertureMin = 8;
                    apertureStandard = 14;
                    apertureMax = 26;
                    standardAvgLum = 100;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.027,
                        0.045
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting35 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 12;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.376,
                            0.431,
                            0.506
                        },
                        3.075
                    };
                    diffuseCloud[] = {
                        {
                            0.094,
                            0.10775,
                            0.1265
                        },
                        2.1525
                    };
                    ambient[] = {
                        {
                            0.376,
                            0.431,
                            0.506
                        },
                        10.9
                    };
                    ambientCloud[] = {
                        {
                            0.376,
                            0.431,
                            0.506
                        },
                        10.9
                    };
                    ambientMid[] = {
                        {
                            0.38,
                            0.408,
                            0.447
                        },
                        9.6138
                    };
                    ambientMidCloud[] = {
                        {
                            0.38,
                            0.408,
                            0.447
                        },
                        9.6138
                    };
                    groundReflection[] = {
                        {
                            0.329,
                            0.361,
                            0.396
                        },
                        9.42152
                    };
                    groundReflectionCloud[] = {
                        {
                            0.329,
                            0.361,
                            0.396
                        },
                        9.42152
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.129,
                            0.259,
                            0.722
                        },
                        10.9
                    };
                    skyAroundSun[] = {
                        {
                            0.13,
                            0.25,
                            0.8
                        },
                        13.524
                    };
                    fogColor[] = {
                        {
                            0.286,
                            0.353,
                            0.463
                        },
                        9.6138
                    };
                    apertureMin = 20;
                    apertureStandard = 22;
                    apertureMax = 35;
                    standardAvgLum = 250;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.018,
                        0.04
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        12.24
                    };
                    swBrightness = 1;
                };
                class Lighting36 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 24;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.447,
                            0.494,
                            0.557
                        },
                        3.95
                    };
                    diffuseCloud[] = {
                        {
                            0,
                            0,
                            0
                        },
                        2.765
                    };
                    ambient[] = {
                        {
                            0.447,
                            0.494,
                            0.557
                        },
                        13.8
                    };
                    ambientCloud[] = {
                        {
                            0.447,
                            0.494,
                            0.557
                        },
                        13.8
                    };
                    ambientMid[] = {
                        {
                            0.455,
                            0.467,
                            0.475
                        },
                        12.4421
                    };
                    ambientMidCloud[] = {
                        {
                            0.455,
                            0.467,
                            0.475
                        },
                        12.4421
                    };
                    groundReflection[] = {
                        {
                            0.388,
                            0.396,
                            0.408
                        },
                        12.1932
                    };
                    groundReflectionCloud[] = {
                        {
                            0.388,
                            0.396,
                            0.408
                        },
                        12.1932
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.118,
                            0.251,
                            0.753
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.115,
                            0.245,
                            0.8
                        },
                        13.662
                    };
                    fogColor[] = {
                        {
                            0.333,
                            0.404,
                            0.518
                        },
                        12.4421
                    };
                    apertureMin = 45;
                    apertureStandard = 50;
                    apertureMax = 80;
                    standardAvgLum = 800;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.4
                    };
                    swBrightness = 1;
                };
                class Lighting37 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 45;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.506,
                            0.553,
                            0.608
                        },
                        4.25
                    };
                    diffuseCloud[] = {
                        0.1265,
                        0.13825,
                        0.152
                    };
                    ambient[] = {
                        {
                            0.506,
                            0.553,
                            0.608
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.506,
                            0.553,
                            0.608
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.514,
                            0.518,
                            0.514
                        },
                        13.3437
                    };
                    ambientMidCloud[] = {
                        {
                            0.514,
                            0.518,
                            0.514
                        },
                        13.3437
                    };
                    groundReflection[] = {
                        {
                            0.435,
                            0.439,
                            0.439
                        },
                        13.0768
                    };
                    groundReflectionCloud[] = {
                        {
                            0.435,
                            0.439,
                            0.439
                        },
                        13.0768
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.369,
                            0.447,
                            0.565
                        },
                        13.3437
                    };
                    apertureMin = 70;
                    apertureStandard = 100;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting38 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 90;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.549,
                            0.596,
                            0.651
                        },
                        4.25
                    };
                    diffuseCloud[] = {
                        0.13725,
                        0.149,
                        0.16275
                    };
                    ambient[] = {
                        {
                            0.549,
                            0.596,
                            0.651
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.549,
                            0.596,
                            0.651
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.557,
                            0.557,
                            0.585
                        },
                        14.2139
                    };
                    ambientMidCloud[] = {
                        {
                            0.557,
                            0.557,
                            0.585
                        },
                        14.2139
                    };
                    groundReflection[] = {
                        {
                            0.471,
                            0.471,
                            0.463
                        },
                        13.9296
                    };
                    groundReflectionCloud[] = {
                        {
                            0.471,
                            0.471,
                            0.463
                        },
                        13.9296
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.4,
                            0.48,
                            0.6
                        },
                        15
                    };
                    apertureMin = 70;
                    apertureStandard = 110;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting39 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = -24;
                    sunOrMoon = 0;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        2.8
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        2.8
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        0.84
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        0.84
                    };
                    ambientMid[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        0.9072
                    };
                    ambientMidCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        0.9072
                    };
                    groundReflection[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        0.870912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        0.870912
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        0,
                        0.2355,
                        0.2335
                    };
                    skyAroundSun[] = {
                        0,
                        0.2355,
                        0.2335
                    };
                    fogColor[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.0275
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting40 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = -5;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        2.1
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        2.1
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        3.68
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        3.68
                    };
                    ambientMid[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        3.9744
                    };
                    ambientMidCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        3.9744
                    };
                    groundReflection[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        3.81542
                    };
                    groundReflectionCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        3.81542
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0,
                            0.2235,
                            0.2705
                        },
                        4.232
                    };
                    skyAroundSun[] = {
                        {
                            0,
                            0.2235,
                            0.2705
                        },
                        7.63695
                    };
                    fogColor[] = {
                        {
                            0.106,
                            0.161,
                            0.267
                        },
                        4.715
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting41 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = -2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        3.5
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        3.5
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        5.52
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        5.52
                    };
                    ambientMid[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        5.9616
                    };
                    ambientMidCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        5.9616
                    };
                    groundReflection[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        5.72314
                    };
                    groundReflectionCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        5.72314
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0,
                            0.2175,
                            0.288
                        },
                        6.348
                    };
                    skyAroundSun[] = {
                        {
                            0,
                            0.2175,
                            0.288
                        },
                        12.3177
                    };
                    fogColor[] = {
                        {
                            0.11,
                            0.169,
                            0.286
                        },
                        7.0725
                    };
                    apertureMin = 7;
                    apertureStandard = 8;
                    apertureMax = 20;
                    standardAvgLum = 20;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting42 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = 0;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        4.2
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        4.2
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        6.24
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        6.24
                    };
                    ambientMid[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        6.7392
                    };
                    ambientMidCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        6.7392
                    };
                    groundReflection[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        6.46963
                    };
                    groundReflectionCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        6.46963
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0,
                            0.2115,
                            0.306
                        },
                        7.176
                    };
                    skyAroundSun[] = {
                        {
                            0,
                            0.2115,
                            0.306
                        },
                        13.3888
                    };
                    fogColor[] = {
                        {
                            0.118,
                            0.18,
                            0.31
                        },
                        7.995
                    };
                    apertureMin = 8;
                    apertureStandard = 9;
                    apertureMax = 22;
                    standardAvgLum = 45;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting43 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = 45;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        12.04
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        12.04
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        11.84
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        11.84
                    };
                    ambientMid[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.4848
                    };
                    ambientMidCloud[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.4848
                    };
                    groundReflection[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.0254
                    };
                    groundReflectionCloud[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.0254
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0,
                            0.09,
                            0.4
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0,
                            0.09,
                            0.4
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        16.5
                    };
                    apertureMin = 12;
                    apertureStandard = 18;
                    apertureMax = 25;
                    standardAvgLum = 150;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting44 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = 90;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        12.04
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        12.04
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        11.84
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        11.84
                    };
                    ambientMid[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.4848
                    };
                    ambientMidCloud[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.4848
                    };
                    groundReflection[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.0254
                    };
                    groundReflectionCloud[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.0254
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0,
                            0.09,
                            0.4
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0,
                            0.09,
                            0.4
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        16.5
                    };
                    apertureMin = 12;
                    apertureStandard = 18;
                    apertureMax = 25;
                    standardAvgLum = 150;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
            };
            class Lighting: Lighting {
                class BrightAlmost: DayLightingBrightAlmost {
                    overcast = 0.0;
                };
                class Rainy: DayLightingRainy {
                    overcast = 1.0;
                };
            };
            class Overcast: Overcast {
                class Weather1: Weather1 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_clear_lco.paa";
                };
                class Weather7: Weather1 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_clear_lco.paa";
                };
                class Weather2: Weather2 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_almostclear_lco.paa";
                };
                class Weather3: Weather3 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_cloudy_lco.paa";
                };
                class Weather4: Weather4 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_cloudy_lco.paa";
                };
                class Weather5: Weather5 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_overcast_lco.paa";
                };
                class Weather6: Weather6 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_overcast_lco.paa";
                };
            };
        };
        class Ambient {};
        class AmbientA3 {
            maxCost = 500;
            class Radius440_500 {
                areaSpawnRadius = 70.0;
                areaMaxRadius = 200.0;
                spawnCircleRadius = 30.0;
                spawnInterval = 25;
                class Species {
                    class Rabbit_F {
                        maxCircleCount = "(20 * (0.1 - houses)) * (1 - sea)";
                        maxWorldCount = 5;
                        cost = 5;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = 80;
                        minAlt = -5;
                    };
                };
            };
            class Radius40_60 {
                areaSpawnRadius = 50.0;
                areaMaxRadius = 83.0;
                spawnCircleRadius = 10.0;
                spawnInterval = 11.5;
                class Species {
                    class CatShark_F {
                        maxCircleCount = "(4 * (WaterDepth interpolate [1,30,0,1]))";
                        maxWorldCount = 2;
                        cost = 6;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = 10;
                        minAlt = -80;
                    };
                    class Turtle_F {
                        maxCircleCount = "(2 * (waterDepth interpolate [1,16,0,1]) * ((1-houses) * (1-houses)))";
                        maxWorldCount = 6;
                        cost = 5;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = 10;
                        minAlt = -80;
                    };
                    class Salema_F {
                        maxCircleCount = "(12 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
                        maxWorldCount = 2;
                        cost = 5;
                        spawnCount = 2;
                        groupSpawnRadius = 5;
                        maxAlt = 10;
                        minAlt = -80;
                    };
                    class Ornate_random_F {
                        maxCircleCount = "(12 * ((WaterDepth interpolate [1,30,0,1]) + 0.05))";
                        maxWorldCount = 2;
                        cost = 5;
                        spawnCount = 3;
                        groupSpawnRadius = 5;
                        maxAlt = 10;
                        minAlt = -80;
                    };
                    class Mackerel_F {
                        maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
                        maxWorldCount = 2;
                        cost = 5;
                        spawnCount = 2;
                        groupSpawnRadius = 5;
                        maxAlt = 10;
                        minAlt = -80;
                    };
                    class Mullet_F {
                        maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
                        maxWorldCount = 2;
                        cost = 5;
                        spawnCount = 2;
                        groupSpawnRadius = 5;
                        maxAlt = 10;
                        minAlt = -80;
                    };
                    class Tuna_F {
                        maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) - 0.2))";
                        maxWorldCount = 2;
                        cost = 5;
                        spawnCount = 2;
                        groupSpawnRadius = 5;
                        maxAlt = 10;
                        minAlt = -80;
                    };
                };
            };
            class Radius30_40 {
                areaSpawnRadius = 30.0;
                areaMaxRadius = 40.0;
                spawnCircleRadius = 3.0;
                spawnInterval = 33.75;
                class Species {};
            };
            class Radius15_20 {
                areaSpawnRadius = 15.0;
                areaMaxRadius = 20.0;
                spawnCircleRadius = 2.0;
                spawnInterval = 32.85;
                class Species {};
            };
            class Radius6_10 {
                areaSpawnRadius = 6.0;
                areaMaxRadius = 10.0;
                spawnCircleRadius = 1.0;
                spawnInterval = 30.1;
                class Species {};
            };
        };
        cutscenes[] = {};
        description = "Kamdan LVE";
        worldName = "Anzus_Life\Anzus_Life.wrp";
        pictureMap = "Anzus_Life\data\map.paa";
        pictureShot = "";
        author = "Gallo & Kevin - www.laviejaescuela.city";
        startTime = "07:30";
        startDate = "28/09/2016";
        startWeather = 0.2;
        startFog = 0;
        forecastWeather = 0.60000002;
        forecastFog = 0;
        centerPosition[] = {
            5120,
            5120,
            500
        };
        seagullPos[] = {
            5120,
            5120,
            500
        };
        longitude = 65;
        latitude = -34;
        elevationOffset = 0;
        envTexture = "A3\Data_f\env_land_ca.paa";
        minTreesInForestSquare = 2;
        minRocksInRockSquare = 3;
        newRoadsShape = "\Anzus_Life\data\roads\roads.shp";
        loadingTexts[] = {
            "Welcome to the State of Kamdan",
            "Kamdan was granted statehood in 1969 after being purchased from Australia for $2.50 and 2 ANZUS Tokens",
            "Kamdan is considered a Warzone by the United Nations",
            "Occassional earthquakes cause regular changes in the landscape of Kamdan",
            "Kamdan is solely running on solar power, but thanks to the rest of the world it will still be underwater in 10 years.",
            "In the event of an emergency, dial 911, they probably wont come but its better than nothing."
        };
        ilsPosition[] = {
            1024,
            1024
        };
        ilsDirection[] = {
            0.5075,
            0.08,
            -0.8616
        };
        ilsTaxiIn[] = {};
        ilsTaxiOff[] = {};
        drawTaxiway = 0;
        clutterGrid = 1.5;
        clutterDist = 125;
        noDetailDist = 40;
        fullDetailDist = 15;
        midDetailTexture = "A3\Map_Data\middle_mco.paa";
        class SecondaryAirports {};
        class OutsideTerrain {
            satellite = "A3\map_Stratis\data\s_satout_co.paa";
            enableTerrainSynth = 0;
            class Layers {
                class Layer0 {
                    nopx = "Anzus_Life\data\trucotrato_seabed_nopx.paa";
                    texture = "Anzus_Life\data\trucotrato_seabed_co.paa";
                };
            };
            colorOutside[] = {
                0.227451,
                0.27451,
                0.384314,
                1
            };
        };
        class Sea {
            seaTexture = "a3\data_f\seatexture_co.paa";
            seaMaterial = "#water";
            shoreMaterial = "#shore";
            shoreFoamMaterial = "#shorefoam";
            shoreWetMaterial = "#shorewet";
            WaterMapScale = 20;
            WaterGrid = 50;
            MaxTide = 0;
            MaxWave = 0;
            SeaWaveXScale = "2.0/50";
            SeaWaveZScale = "1.0/50";
            SeaWaveHScale = 2;
            SeaWaveXDuration = 5000;
            SeaWaveZDuration = 10000;
        };
        class Grid {
            offsetX = 0;
            offsetY = 40960;
            class Zoom1 {
                zoomMax = 0.015;
                format = "XY";
                formatX = "0000";
                formatY = "0000";
                stepX = 10;
                stepY = -10;
            };
            class Zoom2 {
                zoomMax = 0.2;
                format = "XY";
                formatX = "000";
                formatY = "000";
                stepX = 100;
                stepY = -100;
            };
            class Zoom3 {
                zoomMax = 0.8;
                format = "XY";
                formatX = "00";
                formatY = "00";
                stepX = 1000;
                stepY = -1000;
            };
            class Zoom4 {
                zoomMax = 1;
                format = "XY";
                formatX = "0";
                formatY = "0";
                stepX = 10000;
                stepY = -10000;
            };
        };
        class DefaultClutter;
        class Clutter {
            class GrassBrushHighGreen: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Grass_BrushHigh_Green.p3d";
                affectedByWind = 0.8;
                swLighting = "true";
                scaleMin = 0.5;
                scaleMax = 0.7;
            };
            class FlowerCakile: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Flower_Cakile.p3d";
                affectedByWind = 0.4;
                swLighting = "true";
                scaleMin = 0.6;
                scaleMax = 0.8;
            };
            class PlantGreenSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Plant_Green_Small.p3d";
                affectedByWind = 0.7;
                swLighting = "true";
                scaleMin = 0.5;
                scaleMax = 1.1;
            };
            class FlowerLowYellow2: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Flower_Low_Yellow2.p3d";
                affectedByWind = 0.4;
                swLighting = "true";
                scaleMin = 0.6;
                scaleMax = 1.0;
            };
            class c_Grass_TuftDry: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Grass_TuftDry.p3d";
                affectedByWind = 0.7;
                swLighting = "true";
                scaleMin = 0.8;
                scaleMax = 1.0;
            };
            class GrassGreen: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Grass_Green.p3d";
                affectedByWind = 0;
                swLighting = "false";
                scaleMin = 0.6;
                scaleMax = 1.2;
            };
            class GrassDry: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Grass_Dry.p3d";
                affectedByWind = 1.0;
                swLighting = "true";
                scaleMin = 0.3;
                scaleMax = 0.9;
            };
            class GrassTall: DefaultClutter {
                model = "a3\plants_f\Clutter\c_Grass_Tall_Dead.p3d";
                affectedByWind = 0.4;
                swLighting = 1;
                scaleMin = 0.3;
                scaleMax = 1.2;
            };
            class StubbleClutter: DefaultClutter {
                model = "a3\plants_f\Clutter\c_Grass_Dry.p3d";
                affectedByWind = 0.1;
                swLighting = 1;
                scaleMin = 0.9;
                scaleMax = 1.2;
            };
            class c_GrassDead_Tuft_Stony: DefaultClutter {
                model = "A3\plants_f\Clutter\c_GrassDead_Tuft_Stony.p3d";
                affectedByWind = 0.7;
                swLighting = "true";
                scaleMin = 0.7;
                scaleMax = 1.0;
            };
            class c_GrassLong_DryBunch: DefaultClutter {
                model = "A3\plants_f\Clutter\c_GrassLong_DryBunch.p3d";
                affectedByWind = 0.7;
                swLighting = "true";
                scaleMin = 0.6;
                scaleMax = 1.1;
            };
            class AutumnFlowers: DefaultClutter {
                model = "a3\plants_f\Clutter\c_Flower_Medium_White2.p3d";
                affectedByWind = 0.4;
                swLighting = 1;
                scaleMin = 0.7;
                scaleMax = 1.2;
            };
            class GrassBunch: DefaultClutter {
                model = "a3\plants_f\Clutter\c_Grass_Bunch_Small.p3d";
                affectedByWind = 0.35;
                swLighting = 1;
                scaleMin = 0.5;
                scaleMax = 1.2;
            };
            class GrassCrooked: DefaultClutter {
                model = "a3\plants_f\Clutter\c_GrassCrooked.p3d";
                affectedByWind = 0.3;
                swLighting = 1;
                scaleMin = 0.5;
                scaleMax = 1.4;
            };
            class Wheat: DefaultClutter {
                model = "Hag_Objects_Base\hag_wheat\HAG_Wheat.p3d";
                affectedByWind = 0;
                swLighting = 1;
                scaleMin = 0.5;
                scaleMax = 1.4;
            };
            class GrassCrookedGreen: DefaultClutter {
                model = "a3\plants_f\Clutter\c_Grass_TuftDry.p3d";
                affectedByWind = 0.3;
                swLighting = 1;
                scaleMin = 0.6;
                scaleMax = 1.2;
            };
            class GrassCrookedForest: DefaultClutter {
                model = "a3\plants_f\Clutter\c_GrassGreen_GroupHard.p3d";
                affectedByWind = 0.3;
                swLighting = 1;
                scaleMin = 0.8;
                scaleMax = 1.4;
            };
            class WeedDead: DefaultClutter {
                model = "a3\plants_f\Clutter\c_GrassDead_Tuft_Stony.p3d";
                affectedByWind = 0.3;
                swLighting = 1;
                scaleMin = 0.75;
                scaleMax = 1.4;
            };
            class WeedDeadSmall: DefaultClutter {
                model = "a3\plants_f\Clutter\c_GrassLong_DryBunch.p3d";
                affectedByWind = 0.3;
                swLighting = 1;
                scaleMin = 0.75;
                scaleMax = 1.3;
            };
            class HeatherBrush: DefaultClutter {
                model = "a3\plants_f\Clutter\c_Carduus.p3d";
                affectedByWind = 0.15;
                swLighting = 1;
                scaleMin = 0.9;
                scaleMax = 1.8;
                surfaceColor[] = {
                    0.53,
                    0.5,
                    0.37,
                    1
                };
            };
            class WeedSedge: DefaultClutter {
                model = "a3\plants_f\Clutter\c_Flower_Tansy.p3d";
                affectedByWind = 0.2;
                swLighting = 1;
                scaleMin = 0.5;
                scaleMax = 1.15;
            };
            class WeedTall: DefaultClutter {
                model = "a3\plants_f\Clutter\c_Grass_BrushHigh_Dry.p3d";
                affectedByWind = 0.3;
                swLighting = 1;
                scaleMin = 0.8;
                scaleMax = 1.5;
            };
            class BlueBerry: DefaultClutter {
                model = "a3\plants_f\Clutter\c_Plant_Mullein.p3d";
                affectedByWind = 0.05;
                swLighting = 1;
                scaleMin = 0.85;
                scaleMax = 1.5;
            };
            class RaspBerry: DefaultClutter {
                model = "a3\plants_f\Clutter\c_sharpStones_erosion.p3d";
                affectedByWind = 0;
                swLighting = 1;
                scaleMin = 0.8;
                scaleMax = 1.6;
            };
            class FernAutumn: DefaultClutter {
                model = "a3\plants_f\Clutter\c_Flower_Cakile.p3d";
                affectedByWind = 0.1;
                scaleMin = 0.6;
                scaleMax = 1.6;
            };
            class FernAutumnTall: DefaultClutter {
                model = "a3\plants_f\Clutter\c_Plant_Chicory.p3d";
                affectedByWind = 0.15;
                scaleMin = 0.75;
                scaleMax = 1.5;
            };
            class SmallPicea: DefaultClutter {
                model = "a3\plants_f\Clutter\c_Plant_Dock.p3d";
                affectedByWind = 0.05;
                scaleMin = 0.75;
                scaleMax = 1.55;
            };
            class PlantWideLeaf: DefaultClutter {
                model = "a3\plants_f\Clutter\c_StrGrassDry_group.p3d";
                affectedByWind = 0.1;
                scaleMin = 1.0;
                scaleMax = 1.6;
            };
            class PlantSmallLeaf: DefaultClutter {
                model = "a3\plants_f\Clutter\c_StrGrassDryMedium_group.p3d";
                affectedByWind = 0.1;
                scaleMin = 1.0;
                scaleMax = 1.6;
            };
            class ALGrassDryBunch: DefaultClutter {
                model = "a3\plants_f\Clutter\c_StrThistlePurple_small.p3d";
                affectedByWind = 0.35;
                swLighting = 1;
                scaleMin = 0.4;
                scaleMax = 0.7;
            };
            class ALFernAutumn: DefaultClutter {
                model = "a3\plants_f\Clutter\c_StrGrassDry_group.p3d";
                affectedByWind = 0.1;
                scaleMin = 0.6;
                scaleMax = 1.5;
            };
            class MushroomsHorcak: DefaultClutter {
                model = "a3\plants_f\Clutter\c_Thistle_Thorn_Desert.p3d";
                affectedByWind = 0;
                scaleMin = 0.85;
                scaleMax = 1.25;
            };
            class CoralPlant: DefaultClutter {
                model = "a3\plants_f\Clutter\c_coral1.p3d";
                affectedByWind = 0.2;
                scaleMin = 0.85;
                scaleMax = 1.25;
            };
            class CoralTurd: DefaultClutter {
                model = "a3\plants_f\Clutter\c_coral_brain_flat1.p3d";
                affectedByWind = 0;
                scaleMin = 0.95;
                scaleMax = 1.45;
            };
            class CoralTurds: DefaultClutter {
                model = "a3\plants_f\Clutter\c_corals_set_t.p3d";
                affectedByWind = 0;
                scaleMin = 0.85;
                scaleMax = 1.25;
            };
            class CoralSalad: DefaultClutter {
                model = "a3\plants_f\Clutter\c_coral_plant_set1.p3d";
                affectedByWind = 0;
                scaleMin = 0.95;
                scaleMax = 1.35;
            };
            class CoralGrass: DefaultClutter {
                model = "a3\plants_f\Clutter\c_coral3.p3d";
                affectedByWind = 0.2;
                scaleMin = 0.5;
                scaleMax = 1.5;
            };
            class CoralBalls: DefaultClutter {
                model = "a3\plants_f\Clutter\c_coral_brain_flat_set1.p3d";
                affectedByWind = 0;
                scaleMin = 0.5;
                scaleMax = 1.1;
            };
            class StrGrassDry: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrGrassDry.p3d";
                affectedByWind = 0.5;
                swLighting = "true";
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class StrThistleSmallYellow: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThistleSmallYellow.p3d";
                affectedByWind = 0.2;
                swLighting = "true";
                scaleMin = 0.6;
                scaleMax = 1.4;
            };
            class StrThistleYellowShrub: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThistleYellowShrub.p3d";
                affectedByWind = 0.2;
                swLighting = "true";
                scaleMin = 0.7;
                scaleMax = 1.1;
            };
            class StrThornGreenBig: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThornGreen.p3d";
                affectedByWind = 0.050000001;
                swLighting = "false";
                scaleMin = 0.69999999;
                scaleMax = 0.89999998;
            };
            class StrThornGraySmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThornGray.p3d";
                affectedByWind = 0.050000001;
                swLighting = "false";
                scaleMin = 0.5;
                scaleMax = 0.69999999;
            };
            class StrThornGrayBig: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThornGray.p3d";
                affectedByWind = 0.050000001;
                swLighting = "false";
                scaleMin = 0.80000001;
                scaleMax = 1.2;
            };
            class StrPlantGreenShrub: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrPlantGreenShrub.p3d";
                affectedByWind = 0.5;
                swLighting = "true";
                scaleMin = 0.60000002;
                scaleMax = 1.1;
            };
            class StrPlantGermaderGroup: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrPlantGermader_group.p3d";
                affectedByWind = 0.34999999;
                swLighting = "true";
                scaleMin = 0.89999998;
                scaleMax = 1.5;
            };
            class StrWeedBrownTallGroup: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrWeedBrownTall_group.p3d";
                affectedByWind = 0.30000001;
                swLighting = "true";
                scaleMin = 0.89999998;
                scaleMax = 1.25;
            };
            class StrWeedGreenTall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrWeedGreenTall.p3d";
                affectedByWind = 0.30000001;
                swLighting = "true";
                scaleMin = 0.80000001;
                scaleMax = 1.2;
            };
            class StrPlantMullein: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrPlantMullein.p3d";
                affectedByWind = 0.34999999;
                swLighting = "true";
                scaleMin = 0.69999999;
                scaleMax = 1.15;
            };
            class StrThistlePurpleSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThistlePurple_small.p3d";
                affectedByWind = 0.1;
                swLighting = "true";
                scaleMin = 0.89999998;
                scaleMax = 1.4;
            };
            class GrassBunchSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Grass_Bunch_Small.p3d";
                affectedByWind = 0.80000001;
                swLighting = "true";
                scaleMin = 0.30000001;
                scaleMax = 0.80000001;
            };
            class ThistleHighDead: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_High_Dead.p3d";
                affectedByWind = 1;
                swLighting = "true";
                scaleMin = 0.40000001;
                scaleMax = 0.80000001;
            };
            class ThistleHigh: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_High.p3d";
                affectedByWind = 0.60000002;
                swLighting = "true";
                scaleMin = 0.60000002;
                scaleMax = 1;
            };
            class ThistleSmallYellow: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Small_Yellow.p3d";
                affectedByWind = 0.30000001;
                swLighting = "true";
                scaleMin = 0.30000001;
                scaleMax = 0.89999998;
            };
            class ThistleThornGreen: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d";
                affectedByWind = 0.30000001;
                swLighting = "false";
                scaleMin = 0.30000001;
                scaleMax = 1;
            };
            class ThistleThornGreenSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d";
                affectedByWind = 0.25;
                swLighting = "false";
                scaleMin = 0.40000001;
                scaleMax = 0.69999999;
            };
            class ThistleThornBrown: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d";
                affectedByWind = 0.30000001;
                swLighting = "false";
                scaleMin = 0.5;
                scaleMax = 1.2;
            };
            class ThistleThornBrownSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d";
                affectedByWind = 0.25;
                swLighting = "false";
                scaleMin = 0.30000001;
                scaleMax = 0.69999999;
            };
            class ThistleThornGray: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Gray.p3d";
                affectedByWind = 0.30000001;
                swLighting = "false";
                scaleMin = 1.1;
                scaleMax = 1.4;
            };
            class ThistleThornDesert: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Desert.p3d";
                affectedByWind = 0.30000001;
                swLighting = "false";
                scaleMin = 0.40000001;
                scaleMax = 1.4;
            };
            class GrassCrookedDead: DefaultClutter {
                model = "A3\plants_f\Clutter\c_GrassCrooked.p3d";
                affectedByWind = 0.60000002;
                swLighting = "true";
                scaleMin = 0.80000001;
                scaleMax = 1.1;
            };
            class GrassTalltwo: DefaultClutter {
                model = "A3\plants_f\Clutter\c_GrassTall.p3d";
                affectedByWind = 0.80000001;
                swLighting = "true";
                scaleMin = 0.75;
                scaleMax = 1.15;
            };
            class GrassLong_DryBunch: DefaultClutter {
                model = "A3\plants_f\Clutter\c_GrassLong_DryBunch.p3d";
                affectedByWind = 0.80000001;
                swLighting = "true";
                scaleMin = 0.89999998;
                scaleMax = 1.2;
            };
            class GrassDesertGroupSoft: DefaultClutter {
                model = "A3\plants_f\Clutter\c_GrassGreen_GroupSoft.p3d";
                affectedByWind = 1;
                swLighting = "true";
                scaleMin = 0.60000002;
                scaleMax = 1.1;
            };
            class StrThornGreenSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThornGreen.p3d";
                affectedByWind = 0.05;
                swLighting = "false";
                scaleMin = 0.3;
                scaleMax = 0.5;
            };
        };

        class Names {
            class DeathfallCem {
                name = "Deathfall Cementery";
                position[] = {
                    2866.63,
                    2179.40
                };
                type = "NameCityCapital";
                radiusA = 373.66;
                radiusB = 223.68;
                angle = 0.000;
            };
            class COLCHESTEREAST {
                name = "Ashworth East";
                position[] = {
                    8944.67,
                    7159.98
                };
                type = "NameCityCapital";
                radiusA = 588.28;
                radiusB = 331.32;
                angle = 0.000;
            };
            class Fisland {
                name = "Frank Island";
                position[] = {
                    9725.51,
                    437.36
                };
                type = "NameCityCapital";
                radiusA = 327.89;
                radiusB = 238.94;
                angle = 0.000;
            };
            class ElHamys {
                name = "El Hamys";
                position[] = {
                    8155.66,
                    1375.23
                };
                type = "NameCityCapital";
                radiusA = 599.50;
                radiusB = 388.14;
                angle = 0.000;
            };
            class Molino {
                name = "Winchester";
                position[] = {
                    781.83,
                    6450.56
                };
                type = "NameCityCapital";
                radiusA = 321.94;
                radiusB = 130.59;
                angle = 0.000;
            };
            class Skystead2 {
                name = "Skystead Farms";
                position[] = {
                    1385.30,
                    5704.38
                };
                type = "NameCityCapital";
                radiusA = 579.81;
                radiusB = 240.41;
                angle = 0.000;
            };
            class WarwickCi {
                name = "Warwick Town";
                position[] = {
                    3700.58,
                    6319.16
                };
                type = "NameCityCapital";
                radiusA = 919.36;
                radiusB = 343.28;
                angle = 0.000;
            };
            class KamdanDeep {
                name = "Kamdan Deep Suburbs";
                position[] = {
                    5329.89,
                    981.73
                };
                type = "NameCityCapital";
                radiusA = 593.95;
                radiusB = 220.20;
                angle = 0.000;
            };
            class KamdanSouth {
                name = "Kamdan South";
                position[] = {
                    6346.46,
                    1605.67
                };
                type = "NameCityCapital";
                radiusA = 593.95;
                radiusB = 220.20;
                angle = 0.000;
            };
            class Brickleberry {
                name = "Brickleberry";
                position[] = {
                    9320.03,
                    3177.35
                };
                type = "NameCityCapital";
                radiusA = 552.73;
                radiusB = 245.66;
                angle = 0.000;
            };
            class Oldsbury {
                name = "Oldsbury";
                position[] = {
                    8852.91,
                    5531.53
                };
                type = "NameCityCapital";
                radiusA = 465.45;
                radiusB = 235.96;
                angle = 0.000;
            };
            class Middlesborough {
                name = "Middlesborough";
                position[] = {
                    4456.24,
                    3934.75
                };
                type = "NameCityCapital";
                radiusA = 484.84;
                radiusB = 186.18;
                angle = 0.000;
            };
            class LutonBay {
                name = "Luton Bay";
                position[] = {
                    4963.82,
                    8109.39
                };
                type = "NameCityCapital";
                radiusA = 612.53;
                radiusB = 261.82;
                angle = 0.000;
            };
            class ScrabsterTrailerpark {
                name = "Scrabster Hideout";
                position[] = {
                    6893.74,
                    5988.54
                };
                type = "StrongpointArea";
                radiusA = 302.03;
                radiusB = 142.33;
                angle = 0.000;
            };
            class SharnwickTrailer {
                name = "Sharnwick Hideout";
                position[] = {
                    2710.52,
                    2952.99
                };
                type = "StrongpointArea";
                radiusA = 400.81;
                radiusB = 177.78;
                angle = 0.000;
            };
            class MorriEstates {
                name = "Riverside Estates";
                position[] = {
                    5379.86,
                    3320.59
                };
                type = "NameCityCapital";
                radiusA = 654.05;
                radiusB = 239.90;
                angle = 0.000;
            };
            class MorriNorth {
                name = "Riverside North";
                position[] = {
                    6650.69,
                    4566.06
                };
                type = "NameCityCapital";
                radiusA = 341.34;
                radiusB = 148.95;
                angle = 0.000;
            };
            class MorriSouth {
                name = "Riverside South";
                position[] = {
                    4827.92,
                    2432.67
                };
                type = "NameCityCapital";
                radiusA = 410.64;
                radiusB = 183.08;
                angle = 0.000;
            };
            class SkyStead1 {
                name = "Skystead Farms";
                position[] = {
                    861.66,
                    4747.96
                };
                type = "NameCityCapital";
                radiusA = 576.08;
                radiusB = 252.53;
                angle = 0.000;
            };
            class LakeWinters {
                name = "Lake Winters";
                position[] = {
                    212038.49,
                    7364.16
                };
                type = "NameCityCapital";
                radiusA = 981.70;
                radiusB = 416.67;
                angle = 0.000;
            };
            class NorthWinters {
                name = "North Winters";
                position[] = {
                    8115.90,
                    5996.95
                };
                type = "NameCityCapital";
                radiusA = 784.22;
                radiusB = 350.19;
                angle = 0.000;
            };
            class MountSuna {
                name = "Mount Suna";
                position[] = {
                    5359.15,
                    5169.16
                };
                type = "NameCityCapital";
                radiusA = 628.70;
                radiusB = 298.99;
                angle = 0.000;
            };
            class KamdanWatermark {
                name = "Kamdan County - Map by LVE";
                position[] = {
                    8923.22,
                    222.33
                };
                type = "NameCityCapital";
                radiusA = 2460.23;
                radiusB = 293.77;
                angle = 0.000;
            };
            class NatureRessy {
                name = "North Kamdan Nature Reserve";
                position[] = {
                    5687.07,
                    7421.67
                };
                type = "StrongpointArea";
                radiusA = 354.42;
                radiusB = 275.80;
                angle = 0.000;
            };
            class aSD {
                name = "DOD Radar Station";
                position[] = {
                    1861.98,
                    3605.64
                };
                type = "StrongpointArea";
                radiusA = 158.03;
                radiusB = 127.58;
                angle = 0.000;
            };
            class Smallville {
                name = "Jacksonville";
                position[] = {
                    5972.52,
                    7436.41
                };
                type = "NameVillage";
                radiusA = 138.43;
                radiusB = 90.40;
                angle = 0.000;
            };
            class construction {
                name = "Middlesborough Hills";
                position[] = {
                    4405.39,
                    3525.56
                };
                type = "NameVillage";
                radiusA = 138.48;
                radiusB = 90.43;
                angle = 0.000;
            };
            class USAF {
                name = "USAF Fort ";
                position[] = {
                    8669.37,
                    4327.82
                };
                type = "BorderCrossing";
                radiusA = 756.72;
                radiusB = 513.35;
                angle = 0.000;
            };
            class DefaultKeyPoint1 {
                name = "Gallo Islands";
                position[] = {
                    4402.24,
                    8795.88
                };
                type = "ViewPoint";
                radiusA = 1058.67;
                radiusB = 568.52;
                angle = 0.000;
            };
            class DefaultKeyPoint3 {
                name = "Cortez Ranch";
                position[] = {
                    3733.50,
                    1996.49
                };
                type = "ViewPoint";
                radiusA = 190.27;
                radiusB = 101.17;
                angle = 0.000;
            };
            class DefaultKeyPoint6 {
                name = "North Huddersville";
                position[] = {
                    1568.23,
                    3048.16
                };
                type = "NameCity";
                radiusA = 125.47;
                radiusB = 71.49;
                angle = 0.000;
            };
            class DefaultKeyPoint7 {
                name = "South Huddersville";
                position[] = {
                    1365.51,
                    2448.89
                };
                type = "NameCity";
                radiusA = 196.25;
                radiusB = 86.08;
                angle = 0.000;
            };
            class DefaultKeyPoint8 {
                name = "Ashworth West";
                position[] = {
                    8176.40,
                    7557.80
                };
                type = "NameCityCapital";
                radiusA = 365.91;
                radiusB = 210.88;
                angle = 0.000;
            };
            class DefaultKeyPoint9 {
                name = "Yellowstone Peak";
                position[] = {
                    4815.78,
                    5101.03
                };
                type = "Hill";
                radiusA = 242.23;
                radiusB = 129.35;
                angle = 0.000;
            };
            class DefaultKeyPoint10 {
                name = "Dillons Death";
                position[] = {
                    1159.22,
                    4923.33
                };
                type = "ViewPoint";
                radiusA = 178.86;
                radiusB = 96.60;
                angle = 0.000;
            };
            class DefaultKeyPoint12 {
                name = "Hellens Island";
                position[] = {
                    1608.15,
                    9685.74
                };
                type = "NameCityCapital";
                radiusA = 834.88;
                radiusB = 441.79;
                angle = 0.000;
            };
            class DefaultKeyPoint13 {
                name = "Phantom Bay";
                position[] = {
                    7959.06,
                    2270.52
                };
                type = "NameCity";
                radiusA = 162.83;
                radiusB = 82.29;
                angle = 0.000;
            };
            class DefaultKeyPoint14 {
                name = "Doe Corrections";
                position[] = {
                    7189.32,
                    8015.81
                };
                type = "FlatArea";
                radiusA = 302.31;
                radiusB = 114.39;
                angle = 0.000;
            };
            class DefaultKeyPoint15 {
                name = "Amber Trailer Park";
                position[] = {
                    3839.28,
                    2557.72
                };
                type = "StrongpointArea";
                radiusA = 193.30;
                radiusB = 95.25;
                angle = 0.000;
            };
            class DefaultKeyPoint16 {
                name = "Tara Trailer Park";
                position[] = {
                    333.78,
                    7464.14
                };
                type = "StrongpointArea";
                radiusA = 260.30;
                radiusB = 147.07;
                angle = 0.000;
            };
            class DefaultKeyPoint17 {
                name = "El Hamys Trailer Park Island";
                position[] = {
                    7304.91,
                    1236.51
                };
                type = "StrongpointArea";
                radiusA = 242.94;
                radiusB = 140.80;
                angle = 0.000;
            };
            class DefaultKeyPoint18 {
                name = "Garrys Gas Stop";
                position[] = {
                    2651.35,
                    3756.58
                };
                type = "FlatArea";
                radiusA = 245.08;
                radiusB = 168.13;
                angle = 0.000;
            };
            class DefaultKeyPoint19 {
                name = "Jacks Gas Stop";
                position[] = {
                    3011.33,
                    7020.40
                };
                type = "FlatArea";
                radiusA = 64.00;
                radiusB = 38.98;
                angle = 0.000;
            };
            class SpoonerGas {
                name = "Spooner Gas Stop";
                position[] = {
                    8995.23,
                    3400.81
                };
                type = "FlatArea";
                radiusA = 78.59;
                radiusB = 39.74;
                angle = 0.000;
            };
            class DIsland {
                name = "Anix Island";
                position[] = {
                    2716.42,
                    9437.39
                };
                type = "ViewPoint";
                radiusA = 266.28;
                radiusB = 214.08;
                angle = 0.000;
            };
            class OldTownRoad {
                name = "Old Town Road";
                position[] = {
                    901.32,
                    3834.56
                };
                type = "FlatArea";
                radiusA = 183.11;
                radiusB = 94.84;
                angle = 0.000;
            };
            class huddersville {
                name = "Huddersville";
                position[] = {
                    1436.29,
                    2691.48
                };
                type = "NameCityCapital";
                radiusA = 545.47;
                radiusB = 325.76;
                angle = 0.000;
            };
            class Psiland {
                name = "Psiland";
                position[] = {
                    5001.15,
                    9830.82
                };
                type = "ViewPoint";
                radiusA = 345.97;
                radiusB = 220.38;
                angle = 0.000;
            };
            class Dingas {
                name = "Dingas Gas Stop";
                position[] = {
                    312.83,
                    3745.51
                };
                type = "FlatArea";
                radiusA = 117.66;
                radiusB = 48.18;
                angle = 0.000;
            };
            class KamdanCity {
                name = "Kamdan North";
                position[] = {
                    7543.06,
                    2406.85
                };
                type = "NameCityCapital";
                radiusA = 479.30;
                radiusB = 213.02;
                angle = 0.000;
            };
            class TravellersMount {
                name = "Travellers Not-Mount";
                position[] = {
                    5594.31,
                    6290.91
                };
                type = "StrongpointArea";
                radiusA = 235.70;
                radiusB = 116.01;
                angle = 0.000;
            };
            class WaxLand {
                name = "Wax Land";
                position[] = {
                    9717.06,
                    1442.55
                };
                type = "ViewPoint";
                radiusA = 229.23;
                radiusB = 130.26;
                angle = 0.000;
            };
            class Dawsbury {
                name = "Dawsbury";
                position[] = {
                    2484.60,
                    2420.89
                };
                type = "NameCity";
                radiusA = 461.06;
                radiusB = 231.99;
                angle = 0.000;
            };
            class Airport {
                name = "Airport";
                position[] = {
                    8030.13,
                    4667.17
                };
                type = "BorderCrossing";
                radiusA = 810.45;
                radiusB = 418.34;
                angle = 0.000;
            };
            class DefaultKeyPoint2 {
                name = "Wilton East";
                position[] = {
                    2226.91,
                    6592.68
                };
                type = "NameVillage";
                radiusA = 142.41;
                radiusB = 102.07;
                angle = 0.000;
            };
            class WiltonMain {
                name = "Wilton Village";
                position[] = {
                    1746.59,
                    6422.27
                };
                type = "NameVillage";
                radiusA = 246.28;
                radiusB = 176.51;
                angle = 0.000;
            };
            class DefaultKeyPoint4 {
                name = "North West Airfield";
                position[] = {
                    786.96,
                    9692.39
                };
                type = "Airport";
                radiusA = 197.02;
                radiusB = 141.21;
                angle = 0.000;
            };
            class WiltonFar {
                name = "Wilton Far";
                position[] = {
                    2550.63,
                    6882.43
                };
                type = "NameLocal";
                radiusA = 91.14;
                radiusB = 65.32;
                angle = 0.000;
            };
            class Redwick1 {
                name = "Redwick";
                position[] = {
                    1112.88,
                    7587.86
                };
                type = "NameCityCapital";
                radiusA = 434.59;
                radiusB = 311.48;
                angle = 0.000;
            };

        };
    };
};
class CfgWorldList {
    class Anzus_Life {};
};
class CfgMissions {
    class Cutscenes {};
};
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

class CfgLensFlare {
    flarePos[] = {
        0.0,
        0.0,
        0.37,
        0.47,
        0.5,
        0.54,
        0.62,
        0.72,
        0.75,
        0.91,
        1.0,
        1.084,
        1.13,
        1.29,
        1.62,
        1.68
    };
    flareSizeCam[] = {
        0.2,
        0.4,
        0.025,
        0.05,
        0.042,
        0.043,
        0.04,
        0.75,
        0.6,
        0.7,
        0.15,
        0.85,
        0.44,
        0.45,
        0.55,
        0.1
    };
    flareBright[] = {
        1.0,
        0.3,
        0.3,
        0.3,
        0.3,
        0.4,
        0.4,
        0.05,
        0.03,
        0.12,
        0.05,
        0.08,
        0.05,
        0.2,
        0.2,
        1.0
    };
    flareSizeEye[] = {
        0.04
    };
    flareSizeEyeSun[] = {
        0.04
    };
};
class CfgFunctions {

        class A3_EPA {
        class paramEastFriendly {
            file = "\LF_Bank";
            class paramEastFriendly {
                preinit = 1;
            };
        };
    };
};
