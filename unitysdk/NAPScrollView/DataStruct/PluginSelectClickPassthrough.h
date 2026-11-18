#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2_TableScrollPluginSelectAndClick;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace NAPScrollView::DataStruct { class IScrollViewAdapterPlugin; }
namespace System { template <typename T> class Action_1; }

#define NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_CANCELSELECT_OFFSET UNITYSDK_OFFSET(0x113B2960)
#define NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_CHANGECURITEMINDEX_OFFSET UNITYSDK_OFFSET(0x113B28C0)
#define NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_GET_CURSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x113B25D0)
#define NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_GET_PLUGIN_OFFSET UNITYSDK_OFFSET(0x113B24D0)
#define NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_ONCLICKCELL_OFFSET UNITYSDK_OFFSET(0x113B2850)
#define NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_REFRESHSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x113B29C0)
#define NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_REGISTERONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x113B26A0)
#define NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_REGISTERONSELECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x113B2730)
#define NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_SELECTITEM_OFFSET UNITYSDK_OFFSET(0x113B27C0)
#define NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_SET_CURSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x113B2630)
#define NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH__CTOR_OFFSET UNITYSDK_OFFSET(0x113B24C0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int PluginSelectClickPassthrough_TypeDefinitionIndex = 47334;

	class PluginSelectClickPassthrough : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::IScrollViewAdapterPlugin* _plugin; // 0x10

		::System::Void _ctor(::NAPScrollView::DataStruct::IScrollViewAdapterPlugin* plugin)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::IScrollViewAdapterPlugin*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH__CTOR_OFFSET))(this, plugin);
		}

		::MonoUITableScrollV2_TableScrollPluginSelectAndClick* get_Plugin()
		{
			return ((::MonoUITableScrollV2_TableScrollPluginSelectAndClick*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_GET_PLUGIN_OFFSET))(this);
		}

		::System::Int32 get_CurSelectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_GET_CURSELECTINDEX_OFFSET))(this);
		}

		::System::Void set_CurSelectIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_SET_CURSELECTINDEX_OFFSET))(this, value);
		}

		::System::Void RegisterOnClickCallback(::System::Action_1<::System::Int32>* onClick, ::System::Boolean needTriggerClickCallbackWhenReselect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_REGISTERONCLICKCALLBACK_OFFSET))(this, onClick, needTriggerClickCallbackWhenReselect);
		}

		::System::Void RegisterOnSelectCallback(::System::Action_1<::System::Int32>* onSelect, ::System::Boolean needTriggerSelectCallbackWhenReselect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_REGISTERONSELECTCALLBACK_OFFSET))(this, onSelect, needTriggerSelectCallbackWhenReselect);
		}

		::System::Void SelectItem(::System::Int32 index, ::System::Boolean ignoreClickCb, ::System::Boolean hasAnim, ::System::Boolean ignoreSelectCb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_SELECTITEM_OFFSET))(this, index, ignoreClickCb, hasAnim, ignoreSelectCb);
		}

		::System::Void OnClickCell(::MoleMole::ScrollViewItemWidgetController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_ONCLICKCELL_OFFSET))(this, item);
		}

		::System::Void ChangeCurItemIndex(::System::Int32 curIndex, ::System::Boolean ignoreClickCb, ::System::Boolean ignoreSelectCb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_CHANGECURITEMINDEX_OFFSET))(this, curIndex, ignoreClickCb, ignoreSelectCb);
		}

		::System::Void CancelSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_CANCELSELECT_OFFSET))(this);
		}

		::System::Void RefreshSelectState(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_PLUGINSELECTCLICKPASSTHROUGH_REFRESHSELECTSTATE_OFFSET))(this, dataIndex);
		}
	};
}
