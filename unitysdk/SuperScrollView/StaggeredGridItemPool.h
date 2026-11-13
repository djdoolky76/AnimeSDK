#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SuperScrollView { class LoopStaggeredGridViewItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_CLEARTMPRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0x17134940)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x1713F060)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x17134BC0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_DESTROYALLITEM_OFFSET UNITYSDK_OFFSET(0x171377F0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_GETITEM_OFFSET UNITYSDK_OFFSET(0x17132600)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_INIT_OFFSET UNITYSDK_OFFSET(0x17134C40)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_RECYCLEITEMREAL_OFFSET UNITYSDK_OFFSET(0x1713F390)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_RECYCLEITEM_OFFSET UNITYSDK_OFFSET(0x171345C0)

namespace SuperScrollView
{
	inline static constexpr unsigned int StaggeredGridItemPool_TypeDefinitionIndex = 48711;

	class StaggeredGridItemPool : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* mPrefabObj; // 0x10
		::System::String* mPrefabName; // 0x18
		::UnityEngine::RectTransform* mItemParent; // 0x20
		::System::Collections::Generic::List_1<::SuperScrollView::LoopStaggeredGridViewItem*>* mPooledItemList; // 0x28
		::System::Collections::Generic::List_1<::SuperScrollView::LoopStaggeredGridViewItem*>* mTmpPooledItemList; // 0x30
		::System::Int32 mInitCreateCount; // 0x38
		::System::Single mPadding; // 0x3C
		static ::System::Int32* StaticGet_mCurItemIdCount()
		{
			return (::System::Int32*)UnitySDK::FromName("SuperScrollView", "StaggeredGridItemPool")->GetStaticField(0x5D90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::GameObject* a1, ::System::Single a2, ::System::Int32 a3, ::UnityEngine::RectTransform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single, ::System::Int32, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* GetItem()
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_GETITEM_OFFSET))(this);
		}

		::System::Void DestroyAllItem(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_DESTROYALLITEM_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* CreateItem()
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_CREATEITEM_OFFSET))(this);
		}

		::System::Void RecycleItemReal(::SuperScrollView::LoopStaggeredGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_RECYCLEITEMREAL_OFFSET))(this, a1);
		}

		::System::Void RecycleItem(::SuperScrollView::LoopStaggeredGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_RECYCLEITEM_OFFSET))(this, a1);
		}

		::System::Void ClearTmpRecycledItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_CLEARTMPRECYCLEDITEM_OFFSET))(this);
		}

	};
}
