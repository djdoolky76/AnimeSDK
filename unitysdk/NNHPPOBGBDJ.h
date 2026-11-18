#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define NNHPPOBGBDJ_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0xE0AB3A0)
#define NNHPPOBGBDJ_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0xE0AB160)
#define NNHPPOBGBDJ_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0xE0AB3E0)
#define NNHPPOBGBDJ_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0xE0AB4C0)
#define NNHPPOBGBDJ_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0xE0AB550)
#define NNHPPOBGBDJ_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0xE0AB260)
#define NNHPPOBGBDJ_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0xE0AAED0)
#define NNHPPOBGBDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE0AAE10)
#define NNHPPOBGBDJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE0AB390)

inline static constexpr unsigned int NNHPPOBGBDJ_TypeDefinitionIndex = 44580;

class NNHPPOBGBDJ : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::Single PMLOGFLOLNJ; // 0x50
	::System::Single HBOJLFKAOOH; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHPPOBGBDJ__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHPPOBGBDJ_TOSTRING_OFFSET))(this);
	}

	::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + NNHPPOBGBDJ_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
	}

	::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHPPOBGBDJ_FMHAMBGPKBD_OFFSET))(this);
	}

	::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* NLIIIFNFKLK, ::System::String* IDKCFBPCECO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NNHPPOBGBDJ_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, NLIIIFNFKLK, IDKCFBPCECO);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHPPOBGBDJ_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + NNHPPOBGBDJ_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHPPOBGBDJ_HPFIJKDELAG_OFFSET))(this);
	}

	::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NNHPPOBGBDJ_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
