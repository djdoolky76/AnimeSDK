#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
class MonoUITableScrollV2_BaseScrollLogic;
namespace NAPScrollView::DataStruct { class EmptyRuntimeMutationService; }
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
namespace NAPScrollView::DataStruct { class NotSimpleConfigService; }
namespace NAPScrollView::DataStruct { class NotSimpleDataService; }
namespace NAPScrollView::DataStruct { class NotSimpleDummyService; }
namespace NAPScrollView::DataStruct { class NotSimpleDynamicAllocateService; }
namespace NAPScrollView::DataStruct { class NotSimpleEdgeAreaService; }
namespace NAPScrollView::DataStruct { class NotSimpleFeatureStateService; }
namespace NAPScrollView::DataStruct { class NotSimpleGridAlignService; }
namespace NAPScrollView::DataStruct { class NotSimpleInputService; }
namespace NAPScrollView::DataStruct { class NotSimpleItemHierarchyService; }
namespace NAPScrollView::DataStruct { class NotSimpleLayoutService; }
namespace NAPScrollView::DataStruct { class NotSimpleLazyRecycleService; }
namespace NAPScrollView::DataStruct { class NotSimpleLifecycleService; }
namespace NAPScrollView::DataStruct { class NotSimpleLogicService; }
namespace NAPScrollView::DataStruct { class NotSimplePluginService; }
namespace NAPScrollView::DataStruct { class NotSimpleRuntimeStateService; }
namespace NAPScrollView::DataStruct { class NotSimpleScrollService; }
namespace NAPScrollView::DataStruct { class NotSimpleScrollToTargetService; }
namespace NAPScrollView::DataStruct { class NotSimpleStateService; }
namespace NAPScrollView::DataStruct { class NotSimpleTemplateService; }
namespace NAPScrollView::DataStruct { class NotSimpleUnityMutationService; }
namespace NAPScrollView::DataStruct { class NotSimpleUnityQueryService; }
namespace NAPScrollView::DataStruct { class NotSimpleUnityService; }
namespace NAPScrollView::DataStruct { class NotSimpleVisibilityService; }
namespace NAPScrollView::DataStruct { class PluginSelectClickPassthrough; }
namespace NAPScrollView::DataStruct { class ScrollViewEventService; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_COMPONENTEVENTS_OFFSET UNITYSDK_OFFSET(0x105A0970)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_CONFIGSERVICE_OFFSET UNITYSDK_OFFSET(0x105A0620)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x105A08E0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_DATASERVICE_OFFSET UNITYSDK_OFFSET(0x105A0610)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_DATA_OFFSET UNITYSDK_OFFSET(0x105A06F0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_DUMMYSERVICE_OFFSET UNITYSDK_OFFSET(0x105A0690)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_DYNAMICALLOCATESERVICE_OFFSET UNITYSDK_OFFSET(0x105A0680)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_EDGEAREA_OFFSET UNITYSDK_OFFSET(0x105A0A10)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x105A0750)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_FEATURESTATESERVICE_OFFSET UNITYSDK_OFFSET(0x105A0630)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_GRIDALIGNSERVICE_OFFSET UNITYSDK_OFFSET(0x105A06C0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_INPUT_OFFSET UNITYSDK_OFFSET(0x105A0710)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_ITEMHIERARCHY_OFFSET UNITYSDK_OFFSET(0x105A0930)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_LAYOUTMUTATION_OFFSET UNITYSDK_OFFSET(0x105A0950)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_LAYOUTSERVICE_OFFSET UNITYSDK_OFFSET(0x105A0920)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_LAZYRECYCLESERVICE_OFFSET UNITYSDK_OFFSET(0x105A06A0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_LIFECYCLE_OFFSET UNITYSDK_OFFSET(0x105A06E0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_LOGICSERVICE_OFFSET UNITYSDK_OFFSET(0x105A0650)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0x105A0490)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x105A0470)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_PLUGINPROXY_OFFSET UNITYSDK_OFFSET(0x105A0980)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_PLUGINSERVICE_OFFSET UNITYSDK_OFFSET(0x105A06D0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_PLUGIN_OFFSET UNITYSDK_OFFSET(0x105A08F0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_RUNTIMEMUTATION_OFFSET UNITYSDK_OFFSET(0x105A0740)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_RUNTIMESTATE_OFFSET UNITYSDK_OFFSET(0x105A0730)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_SCROLLTOTARGETSERVICE_OFFSET UNITYSDK_OFFSET(0x105A06B0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_SCROLL_OFFSET UNITYSDK_OFFSET(0x105A0700)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_SELECTCLICK_OFFSET UNITYSDK_OFFSET(0x105A0900)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_STATE_OFFSET UNITYSDK_OFFSET(0x105A0720)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_TEMPLATESERVICE_OFFSET UNITYSDK_OFFSET(0x105A0670)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x105A0960)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_UNITYMUTATIONSERVICE_OFFSET UNITYSDK_OFFSET(0x105A0660)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_UNITYQUERY_OFFSET UNITYSDK_OFFSET(0x105A0910)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_UNITYSERVICE_OFFSET UNITYSDK_OFFSET(0x105A0640)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x105A0940)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x105A0480)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES__CTOR_OFFSET UNITYSDK_OFFSET(0x105A0170)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleScrollViewAdapterServices_TypeDefinitionIndex = 70256;

	class NotSimpleScrollViewAdapterServices : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::NotSimpleRuntimeStateService* _runtimeState; // 0x10
		::NAPScrollView::DataStruct::NotSimpleScrollService* _scroll; // 0x18
		::NAPScrollView::DataStruct::NotSimpleUnityMutationService* _unityMutation; // 0x20
		::NAPScrollView::DataStruct::IScrollViewPluginProxy* _pluginProxy; // 0x28
		::MonoUITableScrollV2* _Owner_k__BackingField; // 0x30
		::NAPScrollView::DataStruct::NotSimpleEdgeAreaService* _edgeArea; // 0x38
		::NAPScrollView::DataStruct::NotSimpleItemHierarchyService* _itemHierarchy; // 0x40
		::NAPScrollView::DataStruct::NotSimpleDynamicAllocateService* _dynamicAllocate; // 0x48
		::NAPScrollView::DataStruct::NotSimpleDummyService* _dummy; // 0x50
		::NAPScrollView::DataStruct::NotSimpleScrollToTargetService* _scrollToTarget; // 0x58
		::NAPScrollView::DataStruct::NotSimpleFeatureStateService* _featureState; // 0x60
		::NAPScrollView::DataStruct::NotSimplePluginService* _plugin; // 0x68
		::NAPScrollView::DataStruct::NotSimpleConfigService* _config; // 0x70
		::NAPScrollView::DataStruct::NotSimpleGridAlignService* _gridAlign; // 0x78
		::NAPScrollView::DataStruct::EmptyRuntimeMutationService* _runtimeMutation; // 0x80
		::NAPScrollView::DataStruct::NotSimpleStateService* _state; // 0x88
		::NAPScrollView::DataStruct::NotSimpleLifecycleService* _lifecycle; // 0x90
		::NAPScrollView::DataStruct::NotSimpleUnityService* _unity; // 0x98
		::NAPScrollView::DataStruct::NotSimpleUnityQueryService* _unityQuery; // 0xA0
		::NAPScrollView::DataStruct::NotSimpleVisibilityService* _visibility; // 0xA8
		::NAPScrollView::DataStruct::NotSimpleLazyRecycleService* _lazyRecycle; // 0xB0
		::NAPScrollView::DataStruct::NotSimpleLayoutService* _layout; // 0xB8
		::NAPScrollView::DataStruct::PluginSelectClickPassthrough* _selectClick; // 0xC0
		::NAPScrollView::DataStruct::NotSimpleDataService* _data; // 0xC8
		::NAPScrollView::DataStruct::NotSimpleInputService* _input; // 0xD0
		::NAPScrollView::DataStruct::NotSimpleTemplateService* _template; // 0xD8
		::NAPScrollView::DataStruct::NotSimpleLogicService* _logicService; // 0xE0

		::System::Void _ctor(::MonoUITableScrollV2* owner)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES__CTOR_OFFSET))(this, owner);
		}

		::MonoUITableScrollV2* get_Owner()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::MonoUITableScrollV2* value)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_SET_OWNER_OFFSET))(this, value);
		}

		::MonoUITableScrollV2_BaseScrollLogic* get_Logic()
		{
			return ((::MonoUITableScrollV2_BaseScrollLogic*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_LOGIC_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::NotSimpleDataService* get_DataService()
		{
			return ((::NAPScrollView::DataStruct::NotSimpleDataService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_DATASERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::NotSimpleConfigService* get_ConfigService()
		{
			return ((::NAPScrollView::DataStruct::NotSimpleConfigService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_CONFIGSERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::NotSimpleFeatureStateService* get_FeatureStateService()
		{
			return ((::NAPScrollView::DataStruct::NotSimpleFeatureStateService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_FEATURESTATESERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::NotSimpleUnityService* get_UnityService()
		{
			return ((::NAPScrollView::DataStruct::NotSimpleUnityService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_UNITYSERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::NotSimpleLogicService* get_LogicService()
		{
			return ((::NAPScrollView::DataStruct::NotSimpleLogicService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_LOGICSERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::NotSimpleUnityMutationService* get_UnityMutationService()
		{
			return ((::NAPScrollView::DataStruct::NotSimpleUnityMutationService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_UNITYMUTATIONSERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::NotSimpleTemplateService* get_TemplateService()
		{
			return ((::NAPScrollView::DataStruct::NotSimpleTemplateService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_TEMPLATESERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::NotSimpleDynamicAllocateService* get_DynamicAllocateService()
		{
			return ((::NAPScrollView::DataStruct::NotSimpleDynamicAllocateService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_DYNAMICALLOCATESERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::NotSimpleDummyService* get_DummyService()
		{
			return ((::NAPScrollView::DataStruct::NotSimpleDummyService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_DUMMYSERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::NotSimpleLazyRecycleService* get_LazyRecycleService()
		{
			return ((::NAPScrollView::DataStruct::NotSimpleLazyRecycleService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_LAZYRECYCLESERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::NotSimpleScrollToTargetService* get_ScrollToTargetService()
		{
			return ((::NAPScrollView::DataStruct::NotSimpleScrollToTargetService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_SCROLLTOTARGETSERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::NotSimpleGridAlignService* get_GridAlignService()
		{
			return ((::NAPScrollView::DataStruct::NotSimpleGridAlignService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_GRIDALIGNSERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::NotSimplePluginService* get_PluginService()
		{
			return ((::NAPScrollView::DataStruct::NotSimplePluginService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_PLUGINSERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterLifecycle* get_Lifecycle()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterLifecycle*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_LIFECYCLE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterData* get_Data()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_DATA_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterScroll* get_Scroll()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterScroll*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_SCROLL_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterInput* get_Input()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_INPUT_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterState* get_State()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterState*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_STATE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterRuntimeStateService* get_RuntimeState()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterRuntimeStateService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_RUNTIMESTATE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterRuntimeMutationService* get_RuntimeMutation()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterRuntimeMutationService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_RUNTIMEMUTATION_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::ScrollViewEventService* get_Events()
		{
			return ((::NAPScrollView::DataStruct::ScrollViewEventService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_EVENTS_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterConfigService* get_Config()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterConfigService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_CONFIG_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterPlugin* get_Plugin()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_PLUGIN_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterSelectClickService* get_SelectClick()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterSelectClickService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_SELECTCLICK_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewUnityQueryService* get_UnityQuery()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewUnityQueryService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_UNITYQUERY_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewLayoutService* get_LayoutService()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewLayoutService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_LAYOUTSERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewItemHierarchyService* get_ItemHierarchy()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewItemHierarchyService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_ITEMHIERARCHY_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewVisibilityService* get_Visibility()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewVisibilityService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_VISIBILITY_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewLayoutMutationService* get_LayoutMutation()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewLayoutMutationService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_LAYOUTMUTATION_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewTemplateService* get_Template()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewTemplateService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_TEMPLATE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewComponentEventService* get_ComponentEvents()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewComponentEventService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_COMPONENTEVENTS_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewPluginProxy* get_PluginProxy()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewPluginProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_PLUGINPROXY_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewEdgeAreaService* get_EdgeArea()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewEdgeAreaService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLESCROLLVIEWADAPTERSERVICES_GET_EDGEAREA_OFFSET))(this);
		}
	};
}
