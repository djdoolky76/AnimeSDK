#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
class MonoUITableScrollV2_BaseScrollLogic;
namespace NAPScrollView::DataStruct { class IScrollViewAdapterConfigService; }
namespace NAPScrollView::DataStruct { class IScrollViewAdapterData; }
namespace NAPScrollView::DataStruct { class IScrollViewAdapterInput; }
namespace NAPScrollView::DataStruct { class IScrollViewAdapterLifecycle; }
namespace NAPScrollView::DataStruct { class IScrollViewAdapterPlugin; }
namespace NAPScrollView::DataStruct { class IScrollViewAdapterRuntimeMutationService; }
namespace NAPScrollView::DataStruct { class IScrollViewAdapterRuntimeStateService; }
namespace NAPScrollView::DataStruct { class IScrollViewAdapterScroll; }
namespace NAPScrollView::DataStruct { class IScrollViewAdapterSelectClickService; }
namespace NAPScrollView::DataStruct { class IScrollViewAdapterState; }
namespace NAPScrollView::DataStruct { class IScrollViewComponentEventService; }
namespace NAPScrollView::DataStruct { class IScrollViewEdgeAreaService; }
namespace NAPScrollView::DataStruct { class IScrollViewItemHierarchyService; }
namespace NAPScrollView::DataStruct { class IScrollViewLayoutMutationService; }
namespace NAPScrollView::DataStruct { class IScrollViewLayoutService; }
namespace NAPScrollView::DataStruct { class IScrollViewPluginProxy; }
namespace NAPScrollView::DataStruct { class IScrollViewTemplateService; }
namespace NAPScrollView::DataStruct { class IScrollViewUnityQueryService; }
namespace NAPScrollView::DataStruct { class IScrollViewVisibilityService; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapter; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapterConfigService; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapterDataService; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapterInputService; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapterLifecycleService; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapterPluginService; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapterRuntimeMutationService; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapterRuntimeStateService; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapterScrollService; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapterServices_LegacySelectClickPassthrough; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapterStateService; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewUnityMutationServices; }
namespace NAPScrollView::DataStruct { class LegacyScrollViewUnityServices; }
namespace NAPScrollView::DataStruct { class ScrollViewEventService; }

#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_COMPONENTEVENTS_OFFSET UNITYSDK_OFFSET(0x18C4C8E0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x18C4C850)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_DATASTATESTORE_OFFSET UNITYSDK_OFFSET(0x18C4C600)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_DATA_OFFSET UNITYSDK_OFFSET(0x18C4C5F0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_EDGEAREA_OFFSET UNITYSDK_OFFSET(0x18C4C980)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x18C4C6A0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_INPUT_OFFSET UNITYSDK_OFFSET(0x18C4C660)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_ITEMHIERARCHY_OFFSET UNITYSDK_OFFSET(0x18C4C8A0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_LAYOUTMUTATION_OFFSET UNITYSDK_OFFSET(0x18C4C8C0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_LAYOUTSERVICE_OFFSET UNITYSDK_OFFSET(0x18C4C890)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_LIFECYCLE_OFFSET UNITYSDK_OFFSET(0x18C4C5E0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0x18C4C320)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x18C4C300)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_PLUGINPROXY_OFFSET UNITYSDK_OFFSET(0x18C4C8F0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_PLUGINSTORE_OFFSET UNITYSDK_OFFSET(0x18C4C640)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_PLUGIN_OFFSET UNITYSDK_OFFSET(0x18C4C860)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_RUNTIMEMUTATION_OFFSET UNITYSDK_OFFSET(0x18C4C690)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_RUNTIMESTATESTORE_OFFSET UNITYSDK_OFFSET(0x18C4C630)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_RUNTIMESTATE_OFFSET UNITYSDK_OFFSET(0x18C4C680)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_SCROLLSTATESTORE_OFFSET UNITYSDK_OFFSET(0x18C4C610)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_SCROLL_OFFSET UNITYSDK_OFFSET(0x18C4C650)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_SELECTCLICK_OFFSET UNITYSDK_OFFSET(0x18C4C870)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_STATESTORE_OFFSET UNITYSDK_OFFSET(0x18C4C620)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_STATE_OFFSET UNITYSDK_OFFSET(0x18C4C670)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x18C4C8D0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_UNITYQUERY_OFFSET UNITYSDK_OFFSET(0x18C4C880)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x18C4C8B0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x18C4C310)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES__CTOR_OFFSET UNITYSDK_OFFSET(0x18C4C4A0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int LegacyScrollViewAdapterServices_TypeDefinitionIndex = 83001;

	class LegacyScrollViewAdapterServices : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::LegacyScrollViewAdapterServices_LegacySelectClickPassthrough* _selectClick; // 0x10
		::NAPScrollView::DataStruct::LegacyScrollViewAdapterRuntimeStateService* _runtimeStateService; // 0x18
		::NAPScrollView::DataStruct::LegacyScrollViewAdapterConfigService* _configService; // 0x20
		::NAPScrollView::DataStruct::LegacyScrollViewAdapterPluginService* _pluginService; // 0x28
		::NAPScrollView::DataStruct::LegacyScrollViewUnityServices* _unityServices; // 0x30
		::NAPScrollView::DataStruct::LegacyScrollViewAdapterRuntimeMutationService* _runtimeMutationService; // 0x38
		::NAPScrollView::DataStruct::LegacyScrollViewAdapterDataService* _dataService; // 0x40
		::MonoUITableScrollV2* _Owner_k__BackingField; // 0x48
		::NAPScrollView::DataStruct::LegacyScrollViewAdapter* _adapter; // 0x50
		::NAPScrollView::DataStruct::LegacyScrollViewAdapterLifecycleService* _lifecycleService; // 0x58
		::NAPScrollView::DataStruct::IScrollViewPluginProxy* _pluginProxy; // 0x60
		::NAPScrollView::DataStruct::LegacyScrollViewAdapterScrollService* _scrollService; // 0x68
		::NAPScrollView::DataStruct::LegacyScrollViewAdapterInputService* _inputService; // 0x70
		::NAPScrollView::DataStruct::LegacyScrollViewAdapterStateService* _stateService; // 0x78
		::NAPScrollView::DataStruct::LegacyScrollViewUnityMutationServices* _unityMutationServices; // 0x80

		::System::Void _ctor(::NAPScrollView::DataStruct::LegacyScrollViewAdapter* adapter, ::NAPScrollView::DataStruct::LegacyScrollViewUnityServices* unityServices, ::NAPScrollView::DataStruct::LegacyScrollViewUnityMutationServices* unityMutationServices)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::LegacyScrollViewAdapter*, ::NAPScrollView::DataStruct::LegacyScrollViewUnityServices*, ::NAPScrollView::DataStruct::LegacyScrollViewUnityMutationServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES__CTOR_OFFSET))(this, adapter, unityServices, unityMutationServices);
		}

		::MonoUITableScrollV2* get_Owner()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::MonoUITableScrollV2* value)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_SET_OWNER_OFFSET))(this, value);
		}

		::MonoUITableScrollV2_BaseScrollLogic* get_Logic()
		{
			return ((::MonoUITableScrollV2_BaseScrollLogic*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_LOGIC_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterLifecycle* get_Lifecycle()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterLifecycle*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_LIFECYCLE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterData* get_Data()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_DATA_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::LegacyScrollViewAdapterDataService* get_DataStateStore()
		{
			return ((::NAPScrollView::DataStruct::LegacyScrollViewAdapterDataService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_DATASTATESTORE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::LegacyScrollViewAdapterScrollService* get_ScrollStateStore()
		{
			return ((::NAPScrollView::DataStruct::LegacyScrollViewAdapterScrollService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_SCROLLSTATESTORE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::LegacyScrollViewAdapterStateService* get_StateStore()
		{
			return ((::NAPScrollView::DataStruct::LegacyScrollViewAdapterStateService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_STATESTORE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::LegacyScrollViewAdapterRuntimeStateService* get_RuntimeStateStore()
		{
			return ((::NAPScrollView::DataStruct::LegacyScrollViewAdapterRuntimeStateService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_RUNTIMESTATESTORE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::LegacyScrollViewAdapterPluginService* get_PluginStore()
		{
			return ((::NAPScrollView::DataStruct::LegacyScrollViewAdapterPluginService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_PLUGINSTORE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterScroll* get_Scroll()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterScroll*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_SCROLL_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterInput* get_Input()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_INPUT_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterState* get_State()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterState*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_STATE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterRuntimeStateService* get_RuntimeState()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterRuntimeStateService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_RUNTIMESTATE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterRuntimeMutationService* get_RuntimeMutation()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterRuntimeMutationService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_RUNTIMEMUTATION_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::ScrollViewEventService* get_Events()
		{
			return ((::NAPScrollView::DataStruct::ScrollViewEventService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_EVENTS_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterConfigService* get_Config()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterConfigService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_CONFIG_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterPlugin* get_Plugin()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_PLUGIN_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterSelectClickService* get_SelectClick()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterSelectClickService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_SELECTCLICK_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewUnityQueryService* get_UnityQuery()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewUnityQueryService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_UNITYQUERY_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewLayoutService* get_LayoutService()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewLayoutService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_LAYOUTSERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewItemHierarchyService* get_ItemHierarchy()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewItemHierarchyService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_ITEMHIERARCHY_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewVisibilityService* get_Visibility()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewVisibilityService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_VISIBILITY_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewLayoutMutationService* get_LayoutMutation()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewLayoutMutationService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_LAYOUTMUTATION_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewTemplateService* get_Template()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewTemplateService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_TEMPLATE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewComponentEventService* get_ComponentEvents()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewComponentEventService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_COMPONENTEVENTS_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewPluginProxy* get_PluginProxy()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewPluginProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_PLUGINPROXY_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewEdgeAreaService* get_EdgeArea()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewEdgeAreaService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERSERVICES_GET_EDGEAREA_OFFSET))(this);
		}
	};
}
