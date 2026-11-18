#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"

namespace NAPScrollView::DataStruct { class IScrollViewPluginServiceProvider; }

#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_ABS_OFFSET UNITYSDK_OFFSET(0x12FD7AE0)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_ADD_1_OFFSET UNITYSDK_OFFSET(0x12FD7690)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_ADD_OFFSET UNITYSDK_OFFSET(0x12FD75E0)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_DELTA_OFFSET UNITYSDK_OFFSET(0x12FD7520)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_DIV_OFFSET UNITYSDK_OFFSET(0x12FD7870)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_ISEQUALTO_OFFSET UNITYSDK_OFFSET(0x12FD7C40)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_ISGREATERTHAN_OFFSET UNITYSDK_OFFSET(0x12FD7D90)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_LERP_OFFSET UNITYSDK_OFFSET(0x12FD7D10)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x12FD7BC0)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_MUL_1_OFFSET UNITYSDK_OFFSET(0x12FD77C0)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_MUL_OFFSET UNITYSDK_OFFSET(0x12FD7700)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_POSTPROCESSROLLINGTARGET_OFFSET UNITYSDK_OFFSET(0x12FD72D0)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SIGN_OFFSET UNITYSDK_OFFSET(0x12FD7E20)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_STOPTHESHOLD_OFFSET UNITYSDK_OFFSET(0x12FD7B70)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_ZERO_OFFSET UNITYSDK_OFFSET(0x12FD7920)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2__CTOR_OFFSET UNITYSDK_OFFSET(0x12FD71F0)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2___BASE_POSTPROCESSROLLINGTARGET_OFFSET UNITYSDK_OFFSET(0x12FD7E80)

namespace NAPScrollView::Plugin
{
	inline static constexpr unsigned int TableScrollPluginRollingV2_TypeDefinitionIndex = 55373;

	class TableScrollPluginRollingV2
	{
	public:
		::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* _pluginServices; // 0x50

		::System::Void _ctor(::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* pluginServices)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2__CTOR_OFFSET))(this, pluginServices);
		}

		::NAPScrollView::DataStruct::ScrollFloat PostProcessRollingTarget(::NAPScrollView::DataStruct::ScrollFloat target)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_POSTPROCESSROLLINGTARGET_OFFSET))(this, target);
		}

		::NAPScrollView::DataStruct::ScrollFloat Delta(::NAPScrollView::DataStruct::ScrollFloat source, ::NAPScrollView::DataStruct::ScrollFloat other)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_DELTA_OFFSET))(this, source, other);
		}

		::NAPScrollView::DataStruct::ScrollFloat Add(::NAPScrollView::DataStruct::ScrollFloat source, ::NAPScrollView::DataStruct::ScrollFloat other)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_ADD_OFFSET))(this, source, other);
		}

		::NAPScrollView::DataStruct::ScrollFloat Add_1(::NAPScrollView::DataStruct::ScrollFloat source, ::System::Single other)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_ADD_1_OFFSET))(this, source, other);
		}

		::NAPScrollView::DataStruct::ScrollFloat Mul(::NAPScrollView::DataStruct::ScrollFloat source, ::NAPScrollView::DataStruct::ScrollFloat other)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_MUL_OFFSET))(this, source, other);
		}

		::NAPScrollView::DataStruct::ScrollFloat Mul_1(::NAPScrollView::DataStruct::ScrollFloat source, ::System::Single other)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_MUL_1_OFFSET))(this, source, other);
		}

		::NAPScrollView::DataStruct::ScrollFloat Div(::NAPScrollView::DataStruct::ScrollFloat source, ::System::Single other)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_DIV_OFFSET))(this, source, other);
		}

		::NAPScrollView::DataStruct::ScrollFloat Zero()
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_ZERO_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::ScrollFloat Abs(::NAPScrollView::DataStruct::ScrollFloat source)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_ABS_OFFSET))(this, source);
		}

		::System::Single StopTheshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_STOPTHESHOLD_OFFSET))(this);
		}

		::System::Single Magnitude(::NAPScrollView::DataStruct::ScrollFloat source)
		{
			return ((::System::Single(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_MAGNITUDE_OFFSET))(this, source);
		}

		::System::Boolean IsEqualTo(::NAPScrollView::DataStruct::ScrollFloat source, ::NAPScrollView::DataStruct::ScrollFloat other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_ISEQUALTO_OFFSET))(this, source, other);
		}

		::NAPScrollView::DataStruct::ScrollFloat Lerp(::NAPScrollView::DataStruct::ScrollFloat soure, ::NAPScrollView::DataStruct::ScrollFloat target, ::System::Single ratio)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_LERP_OFFSET))(this, soure, target, ratio);
		}

		::System::Boolean IsGreaterThan(::NAPScrollView::DataStruct::ScrollFloat soure, ::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_ISGREATERTHAN_OFFSET))(this, soure, value);
		}

		::NAPScrollView::DataStruct::ScrollFloat Sign(::NAPScrollView::DataStruct::ScrollFloat source)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SIGN_OFFSET))(this, source);
		}

		::NAPScrollView::DataStruct::ScrollFloat __base_PostProcessRollingTarget(::NAPScrollView::DataStruct::ScrollFloat P0)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2___BASE_POSTPROCESSROLLINGTARGET_OFFSET))(this, P0);
		}
	};
}
