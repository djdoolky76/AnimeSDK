#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/System/Object.h"

class HOAAKHNGJJI;

#define GFNMOAIDCGF_AALFCDPPNBJ_OFFSET UNITYSDK_OFFSET(0x179E83F0)
#define GFNMOAIDCGF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x179E8550)
#define GFNMOAIDCGF_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x179E8710)
#define GFNMOAIDCGF_CHFLCNOGKCK_OFFSET UNITYSDK_OFFSET(0x179E8CC0)
#define GFNMOAIDCGF_CPINBHIOOHD_OFFSET UNITYSDK_OFFSET(0x179E8C80)
#define GFNMOAIDCGF_EKGKBJBDGKO_OFFSET UNITYSDK_OFFSET(0x179E8CA0)
#define GFNMOAIDCGF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x179E8760)
#define GFNMOAIDCGF_OMHEJIEOAAB_OFFSET UNITYSDK_OFFSET(0x179E8DD0)
#define GFNMOAIDCGF_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x179E8C20)
#define GFNMOAIDCGF_PLLBIJPCBIN_OFFSET UNITYSDK_OFFSET(0x179E83D0)
#define GFNMOAIDCGF_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x179E8940)
#define GFNMOAIDCGF_POHJMLAEEMD_OFFSET UNITYSDK_OFFSET(0x179E8DE0)
#define GFNMOAIDCGF__CCTOR_OFFSET UNITYSDK_OFFSET(0x179E8D80)
#define GFNMOAIDCGF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179E86E0)
#define GFNMOAIDCGF__CTOR_OFFSET UNITYSDK_OFFSET(0x179E8410)

inline static constexpr unsigned int GFNMOAIDCGF_TypeDefinitionIndex = 67115;

class GFNMOAIDCGF : public ::System::Object
{
public:
	static ::HOAAKHNGJJI** StaticGet_GBEIFAAMKBC()
	{
		return (::HOAAKHNGJJI**)Il2CppClass::FromTypeDefinitionIndex(GFNMOAIDCGF_TypeDefinitionIndex)->GetStaticField(0x3DD10);
	}
	::HOAAKHNGJJI* MACPHMMPJNP; // 0x10
	::System::Single MBIHPDPLLBN; // 0x18
	::MoleMole::UICameraAtom _GBPACPBEOOD_k__BackingField; // 0x1C
	::MoleMole::UICameraAtom _GJJCCIEHJAG_k__BackingField; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNMOAIDCGF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::MoleMole::UICameraAtom GFCABMLNGDK, ::HOAAKHNGJJI* HGHPPEHHDGJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom, ::HOAAKHNGJJI*))((::PBYTE)hIl2Cpp + GFNMOAIDCGF__CTOR_1_OFFSET))(this, GFCABMLNGDK, HGHPPEHHDGJ);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFNMOAIDCGF__CCTOR_OFFSET))();
	}

	::MoleMole::UICameraAtom PLLBIJPCBIN()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNMOAIDCGF_PLLBIJPCBIN_OFFSET))(this);
	}

	::MoleMole::UICameraAtom AALFCDPPNBJ()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNMOAIDCGF_AALFCDPPNBJ_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNMOAIDCGF_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Boolean PLPONJAKNEB(::System::Single PMNLNNGEIFM, ::MoleMole::UICameraAtom AIGOOKNCCNH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + GFNMOAIDCGF_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM, AIGOOKNCCNH);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNMOAIDCGF_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean CPINBHIOOHD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNMOAIDCGF_CPINBHIOOHD_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::UICameraAtom GFCABMLNGDK, ::HOAAKHNGJJI* HGHPPEHHDGJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom, ::HOAAKHNGJJI*))((::PBYTE)hIl2Cpp + GFNMOAIDCGF_BBOMJDBNHIC_OFFSET))(this, GFCABMLNGDK, HGHPPEHHDGJ);
	}

	::System::Void OMHEJIEOAAB(::MoleMole::UICameraAtom EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + GFNMOAIDCGF_OMHEJIEOAAB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void POHJMLAEEMD(::MoleMole::UICameraAtom EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + GFNMOAIDCGF_POHJMLAEEMD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CHFLCNOGKCK(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GFNMOAIDCGF_CHFLCNOGKCK_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean EKGKBJBDGKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNMOAIDCGF_EKGKBJBDGKO_OFFSET))(this);
	}

	::System::Single PDAADHDFGKP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNMOAIDCGF_PDAADHDFGKP_OFFSET))(this);
	}
};
