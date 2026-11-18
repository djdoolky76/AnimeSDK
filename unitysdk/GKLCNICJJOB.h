#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define GKLCNICJJOB_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x720DC0)
#define GKLCNICJJOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x720BC0)
#define GKLCNICJJOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x720C60)
#define GKLCNICJJOB_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x720E50)
#define GKLCNICJJOB_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x720D20)
#define GKLCNICJJOB_PADHEHLKBDO_OFFSET UNITYSDK_OFFSET(0x720DB0)
#define GKLCNICJJOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x720D10)
#define GKLCNICJJOB__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D5E620)

inline static constexpr unsigned int GKLCNICJJOB_TypeDefinitionIndex = 68816;

struct alignas(8) GKLCNICJJOB
{
	static ::GKLCNICJJOB* StaticGet_FDJHEBHLJLD()
	{
		return (::GKLCNICJJOB*)Il2CppClass::FromTypeDefinitionIndex(GKLCNICJJOB_TypeDefinitionIndex)->GetStaticField(0x4CF70);
	}
	::System::Type* LMJMLNOFJCF; // 0x10
	::Foundation::AssetPath KDCBGGEDHHA; // 0x18
	::System::String* AAOMMLHMFHG; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKLCNICJJOB__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::GKLCNICJJOB LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::GKLCNICJJOB))((::PBYTE)hIl2Cpp + GKLCNICJJOB_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLCNICJJOB_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLCNICJJOB_TOSTRING_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLCNICJJOB_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Boolean PADHEHLKBDO(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKLCNICJJOB_PADHEHLKBDO_OFFSET))(this, EIFONLCJOPG);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLCNICJJOB_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLCNICJJOB_HLPHPBAODIF_OFFSET))(this);
	}
};
