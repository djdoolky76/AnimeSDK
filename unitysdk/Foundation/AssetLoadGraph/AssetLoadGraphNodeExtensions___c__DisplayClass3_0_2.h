#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphNodeExtensions___c__DisplayClass3_0_2_TypeDefinitionIndex = 7887;

	template <typename T1, typename T2>
	class AssetLoadGraphNodeExtensions___c__DisplayClass3_0_2 : public ::System::Object
	{
	public:
		::System::Func_2<T1, ::Foundation::AssetPath>* pathResolver; // 0x0
	};
}
