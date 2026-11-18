#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define ECBKFAAHFIK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E4510)
#define ECBKFAAHFIK_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E44E0)
#define ECBKFAAHFIK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E4610)
#define ECBKFAAHFIK_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x3E46A0)
#define ECBKFAAHFIK_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x3E4620)
#define ECBKFAAHFIK_LNIIPEGEMMP_OFFSET UNITYSDK_OFFSET(0x7FE5710)
#define ECBKFAAHFIK__CCTOR_OFFSET UNITYSDK_OFFSET(0x7FE5B80)
#define ECBKFAAHFIK__CTOR_OFFSET UNITYSDK_OFFSET(0x3E44D0)

inline static constexpr unsigned int ECBKFAAHFIK_TypeDefinitionIndex = 65996;

struct alignas(4) ECBKFAAHFIK
{
	static ::ECBKFAAHFIK* StaticGet_HICEJEACBGD()
	{
		return (::ECBKFAAHFIK*)Il2CppClass::FromTypeDefinitionIndex(ECBKFAAHFIK_TypeDefinitionIndex)->GetStaticField(0x12720);
	}
	::System::Boolean AHOJLADNFIP; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single PLKFFMDOGOK; // 0x14
	::System::Single DDKDPNPFHHI; // 0x18
	::System::Single AFBLIKMDKPJ; // 0x1C
	::System::Boolean FLMGCKHCKPO; // 0x20
	::System::Byte _padding1[0x3];
	::System::Single PPOFKNOMNBL; // 0x24
	::System::Single GIEGMECDNJO; // 0x28
	::System::Boolean GBFFKMBKKGE; // 0x2C
	::System::Byte _padding2[0x3];
	::System::Single MPMDFLIBDHK; // 0x30

	::System::Void _ctor(::System::Single MNCMJFCMDBP, ::System::Single CIIHCJBFDBM, ::System::Single ENBLPOPMFNI, ::System::Boolean ICELLOINNOE, ::System::Single FNHOHHKLDEP, ::System::Single OAJKOHDMBCN, ::System::Boolean KCGGELGIJJD, ::System::Single DJAHBEEPPMK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + ECBKFAAHFIK__CTOR_OFFSET))(this, MNCMJFCMDBP, CIIHCJBFDBM, ENBLPOPMFNI, ICELLOINNOE, FNHOHHKLDEP, OAJKOHDMBCN, KCGGELGIJJD, DJAHBEEPPMK);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECBKFAAHFIK__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::ECBKFAAHFIK LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ECBKFAAHFIK))((::PBYTE)hIl2Cpp + ECBKFAAHFIK_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECBKFAAHFIK_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBKFAAHFIK_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECBKFAAHFIK_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBKFAAHFIK_HLPHPBAODIF_OFFSET))(this);
	}

	static ::System::Single LNIIPEGEMMP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + ECBKFAAHFIK_LNIIPEGEMMP_OFFSET))(EGEGIMGMJHN);
	}
};
