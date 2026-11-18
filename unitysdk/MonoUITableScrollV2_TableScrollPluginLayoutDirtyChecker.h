#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"

namespace MoleMole { class UIOnRectTransformDimensionsChangeHandler; }
namespace NAPScrollView::DataStruct { class IScrollViewPluginServiceProvider; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAYOUTDIRTYCHECKER_ONRECTTRANSFORMDIMENSIONSCHANGE_CONTENT_OFFSET UNITYSDK_OFFSET(0xEB6E0F0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAYOUTDIRTYCHECKER_ONRECTTRANSFORMDIMENSIONSCHANGE_VIEWRECT_OFFSET UNITYSDK_OFFSET(0xEB6E210)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAYOUTDIRTYCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0xEB6E070)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginLayoutDirtyChecker_TypeDefinitionIndex = 40139;

class MonoUITableScrollV2_TableScrollPluginLayoutDirtyChecker : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::System::Void _ctor(::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* pluginServices)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAYOUTDIRTYCHECKER__CTOR_OFFSET))(this, pluginServices);
	}

	::System::Void OnRectTransformDimensionsChange_Content(::MoleMole::UIOnRectTransformDimensionsChangeHandler* source)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIOnRectTransformDimensionsChangeHandler*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAYOUTDIRTYCHECKER_ONRECTTRANSFORMDIMENSIONSCHANGE_CONTENT_OFFSET))(this, source);
	}

	::System::Void OnRectTransformDimensionsChange_ViewRect(::MoleMole::UIOnRectTransformDimensionsChangeHandler* source)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIOnRectTransformDimensionsChangeHandler*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAYOUTDIRTYCHECKER_ONRECTTRANSFORMDIMENSIONSCHANGE_VIEWRECT_OFFSET))(this, source);
	}
};
