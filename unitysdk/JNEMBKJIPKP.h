#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define JNEMBKJIPKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7541E0)
#define JNEMBKJIPKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x754190)
#define JNEMBKJIPKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7541F0)
#define JNEMBKJIPKP_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x754240)
#define JNEMBKJIPKP_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x152B37F0)
#define JNEMBKJIPKP_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x5FA570)
#define JNEMBKJIPKP_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7542A0)
#define JNEMBKJIPKP_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x152B37A0)
#define JNEMBKJIPKP__CCTOR_OFFSET UNITYSDK_OFFSET(0x152B36C0)
#define JNEMBKJIPKP__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int JNEMBKJIPKP_TypeDefinitionIndex = 50337;

struct alignas(4) JNEMBKJIPKP
{
	static ::JNEMBKJIPKP* StaticGet_FDJHEBHLJLD()
	{
		return (::JNEMBKJIPKP*)Il2CppClass::FromTypeDefinitionIndex(JNEMBKJIPKP_TypeDefinitionIndex)->GetStaticField(0xE540);
	}
	::System::UInt32 DJJGLILJKEA; // 0x10

	::System::Void _ctor(::System::UInt32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNEMBKJIPKP__CTOR_OFFSET))(this, MGMDLMBEDJF);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNEMBKJIPKP__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::JNEMBKJIPKP LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JNEMBKJIPKP))((::PBYTE)hIl2Cpp + JNEMBKJIPKP_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JNEMBKJIPKP_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEMBKJIPKP_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEMBKJIPKP_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JNEMBKJIPKP_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEMBKJIPKP_JDAPDDEOCEA_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::JNEMBKJIPKP KILPCOMOCMD, ::JNEMBKJIPKP BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::JNEMBKJIPKP, ::JNEMBKJIPKP))((::PBYTE)hIl2Cpp + JNEMBKJIPKP_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::JNEMBKJIPKP KILPCOMOCMD, ::JNEMBKJIPKP BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::JNEMBKJIPKP, ::JNEMBKJIPKP))((::PBYTE)hIl2Cpp + JNEMBKJIPKP_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/
};
