#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class FFDNKIDGFMD;
namespace System { class Object; }
namespace System { class String; }

#define BMBMBLDFBID_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x6068F0)
#define BMBMBLDFBID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x606730)
#define BMBMBLDFBID_EQUALS_OFFSET UNITYSDK_OFFSET(0x6066E0)
#define BMBMBLDFBID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x606740)
#define BMBMBLDFBID_HBPANDJAOOJ_OFFSET UNITYSDK_OFFSET(0x282350)
#define BMBMBLDFBID_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x606890)
#define BMBMBLDFBID_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0xFF8D310)
#define BMBMBLDFBID_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x606800)
#define BMBMBLDFBID_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x6067A0)
#define BMBMBLDFBID_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0xFF8D4D0)
#define BMBMBLDFBID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x606790)
#define BMBMBLDFBID__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF8D290)
#define BMBMBLDFBID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x358B00)
#define BMBMBLDFBID__CTOR_OFFSET UNITYSDK_OFFSET(0x606670)

inline static constexpr unsigned int BMBMBLDFBID_TypeDefinitionIndex = 82030;

struct alignas(4) BMBMBLDFBID
{
	static ::BMBMBLDFBID* StaticGet_EFMCBKOMKIH()
	{
		return (::BMBMBLDFBID*)Il2CppClass::FromTypeDefinitionIndex(BMBMBLDFBID_TypeDefinitionIndex)->GetStaticField(0xCAC0);
	}
	::System::UInt64 _HFIHNNPBJPB_k__BackingField; // 0x10

	::System::Void _ctor(::FFDNKIDGFMD* ABOGJGCIOKD)
	{
		return ((::System::Void(*)(::PVOID, ::FFDNKIDGFMD*))((::PBYTE)hIl2Cpp + BMBMBLDFBID__CTOR_OFFSET))(this, ABOGJGCIOKD);
	}

	::System::Void _ctor_1(::System::UInt64 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + BMBMBLDFBID__CTOR_1_OFFSET))(this, MGMDLMBEDJF);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMBMBLDFBID__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::BMBMBLDFBID LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + BMBMBLDFBID_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBMBLDFBID_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBMBLDFBID_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBMBLDFBID_TOSTRING_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBMBLDFBID_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::UInt64 HBPANDJAOOJ()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBMBLDFBID_HBPANDJAOOJ_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::BMBMBLDFBID FFKBEGIHIGG, ::BMBMBLDFBID CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::BMBMBLDFBID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + BMBMBLDFBID_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBMBLDFBID_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBMBLDFBID_HLPHPBAODIF_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBMBLDFBID_DPIHOJBBGLA_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::BMBMBLDFBID FFKBEGIHIGG, ::BMBMBLDFBID CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::BMBMBLDFBID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + BMBMBLDFBID_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/
};
