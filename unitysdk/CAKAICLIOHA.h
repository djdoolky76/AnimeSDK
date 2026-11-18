#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPHCMONINBH.h"
#include "unitysdk/LPHCMONINBH_PCBAFNPNEGI.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

class PFMILGFHOEM;

#define CAKAICLIOHA_IMKFHOHPIFF_OFFSET UNITYSDK_OFFSET(0x16A09940)
#define CAKAICLIOHA_LNFFPAGOEMM_OFFSET UNITYSDK_OFFSET(0x16A098C0)
#define CAKAICLIOHA_NEDFCEGCNBN_OFFSET UNITYSDK_OFFSET(0x16A098B0)
#define CAKAICLIOHA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16A098D0)
#define CAKAICLIOHA__CTOR_OFFSET UNITYSDK_OFFSET(0x16A09AA0)

inline static constexpr unsigned int CAKAICLIOHA_TypeDefinitionIndex = 83805;

class CAKAICLIOHA : public ::LPHCMONINBH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKAICLIOHA__CTOR_OFFSET))(this);
	}

	::LPHCMONINBH_PCBAFNPNEGI NEDFCEGCNBN()
	{
		return ((::LPHCMONINBH_PCBAFNPNEGI(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKAICLIOHA_NEDFCEGCNBN_OFFSET))(this);
	}

	::System::Boolean LNFFPAGOEMM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKAICLIOHA_LNFFPAGOEMM_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::MoleMole::UICameraAtom GFCABMLNGDK, ::MoleMole::UICameraAtom HFAMGAICNHP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CAKAICLIOHA_OJENCMOGDKL_OFFSET))(this, GFCABMLNGDK, HFAMGAICNHP);
	}

	::PFMILGFHOEM* IMKFHOHPIFF(::MoleMole::UICameraAtom GFCABMLNGDK, ::MoleMole::UICameraAtom HFAMGAICNHP)
	{
		return ((::PFMILGFHOEM*(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CAKAICLIOHA_IMKFHOHPIFF_OFFSET))(this, GFCABMLNGDK, HFAMGAICNHP);
	}
};
