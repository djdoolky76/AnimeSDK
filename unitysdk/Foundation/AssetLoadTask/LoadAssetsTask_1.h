#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int LoadAssetsTask_1_TypeDefinitionIndex = 8387;

	template <typename T>
	class LoadAssetsTask_1
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* _paths; // 0x0
		::System::Boolean _allowPartial; // 0x0
	};
}
