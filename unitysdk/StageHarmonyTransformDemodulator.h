#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/JEMDGBKPCDK.h"

#define STAGEHARMONYTRANSFORMDEMODULATOR_APAEIKPAHFH_OFFSET UNITYSDK_OFFSET(0xE98C0E0)
#define STAGEHARMONYTRANSFORMDEMODULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE98C130)
#define STAGEHARMONYTRANSFORMDEMODULATOR_FCDECODOKAK_OFFSET UNITYSDK_OFFSET(0xE98BDC0)

inline static constexpr unsigned int StageHarmonyTransformDemodulator_TypeDefinitionIndex = 47530;

	class StageHarmonyTransformDemodulator
	{
	public:
		::UnityEngine::Vector3 MinPos; // 0x48
		::UnityEngine::Vector3 MinRotation; // 0x54
		::UnityEngine::Vector3 MinScale; // 0x60
		::UnityEngine::Vector4 MaxPos; // 0x6C
		::UnityEngine::Vector4 MaxRotation; // 0x7C
		::UnityEngine::Vector4 MaxSale; // 0x8C
		::System::Boolean SmoothSignal; // 0x9C
		::System::Byte _padding0[0x3];
		::System::Single SmoothTime; // 0xA0
		::System::Single MaxSpeed; // 0xA4
		::System::Boolean _LastSignalPause; // 0xA8
		::System::Byte _padding1[0x3];
		::System::Single _Signal; // 0xAC
		::System::Single _RecordSignalVelocity; // 0xB0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMDEMODULATOR_CTOR_OFFSET))(this);
		}

		::JEMDGBKPCDK FCDECODOKAK(::System::Single a1)
		{
			return ((::JEMDGBKPCDK(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMDEMODULATOR_FCDECODOKAK_OFFSET))(this, a1);
		}

		::DemodulatorOutPutType APAEIKPAHFH()
		{
			return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTRANSFORMDEMODULATOR_APAEIKPAHFH_OFFSET))(this);
		}

	};
