#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define STAGEHARMONYFLOATDEMODULATOR_APAEIKPAHFH_OFFSET UNITYSDK_OFFSET(0xE990F90)
#define STAGEHARMONYFLOATDEMODULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE98F8C0)
#define STAGEHARMONYFLOATDEMODULATOR_FCDECODOKAK_OFFSET UNITYSDK_OFFSET(0xE990F00)

	class StageHarmonyFloatDemodulator
	{
	public:
		::System::Boolean PassThrough; // 0x28
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 MinMax; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYFLOATDEMODULATOR_CTOR_OFFSET))(this);
		}

		::System::Single FCDECODOKAK(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYFLOATDEMODULATOR_FCDECODOKAK_OFFSET))(this, a1);
		}

		::DemodulatorOutPutType APAEIKPAHFH()
		{
			return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYFLOATDEMODULATOR_APAEIKPAHFH_OFFSET))(this);
		}

	};
