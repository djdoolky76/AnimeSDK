#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphCompletion_1.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphContext.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken_1.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int LetAsyncNode_2_TypeDefinitionIndex = 7907;

	template <typename T1, typename T2>
	class LetAsyncNode_2
	{
	public:
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<T1> _sourceToken; // 0x0
		::System::Action_3<::Foundation::AssetLoadGraph::AssetLoadGraphContext, T1, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<T2>>* _start; // 0x0
		::System::Func_4<::Foundation::AssetLoadGraph::AssetLoadGraphContext, T1, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<T2>, ::System::Boolean>* _tryCompleteImmediately; // 0x0
		::System::Action_2<::Foundation::AssetLoadGraph::AssetLoadGraphContext, T1>* _cancel; // 0x0
	};
}
