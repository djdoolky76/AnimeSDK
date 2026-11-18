#pragma once
#include "unitysdk/unitysdk.h"

#define NPCCROWD_AI_PATHGRAPHSPLINELISTPAIRLOCATORCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x10DB0F60)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineListPairLocatorComponent_TypeDefinitionIndex = 86028;

	class PathGraphSplineListPairLocatorComponent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINELISTPAIRLOCATORCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
