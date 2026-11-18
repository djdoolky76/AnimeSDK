#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define GLBBADHGIGC_ABMGLOGJHEB_OFFSET UNITYSDK_OFFSET(0x721030)
#define GLBBADHGIGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x720F20)
#define GLBBADHGIGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x720F10)
#define GLBBADHGIGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x720EC0)
#define GLBBADHGIGC_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x720FD0)
#define GLBBADHGIGC_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x13D5E9D0)
#define GLBBADHGIGC_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x720F70)
#define GLBBADHGIGC_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x13D5EB70)

inline static constexpr unsigned int GLBBADHGIGC_TypeDefinitionIndex = 49851;

struct alignas(4) GLBBADHGIGC
{
	::System::UInt16 EGEGIMGMJHN; // 0x10

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBBADHGIGC_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLBBADHGIGC_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	/*
	::System::Boolean Equals_1(::GLBBADHGIGC LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::GLBBADHGIGC))((::PBYTE)hIl2Cpp + GLBBADHGIGC_EQUALS_1_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLBBADHGIGC_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBBADHGIGC_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::GLBBADHGIGC EJCBEJMGFAJ, ::GLBBADHGIGC EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::GLBBADHGIGC, ::GLBBADHGIGC))((::PBYTE)hIl2Cpp + GLBBADHGIGC_INCFIJKMIGG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	::System::Void ABMGLOGJHEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBBADHGIGC_ABMGLOGJHEB_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::GLBBADHGIGC EJCBEJMGFAJ, ::GLBBADHGIGC EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::GLBBADHGIGC, ::GLBBADHGIGC))((::PBYTE)hIl2Cpp + GLBBADHGIGC_NOGJIJMACNO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/
};
