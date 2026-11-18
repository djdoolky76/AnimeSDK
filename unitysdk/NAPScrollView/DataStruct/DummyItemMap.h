#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/DummyEnd.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ScrollViewDummyItem; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
template <typename T> class BGDLBDEIEBD_1;

#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_BIND_OFFSET UNITYSDK_OFFSET(0xE54F210)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_CLEAR_OFFSET UNITYSDK_OFFSET(0xE5506A0)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_CONTAINS_OFFSET UNITYSDK_OFFSET(0xE54E790)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_COUNTOFEND_OFFSET UNITYSDK_OFFSET(0xE54EED0)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_DESTROYANDCLEARALL_OFFSET UNITYSDK_OFFSET(0xE5506F0)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_DESTROYANDCLEARDEQUE_OFFSET UNITYSDK_OFFSET(0xE5507D0)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_DESTROYPOOL_OFFSET UNITYSDK_OFFSET(0xE5505C0)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_FINDDUMMY_OFFSET UNITYSDK_OFFSET(0xE54E7F0)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE54ED10)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_GET_POOLCOUNT_OFFSET UNITYSDK_OFFSET(0xE54E710)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_GET_USINGCOUNT_OFFSET UNITYSDK_OFFSET(0xE54E6B0)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_GET_USINGDUMMIES_OFFSET UNITYSDK_OFFSET(0xE54E730)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_OFFSETDATAINDEX_OFFSET UNITYSDK_OFFSET(0xE54FA70)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_RECYCLEALLINDEQUE_OFFSET UNITYSDK_OFFSET(0xE550510)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_RECYCLEALL_OFFSET UNITYSDK_OFFSET(0xE550450)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_RECYCLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xE550000)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_RECYCLE_1_OFFSET UNITYSDK_OFFSET(0xE5501B0)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_RECYCLE_OFFSET UNITYSDK_OFFSET(0xE54FDA0)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_REMOVEBYDATAINDEX_OFFSET UNITYSDK_OFFSET(0xE54F540)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_RENT_OFFSET UNITYSDK_OFFSET(0xE54F160)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_REPLACEDATAINDEX_OFFSET UNITYSDK_OFFSET(0xE54F8D0)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_SHIFTFARTHESTOFEND_OFFSET UNITYSDK_OFFSET(0xE54EF40)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_TRYGETDATAINDEX_OFFSET UNITYSDK_OFFSET(0xE54EB20)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_TRYGET_OFFSET UNITYSDK_OFFSET(0xE54EAC0)
#define NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__CTOR_OFFSET UNITYSDK_OFFSET(0xE550880)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int DummyItemMap_TypeDefinitionIndex = 63135;

	class DummyItemMap : public ::System::Object
	{
	public:
		::BGDLBDEIEBD_1<::MoleMole::ScrollViewDummyItem*>* _startDummies; // 0x10
		::System::Collections::Generic::Stack_1<::MoleMole::ScrollViewDummyItem*>* _dummyPool; // 0x18
		::BGDLBDEIEBD_1<::MoleMole::ScrollViewDummyItem*>* _endDummies; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_UsingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_GET_USINGCOUNT_OFFSET))(this);
		}

		::System::Int32 get_PoolCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_GET_POOLCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::ScrollViewDummyItem*>* get_UsingDummies()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::ScrollViewDummyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_GET_USINGDUMMIES_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Int32 dataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_CONTAINS_OFFSET))(this, dataIndex);
		}

		::System::Boolean TryGet(::System::Int32 dataIndex, ::MoleMole::ScrollViewDummyItem*& dummy)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ScrollViewDummyItem*&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_TRYGET_OFFSET))(this, dataIndex, dummy);
		}

		::System::Boolean TryGetDataIndex(::UnityEngine::GameObject* go, ::System::Int32& dataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_TRYGETDATAINDEX_OFFSET))(this, go, dataIndex);
		}

		::UnityEngine::RectTransform* GetTransform(::System::Int32 dataIndex)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_GETTRANSFORM_OFFSET))(this, dataIndex);
		}

		::System::Int32 CountOfEnd(::NAPScrollView::DataStruct::DummyEnd end)
		{
			return ((::System::Int32(*)(::PVOID, ::NAPScrollView::DataStruct::DummyEnd))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_COUNTOFEND_OFFSET))(this, end);
		}

		::MoleMole::ScrollViewDummyItem* ShiftFarthestOfEnd(::NAPScrollView::DataStruct::DummyEnd end, ::System::Int32 newDataIndex)
		{
			return ((::MoleMole::ScrollViewDummyItem*(*)(::PVOID, ::NAPScrollView::DataStruct::DummyEnd, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_SHIFTFARTHESTOFEND_OFFSET))(this, end, newDataIndex);
		}

		::System::Boolean FindDummy(::System::Int32 dataIndex, ::MoleMole::ScrollViewDummyItem*& dummy, ::BGDLBDEIEBD_1<::MoleMole::ScrollViewDummyItem*>*& owner)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ScrollViewDummyItem*&, ::BGDLBDEIEBD_1<::MoleMole::ScrollViewDummyItem*>*&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_FINDDUMMY_OFFSET))(this, dataIndex, dummy, owner);
		}

		::MoleMole::ScrollViewDummyItem* Rent(::System::Func_1<::MoleMole::ScrollViewDummyItem*>* factory)
		{
			return ((::MoleMole::ScrollViewDummyItem*(*)(::PVOID, ::System::Func_1<::MoleMole::ScrollViewDummyItem*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_RENT_OFFSET))(this, factory);
		}

		::System::Void Bind(::System::Int32 dataIndex, ::MoleMole::ScrollViewDummyItem* dummy, ::NAPScrollView::DataStruct::DummyEnd end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::ScrollViewDummyItem*, ::NAPScrollView::DataStruct::DummyEnd))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_BIND_OFFSET))(this, dataIndex, dummy, end);
		}

		::System::Void RemoveByDataIndex(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_REMOVEBYDATAINDEX_OFFSET))(this, dataIndex);
		}

		::System::Boolean ReplaceDataIndex(::System::Int32 oldDataIndex, ::System::Int32 newDataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_REPLACEDATAINDEX_OFFSET))(this, oldDataIndex, newDataIndex);
		}

		::System::Void OffsetDataIndex(::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_OFFSETDATAINDEX_OFFSET))(this, offset);
		}

		::System::Boolean Recycle(::System::Int32 dataIndex, ::System::Action_1<::MoleMole::ScrollViewDummyItem*>* beforePushToPool)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action_1<::MoleMole::ScrollViewDummyItem*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_RECYCLE_OFFSET))(this, dataIndex, beforePushToPool);
		}

		::System::Void Recycle_1(::MoleMole::ScrollViewDummyItem* dummy, ::System::Action_1<::MoleMole::ScrollViewDummyItem*>* beforePushToPool)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewDummyItem*, ::System::Action_1<::MoleMole::ScrollViewDummyItem*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_RECYCLE_1_OFFSET))(this, dummy, beforePushToPool);
		}

		::System::Void RecycleInternal(::MoleMole::ScrollViewDummyItem* dummy, ::System::Action_1<::MoleMole::ScrollViewDummyItem*>* beforePushToPool)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewDummyItem*, ::System::Action_1<::MoleMole::ScrollViewDummyItem*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_RECYCLEINTERNAL_OFFSET))(this, dummy, beforePushToPool);
		}

		::System::Void RecycleAll(::System::Action_1<::MoleMole::ScrollViewDummyItem*>* beforePushToPool)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::ScrollViewDummyItem*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_RECYCLEALL_OFFSET))(this, beforePushToPool);
		}

		::System::Void RecycleAllInDeque(::BGDLBDEIEBD_1<::MoleMole::ScrollViewDummyItem*>* deque, ::System::Action_1<::MoleMole::ScrollViewDummyItem*>* beforePushToPool)
		{
			return ((::System::Void(*)(::PVOID, ::BGDLBDEIEBD_1<::MoleMole::ScrollViewDummyItem*>*, ::System::Action_1<::MoleMole::ScrollViewDummyItem*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_RECYCLEALLINDEQUE_OFFSET))(this, deque, beforePushToPool);
		}

		::System::Void DestroyPool(::System::Action_1<::MoleMole::ScrollViewDummyItem*>* destroy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::ScrollViewDummyItem*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_DESTROYPOOL_OFFSET))(this, destroy);
		}

		::System::Void Clear(::System::Action_1<::MoleMole::ScrollViewDummyItem*>* beforePushToPool)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::ScrollViewDummyItem*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_CLEAR_OFFSET))(this, beforePushToPool);
		}

		::System::Void DestroyAndClearAll(::System::Action_1<::MoleMole::ScrollViewDummyItem*>* destroy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::ScrollViewDummyItem*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_DESTROYANDCLEARALL_OFFSET))(this, destroy);
		}

		static ::System::Void DestroyAndClearDeque(::BGDLBDEIEBD_1<::MoleMole::ScrollViewDummyItem*>* deque, ::System::Action_1<::MoleMole::ScrollViewDummyItem*>* destroy)
		{
			return ((::System::Void(*)(::BGDLBDEIEBD_1<::MoleMole::ScrollViewDummyItem*>*, ::System::Action_1<::MoleMole::ScrollViewDummyItem*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DUMMYITEMMAP_DESTROYANDCLEARDEQUE_OFFSET))(deque, destroy);
		}
	};
}
