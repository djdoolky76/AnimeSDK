#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define GLMGLOOOADJ_ABABHKGPNGC_OFFSET UNITYSDK_OFFSET(0x748760)
#define GLMGLOOOADJ_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x748680)
#define GLMGLOOOADJ_COMPARETO_OFFSET UNITYSDK_OFFSET(0x748670)
#define GLMGLOOOADJ_DJFKOKBPKNI_OFFSET UNITYSDK_OFFSET(0x748760)
#define GLMGLOOOADJ_DNPCBKOIGDP_OFFSET UNITYSDK_OFFSET(0x748840)
#define GLMGLOOOADJ_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x748890)
#define GLMGLOOOADJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x748690)
#define GLMGLOOOADJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x748660)
#define GLMGLOOOADJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7485E0)
#define GLMGLOOOADJ_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7486A0)
#define GLMGLOOOADJ_IIKFMNBEBEI_OFFSET UNITYSDK_OFFSET(0x14CFBD70)
#define GLMGLOOOADJ_INCFIJKMIGG_1_OFFSET UNITYSDK_OFFSET(0x14CFC300)
#define GLMGLOOOADJ_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x14CFC0A0)
#define GLMGLOOOADJ_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x748700)
#define GLMGLOOOADJ_JPPEEOLOGGP_1_OFFSET UNITYSDK_OFFSET(0x14CFC1A0)
#define GLMGLOOOADJ_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x14CFBFA0)
#define GLMGLOOOADJ_METHOD_16_OFFSET UNITYSDK_OFFSET(0x748840)
#define GLMGLOOOADJ_METHOD_21_1_OFFSET UNITYSDK_OFFSET(0x748760)
#define GLMGLOOOADJ_NOGJIJMACNO_1_OFFSET UNITYSDK_OFFSET(0x14CFBCF0)
#define GLMGLOOOADJ_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x14CFBBD0)
#define GLMGLOOOADJ_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x748840)
#define GLMGLOOOADJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7485D0)
#define GLMGLOOOADJ__CTOR_OFFSET UNITYSDK_OFFSET(0x7484F0)

inline static constexpr unsigned int GLMGLOOOADJ_TypeDefinitionIndex = 62602;

struct alignas(4) GLMGLOOOADJ
{
	// static const ::System::Byte DDPIMPLICEG = 0x50; // 0x0
	// static const ::System::Byte KIDAANFCJOA = 0x86; // 0x0
	// static const ::System::Byte HGBFCCBHMJI = 0x72; // 0x0
	::System::UInt32 IFBPOMFHEOC; // 0x10

	::System::Void _ctor(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLMGLOOOADJ__CTOR_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_TOSTRING_OFFSET))(this);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 CompareTo(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_COMPARETO_OFFSET))(this, EIFONLCJOPG);
	}

	/*
	::System::Int32 CompareTo_1(::GLMGLOOOADJ LIBPKNHDIGP)
	{
		return ((::System::Int32(*)(::PVOID, ::GLMGLOOOADJ))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_COMPARETO_1_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	/*
	::System::Boolean Equals_1(::GLMGLOOOADJ LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::GLMGLOOOADJ))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_EQUALS_1_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::GLMGLOOOADJ EJCBEJMGFAJ, ::GLMGLOOOADJ EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::GLMGLOOOADJ, ::GLMGLOOOADJ))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_NOGJIJMACNO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::System::Boolean NOGJIJMACNO_1(::GLMGLOOOADJ EJCBEJMGFAJ, ::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::GLMGLOOOADJ, ::System::Boolean))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_NOGJIJMACNO_1_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	/*
	static ::GLMGLOOOADJ IIKFMNBEBEI(::GLMGLOOOADJ EJCBEJMGFAJ)
	{
		return ((::GLMGLOOOADJ(*)(::GLMGLOOOADJ))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_IIKFMNBEBEI_OFFSET))(EJCBEJMGFAJ);
	}
	*/

	::System::Void ABABHKGPNGC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_ABABHKGPNGC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PEOEBEBFIJO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_PEOEBEBFIJO_OFFSET))(this);
	}

	::System::Void DJFKOKBPKNI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_DJFKOKBPKNI_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::GLMGLOOOADJ JPPEEOLOGGP(::System::Boolean HFMHOELKCAJ)
	{
		return ((::GLMGLOOOADJ(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_JPPEEOLOGGP_OFFSET))(HFMHOELKCAJ);
	}
	*/

	::System::Boolean Method_16()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_METHOD_16_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::GLMGLOOOADJ EJCBEJMGFAJ, ::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::GLMGLOOOADJ, ::System::Boolean))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_INCFIJKMIGG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_DPIHOJBBGLA_OFFSET))(this);
	}

	/*
	static ::System::Boolean JPPEEOLOGGP_1(::GLMGLOOOADJ HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::GLMGLOOOADJ))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_JPPEEOLOGGP_1_OFFSET))(HFMHOELKCAJ);
	}
	*/

	::System::Boolean DNPCBKOIGDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_DNPCBKOIGDP_OFFSET))(this);
	}

	::System::Void Method_21_1(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_METHOD_21_1_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::System::Boolean INCFIJKMIGG_1(::GLMGLOOOADJ EJCBEJMGFAJ, ::GLMGLOOOADJ EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::GLMGLOOOADJ, ::GLMGLOOOADJ))((::PBYTE)hIl2Cpp + GLMGLOOOADJ_INCFIJKMIGG_1_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/
};
