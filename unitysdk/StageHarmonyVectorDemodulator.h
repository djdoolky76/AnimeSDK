#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define STAGEHARMONYVECTORDEMODULATOR_APAEIKPAHFH_OFFSET UNITYSDK_OFFSET(0xE9971E0)
#define STAGEHARMONYVECTORDEMODULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE997230)
#define STAGEHARMONYVECTORDEMODULATOR_FCDECODOKAK_OFFSET UNITYSDK_OFFSET(0xE997140)

	class StageHarmonyVectorDemodulator
	{
	public:
		::UnityEngine::Vector4 Min; // 0x30
		::UnityEngine::Vector4 Max; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYVECTORDEMODULATOR_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 FCDECODOKAK(::System::Single a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYVECTORDEMODULATOR_FCDECODOKAK_OFFSET))(this, a1);
		}

		::DemodulatorOutPutType APAEIKPAHFH()
		{
			return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYVECTORDEMODULATOR_APAEIKPAHFH_OFFSET))(this);
		}

	};
