#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/Data.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_ADD_1_OFFSET UNITYSDK_OFFSET(0x1ADEA310)
#define NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_ADD_OFFSET UNITYSDK_OFFSET(0x1ADEA0D0)
#define NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1ADEAD40)
#define NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_CLONETOOBJECTLIST_OFFSET UNITYSDK_OFFSET(0x1ADEB100)
#define NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_CLONETOOTHER_OFFSET UNITYSDK_OFFSET(0x1ADEAF90)
#define NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_ENABLECHECKPOOLREFERENCERECYCLE_OFFSET UNITYSDK_OFFSET(0x1ADE9E90)
#define NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_GET_CHECKPOOLREFERENCERECYCLE_OFFSET UNITYSDK_OFFSET(0x1ADE9BD0)
#define NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1ADE9BF0)
#define NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_GET_DATAS_OFFSET UNITYSDK_OFFSET(0x1ADE9BE0)
#define NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1ADE9C10)
#define NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_INSERTRANGE_OFFSET UNITYSDK_OFFSET(0x1ADEA770)
#define NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1ADEA5A0)
#define NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_REMOVERANGE_OFFSET UNITYSDK_OFFSET(0x1ADEAB70)
#define NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_REMOVE_OFFSET UNITYSDK_OFFSET(0x1ADEA450)
#define NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1ADE9C40)
#define NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADEB0A0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int DataListWrapper_TypeDefinitionIndex = 45333;

	class DataListWrapper : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NAPScrollView::DataStruct::Data>* _datas; // 0x10
		::System::Boolean _checkPoolReferenceRecycle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CheckPoolReferenceRecycle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_GET_CHECKPOOLREFERENCERECYCLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NAPScrollView::DataStruct::Data>* get_Datas()
		{
			return ((::System::Collections::Generic::List_1<::NAPScrollView::DataStruct::Data>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_GET_DATAS_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_GET_COUNT_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::Data get_Item(::System::Int32 index)
		{
			return ((::NAPScrollView::DataStruct::Data(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::NAPScrollView::DataStruct::Data value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NAPScrollView::DataStruct::Data))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void EnableCheckPoolReferenceRecycle(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_ENABLECHECKPOOLREFERENCERECYCLE_OFFSET))(this, isEnable);
		}

		::System::Void Add(::System::Collections::Generic::List_1<::NAPScrollView::DataStruct::Data>* datas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NAPScrollView::DataStruct::Data>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_ADD_OFFSET))(this, datas);
		}

		::System::Void Add_1(::NAPScrollView::DataStruct::Data data)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::Data))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_ADD_1_OFFSET))(this, data);
		}

		::System::Void Remove(::NAPScrollView::DataStruct::Data data)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::Data))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_REMOVE_OFFSET))(this, data);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_REMOVEAT_OFFSET))(this, index);
		}

		::System::Void InsertRange(::System::Int32 index, ::System::Collections::Generic::IEnumerable_1<::NAPScrollView::DataStruct::Data>* collection)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::NAPScrollView::DataStruct::Data>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_INSERTRANGE_OFFSET))(this, index, collection);
		}

		::System::Void RemoveRange(::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_REMOVERANGE_OFFSET))(this, index, count);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_CLEAR_OFFSET))(this);
		}

		::System::Void CloneToOther(::NAPScrollView::DataStruct::DataListWrapper*& dataListWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::DataListWrapper*&))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_CLONETOOTHER_OFFSET))(this, dataListWrapper);
		}

		::System::Void CloneToObjectList(::System::Collections::Generic::List_1<::System::Object*>* objects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATALISTWRAPPER_CLONETOOBJECTLIST_OFFSET))(this, objects);
		}
	};
}
