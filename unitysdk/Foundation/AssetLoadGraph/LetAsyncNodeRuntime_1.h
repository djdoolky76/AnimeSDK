#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphCompletion_1.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphContext.h"

namespace Foundation::AssetLoadGraph { template <typename T> class LetAsyncNode_1; }

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int LetAsyncNodeRuntime_1_TypeDefinitionIndex = 7972;

	template <typename T>
	class LetAsyncNodeRuntime_1
	{
	public:
		::Foundation::AssetLoadGraph::LetAsyncNode_1<T>* _node; // 0x0
		::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<T> _completion; // 0x0
		::Foundation::AssetLoadGraph::AssetLoadGraphContext _context; // 0x0
		::System::Boolean _started; // 0x0
		::System::Boolean _completed; // 0x0
	};
}
