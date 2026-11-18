#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class CustomAttributeData; }

#define SQLITE_ORM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECF13B0)
#define SQLITE_ORM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECF13F0)
#define SQLITE_ORM___C__ISAUTOINC_B__8_0_OFFSET UNITYSDK_OFFSET(0x1ECF1460)
#define SQLITE_ORM___C__ISFALLBACKONERROR_B__16_0_OFFSET UNITYSDK_OFFSET(0x1ECF1520)
#define SQLITE_ORM___C__ISMARKEDNOTNULL_B__15_0_OFFSET UNITYSDK_OFFSET(0x1ECF14C0)
#define SQLITE_ORM___C__ISPK_B__6_0_OFFSET UNITYSDK_OFFSET(0x1ECF1400)

namespace SQLite
{
	inline static constexpr unsigned int Orm___c_TypeDefinitionIndex = 37065;

	class Orm___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::CustomAttributeData*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Reflection::CustomAttributeData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Orm___c_TypeDefinitionIndex)->GetStaticField(0x2BC00);
		}
		static ::System::Func_2<::System::Reflection::CustomAttributeData*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Reflection::CustomAttributeData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Orm___c_TypeDefinitionIndex)->GetStaticField(0x2BC08);
		}
		static ::System::Func_2<::System::Reflection::CustomAttributeData*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::System::Reflection::CustomAttributeData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Orm___c_TypeDefinitionIndex)->GetStaticField(0x2BC10);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Orm___c_TypeDefinitionIndex)->GetStaticField(0x2BC18);
		}
		static ::System::Func_2<::System::Reflection::CustomAttributeData*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Reflection::CustomAttributeData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Orm___c_TypeDefinitionIndex)->GetStaticField(0x2BC20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SQLITE_ORM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ORM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsPK_b__6_0(::System::Reflection::CustomAttributeData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::CustomAttributeData*))((::PBYTE)hIl2Cpp + SQLITE_ORM___C__ISPK_B__6_0_OFFSET))(this, x);
		}

		::System::Boolean _IsAutoInc_b__8_0(::System::Reflection::CustomAttributeData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::CustomAttributeData*))((::PBYTE)hIl2Cpp + SQLITE_ORM___C__ISAUTOINC_B__8_0_OFFSET))(this, x);
		}

		::System::Boolean _IsMarkedNotNull_b__15_0(::System::Reflection::CustomAttributeData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::CustomAttributeData*))((::PBYTE)hIl2Cpp + SQLITE_ORM___C__ISMARKEDNOTNULL_B__15_0_OFFSET))(this, x);
		}

		::System::Boolean _IsFallbackOnError_b__16_0(::System::Reflection::CustomAttributeData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::CustomAttributeData*))((::PBYTE)hIl2Cpp + SQLITE_ORM___C__ISFALLBACKONERROR_B__16_0_OFFSET))(this, x);
		}
	};
}
