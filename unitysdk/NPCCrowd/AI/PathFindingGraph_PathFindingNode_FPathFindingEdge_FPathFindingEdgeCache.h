#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_FPATHFINDINGEDGE_FPATHFINDINGEDGECACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0x650930)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathFindingGraph_PathFindingNode_FPathFindingEdge_FPathFindingEdgeCache_TypeDefinitionIndex = 82362;

	struct alignas(4) PathFindingGraph_PathFindingNode_FPathFindingEdge_FPathFindingEdgeCache
	{
		::System::Boolean OverrideEnabled; // 0x10
		::System::Boolean Enabled; // 0x11

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_FPATHFINDINGEDGE_FPATHFINDINGEDGECACHE_CLEAR_OFFSET))(this);
		}
	};
}
