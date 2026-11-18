#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define HKHKHHLFNMN_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x15DBFB30)
#define HKHKHHLFNMN_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x15DBFA10)
#define HKHKHHLFNMN_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x15DBFB70)
#define HKHKHHLFNMN_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x15DBFC50)
#define HKHKHHLFNMN_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x15DBFCE0)
#define HKHKHHLFNMN_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x15DBF8D0)
#define HKHKHHLFNMN_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x15DBF770)
#define HKHKHHLFNMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15DBF6B0)
#define HKHKHHLFNMN__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBFB20)

inline static constexpr unsigned int HKHKHHLFNMN_TypeDefinitionIndex = 48128;

class HKHKHHLFNMN : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::Single LANJCCPMPHI; // 0x50
	::System::Single OCPPABKFPMO; // 0x54
	::System::Boolean GKIKNLGOECJ; // 0x58
	::System::Boolean MPPCBJAAKEM; // 0x59

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKHHLFNMN__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKHHLFNMN_TOSTRING_OFFSET))(this);
	}

	::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + HKHKHHLFNMN_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
	}

	::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* EHPDFPIHAGC, ::System::String* IDKCFBPCECO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HKHKHHLFNMN_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, EHPDFPIHAGC, IDKCFBPCECO);
	}

	::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKHHLFNMN_FMHAMBGPKBD_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKHHLFNMN_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + HKHKHHLFNMN_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKHHLFNMN_HPFIJKDELAG_OFFSET))(this);
	}

	::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HKHKHHLFNMN_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
