#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/CrowdConditionBase.h"
#include "unitysdk/NPCCrowd/AI/CrowdConditionLogic.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_CROWDCONDITIONGROUP_CHECKCONDITIONS_OFFSET UNITYSDK_OFFSET(0x13780260)
#define NPCCROWD_AI_CROWDCONDITIONGROUP_CHECK_OFFSET UNITYSDK_OFFSET(0x13780200)
#define NPCCROWD_AI_CROWDCONDITIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x13780170)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CrowdConditionGroup_TypeDefinitionIndex = 70776;

	class CrowdConditionGroup : public ::NPCCrowd::AI::CrowdConditionBase
	{
	public:
		::NPCCrowd::AI::CrowdConditionLogic logic; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::NPCCrowd::AI::CrowdConditionBase*>* conditions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDCONDITIONGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean Check(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDCONDITIONGROUP_CHECK_OFFSET))(this, context);
		}

		static ::System::Boolean CheckConditions(::System::Collections::Generic::IList_1<::NPCCrowd::AI::CrowdConditionBase*>* conditionList, ::NPCCrowd::AI::CrowdConditionLogic conditionLogic, ::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::NPCCrowd::AI::CrowdConditionBase*>*, ::NPCCrowd::AI::CrowdConditionLogic, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDCONDITIONGROUP_CHECKCONDITIONS_OFFSET))(conditionList, conditionLogic, context);
		}
	};
}
