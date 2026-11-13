#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/UnityEngine/Color.h"

#define STAGEHARMONYCOLORDEMODULATOR_APAEIKPAHFH_OFFSET UNITYSDK_OFFSET(0x1AC4C9F0)
#define STAGEHARMONYCOLORDEMODULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC4CA40)
#define STAGEHARMONYCOLORDEMODULATOR_FCDECODOKAK_OFFSET UNITYSDK_OFFSET(0x1AC4C950)

inline static constexpr unsigned int StageHarmonyColorDemodulator_TypeDefinitionIndex = 48554;

	class StageHarmonyColorDemodulator
	{
	public:
		::UnityEngine::Color Min; // 0x30
		::UnityEngine::Color Max; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYCOLORDEMODULATOR_CTOR_OFFSET))(this);
		}

		::UnityEngine::Color FCDECODOKAK(::System::Single a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYCOLORDEMODULATOR_FCDECODOKAK_OFFSET))(this, a1);
		}

		::DemodulatorOutPutType APAEIKPAHFH()
		{
			return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYCOLORDEMODULATOR_APAEIKPAHFH_OFFSET))(this);
		}

	};
