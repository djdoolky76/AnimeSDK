#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/SQLiteException.h"
#include "unitysdk/UnityEngine/SQLite3_Result.h"

namespace SQLite { class TableMapping; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_GET_COLUMNS_OFFSET UNITYSDK_OFFSET(0x1ECEFF10)
#define SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_NEW_1_OFFSET UNITYSDK_OFFSET(0x1ECF0320)
#define SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_NEW_2_OFFSET UNITYSDK_OFFSET(0x1ECF0390)
#define SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_NEW_OFFSET UNITYSDK_OFFSET(0x1ECF0200)
#define SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_SET_COLUMNS_OFFSET UNITYSDK_OFFSET(0x1ECEFF20)
#define SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ECF0010)
#define SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECEFF30)

namespace SQLite
{
	inline static constexpr unsigned int NotNullConstraintViolationException_TypeDefinitionIndex = 37022;

	class NotNullConstraintViolationException : public ::SQLite::SQLiteException
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::System::Object*>* _Columns_k__BackingField; // 0x90

		::System::Void _ctor(::UnityEngine::SQLite3_Result r, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SQLite3_Result, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION__CTOR_OFFSET))(this, r, message);
		}

		::System::Void _ctor_1(::UnityEngine::SQLite3_Result r, ::System::String* message, ::SQLite::TableMapping* mapping, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SQLite3_Result, ::System::String*, ::SQLite::TableMapping*, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION__CTOR_1_OFFSET))(this, r, message, mapping, obj);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* get_Columns()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_GET_COLUMNS_OFFSET))(this);
		}

		::System::Void set_Columns(::System::Collections::Generic::IEnumerable_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_SET_COLUMNS_OFFSET))(this, value);
		}

		static ::SQLite::NotNullConstraintViolationException* New(::UnityEngine::SQLite3_Result r, ::System::String* message)
		{
			return ((::SQLite::NotNullConstraintViolationException*(*)(::UnityEngine::SQLite3_Result, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_NEW_OFFSET))(r, message);
		}

		static ::SQLite::NotNullConstraintViolationException* New_1(::UnityEngine::SQLite3_Result r, ::System::String* message, ::SQLite::TableMapping* mapping, ::System::Object* obj)
		{
			return ((::SQLite::NotNullConstraintViolationException*(*)(::UnityEngine::SQLite3_Result, ::System::String*, ::SQLite::TableMapping*, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_NEW_1_OFFSET))(r, message, mapping, obj);
		}

		static ::SQLite::NotNullConstraintViolationException* New_2(::SQLite::SQLiteException* exception, ::SQLite::TableMapping* mapping, ::System::Object* obj)
		{
			return ((::SQLite::NotNullConstraintViolationException*(*)(::SQLite::SQLiteException*, ::SQLite::TableMapping*, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_NEW_2_OFFSET))(exception, mapping, obj);
		}
	};
}
