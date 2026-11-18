#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataRowAction.h"
#include "unitysdk/System/Data/DataRowState.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Data/DataViewRowState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Data/DataKey.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataColumnCollection; }
namespace System::Data { class DataError; }
namespace System::Data { class DataRelation; }
namespace System::Data { class DataRowBuilder; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_DATAROW_ACCEPTCHANGES_OFFSET UNITYSDK_OFFSET(0x1D2F24F0)
#define SYSTEM_DATA_DATAROW_BEGINEDITINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D2F1A20)
#define SYSTEM_DATA_DATAROW_BEGINEDIT_OFFSET UNITYSDK_OFFSET(0x1D2F28E0)
#define SYSTEM_DATA_DATAROW_CANCELEDIT_OFFSET UNITYSDK_OFFSET(0x1D2F1B50)
#define SYSTEM_DATA_DATAROW_CHECKCOLUMN_OFFSET UNITYSDK_OFFSET(0x1D2F14B0)
#define SYSTEM_DATA_DATAROW_CHECKFORLOOPS_OFFSET UNITYSDK_OFFSET(0x1D2F12D0)
#define SYSTEM_DATA_DATAROW_CHECKINTABLE_OFFSET UNITYSDK_OFFSET(0x1D2F28F0)
#define SYSTEM_DATA_DATAROW_CLEARERRORS_OFFSET UNITYSDK_OFFSET(0x1D2F3090)
#define SYSTEM_DATA_DATAROW_CLEARERROR_OFFSET UNITYSDK_OFFSET(0x1D2F3160)
#define SYSTEM_DATA_DATAROW_COPYVALUESINTOSTORE_OFFSET UNITYSDK_OFFSET(0x1D2F5280)
#define SYSTEM_DATA_DATAROW_DELETE_OFFSET UNITYSDK_OFFSET(0x1D2F2940)
#define SYSTEM_DATA_DATAROW_ENDEDIT_OFFSET UNITYSDK_OFFSET(0x1D2F1BD0)
#define SYSTEM_DATA_DATAROW_GETCHILDROWS_1_OFFSET UNITYSDK_OFFSET(0x1D2F3230)
#define SYSTEM_DATA_DATAROW_GETCHILDROWS_OFFSET UNITYSDK_OFFSET(0x1D2F3220)
#define SYSTEM_DATA_DATAROW_GETCOLUMNERROR_1_OFFSET UNITYSDK_OFFSET(0x1D2F2D80)
#define SYSTEM_DATA_DATAROW_GETCOLUMNERROR_OFFSET UNITYSDK_OFFSET(0x1D2F2E50)
#define SYSTEM_DATA_DATAROW_GETCOLUMNSINERROR_OFFSET UNITYSDK_OFFSET(0x1D2F3200)
#define SYSTEM_DATA_DATAROW_GETCOLUMNVALUES_1_OFFSET UNITYSDK_OFFSET(0x1D2F37F0)
#define SYSTEM_DATA_DATAROW_GETCOLUMNVALUES_OFFSET UNITYSDK_OFFSET(0x1D2F3730)
#define SYSTEM_DATA_DATAROW_GETCURRENTRECORDNO_OFFSET UNITYSDK_OFFSET(0x1D2F3900)
#define SYSTEM_DATA_DATAROW_GETDATACOLUMN_OFFSET UNITYSDK_OFFSET(0x1D2F3010)
#define SYSTEM_DATA_DATAROW_GETDEFAULTRECORD_OFFSET UNITYSDK_OFFSET(0x1D2F1540)
#define SYSTEM_DATA_DATAROW_GETDEFAULTROWVERSION_OFFSET UNITYSDK_OFFSET(0x1D2F39A0)
#define SYSTEM_DATA_DATAROW_GETKEYVALUES_1_OFFSET UNITYSDK_OFFSET(0x1D2F3840)
#define SYSTEM_DATA_DATAROW_GETKEYVALUES_OFFSET UNITYSDK_OFFSET(0x1D2F3870)
#define SYSTEM_DATA_DATAROW_GETNESTEDPARENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D2F13E0)
#define SYSTEM_DATA_DATAROW_GETNESTEDPARENTROW_OFFSET UNITYSDK_OFFSET(0x1D2F34F0)
#define SYSTEM_DATA_DATAROW_GETORIGINALRECORDNO_OFFSET UNITYSDK_OFFSET(0x1D2F3950)
#define SYSTEM_DATA_DATAROW_GETPARENTROWS_1_OFFSET UNITYSDK_OFFSET(0x1D2F35C0)
#define SYSTEM_DATA_DATAROW_GETPARENTROWS_OFFSET UNITYSDK_OFFSET(0x1D2F35B0)
#define SYSTEM_DATA_DATAROW_GETPARENTROW_1_OFFSET UNITYSDK_OFFSET(0x1D2F33A0)
#define SYSTEM_DATA_DATAROW_GETPARENTROW_OFFSET UNITYSDK_OFFSET(0x1D2F13D0)
#define SYSTEM_DATA_DATAROW_GETPROPOSEDRECORDNO_OFFSET UNITYSDK_OFFSET(0x1D2F1B00)
#define SYSTEM_DATA_DATAROW_GETRECORDFROMVERSION_OFFSET UNITYSDK_OFFSET(0x1D2F1DA0)
#define SYSTEM_DATA_DATAROW_GETRECORDSTATE_OFFSET UNITYSDK_OFFSET(0x1D2F39D0)
#define SYSTEM_DATA_DATAROW_GET_HASERRORS_OFFSET UNITYSDK_OFFSET(0x1D2F31C0)
#define SYSTEM_DATA_DATAROW_GET_HASPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1D2F0CD0)
#define SYSTEM_DATA_DATAROW_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1D2F1D40)
#define SYSTEM_DATA_DATAROW_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D2F1220)
#define SYSTEM_DATA_DATAROW_GET_LASTCHANGEDCOLUMN_OFFSET UNITYSDK_OFFSET(0x1D2F0CB0)
#define SYSTEM_DATA_DATAROW_GET_ROWERROR_OFFSET UNITYSDK_OFFSET(0x1D2F0D80)
#define SYSTEM_DATA_DATAROW_GET_ROWSTATE_OFFSET UNITYSDK_OFFSET(0x1D2F0FD0)
#define SYSTEM_DATA_DATAROW_HASKEYCHANGED_1_OFFSET UNITYSDK_OFFSET(0x1D2F3B60)
#define SYSTEM_DATA_DATAROW_HASKEYCHANGED_OFFSET UNITYSDK_OFFSET(0x1D2F3A20)
#define SYSTEM_DATA_DATAROW_HASVERSION_OFFSET UNITYSDK_OFFSET(0x1D2F3CA0)
#define SYSTEM_DATA_DATAROW_HAVEVALUESCHANGED_1_OFFSET UNITYSDK_OFFSET(0x1D2F3D60)
#define SYSTEM_DATA_DATAROW_HAVEVALUESCHANGED_OFFSET UNITYSDK_OFFSET(0x1D2F3D40)
#define SYSTEM_DATA_DATAROW_REJECTCHANGES_OFFSET UNITYSDK_OFFSET(0x1D2F3E10)
#define SYSTEM_DATA_DATAROW_RESETLASTCHANGEDCOLUMN_OFFSET UNITYSDK_OFFSET(0x1D2F0FC0)
#define SYSTEM_DATA_DATAROW_ROWERRORCHANGED_OFFSET UNITYSDK_OFFSET(0x1D2F0F50)
#define SYSTEM_DATA_DATAROW_SETCOLUMNERROR_1_OFFSET UNITYSDK_OFFSET(0x1D2F2A30)
#define SYSTEM_DATA_DATAROW_SETCOLUMNERROR_OFFSET UNITYSDK_OFFSET(0x1D2F29B0)
#define SYSTEM_DATA_DATAROW_SETKEYVALUES_OFFSET UNITYSDK_OFFSET(0x1D2F4650)
#define SYSTEM_DATA_DATAROW_SETNESTEDPARENTROW_OFFSET UNITYSDK_OFFSET(0x1D2F4850)
#define SYSTEM_DATA_DATAROW_SETPARENTROWTODBNULL_1_OFFSET UNITYSDK_OFFSET(0x1D2F50C0)
#define SYSTEM_DATA_DATAROW_SETPARENTROWTODBNULL_OFFSET UNITYSDK_OFFSET(0x1D2F4D50)
#define SYSTEM_DATA_DATAROW_SET_ITEMARRAY_OFFSET UNITYSDK_OFFSET(0x1D2F1F70)
#define SYSTEM_DATA_DATAROW_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D2F15C0)
#define SYSTEM_DATA_DATAROW_SET_LASTCHANGEDCOLUMN_OFFSET UNITYSDK_OFFSET(0x1D2F0CC0)
#define SYSTEM_DATA_DATAROW_SET_RBTREENODEID_OFFSET UNITYSDK_OFFSET(0x1D2F0CE0)
#define SYSTEM_DATA_DATAROW_SET_ROWERROR_OFFSET UNITYSDK_OFFSET(0x1D2F0DA0)
#define SYSTEM_DATA_DATAROW_SET_ROWID_OFFSET UNITYSDK_OFFSET(0x1D2F0FA0)
#define SYSTEM_DATA_DATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F0C20)

namespace System::Data
{
	inline static constexpr unsigned int DataRow_TypeDefinitionIndex = 37252;

	class DataRow : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_objectTypeCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DataRow_TypeDefinitionIndex)->GetStaticField(0x9850);
		}
		::System::Data::DataColumn* _lastChangedColumn; // 0x10
		::System::Data::DataTable* _table; // 0x18
		::System::Data::DataColumnCollection* _columns; // 0x20
		::System::Data::DataError* _error; // 0x28
		::System::Int64 _rowID; // 0x30
		::System::Int32 _oldRecord; // 0x38
		::System::Data::DataRowAction _action; // 0x3C
		::System::Int32 _tempRecord; // 0x40
		::System::Int32 _objectID; // 0x44
		::System::Boolean _inCascade; // 0x48
		::System::Boolean _inChangingEvent; // 0x49
		::System::Boolean _inDeletingEvent; // 0x4A
		::System::Byte _padding0[0x1];
		::System::Int32 _rbTreeNodeId; // 0x4C
		::System::Int32 _newRecord; // 0x50
		::System::Int32 _countColumnChange; // 0x54

		::System::Void _ctor(::System::Data::DataRowBuilder* builder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRowBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW__CTOR_OFFSET))(this, builder);
		}

		::System::Data::DataColumn* get_LastChangedColumn()
		{
			return ((::System::Data::DataColumn*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GET_LASTCHANGEDCOLUMN_OFFSET))(this);
		}

		::System::Void set_LastChangedColumn(::System::Data::DataColumn* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_SET_LASTCHANGEDCOLUMN_OFFSET))(this, value);
		}

		::System::Boolean get_HasPropertyChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GET_HASPROPERTYCHANGED_OFFSET))(this);
		}

		::System::Void set_RBTreeNodeId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_SET_RBTREENODEID_OFFSET))(this, value);
		}

		::System::String* get_RowError()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GET_ROWERROR_OFFSET))(this);
		}

		::System::Void set_RowError(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_SET_ROWERROR_OFFSET))(this, value);
		}

		::System::Void RowErrorChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_ROWERRORCHANGED_OFFSET))(this);
		}

		::System::Void set_rowID(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_SET_ROWID_OFFSET))(this, value);
		}

		::System::Data::DataRowState get_RowState()
		{
			return ((::System::Data::DataRowState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GET_ROWSTATE_OFFSET))(this);
		}

		::System::Void CheckForLoops(::System::Data::DataRelation* rel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_CHECKFORLOOPS_OFFSET))(this, rel);
		}

		::System::Int32 GetNestedParentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETNESTEDPARENTCOUNT_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Data::DataColumn* column)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GET_ITEM_OFFSET))(this, column);
		}

		::System::Void set_Item(::System::Data::DataColumn* column, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_SET_ITEM_OFFSET))(this, column, value);
		}

		::System::Object* get_Item_1(::System::Data::DataColumn* column, ::System::Data::DataRowVersion version)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Data::DataColumn*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GET_ITEM_1_OFFSET))(this, column, version);
		}

		::System::Void set_ItemArray(::Il2CppArray<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_SET_ITEMARRAY_OFFSET))(this, value);
		}

		::System::Void AcceptChanges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_ACCEPTCHANGES_OFFSET))(this);
		}

		::System::Void BeginEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_BEGINEDIT_OFFSET))(this);
		}

		::System::Boolean BeginEditInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_BEGINEDITINTERNAL_OFFSET))(this);
		}

		::System::Void CancelEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_CANCELEDIT_OFFSET))(this);
		}

		::System::Void CheckColumn(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_CHECKCOLUMN_OFFSET))(this, column);
		}

		::System::Void CheckInTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_CHECKINTABLE_OFFSET))(this);
		}

		::System::Void Delete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_DELETE_OFFSET))(this);
		}

		::System::Void EndEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_ENDEDIT_OFFSET))(this);
		}

		::System::Void SetColumnError(::System::Int32 columnIndex, ::System::String* error)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_SETCOLUMNERROR_OFFSET))(this, columnIndex, error);
		}

		::System::Void SetColumnError_1(::System::Data::DataColumn* column, ::System::String* error)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_SETCOLUMNERROR_1_OFFSET))(this, column, error);
		}

		::System::String* GetColumnError(::System::String* columnName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETCOLUMNERROR_OFFSET))(this, columnName);
		}

		::System::String* GetColumnError_1(::System::Data::DataColumn* column)
		{
			return ((::System::String*(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETCOLUMNERROR_1_OFFSET))(this, column);
		}

		::System::Void ClearErrors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_CLEARERRORS_OFFSET))(this);
		}

		::System::Void ClearError(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_CLEARERROR_OFFSET))(this, column);
		}

		::System::Boolean get_HasErrors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GET_HASERRORS_OFFSET))(this);
		}

		::Il2CppArray<::System::Data::DataColumn*>* GetColumnsInError()
		{
			return ((::Il2CppArray<::System::Data::DataColumn*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETCOLUMNSINERROR_OFFSET))(this);
		}

		::Il2CppArray<::System::Data::DataRow*>* GetChildRows(::System::Data::DataRelation* relation)
		{
			return ((::Il2CppArray<::System::Data::DataRow*>*(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETCHILDROWS_OFFSET))(this, relation);
		}

		::Il2CppArray<::System::Data::DataRow*>* GetChildRows_1(::System::Data::DataRelation* relation, ::System::Data::DataRowVersion version)
		{
			return ((::Il2CppArray<::System::Data::DataRow*>*(*)(::PVOID, ::System::Data::DataRelation*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETCHILDROWS_1_OFFSET))(this, relation, version);
		}

		::System::Data::DataColumn* GetDataColumn(::System::String* columnName)
		{
			return ((::System::Data::DataColumn*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETDATACOLUMN_OFFSET))(this, columnName);
		}

		::System::Data::DataRow* GetParentRow(::System::Data::DataRelation* relation)
		{
			return ((::System::Data::DataRow*(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETPARENTROW_OFFSET))(this, relation);
		}

		::System::Data::DataRow* GetParentRow_1(::System::Data::DataRelation* relation, ::System::Data::DataRowVersion version)
		{
			return ((::System::Data::DataRow*(*)(::PVOID, ::System::Data::DataRelation*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETPARENTROW_1_OFFSET))(this, relation, version);
		}

		::System::Data::DataRow* GetNestedParentRow(::System::Data::DataRowVersion version)
		{
			return ((::System::Data::DataRow*(*)(::PVOID, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETNESTEDPARENTROW_OFFSET))(this, version);
		}

		::Il2CppArray<::System::Data::DataRow*>* GetParentRows(::System::Data::DataRelation* relation)
		{
			return ((::Il2CppArray<::System::Data::DataRow*>*(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETPARENTROWS_OFFSET))(this, relation);
		}

		::Il2CppArray<::System::Data::DataRow*>* GetParentRows_1(::System::Data::DataRelation* relation, ::System::Data::DataRowVersion version)
		{
			return ((::Il2CppArray<::System::Data::DataRow*>*(*)(::PVOID, ::System::Data::DataRelation*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETPARENTROWS_1_OFFSET))(this, relation, version);
		}

		::Il2CppArray<::System::Object*>* GetColumnValues(::Il2CppArray<::System::Data::DataColumn*>* columns)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETCOLUMNVALUES_OFFSET))(this, columns);
		}

		::Il2CppArray<::System::Object*>* GetColumnValues_1(::Il2CppArray<::System::Data::DataColumn*>* columns, ::System::Data::DataRowVersion version)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::System::Data::DataColumn*>*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETCOLUMNVALUES_1_OFFSET))(this, columns, version);
		}

		::Il2CppArray<::System::Object*>* GetKeyValues(::System::Data::DataKey key)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Data::DataKey))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETKEYVALUES_OFFSET))(this, key);
		}

		::Il2CppArray<::System::Object*>* GetKeyValues_1(::System::Data::DataKey key, ::System::Data::DataRowVersion version)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Data::DataKey, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETKEYVALUES_1_OFFSET))(this, key, version);
		}

		::System::Int32 GetCurrentRecordNo()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETCURRENTRECORDNO_OFFSET))(this);
		}

		::System::Int32 GetDefaultRecord()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETDEFAULTRECORD_OFFSET))(this);
		}

		::System::Int32 GetOriginalRecordNo()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETORIGINALRECORDNO_OFFSET))(this);
		}

		::System::Int32 GetProposedRecordNo()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETPROPOSEDRECORDNO_OFFSET))(this);
		}

		::System::Int32 GetRecordFromVersion(::System::Data::DataRowVersion version)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETRECORDFROMVERSION_OFFSET))(this, version);
		}

		::System::Data::DataRowVersion GetDefaultRowVersion(::System::Data::DataViewRowState viewState)
		{
			return ((::System::Data::DataRowVersion(*)(::PVOID, ::System::Data::DataViewRowState))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETDEFAULTROWVERSION_OFFSET))(this, viewState);
		}

		::System::Data::DataViewRowState GetRecordState(::System::Int32 record)
		{
			return ((::System::Data::DataViewRowState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_GETRECORDSTATE_OFFSET))(this, record);
		}

		::System::Boolean HasKeyChanged(::System::Data::DataKey key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataKey))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_HASKEYCHANGED_OFFSET))(this, key);
		}

		::System::Boolean HasKeyChanged_1(::System::Data::DataKey key, ::System::Data::DataRowVersion version1, ::System::Data::DataRowVersion version2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataKey, ::System::Data::DataRowVersion, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_HASKEYCHANGED_1_OFFSET))(this, key, version1, version2);
		}

		::System::Boolean HasVersion(::System::Data::DataRowVersion version)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_HASVERSION_OFFSET))(this, version);
		}

		::System::Boolean HaveValuesChanged(::Il2CppArray<::System::Data::DataColumn*>* columns)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_HAVEVALUESCHANGED_OFFSET))(this, columns);
		}

		::System::Boolean HaveValuesChanged_1(::Il2CppArray<::System::Data::DataColumn*>* columns, ::System::Data::DataRowVersion version1, ::System::Data::DataRowVersion version2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Data::DataColumn*>*, ::System::Data::DataRowVersion, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_HAVEVALUESCHANGED_1_OFFSET))(this, columns, version1, version2);
		}

		::System::Void RejectChanges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_REJECTCHANGES_OFFSET))(this);
		}

		::System::Void ResetLastChangedColumn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_RESETLASTCHANGEDCOLUMN_OFFSET))(this);
		}

		::System::Void SetKeyValues(::System::Data::DataKey key, ::Il2CppArray<::System::Object*>* keyValues)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataKey, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_SETKEYVALUES_OFFSET))(this, key, keyValues);
		}

		::System::Void SetNestedParentRow(::System::Data::DataRow* parentRow, ::System::Boolean setNonNested)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_SETNESTEDPARENTROW_OFFSET))(this, parentRow, setNonNested);
		}

		::System::Void SetParentRowToDBNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_SETPARENTROWTODBNULL_OFFSET))(this);
		}

		::System::Void SetParentRowToDBNull_1(::System::Data::DataRelation* relation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_SETPARENTROWTODBNULL_1_OFFSET))(this, relation);
		}

		::System::Int32 CopyValuesIntoStore(::System::Collections::ArrayList* storeList, ::System::Collections::ArrayList* nullbitList, ::System::Int32 storeIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::ArrayList*, ::System::Collections::ArrayList*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROW_COPYVALUESINTOSTORE_OFFSET))(this, storeList, nullbitList, storeIndex);
		}
	};
}
