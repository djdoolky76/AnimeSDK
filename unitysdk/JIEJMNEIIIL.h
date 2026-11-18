#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define JIEJMNEIIIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x71F8C0)
#define JIEJMNEIIIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x71F8B0)
#define JIEJMNEIIIL_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x13CC1280)
#define JIEJMNEIIIL_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x71F920)
#define JIEJMNEIIIL_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x71F980)
#define JIEJMNEIIIL_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x13CC1130)
#define JIEJMNEIIIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CC1120)
#define JIEJMNEIIIL__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int JIEJMNEIIIL_TypeDefinitionIndex = 81493;

struct alignas(4) JIEJMNEIIIL
{
	static ::JIEJMNEIIIL* StaticGet_FDJHEBHLJLD()
	{
		return (::JIEJMNEIIIL*)Il2CppClass::FromTypeDefinitionIndex(JIEJMNEIIIL_TypeDefinitionIndex)->GetStaticField(0xF700);
	}
	::System::Int32 AJOPAGDLONL; // 0x10
	::System::Int32 PAOJLDBJKGH; // 0x14

	::System::Void _ctor(::System::Int32 OLKHDAAGGAA, ::System::Int32 NJLNJCLGLNO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JIEJMNEIIIL__CTOR_OFFSET))(this, OLKHDAAGGAA, NJLNJCLGLNO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIEJMNEIIIL__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JIEJMNEIIIL_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	/*
	::System::Boolean Equals_1(::JIEJMNEIIIL LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JIEJMNEIIIL))((::PBYTE)hIl2Cpp + JIEJMNEIIIL_EQUALS_1_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::JIEJMNEIIIL FFKBEGIHIGG, ::JIEJMNEIIIL CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::JIEJMNEIIIL, ::JIEJMNEIIIL))((::PBYTE)hIl2Cpp + JIEJMNEIIIL_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEJMNEIIIL_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JIEJMNEIIIL_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::JIEJMNEIIIL FFKBEGIHIGG, ::JIEJMNEIIIL CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::JIEJMNEIIIL, ::JIEJMNEIIIL))((::PBYTE)hIl2Cpp + JIEJMNEIIIL_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/
};
