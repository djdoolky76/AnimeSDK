#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollViewStateServiceBase_1_TypeDefinitionIndex = 48176;

	template <typename T>
	class ScrollViewStateServiceBase_1 : public ::System::Object
	{
	public:
		T Services; // 0x0
		::System::Boolean CanNotDragRuntimeFlagStore; // 0x0
	};
}
