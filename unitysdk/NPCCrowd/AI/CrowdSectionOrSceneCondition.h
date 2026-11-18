#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/CrowdConditionBase.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"

#define NPCCROWD_AI_CROWDSECTIONORSCENECONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x16B98970)
#define NPCCROWD_AI_CROWDSECTIONORSCENECONDITION_ISMATCH_OFFSET UNITYSDK_OFFSET(0x16B98CD0)
#define NPCCROWD_AI_CROWDSECTIONORSCENECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16B98960)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CrowdSectionOrSceneCondition_TypeDefinitionIndex = 79204;

	class CrowdSectionOrSceneCondition : public ::NPCCrowd::AI::CrowdConditionBase
	{
	public:
		::System::UInt32 sectionOrSceneID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDSECTIONORSCENECONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean Check(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDSECTIONORSCENECONDITION_CHECK_OFFSET))(this, context);
		}

		static ::System::Boolean IsMatch(::System::UInt32 expectedID, ::System::Boolean isBigScene, ::System::UInt32 sceneID, ::System::UInt32 sectionID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDSECTIONORSCENECONDITION_ISMATCH_OFFSET))(expectedID, isBigScene, sceneID, sectionID);
		}
	};
}
