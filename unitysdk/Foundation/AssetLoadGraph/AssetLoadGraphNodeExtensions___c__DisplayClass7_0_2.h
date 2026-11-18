#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphContext.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphNodeExtensions___c__DisplayClass7_0_2_TypeDefinitionIndex = 7884;

	template <typename T1, typename T2>
	class AssetLoadGraphNodeExtensions___c__DisplayClass7_0_2 : public ::System::Object
	{
	public:
		::System::Func_3<::Foundation::AssetLoadGraph::AssetLoadGraphContext, T1, ::System::Collections::Generic::IEnumerable_1<::Foundation::AssetPath>*>* pathsResolver; // 0x0
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<T1> sourceToken; // 0x0
	};
}
