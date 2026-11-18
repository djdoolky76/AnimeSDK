#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NAPScrollView::DataStruct { class ScrollViewPluginContainer; }
namespace NAPScrollView::DataStruct { template <typename T> class ScrollViewPluginEventBridge_1; }
namespace NAPScrollView::DataStruct { template <typename T> class ScrollViewPluginRuntimeService_1; }
namespace NAPScrollView::DataStruct { template <typename T> class ScrollViewPluginServiceProvider_1; }

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollViewPluginServiceBase_1_TypeDefinitionIndex = 73748;

	template <typename T>
	class ScrollViewPluginServiceBase_1 : public ::System::Object
	{
	public:
		T Services; // 0x0
		::NAPScrollView::DataStruct::ScrollViewPluginContainer* _container; // 0x0
		::NAPScrollView::DataStruct::ScrollViewPluginEventBridge_1<T>* _eventBridge; // 0x0
		::NAPScrollView::DataStruct::ScrollViewPluginRuntimeService_1<T>* _runtimeService; // 0x0
		::NAPScrollView::DataStruct::ScrollViewPluginServiceProvider_1<T>* _provider; // 0x0
	};
}
