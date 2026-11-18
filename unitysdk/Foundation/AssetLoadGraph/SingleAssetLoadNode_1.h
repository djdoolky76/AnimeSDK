#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphContext.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int SingleAssetLoadNode_1_TypeDefinitionIndex = 7901;

	template <typename T>
	class SingleAssetLoadNode_1
	{
	public:
		::Foundation::AssetPath _path; // 0x0
		::System::Func_2<::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::Foundation::AssetPath>* _pathResolver; // 0x0
	};
}
