#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/CrowdConditionBase.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"

class CJIEIHEDMME;
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define NPCCROWD_AI_CROWDACTIVITYCONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x172BF840)
#define NPCCROWD_AI_CROWDACTIVITYCONDITION_CONTAINSACTIVITY_OFFSET UNITYSDK_OFFSET(0x172BF9A0)
#define NPCCROWD_AI_CROWDACTIVITYCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x172BF820)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CrowdActivityCondition_TypeDefinitionIndex = 89598;

	class CrowdActivityCondition : public ::NPCCrowd::AI::CrowdConditionBase
	{
	public:
		::System::UInt32 activityID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDACTIVITYCONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean Check(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDACTIVITYCONDITION_CHECK_OFFSET))(this, context);
		}

		static ::System::Boolean ContainsActivity(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::CJIEIHEDMME*>* allActivityDatas, ::System::UInt32 expectedActivityID)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::CJIEIHEDMME*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDACTIVITYCONDITION_CONTAINSACTIVITY_OFFSET))(allActivityDatas, expectedActivityID);
		}
	};
}
