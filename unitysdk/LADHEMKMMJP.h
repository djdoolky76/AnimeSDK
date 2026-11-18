#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPHCMONINBH.h"
#include "unitysdk/LPHCMONINBH_PCBAFNPNEGI.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

class PFMILGFHOEM;

#define LADHEMKMMJP_IMKFHOHPIFF_OFFSET UNITYSDK_OFFSET(0x15179C70)
#define LADHEMKMMJP_LNFFPAGOEMM_OFFSET UNITYSDK_OFFSET(0x15179BF0)
#define LADHEMKMMJP_NEDFCEGCNBN_OFFSET UNITYSDK_OFFSET(0x15179BE0)
#define LADHEMKMMJP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15179C00)
#define LADHEMKMMJP__CTOR_OFFSET UNITYSDK_OFFSET(0x15179DA0)

inline static constexpr unsigned int LADHEMKMMJP_TypeDefinitionIndex = 44203;

class LADHEMKMMJP : public ::LPHCMONINBH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LADHEMKMMJP__CTOR_OFFSET))(this);
	}

	::LPHCMONINBH_PCBAFNPNEGI NEDFCEGCNBN()
	{
		return ((::LPHCMONINBH_PCBAFNPNEGI(*)(::PVOID))((::PBYTE)hIl2Cpp + LADHEMKMMJP_NEDFCEGCNBN_OFFSET))(this);
	}

	::System::Boolean LNFFPAGOEMM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LADHEMKMMJP_LNFFPAGOEMM_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::MoleMole::UICameraAtom GFCABMLNGDK, ::MoleMole::UICameraAtom HFAMGAICNHP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + LADHEMKMMJP_OJENCMOGDKL_OFFSET))(this, GFCABMLNGDK, HFAMGAICNHP);
	}

	::PFMILGFHOEM* IMKFHOHPIFF(::MoleMole::UICameraAtom GFCABMLNGDK, ::MoleMole::UICameraAtom HFAMGAICNHP)
	{
		return ((::PFMILGFHOEM*(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + LADHEMKMMJP_IMKFHOHPIFF_OFFSET))(this, GFCABMLNGDK, HFAMGAICNHP);
	}
};
