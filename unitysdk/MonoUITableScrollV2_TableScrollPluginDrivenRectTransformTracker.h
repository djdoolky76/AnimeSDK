#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"
#include "unitysdk/UnityEngine/DrivenTransformProperties.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginDrivenRectTransformTracker___c__DisplayClass4_0.h"
#include "unitysdk/NAPScrollView/DataStruct/MoveContext.h"

namespace NAPScrollView::DataStruct { class IScrollViewPluginServiceProvider; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINDRIVENRECTTRANSFORMTRACKER_INITCONTENTRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x10597F30)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINDRIVENRECTTRANSFORMTRACKER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10597B90)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINDRIVENRECTTRANSFORMTRACKER_ONMOVE_OFFSET UNITYSDK_OFFSET(0x10598240)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINDRIVENRECTTRANSFORMTRACKER_REFRESHCONTENTRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x10597F80)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINDRIVENRECTTRANSFORMTRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x10597B10)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINDRIVENRECTTRANSFORMTRACKER__REFRESHCONTENTRECTTRANSFORM_G__REFRESHANCHORANDPIVOT_4_0_OFFSET UNITYSDK_OFFSET(0x105982C0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINDRIVENRECTTRANSFORMTRACKER__REFRESHCONTENTRECTTRANSFORM_G__REFRESHPOSITION_4_1_OFFSET UNITYSDK_OFFSET(0x10598710)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINDRIVENRECTTRANSFORMTRACKER___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x105988B0)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginDrivenRectTransformTracker_TypeDefinitionIndex = 40085;

class MonoUITableScrollV2_TableScrollPluginDrivenRectTransformTracker : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::UnityEngine::DrivenTransformProperties _drivenTransformProperties; // 0x18

	::System::Void _ctor(::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* pluginServices)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINDRIVENRECTTRANSFORMTRACKER__CTOR_OFFSET))(this, pluginServices);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINDRIVENRECTTRANSFORMTRACKER_ONAWAKE_OFFSET))(this);
	}

	::System::Void InitContentRectTransform()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINDRIVENRECTTRANSFORMTRACKER_INITCONTENTRECTTRANSFORM_OFFSET))(this);
	}

	::System::Void OnMove(::NAPScrollView::DataStruct::MoveContext context, ::System::Single currentPosition)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINDRIVENRECTTRANSFORMTRACKER_ONMOVE_OFFSET))(this, context, currentPosition);
	}

	::System::Void RefreshContentRectTransform()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINDRIVENRECTTRANSFORMTRACKER_REFRESHCONTENTRECTTRANSFORM_OFFSET))(this);
	}

	::System::Void _RefreshContentRectTransform_g__RefreshAnchorAndPivot_4_0(::MonoUITableScrollV2_TableScrollPluginDrivenRectTransformTracker___c__DisplayClass4_0& param_0)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginDrivenRectTransformTracker___c__DisplayClass4_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINDRIVENRECTTRANSFORMTRACKER__REFRESHCONTENTRECTTRANSFORM_G__REFRESHANCHORANDPIVOT_4_0_OFFSET))(this, param_0);
	}

	::System::Void _RefreshContentRectTransform_g__RefreshPosition_4_1(::MonoUITableScrollV2_TableScrollPluginDrivenRectTransformTracker___c__DisplayClass4_0& param_0)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginDrivenRectTransformTracker___c__DisplayClass4_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINDRIVENRECTTRANSFORMTRACKER__REFRESHCONTENTRECTTRANSFORM_G__REFRESHPOSITION_4_1_OFFSET))(this, param_0);
	}

	::System::Void __base_OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINDRIVENRECTTRANSFORMTRACKER___BASE_ONAWAKE_OFFSET))(this);
	}
};
