#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/InternalDataCollectionBase.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataRowCollection_DataRowTree; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_DATAROWCOLLECTION_ADDWITHCOLUMNEVENTS_OFFSET UNITYSDK_OFFSET(0x1F13B370)
#define SYSTEM_DATA_DATAROWCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1F13AFE0)
#define SYSTEM_DATA_DATAROWCOLLECTION_ARRAYADD_OFFSET UNITYSDK_OFFSET(0x1F13B450)
#define SYSTEM_DATA_DATAROWCOLLECTION_ARRAYCLEAR_OFFSET UNITYSDK_OFFSET(0x1F13B6F0)
#define SYSTEM_DATA_DATAROWCOLLECTION_ARRAYINSERT_OFFSET UNITYSDK_OFFSET(0x1F13B5E0)
#define SYSTEM_DATA_DATAROWCOLLECTION_ARRAYREMOVE_OFFSET UNITYSDK_OFFSET(0x1F13B760)
#define SYSTEM_DATA_DATAROWCOLLECTION_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x1F13B930)
#define SYSTEM_DATA_DATAROWCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1F13B8D0)
#define SYSTEM_DATA_DATAROWCOLLECTION_DIFFINSERTAT_OFFSET UNITYSDK_OFFSET(0x1F13B010)
#define SYSTEM_DATA_DATAROWCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F13B990)
#define SYSTEM_DATA_DATAROWCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1F13AF10)
#define SYSTEM_DATA_DATAROWCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1F13AF30)
#define SYSTEM_DATA_DATAROWCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1F13B2E0)
#define SYSTEM_DATA_DATAROWCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F13BA80)
#define SYSTEM_DATA_DATAROWCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F13AE50)

namespace System::Data
{
	inline static constexpr unsigned int DataRowCollection_TypeDefinitionIndex = 37257;

	class DataRowCollection : public ::System::Data::InternalDataCollectionBase
	{
	public:
		::System::Data::DataTable* _table; // 0x10
		::System::Data::DataRowCollection_DataRowTree* _list; // 0x18
		::System::Int32 _nullInList; // 0x20

		::System::Void _ctor(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION__CTOR_OFFSET))(this, table);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION__CTOR_1_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Data::DataRow* get_Item(::System::Int32 index)
		{
			return ((::System::Data::DataRow*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void Add(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_ADD_OFFSET))(this, row);
		}

		::System::Void DiffInsertAt(::System::Data::DataRow* row, ::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_DIFFINSERTAT_OFFSET))(this, row, pos);
		}

		::System::Int32 IndexOf(::System::Data::DataRow* row)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_INDEXOF_OFFSET))(this, row);
		}

		::System::Data::DataRow* AddWithColumnEvents(::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::Data::DataRow*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_ADDWITHCOLUMNEVENTS_OFFSET))(this, values);
		}

		::System::Void ArrayAdd(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_ARRAYADD_OFFSET))(this, row);
		}

		::System::Void ArrayInsert(::System::Data::DataRow* row, ::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_ARRAYINSERT_OFFSET))(this, row, pos);
		}

		::System::Void ArrayClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_ARRAYCLEAR_OFFSET))(this);
		}

		::System::Void ArrayRemove(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_ARRAYREMOVE_OFFSET))(this, row);
		}

		::System::Void CopyTo(::System::Array* ar, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_COPYTO_OFFSET))(this, ar, index);
		}

		::System::Void CopyTo_1(::Il2CppArray<::System::Data::DataRow*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Data::DataRow*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_COPYTO_1_OFFSET))(this, array, index);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}
	};
}
