#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPGPNMLGEN.h"
#include "unitysdk/GFMHODALAIN.h"

namespace MoleMole { class UIBabeltowerContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AEJLENCEHDK_EHJPPBEEBCL_OFFSET UNITYSDK_OFFSET(0x12CE3FC0)
#define AEJLENCEHDK_FFLCGPKNFHM_OFFSET UNITYSDK_OFFSET(0x12CE4230)
#define AEJLENCEHDK_HNGGOEAKMFN_OFFSET UNITYSDK_OFFSET(0x12CE41A0)
#define AEJLENCEHDK_OMGFHBEAHBL_OFFSET UNITYSDK_OFFSET(0x12CE4150)
#define AEJLENCEHDK__CTOR_OFFSET UNITYSDK_OFFSET(0x12CE3B00)

inline static constexpr unsigned int AEJLENCEHDK_TypeDefinitionIndex = 50848;

class AEJLENCEHDK : public ::GFMHODALAIN
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* EKIAMNLPPKP; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* FNMLNPIHKHO; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* GDLOKLENJFD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLENCEHDK__CTOR_OFFSET))(this);
	}

	::System::Void EHJPPBEEBCL(::MoleMole::UIBabeltowerContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerContext*))((::PBYTE)hIl2Cpp + AEJLENCEHDK_EHJPPBEEBCL_OFFSET))(this, AAOCANGHBDG);
	}

	::DJPGPNMLGEN OMGFHBEAHBL()
	{
		return ((::DJPGPNMLGEN(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLENCEHDK_OMGFHBEAHBL_OFFSET))(this);
	}

	::DJPGPNMLGEN HNGGOEAKMFN()
	{
		return ((::DJPGPNMLGEN(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLENCEHDK_HNGGOEAKMFN_OFFSET))(this);
	}

	::System::Void FFLCGPKNFHM(::MoleMole::UIBabeltowerContext* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerContext*))((::PBYTE)hIl2Cpp + AEJLENCEHDK_FFLCGPKNFHM_OFFSET))(this, MIALFKCCCPI);
	}
};
