#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEJLENCEHDK.h"
#include "unitysdk/DJPGPNMLGEN.h"

namespace MoleMole { class UIBabeltowerContext; }

#define FBNNEKGBAOH_EHJPPBEEBCL_OFFSET UNITYSDK_OFFSET(0x14191770)
#define FBNNEKGBAOH_FFLCGPKNFHM_OFFSET UNITYSDK_OFFSET(0x14191900)
#define FBNNEKGBAOH_HNGGOEAKMFN_OFFSET UNITYSDK_OFFSET(0x14191910)
#define FBNNEKGBAOH_OMGFHBEAHBL_OFFSET UNITYSDK_OFFSET(0x14191720)
#define FBNNEKGBAOH__CTOR_OFFSET UNITYSDK_OFFSET(0x141912F0)

inline static constexpr unsigned int FBNNEKGBAOH_TypeDefinitionIndex = 78707;

class FBNNEKGBAOH : public ::AEJLENCEHDK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNNEKGBAOH__CTOR_OFFSET))(this);
	}

	::DJPGPNMLGEN OMGFHBEAHBL()
	{
		return ((::DJPGPNMLGEN(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNNEKGBAOH_OMGFHBEAHBL_OFFSET))(this);
	}

	::System::Void EHJPPBEEBCL(::MoleMole::UIBabeltowerContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerContext*))((::PBYTE)hIl2Cpp + FBNNEKGBAOH_EHJPPBEEBCL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void FFLCGPKNFHM(::MoleMole::UIBabeltowerContext* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerContext*))((::PBYTE)hIl2Cpp + FBNNEKGBAOH_FFLCGPKNFHM_OFFSET))(this, MIALFKCCCPI);
	}

	::DJPGPNMLGEN HNGGOEAKMFN()
	{
		return ((::DJPGPNMLGEN(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNNEKGBAOH_HNGGOEAKMFN_OFFSET))(this);
	}
};
