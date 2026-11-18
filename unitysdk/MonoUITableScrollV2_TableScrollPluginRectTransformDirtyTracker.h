#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"

namespace MoleMole { class UIOnRectTransformDimensionsChangeHandler; }
namespace MoleMole { class UIOnTransformChildrenChangedHandler; }
namespace NAPScrollView::DataStruct { class IScrollViewPluginServiceProvider; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_MARKDYNAMICALLOCATEDIRTYONDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x16B3A5A0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16B39EA0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16B3A300)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONRECTTRANSFORMDIMENSIONSCHANGE_CONTENT_OFFSET UNITYSDK_OFFSET(0x16B3A4E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONRECTTRANSFORMDIMENSIONSCHANGE_VIEWRECT_OFFSET UNITYSDK_OFFSET(0x16B3A8B0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONTRANSFORMCHILDRENCHANGED_CONTENT_OFFSET UNITYSDK_OFFSET(0x16B3AAD0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x16B39E20)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16B3AB80)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16B3AC10)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginRectTransformDirtyTracker_TypeDefinitionIndex = 40075;

class MonoUITableScrollV2_TableScrollPluginRectTransformDirtyTracker : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::MoleMole::UIOnRectTransformDimensionsChangeHandler* _contentDimensionsChangedHandler; // 0x18
	::MoleMole::UIOnRectTransformDimensionsChangeHandler* _viewRectDimensionsChangedHandler; // 0x20

	::System::Void _ctor(::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* pluginServices)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER__CTOR_OFFSET))(this, pluginServices);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONAWAKE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnRectTransformDimensionsChange_Content(::MoleMole::UIOnRectTransformDimensionsChangeHandler* source)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIOnRectTransformDimensionsChangeHandler*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONRECTTRANSFORMDIMENSIONSCHANGE_CONTENT_OFFSET))(this, source);
	}

	::System::Void OnRectTransformDimensionsChange_ViewRect(::MoleMole::UIOnRectTransformDimensionsChangeHandler* source)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIOnRectTransformDimensionsChangeHandler*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONRECTTRANSFORMDIMENSIONSCHANGE_VIEWRECT_OFFSET))(this, source);
	}

	::System::Void MarkDynamicAllocateDirtyOnDimensionsChange(::MoleMole::UIOnRectTransformDimensionsChangeHandler* source)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIOnRectTransformDimensionsChangeHandler*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_MARKDYNAMICALLOCATEDIRTYONDIMENSIONSCHANGE_OFFSET))(this, source);
	}

	::System::Void OnTransformChildrenChanged_Content(::MoleMole::UIOnTransformChildrenChangedHandler* source)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIOnTransformChildrenChangedHandler*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONTRANSFORMCHILDRENCHANGED_CONTENT_OFFSET))(this, source);
	}

	::System::Void __base_OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER___BASE_ONAWAKE_OFFSET))(this);
	}

	::System::Void __base_OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER___BASE_ONDESTROY_OFFSET))(this);
	}
};
