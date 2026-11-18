#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKLNFCNOAD.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOAIRBUSSEGMENT_GET_REVERSECURVE_OFFSET UNITYSDK_OFFSET(0x1A914060)
#define MOLEMOLE_MONOAIRBUSSEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A914240)

namespace MoleMole
{
	inline static constexpr unsigned int MonoAirBusSegment_TypeDefinitionIndex = 42579;

	class MonoAirBusSegment : public ::FluffyUnderware::Curvy::CurvyMetadataBase
	{
	public:
		::FAKLNFCNOAD SegmentType; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* RollbackPointName; // 0x38
		::System::Boolean UseCustomSpeedCurve; // 0x40
		::System::Byte _padding1[0x7];
		::UnityEngine::AnimationCurve* OverrideSpeedCurve; // 0x48
		::UnityEngine::AnimationCurve* LMJMEKAKJEO; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOAIRBUSSEGMENT__CTOR_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_ReverseCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOAIRBUSSEGMENT_GET_REVERSECURVE_OFFSET))(this);
		}
	};
}
