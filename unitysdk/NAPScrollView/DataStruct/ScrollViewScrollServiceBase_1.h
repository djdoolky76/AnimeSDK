#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollViewScrollServiceBase_1_TypeDefinitionIndex = 67463;

	template <typename T>
	class ScrollViewScrollServiceBase_1 : public ::System::Object
	{
	public:
		T Services; // 0x0
		::System::Single LastScrollBarValue; // 0x0
	};
}
