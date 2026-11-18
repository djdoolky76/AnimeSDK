#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphConfigComponent.h"

#define NPCCROWD_AI_PATHGRAPHLOCATORCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE77F9E0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphLocatorComponent_TypeDefinitionIndex = 49610;

	class PathGraphLocatorComponent : public ::NPCCrowd::AI::PathGraphConfigComponent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHLOCATORCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
