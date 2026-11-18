#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/CompareCondition.h"
#include "unitysdk/NPCCrowd/AI/FloatValueGetterType.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"

#define NPCCROWD_AI_FLOATCOMPARECONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x172BFAC0)
#define NPCCROWD_AI_FLOATCOMPARECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x172BFAB0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int FloatCompareCondition_TypeDefinitionIndex = 48694;

	class FloatCompareCondition : public ::NPCCrowd::AI::CompareCondition
	{
	public:
		::NPCCrowd::AI::FloatValueGetterType getValueType; // 0x20
		::System::Single checkValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FLOATCOMPARECONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean Check(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FLOATCOMPARECONDITION_CHECK_OFFSET))(this, context);
		}
	};
}
