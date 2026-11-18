#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/Plugin/BasePlugin.h"

class MonoUITableScrollV2_ScrollViewServiceBundle;
namespace NAPScrollView::DataStruct { class IScrollViewAdapterData; }
namespace NAPScrollView::DataStruct { class IScrollViewAdapterScroll; }
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
namespace NAPScrollView::DataStruct { class IScrollViewPluginServiceProvider; }
namespace NAPScrollView::DataStruct { class IScrollViewTemplateService; }
namespace NAPScrollView::DataStruct { class IScrollViewUnityQueryService; }
namespace NAPScrollView::DataStruct { class IScrollViewVisibilityService; }
namespace NAPScrollView::DataStruct { class ScrollViewRuntimeState; }
namespace NAPScrollView::DataStruct { class ScrollViewSoundService; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINCOMPONENTEVENTS_OFFSET UNITYSDK_OFFSET(0x12879780)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINCONFIG_OFFSET UNITYSDK_OFFSET(0x12878DF0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINDATA_OFFSET UNITYSDK_OFFSET(0x128789B0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINEVENTS_OFFSET UNITYSDK_OFFSET(0x12879890)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINHOST_OFFSET UNITYSDK_OFFSET(0x12878CE0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINITEMHIERARCHY_OFFSET UNITYSDK_OFFSET(0x12879340)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINLAYOUTMUTATION_OFFSET UNITYSDK_OFFSET(0x12879560)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINLAYOUT_OFFSET UNITYSDK_OFFSET(0x12879120)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINLOGIC_OFFSET UNITYSDK_OFFSET(0x12879230)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINRUNTIMESTATE_OFFSET UNITYSDK_OFFSET(0x12879B10)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINRUNTIME_OFFSET UNITYSDK_OFFSET(0x12878F00)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINSCROLLVIEWSERVICES_OFFSET UNITYSDK_OFFSET(0x128799A0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINSCROLL_OFFSET UNITYSDK_OFFSET(0x12878AC0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINSOUND_OFFSET UNITYSDK_OFFSET(0x12879AB0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINSTATE_OFFSET UNITYSDK_OFFSET(0x12878BD0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINTEMPLATE_OFFSET UNITYSDK_OFFSET(0x12879670)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINUNITYQUERY_OFFSET UNITYSDK_OFFSET(0x12879010)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINVISIBILITY_OFFSET UNITYSDK_OFFSET(0x12879450)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x12879C20)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPlugin_TypeDefinitionIndex = 40147;

class MonoUITableScrollV2_TableScrollPlugin : public ::NAPScrollView::Plugin::BasePlugin
{
public:
	::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* _pluginServices; // 0x10

	::System::Void _ctor(::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* pluginServices)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN__CTOR_OFFSET))(this, pluginServices);
	}

	::NAPScrollView::DataStruct::IScrollViewAdapterData* get__pluginData()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewAdapterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINDATA_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::IScrollViewAdapterScroll* get__pluginScroll()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewAdapterScroll*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINSCROLL_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::IScrollViewAdapterState* get__pluginState()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewAdapterState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINSTATE_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::IScrollViewPluginHost* get__pluginHost()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewPluginHost*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINHOST_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::IScrollViewPluginConfigService* get__pluginConfig()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewPluginConfigService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINCONFIG_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::IScrollViewPluginRuntimeService* get__pluginRuntime()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewPluginRuntimeService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINRUNTIME_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::IScrollViewUnityQueryService* get__pluginUnityQuery()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewUnityQueryService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINUNITYQUERY_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::IScrollViewLayoutService* get__pluginLayout()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewLayoutService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINLAYOUT_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::IScrollViewLogicService* get__pluginLogic()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewLogicService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINLOGIC_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::IScrollViewItemHierarchyService* get__pluginItemHierarchy()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewItemHierarchyService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINITEMHIERARCHY_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::IScrollViewVisibilityService* get__pluginVisibility()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewVisibilityService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINVISIBILITY_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::IScrollViewLayoutMutationService* get__pluginLayoutMutation()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewLayoutMutationService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINLAYOUTMUTATION_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::IScrollViewTemplateService* get__pluginTemplate()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewTemplateService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINTEMPLATE_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::IScrollViewComponentEventService* get__pluginComponentEvents()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewComponentEventService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINCOMPONENTEVENTS_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::IScrollViewPluginEventBridge* get__pluginEvents()
	{
		return ((::NAPScrollView::DataStruct::IScrollViewPluginEventBridge*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINEVENTS_OFFSET))(this);
	}

	::MonoUITableScrollV2_ScrollViewServiceBundle* get__pluginScrollViewServices()
	{
		return ((::MonoUITableScrollV2_ScrollViewServiceBundle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINSCROLLVIEWSERVICES_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::ScrollViewSoundService* get__pluginSound()
	{
		return ((::NAPScrollView::DataStruct::ScrollViewSoundService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINSOUND_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::ScrollViewRuntimeState* get__pluginRuntimeState()
	{
		return ((::NAPScrollView::DataStruct::ScrollViewRuntimeState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN_GET__PLUGINRUNTIMESTATE_OFFSET))(this);
	}
};
