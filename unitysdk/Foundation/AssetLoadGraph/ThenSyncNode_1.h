#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphContext.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int ThenSyncNode_1_TypeDefinitionIndex = 7991;

	template <typename T>
	class ThenSyncNode_1
	{
	public:
		::System::Func_2<::Foundation::AssetLoadGraph::AssetLoadGraphContext, T>* _action; // 0x0
	};
}
