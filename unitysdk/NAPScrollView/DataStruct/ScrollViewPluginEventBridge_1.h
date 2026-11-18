#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NAPScrollView::DataStruct { class ScrollViewPluginContainer; }

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollViewPluginEventBridge_1_TypeDefinitionIndex = 61780;

	template <typename T>
	class ScrollViewPluginEventBridge_1 : public ::System::Object
	{
	public:
		T _services; // 0x0
		::NAPScrollView::DataStruct::ScrollViewPluginContainer* _container; // 0x0
	};
}
