#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/MoveReason.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NAPScrollView/DataStruct/MoveContext.h"

namespace MoleMole { class AnimationCurveEx; }
namespace NAPScrollView::DataStruct { class IScrollViewPluginServiceProvider; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_ADD_ONMOVE_OFFSET UNITYSDK_OFFSET(0x105A1250)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_ADD__ONMOVE_OFFSET UNITYSDK_OFFSET(0x105A0A90)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x105A0F10)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_GET_ENABLEROLLING_OFFSET UNITYSDK_OFFSET(0x105A0D80)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0x105A18B0)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_GET_ONSTOP_OFFSET UNITYSDK_OFFSET(0x105A13B0)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_GET_ROLLINGCURVE_OFFSET UNITYSDK_OFFSET(0x105A1A50)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_GET_ROLLINGSPEEDTODISTANCE_OFFSET UNITYSDK_OFFSET(0x105A1720)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_GET_ROLLINGTIME_OFFSET UNITYSDK_OFFSET(0x105A1590)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_ISCONTENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x105A1BE0)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_MOVE_OFFSET UNITYSDK_OFFSET(0x105A1DA0)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_ONMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x105A1FC0)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_REMOVE_ONMOVE_OFFSET UNITYSDK_OFFSET(0x105A1300)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_REMOVE__ONMOVE_OFFSET UNITYSDK_OFFSET(0x105A0B10)
#define NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x105A0B90)

namespace NAPScrollView::Plugin
{
	inline static constexpr unsigned int TableScrollPluginRollingV2_ServiceRollingOwner_TypeDefinitionIndex = 55374;

	class TableScrollPluginRollingV2_ServiceRollingOwner : public ::System::Object
	{
	public:
		::System::Action_2<::NAPScrollView::DataStruct::MoveReason, ::NAPScrollView::DataStruct::ScrollFloat>* _onMove; // 0x10
		::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* _pluginServices; // 0x18

		::System::Void _ctor(::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* pluginServices)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER__CTOR_OFFSET))(this, pluginServices);
		}

		::System::Void add__onMove(::System::Action_2<::NAPScrollView::DataStruct::MoveReason, ::NAPScrollView::DataStruct::ScrollFloat>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::NAPScrollView::DataStruct::MoveReason, ::NAPScrollView::DataStruct::ScrollFloat>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_ADD__ONMOVE_OFFSET))(this, value);
		}

		::System::Void remove__onMove(::System::Action_2<::NAPScrollView::DataStruct::MoveReason, ::NAPScrollView::DataStruct::ScrollFloat>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::NAPScrollView::DataStruct::MoveReason, ::NAPScrollView::DataStruct::ScrollFloat>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_REMOVE__ONMOVE_OFFSET))(this, value);
		}

		::System::Boolean get_EnableRolling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_GET_ENABLEROLLING_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::ScrollFloat get_CurrentValue()
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_GET_CURRENTVALUE_OFFSET))(this);
		}

		::System::Void add_OnMove(::System::Action_2<::NAPScrollView::DataStruct::MoveReason, ::NAPScrollView::DataStruct::ScrollFloat>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::NAPScrollView::DataStruct::MoveReason, ::NAPScrollView::DataStruct::ScrollFloat>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_ADD_ONMOVE_OFFSET))(this, value);
		}

		::System::Void remove_OnMove(::System::Action_2<::NAPScrollView::DataStruct::MoveReason, ::NAPScrollView::DataStruct::ScrollFloat>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::NAPScrollView::DataStruct::MoveReason, ::NAPScrollView::DataStruct::ScrollFloat>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_REMOVE_ONMOVE_OFFSET))(this, value);
		}

		::System::Action* get_OnStop()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_GET_ONSTOP_OFFSET))(this);
		}

		::System::Single get_RollingTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_GET_ROLLINGTIME_OFFSET))(this);
		}

		::System::Single get_RollingSpeedToDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_GET_ROLLINGSPEEDTODISTANCE_OFFSET))(this);
		}

		::System::Boolean get_isDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_GET_ISDRAGGING_OFFSET))(this);
		}

		::MoleMole::AnimationCurveEx* get_RollingCurve()
		{
			return ((::MoleMole::AnimationCurveEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_GET_ROLLINGCURVE_OFFSET))(this);
		}

		::System::Boolean IsContentOutofRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_ISCONTENTOUTOFRANGE_OFFSET))(this);
		}

		::System::Void Move(::NAPScrollView::DataStruct::ScrollFloat delta)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_MOVE_OFFSET))(this, delta);
		}

		::System::Void OnMoveCallback(::NAPScrollView::DataStruct::MoveContext moveContext, ::System::Single currentPosition)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_TABLESCROLLPLUGINROLLINGV2_SERVICEROLLINGOWNER_ONMOVECALLBACK_OFFSET))(this, moveContext, currentPosition);
		}
	};
}
