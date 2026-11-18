#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace Foundation { class AssetRequestCompleteDel; }
namespace Foundation::AssetLoadGraph { template <typename T> class MultiAssetLoadNode_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int MultiAssetLoadNodeRuntime_1_TypeDefinitionIndex = 8561;

	template <typename T>
	class MultiAssetLoadNodeRuntime_1
	{
	public:
		::Foundation::AssetLoadGraph::MultiAssetLoadNode_1<T>* _node; // 0x0
		::Foundation::AssetRequestCompleteDel* _onLoaded; // 0x0
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* _paths; // 0x0
		::System::Collections::Generic::List_1<T>* _results; // 0x0
		::Il2CppArray<T>* _resultArray; // 0x0
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _elementHandles; // 0x0
		::System::Int32 _pendingElementCount; // 0x0
	};
}
