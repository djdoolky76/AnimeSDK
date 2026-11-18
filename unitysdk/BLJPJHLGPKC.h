#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define BLJPJHLGPKC_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x18DA78C0)
#define BLJPJHLGPKC_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x18DA7520)
#define BLJPJHLGPKC_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x18DA77E0)
#define BLJPJHLGPKC_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x18DA7750)
#define BLJPJHLGPKC_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x18DA7900)
#define BLJPJHLGPKC_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x18DA7610)
#define BLJPJHLGPKC_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x18DA72D0)
#define BLJPJHLGPKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18DA7210)
#define BLJPJHLGPKC__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA7740)

inline static constexpr unsigned int BLJPJHLGPKC_TypeDefinitionIndex = 40642;

class BLJPJHLGPKC : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::Single HBOJLFKAOOH; // 0x50
	::System::Single PMLOGFLOLNJ; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJPJHLGPKC__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJPJHLGPKC_TOSTRING_OFFSET))(this);
	}

	::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + BLJPJHLGPKC_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
	}

	::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJPJHLGPKC_FMHAMBGPKBD_OFFSET))(this);
	}

	::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* NLIIIFNFKLK, ::System::String* IDKCFBPCECO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BLJPJHLGPKC_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, NLIIIFNFKLK, IDKCFBPCECO);
	}

	::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJPJHLGPKC_HPFIJKDELAG_OFFSET))(this);
	}

	::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + BLJPJHLGPKC_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJPJHLGPKC_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BLJPJHLGPKC_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
