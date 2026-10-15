#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTDEMODULATOR_APAEIKPAHFH_OFFSET UNITYSDK_OFFSET(0xE11B4A0)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTDEMODULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE11B4F0)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTDEMODULATOR_FCDECODOKAK_OFFSET UNITYSDK_OFFSET(0xE11B410)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyTrafficLightDemodulator_TypeDefinitionIndex = 70963;

	class StageHarmonyTrafficLightDemodulator
	{
	public:
		::UnityEngine::Color TargetColor; // 0x30
		::System::Int32 PhaseValue; // 0x40
		::System::UInt32 _UintSignal; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTDEMODULATOR_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 FCDECODOKAK(::System::Single a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTDEMODULATOR_FCDECODOKAK_OFFSET))(this, a1);
		}

		::DemodulatorOutPutType APAEIKPAHFH()
		{
			return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTDEMODULATOR_APAEIKPAHFH_OFFSET))(this);
		}

	};
}
