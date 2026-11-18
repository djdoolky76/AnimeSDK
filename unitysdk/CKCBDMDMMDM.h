#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define CKCBDMDMMDM_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7E7840)
#define CKCBDMDMMDM_EBONJHBDAPH_OFFSET UNITYSDK_OFFSET(0x282350)
#define CKCBDMDMMDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7E7630)
#define CKCBDMDMMDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x7E7620)
#define CKCBDMDMMDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7E76B0)
#define CKCBDMDMMDM_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7E77E0)
#define CKCBDMDMMDM_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x197137F0)
#define CKCBDMDMMDM_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7E7780)
#define CKCBDMDMMDM_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x19713900)
#define CKCBDMDMMDM_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x19713740)
#define CKCBDMDMMDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7E75D0)
#define CKCBDMDMMDM__CTOR_OFFSET UNITYSDK_OFFSET(0x7E75B0)

inline static constexpr unsigned int CKCBDMDMMDM_TypeDefinitionIndex = 52255;

struct alignas(8) CKCBDMDMMDM
{
	::System::String* _JMOHECJPHCM_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CKCBDMDMMDM__CTOR_OFFSET))(this, NAPFALLANDL);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCBDMDMMDM_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKCBDMDMMDM_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	/*
	::System::Boolean Equals_1(::CKCBDMDMMDM LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::CKCBDMDMMDM))((::PBYTE)hIl2Cpp + CKCBDMDMMDM_EQUALS_1_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCBDMDMMDM_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::CKCBDMDMMDM KILPCOMOCMD, ::CKCBDMDMMDM BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::CKCBDMDMMDM, ::CKCBDMDMMDM))((::PBYTE)hIl2Cpp + CKCBDMDMMDM_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::CKCBDMDMMDM KILPCOMOCMD, ::CKCBDMDMMDM BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::CKCBDMDMMDM, ::CKCBDMDMMDM))((::PBYTE)hIl2Cpp + CKCBDMDMMDM_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKCBDMDMMDM_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::CKCBDMDMMDM JPPEEOLOGGP(::System::String* MDLNMDJMMJP)
	{
		return ((::CKCBDMDMMDM(*)(::System::String*))((::PBYTE)hIl2Cpp + CKCBDMDMMDM_JPPEEOLOGGP_OFFSET))(MDLNMDJMMJP);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCBDMDMMDM_HLPHPBAODIF_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCBDMDMMDM_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::String* EBONJHBDAPH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCBDMDMMDM_EBONJHBDAPH_OFFSET))(this);
	}
};
