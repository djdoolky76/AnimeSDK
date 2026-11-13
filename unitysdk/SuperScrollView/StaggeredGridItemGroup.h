#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/ItemCornerEnum.h"
#include "unitysdk/SuperScrollView/ListItemArrangeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace SuperScrollView { class ItemPosMgr; }
namespace SuperScrollView { class LoopStaggeredGridView; }
namespace SuperScrollView { class LoopStaggeredGridViewItem; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ScrollRect; }

#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_CHECKIFNEEDUPDATEITEMPOS_OFFSET UNITYSDK_OFFSET(0x171359E0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_CLEARALLTMPRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0x17139940)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x17131430)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETCONTENTPANELSIZE_OFFSET UNITYSDK_OFFSET(0x17136F80)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETINDEXINSHOWNITEMLIST_OFFSET UNITYSDK_OFFSET(0x17139210)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETITEMCORNERPOSINVIEWPORT_OFFSET UNITYSDK_OFFSET(0x17139E50)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETITEMPOS_OFFSET UNITYSDK_OFFSET(0x17135F20)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETNEWITEMBYINDEXINGROUP_OFFSET UNITYSDK_OFFSET(0x171398E0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETPLUSITEMINDEXANDPOSATGIVENPOS_OFFSET UNITYSDK_OFFSET(0x17139DC0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMBYINDEXINGROUP_OFFSET UNITYSDK_OFFSET(0x17133970)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0x17138F80)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMPOSMAXVALUE_OFFSET UNITYSDK_OFFSET(0x171369C0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_HADCREATEDITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x17139F70)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_ISDRAGING_OFFSET UNITYSDK_OFFSET(0x171391F0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_ITEMINDEXMAP_OFFSET UNITYSDK_OFFSET(0x17138F10)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_VIEWPORTHEIGHT_OFFSET UNITYSDK_OFFSET(0x17139180)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_VIEWPORTSIZE_OFFSET UNITYSDK_OFFSET(0x17139070)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_VIEWPORTWIDTH_OFFSET UNITYSDK_OFFSET(0x17139110)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_INIT_OFFSET UNITYSDK_OFFSET(0x17131530)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_ONITEMSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x17133C10)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RECYCLEALLITEM_OFFSET UNITYSDK_OFFSET(0x171342C0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RECYCLEITEMTMP_OFFSET UNITYSDK_OFFSET(0x17139880)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEMWITHFIRSTINDEXANDPOS_OFFSET UNITYSDK_OFFSET(0x17139990)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEMWITHFIRSTINDEXINGROUP_OFFSET UNITYSDK_OFFSET(0x171392D0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEM_OFFSET UNITYSDK_OFFSET(0x17133B00)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHITEMBYINDEXINGROUP_OFFSET UNITYSDK_OFFSET(0x17133E50)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RESETLISTVIEW_OFFSET UNITYSDK_OFFSET(0x17138F20)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_SETITEMSIZE_OFFSET UNITYSDK_OFFSET(0x171397E0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_SETLISTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x17132B90)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEALLSHOWNITEMSPOS_OFFSET UNITYSDK_OFFSET(0x17135200)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORHORIZONTALLISTPART1_OFFSET UNITYSDK_OFFSET(0x1713BA80)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORHORIZONTALLISTPART2_OFFSET UNITYSDK_OFFSET(0x1713E130)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORVERTLISTPART1_OFFSET UNITYSDK_OFFSET(0x1713A180)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORVERTLISTPART2_OFFSET UNITYSDK_OFFSET(0x1713D340)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEITEMINDEXMAP_OFFSET UNITYSDK_OFFSET(0x17139FC0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATELISTVIEWPART1_OFFSET UNITYSDK_OFFSET(0x17136C90)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATELISTVIEWPART2_OFFSET UNITYSDK_OFFSET(0x17136EA0)

namespace SuperScrollView
{
	inline static constexpr unsigned int StaggeredGridItemGroup_TypeDefinitionIndex = 48710;

	class StaggeredGridItemGroup : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* mContainerTrans; // 0x10
		::UnityEngine::RectTransform* mScrollRectTransform; // 0x18
		::SuperScrollView::ItemPosMgr* mItemPosMgr; // 0x20
		::SuperScrollView::LoopStaggeredGridView* mParentGridView; // 0x28
		::System::Collections::Generic::List_1<::SuperScrollView::LoopStaggeredGridViewItem*>* mItemList; // 0x30
		::Il2CppArray<::UnityEngine::Vector3>* mItemWorldCorners; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* mItemIndexMap; // 0x40
		::Il2CppArray<::UnityEngine::Vector3>* mViewPortRectLocalCorners; // 0x48
		::System::Func_3<::System::Int32, ::System::Int32, ::SuperScrollView::LoopStaggeredGridViewItem*>* mOnGetItemByIndex; // 0x50
		::UnityEngine::RectTransform* mViewPortRectTransform; // 0x58
		::UnityEngine::UI::ScrollRect* mScrollRect; // 0x60
		::UnityEngine::GameObject* mGameObject; // 0x68
		::System::Int32 mListUpdateCheckFrameCount; // 0x70
		::System::Int32 mGroupIndex; // 0x74
		::System::Int32 mCurReadyMinItemIndex; // 0x78
		::System::Single mLastItemPadding; // 0x7C
		::System::Single mItemDefaultWithPaddingSize; // 0x80
		::System::Int32 mLastItemIndex; // 0x84
		::UnityEngine::Vector3 mLastFrameContainerPos; // 0x88
		::System::Int32 mItemTotalCount; // 0x94
		::System::Int32 mCurReadyMaxItemIndex; // 0x98
		::SuperScrollView::ListItemArrangeType mArrangeType; // 0x9C
		::System::Boolean mNeedCheckNextMaxItem; // 0xA0
		::System::Boolean mNeedCheckNextMinItem; // 0xA1
		::System::Boolean mIsVertList; // 0xA2
		::System::Boolean mSupportScrollBar; // 0xA3
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_CTOR_OFFSET))(this);
		}

		::System::Void Init(::SuperScrollView::LoopStaggeredGridView* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Func_3<::System::Int32, ::System::Int32, ::SuperScrollView::LoopStaggeredGridViewItem*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32, ::System::Int32, ::System::Func_3<::System::Int32, ::System::Int32, ::SuperScrollView::LoopStaggeredGridViewItem*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_ItemIndexMap()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_ITEMINDEXMAP_OFFSET))(this);
		}

		::System::Void ResetListView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RESETLISTVIEW_OFFSET))(this);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* GetShownItemByItemIndex(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMBYITEMINDEX_OFFSET))(this, a1);
		}

		::System::Single get_ViewPortSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_VIEWPORTSIZE_OFFSET))(this);
		}

		::System::Single get_ViewPortWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_VIEWPORTWIDTH_OFFSET))(this);
		}

		::System::Single get_ViewPortHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_VIEWPORTHEIGHT_OFFSET))(this);
		}

		::System::Boolean get_IsDraging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_ISDRAGING_OFFSET))(this);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* GetShownItemByIndexInGroup(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMBYINDEXINGROUP_OFFSET))(this, a1);
		}

		::System::Int32 GetIndexInShownItemList(::SuperScrollView::LoopStaggeredGridViewItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETINDEXINSHOWNITEMLIST_OFFSET))(this, a1);
		}

		::System::Void RefreshAllShownItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEM_OFFSET))(this);
		}

		::System::Void OnItemSizeChanged(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_ONITEMSIZECHANGED_OFFSET))(this, a1);
		}

		::System::Void RefreshItemByIndexInGroup(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHITEMBYINDEXINGROUP_OFFSET))(this, a1);
		}

		::System::Void RefreshAllShownItemWithFirstIndexInGroup(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEMWITHFIRSTINDEXINGROUP_OFFSET))(this, a1);
		}

		::System::Void RefreshAllShownItemWithFirstIndexAndPos(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_REFRESHALLSHOWNITEMWITHFIRSTINDEXANDPOS_OFFSET))(this, a1, a2);
		}

		::System::Void SetItemSize(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_SETITEMSIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetPlusItemIndexAndPosAtGivenPos(::System::Single a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETPLUSITEMINDEXANDPOSATGIVENPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetItemPos(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETITEMPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetItemCornerPosInViewPort(::SuperScrollView::LoopStaggeredGridViewItem* a1, ::SuperScrollView::ItemCornerEnum a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*, ::SuperScrollView::ItemCornerEnum))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETITEMCORNERPOSINVIEWPORT_OFFSET))(this, a1, a2);
		}

		::System::Void RecycleItemTmp(::SuperScrollView::LoopStaggeredGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RECYCLEITEMTMP_OFFSET))(this, a1);
		}

		::System::Void RecycleAllItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_RECYCLEALLITEM_OFFSET))(this);
		}

		::System::Void ClearAllTmpRecycledItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_CLEARALLTMPRECYCLEDITEM_OFFSET))(this);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* GetNewItemByIndexInGroup(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETNEWITEMBYINDEXINGROUP_OFFSET))(this, a1);
		}

		::System::Int32 get_HadCreatedItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GET_HADCREATEDITEMCOUNT_OFFSET))(this);
		}

		::System::Void SetListItemCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_SETLISTITEMCOUNT_OFFSET))(this, a1);
		}

		::System::Void UpdateItemIndexMap(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEITEMINDEXMAP_OFFSET))(this, a1);
		}

		::System::Void UpdateListViewPart1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATELISTVIEWPART1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean UpdateListViewPart2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATELISTVIEWPART2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean UpdateForVertListPart1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORVERTLISTPART1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean UpdateForVertListPart2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORVERTLISTPART2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean UpdateForHorizontalListPart1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORHORIZONTALLISTPART1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean UpdateForHorizontalListPart2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEFORHORIZONTALLISTPART2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single GetContentPanelSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETCONTENTPANELSIZE_OFFSET))(this);
		}

		::System::Single GetShownItemPosMaxValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_GETSHOWNITEMPOSMAXVALUE_OFFSET))(this);
		}

		::System::Void CheckIfNeedUpdateItemPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_CHECKIFNEEDUPDATEITEMPOS_OFFSET))(this);
		}

		::System::Void UpdateAllShownItemsPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMGROUP_UPDATEALLSHOWNITEMSPOS_OFFSET))(this);
		}

	};
}
