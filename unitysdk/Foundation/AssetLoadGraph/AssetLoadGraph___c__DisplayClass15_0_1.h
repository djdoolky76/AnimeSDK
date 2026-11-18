#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraph___c__DisplayClass15_0_1_TypeDefinitionIndex = 8575;

	template <typename T>
	class AssetLoadGraph___c__DisplayClass15_0_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<T>>* tokens; // 0x0
	};
}
