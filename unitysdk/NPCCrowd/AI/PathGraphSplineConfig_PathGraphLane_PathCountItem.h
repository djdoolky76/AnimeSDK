#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class CrowdConditionBase; }

#define NPCCROWD_AI_PATHGRAPHSPLINECONFIG_PATHGRAPHLANE_PATHCOUNTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13181ED0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineConfig_PathGraphLane_PathCountItem_TypeDefinitionIndex = 84299;

	class PathGraphSplineConfig_PathGraphLane_PathCountItem : public ::System::Object
	{
	public:
		::NPCCrowd::AI::CrowdConditionBase* crowdCondition; // 0x10
		::System::Int32 allowedMaxCrowd; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINECONFIG_PATHGRAPHLANE_PATHCOUNTITEM__CTOR_OFFSET))(this);
		}
	};
}
