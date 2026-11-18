#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/InteractionObject_WeightCurve_Type.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_WEIGHTCURVE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1F266050)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_WEIGHTCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F266080)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionObject_WeightCurve_TypeDefinitionIndex = 36801;

	class InteractionObject_WeightCurve : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::InteractionObject_WeightCurve_Type type; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* curve; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_WEIGHTCURVE__CTOR_OFFSET))(this);
		}

		::System::Single GetValue(::System::Single timer)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_WEIGHTCURVE_GETVALUE_OFFSET))(this, timer);
		}
	};
}
