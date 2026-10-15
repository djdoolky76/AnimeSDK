#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DemodulatorOutPutType.h"
namespace UnityEngine { class AnimationCurve; }

#define STAGEHARMONYCURVEDEMODULATOR_APAEIKPAHFH_OFFSET UNITYSDK_OFFSET(0xE98D5C0)
#define STAGEHARMONYCURVEDEMODULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE98D610)
#define STAGEHARMONYCURVEDEMODULATOR_FCDECODOKAK_OFFSET UNITYSDK_OFFSET(0xE98D550)

inline static constexpr unsigned int StageHarmonyCurveDemodulator_TypeDefinitionIndex = 47528;

	class StageHarmonyCurveDemodulator
	{
	public:
		::UnityEngine::AnimationCurve* Curve; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYCURVEDEMODULATOR_CTOR_OFFSET))(this);
		}

		::System::Single FCDECODOKAK(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYCURVEDEMODULATOR_FCDECODOKAK_OFFSET))(this, a1);
		}

		::DemodulatorOutPutType APAEIKPAHFH()
		{
			return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYCURVEDEMODULATOR_APAEIKPAHFH_OFFSET))(this);
		}

	};
