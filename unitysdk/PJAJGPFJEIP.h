#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define PJAJGPFJEIP_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x1371A570)
#define PJAJGPFJEIP_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x1371A740)
#define PJAJGPFJEIP_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x1371A820)
#define PJAJGPFJEIP_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x1371A8B0)
#define PJAJGPFJEIP_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x1371A660)
#define PJAJGPFJEIP_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x1371A3E0)
#define PJAJGPFJEIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1371A730)

inline static constexpr unsigned int PJAJGPFJEIP_TypeDefinitionIndex = 68371;

class PJAJGPFJEIP : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* AHECJBACEDB; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAJGPFJEIP__CTOR_OFFSET))(this);
	}

	::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + PJAJGPFJEIP_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
	}

	::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAJGPFJEIP_FMHAMBGPKBD_OFFSET))(this);
	}

	::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* EHPDFPIHAGC, ::System::String* IDKCFBPCECO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PJAJGPFJEIP_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, EHPDFPIHAGC, IDKCFBPCECO);
	}

	::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + PJAJGPFJEIP_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAJGPFJEIP_HPFIJKDELAG_OFFSET))(this);
	}

	::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PJAJGPFJEIP_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
