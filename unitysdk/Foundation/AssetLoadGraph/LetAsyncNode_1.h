#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphCompletion_1.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphContext.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int LetAsyncNode_1_TypeDefinitionIndex = 8038;

	template <typename T>
	class LetAsyncNode_1
	{
	public:
		::System::Action_2<::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<T>>* _start; // 0x0
		::System::Func_3<::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<T>, ::System::Boolean>* _tryCompleteImmediately; // 0x0
		::System::Action_1<::Foundation::AssetLoadGraph::AssetLoadGraphContext>* _cancel; // 0x0
	};
}
