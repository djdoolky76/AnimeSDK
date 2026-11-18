#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphNodeExtensions___c__DisplayClass6_0_2_TypeDefinitionIndex = 7889;

	template <typename T1, typename T2>
	class AssetLoadGraphNodeExtensions___c__DisplayClass6_0_2 : public ::System::Object
	{
	public:
		::System::Func_2<T1, ::System::Collections::Generic::IEnumerable_1<::Foundation::AssetPath>*>* pathsResolver; // 0x0
	};
}
