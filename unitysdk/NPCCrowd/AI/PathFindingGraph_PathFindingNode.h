#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathFindingGraph_PathFindingNode_FPathFindingNodeCache.h"
#include "unitysdk/NPCCrowd/AI/PathGraphNodeConfig_NodeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_CLEARPATHFINDINGCACHE_OFFSET UNITYSDK_OFFSET(0x172BFFA0)
#define NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_ISENABLED_OFFSET UNITYSDK_OFFSET(0x172BFF50)
#define NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x172C0140)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathFindingGraph_PathFindingNode_TypeDefinitionIndex = 82360;

	class PathFindingGraph_PathFindingNode : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* OutEdges; // 0x10
		::System::Int32 Index; // 0x18
		::System::Int32 PathGraphNodeIndex; // 0x1C
		::System::Boolean Enabled; // 0x20
		::System::Byte _padding0[0x3];
		::NPCCrowd::AI::PathGraphNodeConfig_NodeType PathGraphNodeType; // 0x24
		::NPCCrowd::AI::PathFindingGraph_PathFindingNode_FPathFindingNodeCache NodeCache; // 0x28
		::UnityEngine::Vector3 Position; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_ISENABLED_OFFSET))(this);
		}

		::System::Void ClearPathFindingCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_CLEARPATHFINDINGCACHE_OFFSET))(this);
		}
	};
}
