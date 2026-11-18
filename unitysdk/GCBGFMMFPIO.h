#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define GCBGFMMFPIO_EBCPDBPFFLC_OFFSET UNITYSDK_OFFSET(0x359320)
#define GCBGFMMFPIO_ECCEEDCKEBL_OFFSET UNITYSDK_OFFSET(0x944F40)
#define GCBGFMMFPIO_FAKPMICPIFI_OFFSET UNITYSDK_OFFSET(0x944EF0)
#define GCBGFMMFPIO_HGAFELGFLKP_OFFSET UNITYSDK_OFFSET(0x93BEF0)
#define GCBGFMMFPIO_HOCALPBLDFA_OFFSET UNITYSDK_OFFSET(0x945040)
#define GCBGFMMFPIO_KDFHDBFILIK_OFFSET UNITYSDK_OFFSET(0x944FE0)
#define GCBGFMMFPIO_KMBFCJNMPGE_OFFSET UNITYSDK_OFFSET(0x945050)
#define GCBGFMMFPIO_LPEHIAGGJMP_OFFSET UNITYSDK_OFFSET(0x945030)
#define GCBGFMMFPIO_MEOLKKAEKAI_OFFSET UNITYSDK_OFFSET(0x1EFC73B0)
#define GCBGFMMFPIO_MNFDNAFOBBN_OFFSET UNITYSDK_OFFSET(0x944E80)
#define GCBGFMMFPIO_NCNOMFOCLBH_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define GCBGFMMFPIO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x944F90)
#define GCBGFMMFPIO_OAJJFNNGLJD_OFFSET UNITYSDK_OFFSET(0x1EFC7340)
#define GCBGFMMFPIO_OMLBLFGFFPL_OFFSET UNITYSDK_OFFSET(0x1EFC7610)
#define GCBGFMMFPIO_PMMANFMACFE_OFFSET UNITYSDK_OFFSET(0x944EE0)
#define GCBGFMMFPIO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFC7040)
#define GCBGFMMFPIO__CTOR_OFFSET UNITYSDK_OFFSET(0x93BCD0)

inline static constexpr unsigned int GCBGFMMFPIO_TypeDefinitionIndex = 28699;

struct alignas(4) GCBGFMMFPIO
{
	static ::GCBGFMMFPIO* StaticGet__LHDLOLPAJNI_k__BackingField()
	{
		return (::GCBGFMMFPIO*)Il2CppClass::FromTypeDefinitionIndex(GCBGFMMFPIO_TypeDefinitionIndex)->GetStaticField(0x7DF0);
	}
	static ::GCBGFMMFPIO* StaticGet__ACJFJDJKOPK_k__BackingField()
	{
		return (::GCBGFMMFPIO*)Il2CppClass::FromTypeDefinitionIndex(GCBGFMMFPIO_TypeDefinitionIndex)->GetStaticField(0x7DF8);
	}
	static ::GCBGFMMFPIO* StaticGet__DFAPHBEKNLN_k__BackingField()
	{
		return (::GCBGFMMFPIO*)Il2CppClass::FromTypeDefinitionIndex(GCBGFMMFPIO_TypeDefinitionIndex)->GetStaticField(0x7E00);
	}
	::System::Int32 KBPLMDAFOEF; // 0x10
	::System::Int32 LDDJOFHAOHG; // 0x14

	::System::Void _ctor(::System::Int32 KBPLMDAFOEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GCBGFMMFPIO__CTOR_OFFSET))(this, KBPLMDAFOEF);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCBGFMMFPIO__CCTOR_OFFSET))();
	}

	::System::Void MNFDNAFOBBN(::System::Int32 KBPLMDAFOEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GCBGFMMFPIO_MNFDNAFOBBN_OFFSET))(this, KBPLMDAFOEF);
	}

	::System::Int32 NCNOMFOCLBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBGFMMFPIO_NCNOMFOCLBH_OFFSET))(this);
	}

	::System::Single PMMANFMACFE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBGFMMFPIO_PMMANFMACFE_OFFSET))(this);
	}

	::System::Boolean FAKPMICPIFI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBGFMMFPIO_FAKPMICPIFI_OFFSET))(this);
	}

	::System::Boolean ECCEEDCKEBL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBGFMMFPIO_ECCEEDCKEBL_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GCBGFMMFPIO_NPOLNFDBOOD_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::GCBGFMMFPIO OAJJFNNGLJD()
	{
		return ((::GCBGFMMFPIO(*)())((::PBYTE)hIl2Cpp + GCBGFMMFPIO_OAJJFNNGLJD_OFFSET))();
	}
	*/

	::System::Int32 EBCPDBPFFLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBGFMMFPIO_EBCPDBPFFLC_OFFSET))(this);
	}

	/*
	static ::GCBGFMMFPIO MEOLKKAEKAI()
	{
		return ((::GCBGFMMFPIO(*)())((::PBYTE)hIl2Cpp + GCBGFMMFPIO_MEOLKKAEKAI_OFFSET))();
	}
	*/

	::System::Boolean KDFHDBFILIK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBGFMMFPIO_KDFHDBFILIK_OFFSET))(this);
	}

	::System::Single LPEHIAGGJMP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBGFMMFPIO_LPEHIAGGJMP_OFFSET))(this);
	}

	::System::Boolean HOCALPBLDFA(::System::Int32 HBEKKMCBGBK, ::System::Boolean LLCJDKCFPCF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GCBGFMMFPIO_HOCALPBLDFA_OFFSET))(this, HBEKKMCBGBK, LLCJDKCFPCF);
	}

	/*
	static ::GCBGFMMFPIO OMLBLFGFFPL()
	{
		return ((::GCBGFMMFPIO(*)())((::PBYTE)hIl2Cpp + GCBGFMMFPIO_OMLBLFGFFPL_OFFSET))();
	}
	*/

	::System::Int32 HGAFELGFLKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBGFMMFPIO_HGAFELGFLKP_OFFSET))(this);
	}

	::System::Void KMBFCJNMPGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBGFMMFPIO_KMBFCJNMPGE_OFFSET))(this);
	}
};
