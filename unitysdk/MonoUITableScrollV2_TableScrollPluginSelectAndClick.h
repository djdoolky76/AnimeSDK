#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace NAPScrollView::DataStruct { class IScrollViewPluginServiceProvider; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_APPLYSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x1287BA00)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_CANCELSELECT_OFFSET UNITYSDK_OFFSET(0x1287B220)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_CHANGECURITEMINDEXINNER_OFFSET UNITYSDK_OFFSET(0x1287AE20)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_CHANGECURITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1287ADB0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_CLEARPENDINGSELECTITEM_OFFSET UNITYSDK_OFFSET(0x12879F60)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_CONSUMEPENDINGSELECTITEM_OFFSET UNITYSDK_OFFSET(0x1287BCE0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_GETVISIBLEITEMCONTROLLERBYDATAINDEX_OFFSET UNITYSDK_OFFSET(0x1287B780)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_GET_CURSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1287A010)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_GET_EMPTYDATA_OFFSET UNITYSDK_OFFSET(0x1287C020)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_ISOWNERINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1287A640)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_ISWAITINGFORREFRESHGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1287A750)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_ONCLEARALLITEMDATAS_OFFSET UNITYSDK_OFFSET(0x12879E40)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_ONCLICKCELL_OFFSET UNITYSDK_OFFSET(0x1287AB00)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12879E90)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_REFRESHSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x1287B600)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_REGISTERONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1287A2C0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_REGISTERONSELECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1287A320)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_SELECTITEMINNER_OFFSET UNITYSDK_OFFSET(0x1287A870)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_SELECTITEM_OFFSET UNITYSDK_OFFSET(0x1287A380)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_SETPENDINGSELECTALIGNDATAINDEX_OFFSET UNITYSDK_OFFSET(0x1287AC90)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_SET_CURSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1287A020)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_TRYVALIDATESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1287B8D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK__CTOR_OFFSET UNITYSDK_OFFSET(0x12879DD0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK___BASE_ONCLEARALLITEMDATAS_OFFSET UNITYSDK_OFFSET(0x1287C100)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1287C180)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginSelectAndClick_TypeDefinitionIndex = 40115;

class MonoUITableScrollV2_TableScrollPluginSelectAndClick : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::System::Action_1<::System::Int32>* _onClickCell; // 0x18
	::System::Action_1<::System::Int32>* _onSelectCell; // 0x20
	::System::Boolean _needTriggerSelectCallbackWhenReselect; // 0x28
	::System::Boolean _needTriggerClickCallbackWhenReselect; // 0x29
	::System::Byte _padding0[0x2];
	::System::Int32 _curSelectIndex; // 0x2C

	::System::Void _ctor(::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* pluginServices)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK__CTOR_OFFSET))(this, pluginServices);
	}

	::System::Void OnClearAllItemDatas()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_ONCLEARALLITEMDATAS_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_ONDESTROY_OFFSET))(this);
	}

	::System::Int32 get_CurSelectIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_GET_CURSELECTINDEX_OFFSET))(this);
	}

	::System::Void set_CurSelectIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_SET_CURSELECTINDEX_OFFSET))(this, value);
	}

	::System::Void RegisterOnClickCallback(::System::Action_1<::System::Int32>* onClick, ::System::Boolean needTriggerClickCallbackWhenReselect)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_REGISTERONCLICKCALLBACK_OFFSET))(this, onClick, needTriggerClickCallbackWhenReselect);
	}

	::System::Void RegisterOnSelectCallback(::System::Action_1<::System::Int32>* onSelect, ::System::Boolean needTriggerSelectCallbackWhenReselect)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_REGISTERONSELECTCALLBACK_OFFSET))(this, onSelect, needTriggerSelectCallbackWhenReselect);
	}

	::System::Void SelectItem(::System::Int32 index, ::System::Boolean ignoreClickCb, ::System::Boolean hasAnim, ::System::Boolean ignoreSelectCb)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_SELECTITEM_OFFSET))(this, index, ignoreClickCb, hasAnim, ignoreSelectCb);
	}

	::System::Void OnClickCell(::MoleMole::ScrollViewItemWidgetController* item)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_ONCLICKCELL_OFFSET))(this, item);
	}

	::System::Void ChangeCurItemIndex(::System::Int32 curIndex, ::System::Boolean ignoreClickCb, ::System::Boolean ignoreSelectCb)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_CHANGECURITEMINDEX_OFFSET))(this, curIndex, ignoreClickCb, ignoreSelectCb);
	}

	::System::Void CancelSelect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_CANCELSELECT_OFFSET))(this);
	}

	::System::Void RefreshSelectState(::System::Int32 dataIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_REFRESHSELECTSTATE_OFFSET))(this, dataIndex);
	}

	::System::Void SelectItemInner(::System::Int32 index, ::System::Boolean ignoreClickCb, ::System::Boolean hasAnim, ::System::Boolean ignoreSelectCb)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_SELECTITEMINNER_OFFSET))(this, index, ignoreClickCb, hasAnim, ignoreSelectCb);
	}

	::System::Boolean TryValidateSelectIndex(::System::Int32 index)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_TRYVALIDATESELECTINDEX_OFFSET))(this, index);
	}

	::System::Void ApplySelectState(::System::Int32 index, ::System::Boolean ignoreClickCb, ::System::Boolean ignoreSelectCb)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_APPLYSELECTSTATE_OFFSET))(this, index, ignoreClickCb, ignoreSelectCb);
	}

	::System::Void ChangeCurItemIndexInner(::System::Int32 curIndex, ::System::Boolean ignoreClickCb, ::System::Boolean ignoreSelectCb)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_CHANGECURITEMINDEXINNER_OFFSET))(this, curIndex, ignoreClickCb, ignoreSelectCb);
	}

	::System::Boolean IsOwnerInitialized()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_ISOWNERINITIALIZED_OFFSET))(this);
	}

	::System::Boolean IsWaitingForRefreshGameObject()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_ISWAITINGFORREFRESHGAMEOBJECT_OFFSET))(this);
	}

	::System::Void ConsumePendingSelectItem()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_CONSUMEPENDINGSELECTITEM_OFFSET))(this);
	}

	::System::Void ClearPendingSelectItem()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_CLEARPENDINGSELECTITEM_OFFSET))(this);
	}

	::System::Void SetPendingSelectAlignDataIndex(::System::Int32 dataIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_SETPENDINGSELECTALIGNDATAINDEX_OFFSET))(this, dataIndex);
	}

	::MoleMole::ScrollViewItemWidgetController* GetVisibleItemControllerByDataIndex(::System::Int32 dataIndex)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_GETVISIBLEITEMCONTROLLERBYDATAINDEX_OFFSET))(this, dataIndex);
	}

	::System::Object* get_EmptyData()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK_GET_EMPTYDATA_OFFSET))(this);
	}

	::System::Void __base_OnClearAllItemDatas()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK___BASE_ONCLEARALLITEMDATAS_OFFSET))(this);
	}

	::System::Void __base_OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSELECTANDCLICK___BASE_ONDESTROY_OFFSET))(this);
	}
};
