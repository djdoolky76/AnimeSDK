#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphCompletion_1.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphContext.h"

namespace Foundation::AssetLoadGraph { template <typename T1, typename T2> class LetAsyncNode_2; }

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int LetAsyncNodeRuntime_2_TypeDefinitionIndex = 8260;

	template <typename T1, typename T2>
	class LetAsyncNodeRuntime_2
	{
	public:
		::Foundation::AssetLoadGraph::LetAsyncNode_2<T1, T2>* _node; // 0x0
		::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<T2> _completion; // 0x0
		::Foundation::AssetLoadGraph::AssetLoadGraphContext _context; // 0x0
		T2 _sourceValue; // 0x0
		::System::Boolean _started; // 0x0
		::System::Boolean _completed; // 0x0
	};
}
