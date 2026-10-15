#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Constraint.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_ELECTRICCHAINV2_ANIMATIONCURVECONSTRAINT_CTOR_OFFSET UNITYSDK_OFFSET(0xCD7C180)
#define RPG_CLIENT_ELECTRICCHAINV2_ANIMATIONCURVECONSTRAINT_PKGJKCHPMJF_OFFSET UNITYSDK_OFFSET(0xCD7C100)

namespace RPG::Client::ElectricChainV2
{
	class AnimationCurveConstraint : public ::RPG::Client::ElectricChainV2::Constraint
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_ANIMATIONCURVECONSTRAINT_CTOR_OFFSET))(this);
		}

		::System::Single PKGJKCHPMJF(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_ANIMATIONCURVECONSTRAINT_PKGJKCHPMJF_OFFSET))(this, a1);
		}

	};
}
