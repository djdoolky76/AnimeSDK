#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/MoleMole/Config/TextureSheetInterruptType.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define NIHBFHOGFFA_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0xE75E310)
#define NIHBFHOGFFA_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0xE75E600)
#define NIHBFHOGFFA_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0xE75E570)
#define NIHBFHOGFFA_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0xE75E6E0)
#define NIHBFHOGFFA_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0xE75E420)
#define NIHBFHOGFFA_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0xE75E0C0)
#define NIHBFHOGFFA__CTOR_OFFSET UNITYSDK_OFFSET(0xE75E560)

inline static constexpr unsigned int NIHBFHOGFFA_TypeDefinitionIndex = 84406;

class NIHBFHOGFFA : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* EIIGBMGDDKC; // 0x50
	::System::String* GPJIMPBGNOE; // 0x58
	::System::Boolean IJAKKJIFAKF; // 0x60
	::System::Byte _padding0[0x3];
	::MoleMole::Config::TextureSheetInterruptType KEGGOPELHDB; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHBFHOGFFA__CTOR_OFFSET))(this);
	}

	::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + NIHBFHOGFFA_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
	}

	::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHBFHOGFFA_FMHAMBGPKBD_OFFSET))(this);
	}

	::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* NLIIIFNFKLK, ::System::String* IDKCFBPCECO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NIHBFHOGFFA_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, NLIIIFNFKLK, IDKCFBPCECO);
	}

	::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHBFHOGFFA_HPFIJKDELAG_OFFSET))(this);
	}

	::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + NIHBFHOGFFA_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NIHBFHOGFFA_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
