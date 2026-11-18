#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EIKDPIMGAPG_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x11A884A0)
#define EIKDPIMGAPG_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x11A88DA0)
#define EIKDPIMGAPG_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x11A88D10)
#define EIKDPIMGAPG_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x11A88C70)
#define EIKDPIMGAPG_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x11A885B0)
#define EIKDPIMGAPG_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x11A88680)
#define EIKDPIMGAPG__CTOR_OFFSET UNITYSDK_OFFSET(0x11A88C60)

inline static constexpr unsigned int EIKDPIMGAPG_TypeDefinitionIndex = 87292;

class EIKDPIMGAPG : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicValue*>* AHECJBACEDB; // 0x50
	::System::String* AOLGDHDOCLP; // 0x58
	::System::String* BGPMDIKJFPJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKDPIMGAPG__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKDPIMGAPG_FMHAMBGPKBD_OFFSET))(this);
	}

	::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* EHPDFPIHAGC, ::System::String* IDKCFBPCECO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EIKDPIMGAPG_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, EHPDFPIHAGC, IDKCFBPCECO);
	}

	::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* GBELIHABEDH, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + EIKDPIMGAPG_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, GBELIHABEDH, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
	}

	::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EIKDPIMGAPG_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKDPIMGAPG_HPFIJKDELAG_OFFSET))(this);
	}

	::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + EIKDPIMGAPG_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
