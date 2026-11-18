#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/DummyEnd.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollBounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MonoUITableScrollV2_BaseScrollLogic;
namespace MoleMole { class ScrollViewDummyItem; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace NAPScrollView::DataStruct { class NotSimpleScrollViewAdapterServices; }
namespace UnityEngine { class RectTransform; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_CALRECYCLEDLAYOUTSTEPATAXIS_OFFSET UNITYSDK_OFFSET(0x120EDFF0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_CALSHIFTSTARTEDGECOLLAPSEATAXIS_OFFSET UNITYSDK_OFFSET(0x120EF270)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x120EE560)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_CREATEDUMMYFORRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0x120EEE60)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_CREATEINITDUMMY_OFFSET UNITYSDK_OFFSET(0x120EE310)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_GET_DATACONTENT_OFFSET UNITYSDK_OFFSET(0x120EDE60)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0x120EDE40)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_TOLAYOUTSTEPSIZE_OFFSET UNITYSDK_OFFSET(0x120EDF50)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_TRYFINDFIRSTMATCHCANRECYCLESCROLLVIEWITEM_OFFSET UNITYSDK_OFFSET(0x120EE7B0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_TRYFINDLASTMATCHCANRECYCLESCROLLVIEWITEM_OFFSET UNITYSDK_OFFSET(0x120EF490)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_TRYRECYCLESCROLLITEMFROMEND_OFFSET UNITYSDK_OFFSET(0x120EF330)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_TRYRECYCLESCROLLITEMFROMSTART_OFFSET UNITYSDK_OFFSET(0x120EE400)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x120EDE30)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleLazyRecycleService_TypeDefinitionIndex = 89994;

	class NotSimpleLazyRecycleService : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* _services; // 0x10

		::System::Void _ctor(::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE__CTOR_OFFSET))(this, services);
		}

		::MonoUITableScrollV2_BaseScrollLogic* get_Logic()
		{
			return ((::MonoUITableScrollV2_BaseScrollLogic*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_GET_LOGIC_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_DataContent()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_GET_DATACONTENT_OFFSET))(this);
		}

		::System::Single ToLayoutStepSize(::System::Single itemRectSizeAtAxis)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_TOLAYOUTSTEPSIZE_OFFSET))(this, itemRectSizeAtAxis);
		}

		::System::Single CalRecycledLayoutStepAtAxis(::MoleMole::ScrollViewItemWidgetController* recycleScrollItem, ::NAPScrollView::DataStruct::ScrollBounds childBounds)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*, ::NAPScrollView::DataStruct::ScrollBounds))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_CALRECYCLEDLAYOUTSTEPATAXIS_OFFSET))(this, recycleScrollItem, childBounds);
		}

		::MoleMole::ScrollViewDummyItem* CreateInitDummy(::System::Int32 dataIndex, ::UnityEngine::Vector2 itemSize)
		{
			return ((::MoleMole::ScrollViewDummyItem*(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_CREATEINITDUMMY_OFFSET))(this, dataIndex, itemSize);
		}

		::System::Boolean TryRecycleScrollItemFromStart(::System::Int32 newItemDataIndex, ::MoleMole::ScrollViewItemWidgetController*& recycleScrollItem, ::System::Boolean& dummyCreated, ::System::Single& recycledSizeAtAxis, ::System::Single& shiftedAwaySizeAtAxis)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ScrollViewItemWidgetController*&, ::System::Boolean&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_TRYRECYCLESCROLLITEMFROMSTART_OFFSET))(this, newItemDataIndex, recycleScrollItem, dummyCreated, recycledSizeAtAxis, shiftedAwaySizeAtAxis);
		}

		::System::Boolean TryRecycleScrollItemFromEnd(::System::Int32 newItemDataIndex, ::MoleMole::ScrollViewItemWidgetController*& recycleScrollItem, ::System::Boolean& dummyCreated, ::System::Single& recycledSizeAtAxis, ::System::Single& shiftedAwaySizeAtAxis)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ScrollViewItemWidgetController*&, ::System::Boolean&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_TRYRECYCLESCROLLITEMFROMEND_OFFSET))(this, newItemDataIndex, recycleScrollItem, dummyCreated, recycledSizeAtAxis, shiftedAwaySizeAtAxis);
		}

		::System::Boolean TryFindFirstMatchCanRecycleScrollViewItem(::System::Int32 newItemDataIndex, ::MoleMole::ScrollViewItemWidgetController*& recycleScrollItem, ::NAPScrollView::DataStruct::ScrollBounds& childBounds)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ScrollViewItemWidgetController*&, ::NAPScrollView::DataStruct::ScrollBounds&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_TRYFINDFIRSTMATCHCANRECYCLESCROLLVIEWITEM_OFFSET))(this, newItemDataIndex, recycleScrollItem, childBounds);
		}

		::System::Boolean TryFindLastMatchCanRecycleScrollViewItem(::System::Int32 newItemDataIndex, ::MoleMole::ScrollViewItemWidgetController*& recycleScrollItem, ::NAPScrollView::DataStruct::ScrollBounds& childBounds)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ScrollViewItemWidgetController*&, ::NAPScrollView::DataStruct::ScrollBounds&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_TRYFINDLASTMATCHCANRECYCLESCROLLVIEWITEM_OFFSET))(this, newItemDataIndex, recycleScrollItem, childBounds);
		}

		::System::Boolean CreateDummyForRecycledItem(::MoleMole::ScrollViewItemWidgetController* recycleScrollItem, ::NAPScrollView::DataStruct::ScrollBounds childBounds, ::NAPScrollView::DataStruct::DummyEnd end, ::UnityEngine::Vector2& shiftedAwaySize, ::UnityEngine::Vector2& newOccupySize)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*, ::NAPScrollView::DataStruct::ScrollBounds, ::NAPScrollView::DataStruct::DummyEnd, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_CREATEDUMMYFORRECYCLEDITEM_OFFSET))(this, recycleScrollItem, childBounds, end, shiftedAwaySize, newOccupySize);
		}

		::System::Single CalShiftStartEdgeCollapseAtAxis(::UnityEngine::Vector2 shiftedAwaySize)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_CALSHIFTSTARTEDGECOLLAPSEATAXIS_OFFSET))(this, shiftedAwaySize);
		}

		::System::Boolean CheckValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELAZYRECYCLESERVICE_CHECKVALID_OFFSET))(this);
		}
	};
}
