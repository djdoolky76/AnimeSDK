#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SuperScrollView { class LoopGridViewItem; }

#define SUPERSCROLLVIEW_GRIDITEMGROUP_ADDFIRST_OFFSET UNITYSDK_OFFSET(0x1AC5AD10)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_ADDLAST_OFFSET UNITYSDK_OFFSET(0x1AC5ADA0)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AC5AF60)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC5AFD0)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GETITEMBYCOLUMN_OFFSET UNITYSDK_OFFSET(0x1AC5AB50)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GETITEMBYROW_OFFSET UNITYSDK_OFFSET(0x1AC5ABC0)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AC5AB00)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x1AC5AB10)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x1AC5AB30)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GET_LAST_OFFSET UNITYSDK_OFFSET(0x1AC5AB20)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_REMOVEFIRST_OFFSET UNITYSDK_OFFSET(0x1AC5AE40)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_REMOVELAST_OFFSET UNITYSDK_OFFSET(0x1AC5AED0)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_REPLACEITEM_OFFSET UNITYSDK_OFFSET(0x1AC5AC30)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_SET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x1AC5AB40)

namespace SuperScrollView
{
	inline static constexpr unsigned int GridItemGroup_TypeDefinitionIndex = 48677;

	class GridItemGroup : public ::System::Object
	{
	public:
		::SuperScrollView::LoopGridViewItem* mLast; // 0x10
		::SuperScrollView::LoopGridViewItem* mFirst; // 0x18
		::System::Int32 mGroupIndex; // 0x20
		::System::Int32 mCount; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_GET_COUNT_OFFSET))(this);
		}

		::SuperScrollView::LoopGridViewItem* get_First()
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_GET_FIRST_OFFSET))(this);
		}

		::SuperScrollView::LoopGridViewItem* get_Last()
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_GET_LAST_OFFSET))(this);
		}

		::System::Int32 get_GroupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_GET_GROUPINDEX_OFFSET))(this);
		}

		::System::Void set_GroupIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_SET_GROUPINDEX_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* GetItemByColumn(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_GETITEMBYCOLUMN_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* GetItemByRow(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_GETITEMBYROW_OFFSET))(this, a1);
		}

		::System::Void ReplaceItem(::SuperScrollView::LoopGridViewItem* a1, ::SuperScrollView::LoopGridViewItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_REPLACEITEM_OFFSET))(this, a1, a2);
		}

		::System::Void AddFirst(::SuperScrollView::LoopGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_ADDFIRST_OFFSET))(this, a1);
		}

		::System::Void AddLast(::SuperScrollView::LoopGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_ADDLAST_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* RemoveFirst()
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_REMOVEFIRST_OFFSET))(this);
		}

		::SuperScrollView::LoopGridViewItem* RemoveLast()
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_REMOVELAST_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_CLEAR_OFFSET))(this);
		}

	};
}
