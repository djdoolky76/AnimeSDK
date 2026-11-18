#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_ADDTOBACK_OFFSET UNITYSDK_OFFSET(0x18F949E0)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_ADDTOFRONT_OFFSET UNITYSDK_OFFSET(0x18F94A40)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x18F94910)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x18F94980)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18F94800)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_GET_HASANY_OFFSET UNITYSDK_OFFSET(0x18F94820)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18F94840)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x18F950F0)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_LAST_OFFSET UNITYSDK_OFFSET(0x18F95060)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_OFFSETDATAINDEX_OFFSET UNITYSDK_OFFSET(0x18F94DA0)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_PEEKFROMBACK_OFFSET UNITYSDK_OFFSET(0x18F94FF0)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_PEEKFROMFRONT_OFFSET UNITYSDK_OFFSET(0x18F94F80)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x18F94BF0)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_REMOVEFROMBACK_OFFSET UNITYSDK_OFFSET(0x18F94B60)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_REMOVEFROMFRONT_OFFSET UNITYSDK_OFFSET(0x18F94AA0)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_REMOVEINVALIDDATAINDEX_OFFSET UNITYSDK_OFFSET(0x18F94E50)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x18F94CB0)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x18F94870)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_SNAPSHOT_OFFSET UNITYSDK_OFFSET(0x18F94D10)
#define NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18F95100)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int VisibleIndexList_TypeDefinitionIndex = 66082;

	class VisibleIndexList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _indices; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_HasAny()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_GET_HASANY_OFFSET))(this);
		}

		::System::Int32 get_Item(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Int32 dataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_CONTAINS_OFFSET))(this, dataIndex);
		}

		::System::Void AddToBack(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_ADDTOBACK_OFFSET))(this, dataIndex);
		}

		::System::Void AddToFront(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_ADDTOFRONT_OFFSET))(this, dataIndex);
		}

		::System::Int32 RemoveFromFront()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_REMOVEFROMFRONT_OFFSET))(this);
		}

		::System::Int32 RemoveFromBack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_REMOVEFROMBACK_OFFSET))(this);
		}

		::System::Void RemoveAt(::System::Int32 visibleIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_REMOVEAT_OFFSET))(this, visibleIndex);
		}

		::System::Boolean Remove(::System::Int32 dataIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_REMOVE_OFFSET))(this, dataIndex);
		}

		::System::Collections::Generic::List_1<::System::Int32>* Snapshot()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_SNAPSHOT_OFFSET))(this);
		}

		::System::Void OffsetDataIndex(::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_OFFSETDATAINDEX_OFFSET))(this, offset);
		}

		::System::Void RemoveInvalidDataIndex(::System::Int32 minInclusive, ::System::Int32 maxExclusive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_REMOVEINVALIDDATAINDEX_OFFSET))(this, minInclusive, maxExclusive);
		}

		::System::Int32 PeekFromFront()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_PEEKFROMFRONT_OFFSET))(this);
		}

		::System::Int32 PeekFromBack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_PEEKFROMBACK_OFFSET))(this);
		}

		::System::Int32 Last()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_LAST_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* get_Values()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_VISIBLEINDEXLIST_GET_VALUES_OFFSET))(this);
		}
	};
}
