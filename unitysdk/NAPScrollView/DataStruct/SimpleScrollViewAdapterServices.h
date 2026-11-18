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
namespace NAPScrollView::DataStruct { class PluginSelectClickPassthrough; }
namespace NAPScrollView::DataStruct { class ScrollViewEventService; }
namespace NAPScrollView::DataStruct { class SimpleComponentEventService; }
namespace NAPScrollView::DataStruct { class SimpleConfigService; }
namespace NAPScrollView::DataStruct { class SimpleDataService; }
namespace NAPScrollView::DataStruct { class SimpleInputService; }
namespace NAPScrollView::DataStruct { class SimpleItemHierarchyService; }
namespace NAPScrollView::DataStruct { class SimpleLayoutMutationService; }
namespace NAPScrollView::DataStruct { class SimpleLayoutService; }
namespace NAPScrollView::DataStruct { class SimpleLifecycleService; }
namespace NAPScrollView::DataStruct { class SimpleLogicService; }
namespace NAPScrollView::DataStruct { class SimplePluginService; }
namespace NAPScrollView::DataStruct { class SimpleRuntimeStateService; }
namespace NAPScrollView::DataStruct { class SimpleScrollService; }
namespace NAPScrollView::DataStruct { class SimpleStateService; }
namespace NAPScrollView::DataStruct { class SimpleTemplateService; }
namespace NAPScrollView::DataStruct { class SimpleUnityQueryService; }
namespace NAPScrollView::DataStruct { class SimpleVisibilityService; }

#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_COMPONENTEVENTS_OFFSET UNITYSDK_OFFSET(0x13ED0900)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_CONFIGSERVICE_OFFSET UNITYSDK_OFFSET(0x13ED0630)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x13ED0870)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_DATA_OFFSET UNITYSDK_OFFSET(0x13ED0680)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_EDGEAREA_OFFSET UNITYSDK_OFFSET(0x13ED09A0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x13ED06E0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_INPUT_OFFSET UNITYSDK_OFFSET(0x13ED06A0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_ITEMHIERARCHY_OFFSET UNITYSDK_OFFSET(0x13ED08C0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_LAYOUTMUTATION_OFFSET UNITYSDK_OFFSET(0x13ED08E0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_LAYOUTSERVICE_OFFSET UNITYSDK_OFFSET(0x13ED08B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_LIFECYCLE_OFFSET UNITYSDK_OFFSET(0x13ED0670)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_LOGICSERVICE_OFFSET UNITYSDK_OFFSET(0x13ED0660)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0x13ED04B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x13ED0490)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_PLUGINPROXY_OFFSET UNITYSDK_OFFSET(0x13ED0910)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_PLUGINSERVICE_OFFSET UNITYSDK_OFFSET(0x13ED0650)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_PLUGIN_OFFSET UNITYSDK_OFFSET(0x13ED0880)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_RUNTIMEMUTATION_OFFSET UNITYSDK_OFFSET(0x13ED06D0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_RUNTIMESTATESERVICE_OFFSET UNITYSDK_OFFSET(0x13ED0640)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_RUNTIMESTATE_OFFSET UNITYSDK_OFFSET(0x13ED06C0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_SCROLL_OFFSET UNITYSDK_OFFSET(0x13ED0690)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_SELECTCLICK_OFFSET UNITYSDK_OFFSET(0x13ED0890)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_STATE_OFFSET UNITYSDK_OFFSET(0x13ED06B0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x13ED08F0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_UNITYQUERY_OFFSET UNITYSDK_OFFSET(0x13ED08A0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x13ED08D0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x13ED04A0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED0280)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int SimpleScrollViewAdapterServices_TypeDefinitionIndex = 51634;

	class SimpleScrollViewAdapterServices : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::IScrollViewPluginProxy* _pluginProxy; // 0x10
		::NAPScrollView::DataStruct::EmptyRuntimeMutationService* _runtimeMutation; // 0x18
		::NAPScrollView::DataStruct::SimpleLayoutService* _layout; // 0x20
		::NAPScrollView::DataStruct::SimpleInputService* _input; // 0x28
		::NAPScrollView::DataStruct::SimpleLayoutMutationService* _layoutMutation; // 0x30
		::NAPScrollView::DataStruct::SimpleConfigService* _config; // 0x38
		::NAPScrollView::DataStruct::SimpleDataService* _data; // 0x40
		::NAPScrollView::DataStruct::SimpleItemHierarchyService* _itemHierarchy; // 0x48
		::NAPScrollView::DataStruct::SimplePluginService* _plugin; // 0x50
		::NAPScrollView::DataStruct::SimpleComponentEventService* _componentEvents; // 0x58
		::NAPScrollView::DataStruct::SimpleScrollService* _scroll; // 0x60
		::NAPScrollView::DataStruct::SimpleUnityQueryService* _unityQuery; // 0x68
		::MonoUITableScrollV2* _Owner_k__BackingField; // 0x70
		::NAPScrollView::DataStruct::SimpleLogicService* _logicService; // 0x78
		::NAPScrollView::DataStruct::PluginSelectClickPassthrough* _selectClick; // 0x80
		::NAPScrollView::DataStruct::SimpleTemplateService* _template; // 0x88
		::NAPScrollView::DataStruct::SimpleLifecycleService* _lifecycle; // 0x90
		::NAPScrollView::DataStruct::SimpleRuntimeStateService* _runtimeState; // 0x98
		::NAPScrollView::DataStruct::SimpleVisibilityService* _visibility; // 0xA0
		::NAPScrollView::DataStruct::SimpleStateService* _state; // 0xA8

		::System::Void _ctor(::MonoUITableScrollV2* owner)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES__CTOR_OFFSET))(this, owner);
		}

		::MonoUITableScrollV2* get_Owner()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::MonoUITableScrollV2* value)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_SET_OWNER_OFFSET))(this, value);
		}

		::MonoUITableScrollV2_BaseScrollLogic* get_Logic()
		{
			return ((::MonoUITableScrollV2_BaseScrollLogic*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_LOGIC_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::SimpleConfigService* get_ConfigService()
		{
			return ((::NAPScrollView::DataStruct::SimpleConfigService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_CONFIGSERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::SimpleRuntimeStateService* get_RuntimeStateService()
		{
			return ((::NAPScrollView::DataStruct::SimpleRuntimeStateService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_RUNTIMESTATESERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::SimplePluginService* get_PluginService()
		{
			return ((::NAPScrollView::DataStruct::SimplePluginService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_PLUGINSERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::SimpleLogicService* get_LogicService()
		{
			return ((::NAPScrollView::DataStruct::SimpleLogicService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_LOGICSERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterLifecycle* get_Lifecycle()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterLifecycle*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_LIFECYCLE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterData* get_Data()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_DATA_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterScroll* get_Scroll()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterScroll*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_SCROLL_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterInput* get_Input()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_INPUT_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterState* get_State()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterState*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_STATE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterRuntimeStateService* get_RuntimeState()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterRuntimeStateService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_RUNTIMESTATE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterRuntimeMutationService* get_RuntimeMutation()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterRuntimeMutationService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_RUNTIMEMUTATION_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::ScrollViewEventService* get_Events()
		{
			return ((::NAPScrollView::DataStruct::ScrollViewEventService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_EVENTS_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterConfigService* get_Config()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterConfigService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_CONFIG_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterPlugin* get_Plugin()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_PLUGIN_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewAdapterSelectClickService* get_SelectClick()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewAdapterSelectClickService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_SELECTCLICK_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewUnityQueryService* get_UnityQuery()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewUnityQueryService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_UNITYQUERY_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewLayoutService* get_LayoutService()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewLayoutService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_LAYOUTSERVICE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewItemHierarchyService* get_ItemHierarchy()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewItemHierarchyService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_ITEMHIERARCHY_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewVisibilityService* get_Visibility()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewVisibilityService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_VISIBILITY_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewLayoutMutationService* get_LayoutMutation()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewLayoutMutationService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_LAYOUTMUTATION_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewTemplateService* get_Template()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewTemplateService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_TEMPLATE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewComponentEventService* get_ComponentEvents()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewComponentEventService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_COMPONENTEVENTS_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewPluginProxy* get_PluginProxy()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewPluginProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_PLUGINPROXY_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewEdgeAreaService* get_EdgeArea()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewEdgeAreaService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLESCROLLVIEWADAPTERSERVICES_GET_EDGEAREA_OFFSET))(this);
		}
	};
}
