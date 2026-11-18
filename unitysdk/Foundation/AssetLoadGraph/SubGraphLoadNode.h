#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken.h"

namespace Foundation::AssetLoadGraph { class AssetLoadGraph; }
namespace Foundation::AssetLoadGraph { class AssetLoadGraphNodeRuntime; }
namespace Foundation::AssetLoadGraph { class AssetLoadGraphRuntime; }
namespace System { class String; }

#define FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODE_CREATERUNTIME_OFFSET UNITYSDK_OFFSET(0x1F374D20)
#define FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODE_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1F374D10)
#define FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36F1C0)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int SubGraphLoadNode_TypeDefinitionIndex = 8513;

	class SubGraphLoadNode
	{
	public:
		::Foundation::AssetLoadGraph::AssetLoadGraph* _subGraph; // 0x38

		::System::Void _ctor(::Foundation::AssetLoadGraph::AssetLoadGraph* graph, ::System::Int32 id, ::System::String* name, ::Il2CppArray<::Foundation::AssetLoadGraph::AssetLoadNodeToken>* dependencies, ::Foundation::AssetLoadGraph::AssetLoadGraph* subGraph)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraph*, ::System::Int32, ::System::String*, ::Il2CppArray<::Foundation::AssetLoadGraph::AssetLoadNodeToken>*, ::Foundation::AssetLoadGraph::AssetLoadGraph*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODE__CTOR_OFFSET))(this, graph, id, name, dependencies, subGraph);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraph* get_SubGraph()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODE_GET_SUBGRAPH_OFFSET))(this);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* CreateRuntime(::Foundation::AssetLoadGraph::AssetLoadGraphRuntime* runtime)
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphRuntime*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODE_CREATERUNTIME_OFFSET))(this, runtime);
		}
	};
}
