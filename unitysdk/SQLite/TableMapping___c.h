#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class TableMapping_Column; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SQLITE_TABLEMAPPING___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED02480)
#define SQLITE_TABLEMAPPING___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED024C0)
#define SQLITE_TABLEMAPPING___C___CTOR_B__35_0_OFFSET UNITYSDK_OFFSET(0x1ED024D0)

namespace SQLite
{
	inline static constexpr unsigned int TableMapping___c_TypeDefinitionIndex = 37057;

	class TableMapping___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TableMapping___c_TypeDefinitionIndex)->GetStaticField(0x2BCB0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TableMapping___c_TypeDefinitionIndex)->GetStaticField(0x2BCB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__35_0(::SQLite::TableMapping_Column* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::SQLite::TableMapping_Column*))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING___C___CTOR_B__35_0_OFFSET))(this, c);
		}
	};
}
