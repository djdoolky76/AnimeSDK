#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"

namespace Foundation::AssetLoadGraph { class AssetLoadGraphRuntime; }
namespace Foundation::AssetLoadGraph { class SubGraphLoadNode; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME_COMPLETEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1E080C80)
#define FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME_HANDLESUBGRAPHRESULT_OFFSET UNITYSDK_OFFSET(0x1E080A40)
#define FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1E080D80)
#define FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME_ONGRAPHABORTED_OFFSET UNITYSDK_OFFSET(0x1E080D30)
#define FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E080980)
#define FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME_ONSUBGRAPHCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E080E20)
#define FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0808D0)
#define FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME___BASE_COMPLETEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1E080ED0)
#define FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME___BASE_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1E080F60)
#define FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME___BASE_ONGRAPHABORTED_OFFSET UNITYSDK_OFFSET(0x1E080FF0)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int SubGraphLoadNodeRuntime_TypeDefinitionIndex = 8394;

	class SubGraphLoadNodeRuntime
	{
	public:
		::System::Action_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>* _onSubGraphComplete; // 0x78
		::Foundation::AssetLoadGraph::AssetLoadGraphHandle _subGraphHandle; // 0x80
		::Foundation::AssetLoadGraph::SubGraphLoadNode* _node; // 0x90

		::System::Void _ctor(::Foundation::AssetLoadGraph::AssetLoadGraphRuntime* runtime, ::Foundation::AssetLoadGraph::SubGraphLoadNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphRuntime*, ::Foundation::AssetLoadGraph::SubGraphLoadNode*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME__CTOR_OFFSET))(this, runtime, node);
		}

		::System::Void OnStart(::System::Boolean synchronous)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME_ONSTART_OFFSET))(this, synchronous);
		}

		::System::Boolean CompleteImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME_COMPLETEIMMEDIATELY_OFFSET))(this);
		}

		::System::Void OnGraphAborted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME_ONGRAPHABORTED_OFFSET))(this);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME_ONDISPOSE_OFFSET))(this);
		}

		::System::Void OnSubGraphComplete(::Foundation::AssetLoadGraph::AssetLoadGraphHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME_ONSUBGRAPHCOMPLETE_OFFSET))(this, handle);
		}

		::System::Void HandleSubGraphResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME_HANDLESUBGRAPHRESULT_OFFSET))(this);
		}

		::System::Boolean __base_CompleteImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME___BASE_COMPLETEIMMEDIATELY_OFFSET))(this);
		}

		::System::Void __base_OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME___BASE_ONDISPOSE_OFFSET))(this);
		}

		::System::Void __base_OnGraphAborted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_SUBGRAPHLOADNODERUNTIME___BASE_ONGRAPHABORTED_OFFSET))(this);
		}
	};
}
