#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace Foundation { class AssetRequestCompleteDel; }
namespace Foundation::AssetLoadGraph { template <typename T> class SingleAssetLoadNode_1; }

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int SingleAssetLoadNodeRuntime_1_TypeDefinitionIndex = 8233;

	template <typename T>
	class SingleAssetLoadNodeRuntime_1
	{
	public:
		::Foundation::AssetLoadGraph::SingleAssetLoadNode_1<T>* _node; // 0x0
		::Foundation::AssetRequestCompleteDel* _onLoaded; // 0x0
		::Foundation::AssetRequestHandle _handle; // 0x0
		::Foundation::AssetPath _resolvedPath; // 0x0
	};
}
