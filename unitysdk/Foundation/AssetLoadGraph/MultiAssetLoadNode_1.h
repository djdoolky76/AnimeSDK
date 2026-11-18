#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphContext.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int MultiAssetLoadNode_1_TypeDefinitionIndex = 8562;

	template <typename T>
	class MultiAssetLoadNode_1
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::Foundation::AssetPath>* _paths; // 0x0
		::System::Func_2<::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::System::Collections::Generic::IEnumerable_1<::Foundation::AssetPath>*>* _pathsResolver; // 0x0
	};
}
