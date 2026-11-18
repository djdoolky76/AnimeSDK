#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"
#include "unitysdk/NAPScrollView/DataStruct/TempRecycleScope.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace NAPScrollView::DataStruct { class IScrollViewPluginServiceProvider; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_ALLOCATESCROLLITEM_OFFSET UNITYSDK_OFFSET(0xE54C6C0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_CREATESCROLLVIEWITEM_OFFSET UNITYSDK_OFFSET(0xE54CC60)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET UNITYSDK_OFFSET(0xE54CA80)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_POPTEMPRECYCLESCOPE_OFFSET UNITYSDK_OFFSET(0xE54CBF0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_PUSHTEMPRECYCLESCOPE_OFFSET UNITYSDK_OFFSET(0xE54CB90)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_RECYCLEALLSCROLLITEMS_OFFSET UNITYSDK_OFFSET(0xE54BE20)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_RECYCLESCROLLITEM_OFFSET UNITYSDK_OFFSET(0xE54C110)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE__ALLOCATESCROLLITEM_OFFSET UNITYSDK_OFFSET(0xE54C710)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE__CTOR_OFFSET UNITYSDK_OFFSET(0xE54BDA0)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginTemplateAllocate_TypeDefinitionIndex = 40111;

class MonoUITableScrollV2_TableScrollPluginTemplateAllocate : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::System::Int32 _tempRecycle; // 0x18

	::System::Void _ctor(::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* pluginServices)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE__CTOR_OFFSET))(this, pluginServices);
	}

	::System::Void RecycleAllScrollItems()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_RECYCLEALLSCROLLITEMS_OFFSET))(this);
	}

	::System::Void RecycleScrollItem(::MoleMole::ScrollViewItemWidgetController* scrollViewItem)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_RECYCLESCROLLITEM_OFFSET))(this, scrollViewItem);
	}

	::MoleMole::ScrollViewItemWidgetController* AllocateScrollItem(::System::Int32 dataIndex)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_ALLOCATESCROLLITEM_OFFSET))(this, dataIndex);
	}

	::System::Void FlushAllTempRecycleItemToRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET))(this);
	}

	::System::Void PushTempRecycleScope(::NAPScrollView::DataStruct::TempRecycleScope tempRecycleScope)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::TempRecycleScope))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_PUSHTEMPRECYCLESCOPE_OFFSET))(this, tempRecycleScope);
	}

	::System::Void PopTempRecycleScope(::NAPScrollView::DataStruct::TempRecycleScope tempRecycleScope)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::TempRecycleScope))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_POPTEMPRECYCLESCOPE_OFFSET))(this, tempRecycleScope);
	}

	::MoleMole::ScrollViewItemWidgetController* _AllocateScrollItem(::System::Int32 dataIndex)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE__ALLOCATESCROLLITEM_OFFSET))(this, dataIndex);
	}

	::MoleMole::ScrollViewItemWidgetController* CreateScrollViewItem(::System::Int32 dataIndex)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINTEMPLATEALLOCATE_CREATESCROLLVIEWITEM_OFFSET))(this, dataIndex);
	}
};
