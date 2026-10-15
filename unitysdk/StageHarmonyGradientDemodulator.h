#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/UnityEngine/Color.h"
namespace UnityEngine { class Gradient; }

#define STAGEHARMONYGRADIENTDEMODULATOR_APAEIKPAHFH_OFFSET UNITYSDK_OFFSET(0xE991CD0)
#define STAGEHARMONYGRADIENTDEMODULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE991D20)
#define STAGEHARMONYGRADIENTDEMODULATOR_FCDECODOKAK_OFFSET UNITYSDK_OFFSET(0xE991C30)

	class StageHarmonyGradientDemodulator
	{
	public:
		::UnityEngine::Gradient* Gradient; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYGRADIENTDEMODULATOR_CTOR_OFFSET))(this);
		}

		::UnityEngine::Color FCDECODOKAK(::System::Single a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYGRADIENTDEMODULATOR_FCDECODOKAK_OFFSET))(this, a1);
		}

		::DemodulatorOutPutType APAEIKPAHFH()
		{
			return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYGRADIENTDEMODULATOR_APAEIKPAHFH_OFFSET))(this);
		}

	};
