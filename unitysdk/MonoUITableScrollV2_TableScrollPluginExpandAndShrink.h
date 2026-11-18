#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUIExpandAndShrinkCell_ExpandState.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"
#include "unitysdk/System/Nullable_1.h"

class MonoUIExpandAndShrinkCell;
namespace NAPScrollView::DataStruct { class IScrollViewPluginServiceProvider; }
namespace System { class Action; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_EXPAND_OFFSET UNITYSDK_OFFSET(0x170EE8C0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_GET__MONOUIEXPANDANDSHRINKCELL_OFFSET UNITYSDK_OFFSET(0x170EE690)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_REGISTEREXPANDEND_OFFSET UNITYSDK_OFFSET(0x170EEBE0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_REGISTERSHRINKEND_OFFSET UNITYSDK_OFFSET(0x170EED50)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_SHRINK_OFFSET UNITYSDK_OFFSET(0x170EEA50)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_UPDATE_OFFSET UNITYSDK_OFFSET(0x170EE480)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK__CTOR_OFFSET UNITYSDK_OFFSET(0x170EE400)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x170EEEC0)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginExpandAndShrink_TypeDefinitionIndex = 40089;

class MonoUITableScrollV2_TableScrollPluginExpandAndShrink : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::System::Action* _onExpandEnd; // 0x18
	::MonoUIExpandAndShrinkCell* __monoUIExpandAndShrinkCell; // 0x20
	::System::Action* _onShrinkEnd; // 0x28
	::MonoUIExpandAndShrinkCell_ExpandState _expandState; // 0x30

	::System::Void _ctor(::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* pluginServices)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK__CTOR_OFFSET))(this, pluginServices);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_UPDATE_OFFSET))(this);
	}

	::System::Single Expand(::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Single(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_EXPAND_OFFSET))(this, normalizedTime);
	}

	::System::Single Shrink(::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Single(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_SHRINK_OFFSET))(this, normalizedTime);
	}

	::System::Void RegisterExpandEnd(::System::Action* callback)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_REGISTEREXPANDEND_OFFSET))(this, callback);
	}

	::System::Void RegisterShrinkEnd(::System::Action* callback)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_REGISTERSHRINKEND_OFFSET))(this, callback);
	}

	::MonoUIExpandAndShrinkCell* get__monoUIExpandAndShrinkCell()
	{
		return ((::MonoUIExpandAndShrinkCell*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_GET__MONOUIEXPANDANDSHRINKCELL_OFFSET))(this);
	}

	::System::Void __base_Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK___BASE_UPDATE_OFFSET))(this);
	}
};
