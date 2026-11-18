#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace NAPScrollView::DataStruct { class IScrollViewLogicService; }
namespace NAPScrollView::DataStruct { class ScrollViewPluginContainer; }
namespace NAPScrollView::DataStruct { template <typename T> class ScrollViewPluginEventBridge_1; }
namespace NAPScrollView::DataStruct { template <typename T> class ScrollViewPluginRuntimeService_1; }
namespace System { template <typename T> class Func_1; }

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollViewPluginServiceProvider_1_TypeDefinitionIndex = 63805;

	template <typename T>
	class ScrollViewPluginServiceProvider_1 : public ::System::Object
	{
	public:
		T _services; // 0x0
		::NAPScrollView::DataStruct::ScrollViewPluginContainer* _container; // 0x0
		::NAPScrollView::DataStruct::ScrollViewPluginRuntimeService_1<T>* _runtimeService; // 0x0
		::NAPScrollView::DataStruct::ScrollViewPluginEventBridge_1<T>* _eventBridge; // 0x0
		::System::Func_1<::MonoUITableScrollV2*>* _ownerGetter; // 0x0
		::System::Func_1<::NAPScrollView::DataStruct::IScrollViewLogicService*>* _logicGetter; // 0x0
	};
}
