#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/CrowdConditionBase.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"

#define NPCCROWD_AI_TRUECONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x10DB0FB0)
#define NPCCROWD_AI_TRUECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x10DB0FA0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int TrueCondition_TypeDefinitionIndex = 54769;

	class TrueCondition : public ::NPCCrowd::AI::CrowdConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_TRUECONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean Check(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_TRUECONDITION_CHECK_OFFSET))(this, context);
		}
	};
}
