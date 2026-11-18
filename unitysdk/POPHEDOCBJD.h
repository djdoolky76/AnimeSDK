#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define POPHEDOCBJD_ABABHKGPNGC_OFFSET UNITYSDK_OFFSET(0x91F3F0)
#define POPHEDOCBJD_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x91F3D0)
#define POPHEDOCBJD_COMPARETO_OFFSET UNITYSDK_OFFSET(0x91F3C0)
#define POPHEDOCBJD_DJFKOKBPKNI_OFFSET UNITYSDK_OFFSET(0x91F3F0)
#define POPHEDOCBJD_DNPCBKOIGDP_OFFSET UNITYSDK_OFFSET(0x91F4C0)
#define POPHEDOCBJD_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x91F510)
#define POPHEDOCBJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x91F3E0)
#define POPHEDOCBJD_EQUALS_OFFSET UNITYSDK_OFFSET(0x91F3B0)
#define POPHEDOCBJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x91F2E0)
#define POPHEDOCBJD_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x91F5F0)
#define POPHEDOCBJD_IIKFMNBEBEI_OFFSET UNITYSDK_OFFSET(0x1EBBF5E0)
#define POPHEDOCBJD_INCFIJKMIGG_1_OFFSET UNITYSDK_OFFSET(0x1EBBF550)
#define POPHEDOCBJD_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1EBBF1D0)
#define POPHEDOCBJD_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x91F590)
#define POPHEDOCBJD_JPPEEOLOGGP_1_OFFSET UNITYSDK_OFFSET(0x1EBBF7F0)
#define POPHEDOCBJD_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x1EBBF380)
#define POPHEDOCBJD_METHOD_12_1_OFFSET UNITYSDK_OFFSET(0x91F3F0)
#define POPHEDOCBJD_METHOD_9_OFFSET UNITYSDK_OFFSET(0x91F4C0)
#define POPHEDOCBJD_NOGJIJMACNO_1_OFFSET UNITYSDK_OFFSET(0x1EBBF8A0)
#define POPHEDOCBJD_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1EBBF2F0)
#define POPHEDOCBJD_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x91F4C0)
#define POPHEDOCBJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x91F2D0)
#define POPHEDOCBJD__CTOR_OFFSET UNITYSDK_OFFSET(0x91F1F0)

inline static constexpr unsigned int POPHEDOCBJD_TypeDefinitionIndex = 90187;

struct alignas(4) POPHEDOCBJD
{
	// static const ::System::Byte DDPIMPLICEG = 0x9D; // 0x0
	// static const ::System::Byte KIDAANFCJOA = 0x2B; // 0x0
	// static const ::System::Byte HGBFCCBHMJI = 0xB1; // 0x0
	::System::UInt32 IFBPOMFHEOC; // 0x10

	::System::Void _ctor(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + POPHEDOCBJD__CTOR_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POPHEDOCBJD_TOSTRING_OFFSET))(this);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POPHEDOCBJD_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POPHEDOCBJD_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 CompareTo(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POPHEDOCBJD_COMPARETO_OFFSET))(this, EIFONLCJOPG);
	}

	/*
	::System::Int32 CompareTo_1(::POPHEDOCBJD LIBPKNHDIGP)
	{
		return ((::System::Int32(*)(::PVOID, ::POPHEDOCBJD))((::PBYTE)hIl2Cpp + POPHEDOCBJD_COMPARETO_1_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	/*
	::System::Boolean Equals_1(::POPHEDOCBJD LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::POPHEDOCBJD))((::PBYTE)hIl2Cpp + POPHEDOCBJD_EQUALS_1_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Void DJFKOKBPKNI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + POPHEDOCBJD_DJFKOKBPKNI_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::POPHEDOCBJD EJCBEJMGFAJ, ::POPHEDOCBJD EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::POPHEDOCBJD, ::POPHEDOCBJD))((::PBYTE)hIl2Cpp + POPHEDOCBJD_INCFIJKMIGG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	::System::Boolean Method_9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POPHEDOCBJD_METHOD_9_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::POPHEDOCBJD EJCBEJMGFAJ, ::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::POPHEDOCBJD, ::System::Boolean))((::PBYTE)hIl2Cpp + POPHEDOCBJD_NOGJIJMACNO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	/*
	static ::System::Boolean JPPEEOLOGGP(::POPHEDOCBJD HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::POPHEDOCBJD))((::PBYTE)hIl2Cpp + POPHEDOCBJD_JPPEEOLOGGP_OFFSET))(HFMHOELKCAJ);
	}
	*/

	::System::Void Method_12_1(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + POPHEDOCBJD_METHOD_12_1_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POPHEDOCBJD_DPIHOJBBGLA_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG_1(::POPHEDOCBJD EJCBEJMGFAJ, ::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::POPHEDOCBJD, ::System::Boolean))((::PBYTE)hIl2Cpp + POPHEDOCBJD_INCFIJKMIGG_1_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	/*
	static ::POPHEDOCBJD IIKFMNBEBEI(::POPHEDOCBJD EJCBEJMGFAJ)
	{
		return ((::POPHEDOCBJD(*)(::POPHEDOCBJD))((::PBYTE)hIl2Cpp + POPHEDOCBJD_IIKFMNBEBEI_OFFSET))(EJCBEJMGFAJ);
	}
	*/

	::System::Void ABABHKGPNGC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + POPHEDOCBJD_ABABHKGPNGC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PEOEBEBFIJO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POPHEDOCBJD_PEOEBEBFIJO_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POPHEDOCBJD_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POPHEDOCBJD_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::POPHEDOCBJD JPPEEOLOGGP_1(::System::Boolean HFMHOELKCAJ)
	{
		return ((::POPHEDOCBJD(*)(::System::Boolean))((::PBYTE)hIl2Cpp + POPHEDOCBJD_JPPEEOLOGGP_1_OFFSET))(HFMHOELKCAJ);
	}
	*/

	::System::Boolean DNPCBKOIGDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POPHEDOCBJD_DNPCBKOIGDP_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO_1(::POPHEDOCBJD EJCBEJMGFAJ, ::POPHEDOCBJD EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::POPHEDOCBJD, ::POPHEDOCBJD))((::PBYTE)hIl2Cpp + POPHEDOCBJD_NOGJIJMACNO_1_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/
};
