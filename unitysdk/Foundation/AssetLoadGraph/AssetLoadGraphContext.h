#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken.h"

namespace Foundation::AssetLoadGraph { class AssetLoadGraph; }
namespace Foundation::AssetLoadGraph { class AssetLoadGraphNode; }
namespace Foundation::AssetLoadGraph { class AssetLoadGraphNodeRuntime; }
namespace Foundation::AssetLoadGraph { class AssetLoadGraphRuntime; }
namespace Foundation::AssetLoadGraph { template <typename T> class AssetLoadGraphNode_1; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHCONTEXT_ADDSUBGRAPH_OFFSET UNITYSDK_OFFSET(0x93DE90)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHCONTEXT_GET_CURRENTTOKEN_OFFSET UNITYSDK_OFFSET(0x93DF60)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHCONTEXT_GET_GRAPHRUNTIME_OFFSET UNITYSDK_OFFSET(0x282350)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHCONTEXT_GET_NODERUNTIME_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHCONTEXT_GET_NODE_OFFSET UNITYSDK_OFFSET(0x93DF00)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphContext_TypeDefinitionIndex = 8048;

	struct alignas(8) AssetLoadGraphContext
	{
		::Foundation::AssetLoadGraph::AssetLoadGraphRuntime* _GraphRuntime_k__BackingField; // 0x10
		::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* _NodeRuntime_k__BackingField; // 0x18

		::System::Void _ctor(::Foundation::AssetLoadGraph::AssetLoadGraphRuntime* graphRuntime, ::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* nodeRuntime)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphRuntime*, ::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHCONTEXT__CTOR_OFFSET))(this, graphRuntime, nodeRuntime);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphNode_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>* AddSubGraph(::Foundation::AssetLoadGraph::AssetLoadGraph* subGraph)
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphNode_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>*(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraph*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHCONTEXT_ADDSUBGRAPH_OFFSET))(this, subGraph);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphRuntime* get_GraphRuntime()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphRuntime*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHCONTEXT_GET_GRAPHRUNTIME_OFFSET))(this);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* get_NodeRuntime()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHCONTEXT_GET_NODERUNTIME_OFFSET))(this);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphNode* get_Node()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHCONTEXT_GET_NODE_OFFSET))(this);
		}

		::Foundation::AssetLoadGraph::AssetLoadNodeToken get_CurrentToken()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadNodeToken(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHCONTEXT_GET_CURRENTTOKEN_OFFSET))(this);
		}
	};
}
