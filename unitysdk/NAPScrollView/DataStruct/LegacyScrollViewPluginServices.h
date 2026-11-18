#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2_ScrollViewServiceBundle;
namespace NAPScrollView::DataStruct { class IScrollViewAdapterData; }
namespace NAPScrollView::DataStruct { class IScrollViewAdapterScroll; }
namespace NAPScrollView::DataStruct { class IScrollViewAdapterServices; }
namespace NAPScrollView::DataStruct { class IScrollViewAdapterState; }
namespace NAPScrollView::DataStruct { class IScrollViewComponentEventService; }
namespace NAPScrollView::DataStruct { class IScrollViewItemHierarchyService; }
namespace NAPScrollView::DataStruct { class IScrollViewLayoutMutationService; }
namespace NAPScrollView::DataStruct { class IScrollViewLayoutService; }
namespace NAPScrollView::DataStruct { class IScrollViewLogicService; }
namespace NAPScrollView::DataStruct { class IScrollViewPluginConfigService; }
namespace NAPScrollView::DataStruct { class IScrollViewPluginEventBridge; }
namespace NAPScrollView::DataStruct { class IScrollViewPluginHost; }
namespace NAPScrollView::DataStruct { class IScrollViewPluginRuntimeService; }
namespace NAPScrollView::DataStruct { class IScrollViewTemplateService; }
namespace NAPScrollView::DataStruct { class IScrollViewUnityQueryService; }
namespace NAPScrollView::DataStruct { class IScrollViewVisibilityService; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapter; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewPluginEventBridge; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewPluginHost; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewPluginRuntimeService; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewUnityMutationServices; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewUnityServices; }
namespace NAPScrollView::DataStruct { class ScrollViewRuntimeState; }

#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_COMPONENTEVENTS_OFFSET UNITYSDK_OFFSET(0x12C3B090)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x12C3AF30)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_DATA_OFFSET UNITYSDK_OFFSET(0x12C3AC80)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x12C3B0A0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_HOST_OFFSET UNITYSDK_OFFSET(0x12C3AF20)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_ITEMHIERARCHY_OFFSET UNITYSDK_OFFSET(0x12C3B050)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_LAYOUTMUTATION_OFFSET UNITYSDK_OFFSET(0x12C3B070)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x12C3B030)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0x12C3B040)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_RUNTIMESTATE_OFFSET UNITYSDK_OFFSET(0x12C3B0E0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_RUNTIME_OFFSET UNITYSDK_OFFSET(0x12C3B010)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_SCROLLVIEWSERVICES_OFFSET UNITYSDK_OFFSET(0x12C3B0B0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_SCROLL_OFFSET UNITYSDK_OFFSET(0x12C3AD60)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x12C3AC60)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_STATE_OFFSET UNITYSDK_OFFSET(0x12C3AE40)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x12C3B080)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_UNITYQUERY_OFFSET UNITYSDK_OFFSET(0x12C3B020)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x12C3B060)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES__CTOR_OFFSET UNITYSDK_OFFSET(0x12C3ABD0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int LegacyScrollViewPluginServices_TypeDefinitionIndex = 77967;

	class LegacyScrollViewPluginServices : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::LegacyScrollViewPluginEventBridge* _events; // 0x10
		::NAPScrollView::DataStruct::LegacyScrollViewPluginRuntimeService* _runtime; // 0x18
		::NAPScrollView::DataStruct::LegacyScrollViewUnityServices* _unityServices; // 0x20
		::NAPScrollView::DataStruct::LegacyScrollViewAdapter* _adapter; // 0x28
		::NAPScrollView::DataStruct::LegacyScrollViewPluginHost* _host; // 0x30
		::NAPScrollView::DataStruct::LegacyScrollViewUnityMutationServices* _unityMutationServices; // 0x38

		::System::Void _ctor(::NAPScrollView::DataStruct::LegacyScrollViewAdapter* adapter, ::NAPScrollView::DataStruct::LegacyScrollViewUnityServices* unityServices, ::NAPScrollView::DataStruct::LegacyScrollViewUnityMutationServices* unityMutationServices)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::LegacyScrollViewAdapter*, ::NAPScrollView::DataStruct::LegacyScrollViewUnityServices*, ::NAPScrollView::DataStruct::LegacyScrollViewUnityMutationServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES__CTOR_OFFSET))(this, adapter, unityServices, unityMutationServices);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterServices* get_Services()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterServices*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_SERVICES_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterData* get_Data()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_DATA_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterScroll* get_Scroll()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterScroll*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_SCROLL_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterState* get_State()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterState*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_STATE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewPluginHost* get_Host()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewPluginHost*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_HOST_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewPluginConfigService* get_Config()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewPluginConfigService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_CONFIG_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewPluginRuntimeService* get_Runtime()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewPluginRuntimeService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_RUNTIME_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewUnityQueryService* get_UnityQuery()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewUnityQueryService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_UNITYQUERY_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewLayoutService* get_Layout()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewLayoutService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_LAYOUT_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewLogicService* get_Logic()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewLogicService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_LOGIC_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewItemHierarchyService* get_ItemHierarchy()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewItemHierarchyService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_ITEMHIERARCHY_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewVisibilityService* get_Visibility()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewVisibilityService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_VISIBILITY_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewLayoutMutationService* get_LayoutMutation()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewLayoutMutationService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_LAYOUTMUTATION_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewTemplateService* get_Template()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewTemplateService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_TEMPLATE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewComponentEventService* get_ComponentEvents()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewComponentEventService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_COMPONENTEVENTS_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewPluginEventBridge* get_Events()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewPluginEventBridge*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_EVENTS_OFFSET))(this);
		}

		::MonoUITableScrollV2_ScrollViewServiceBundle* get_ScrollViewServices()
		{
			return ((::MonoUITableScrollV2_ScrollViewServiceBundle*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_SCROLLVIEWSERVICES_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::ScrollViewRuntimeState* get_RuntimeState()
		{
			return ((::NAPScrollView::DataStruct::ScrollViewRuntimeState*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINSERVICES_GET_RUNTIMESTATE_OFFSET))(this);
		}
	};
}
