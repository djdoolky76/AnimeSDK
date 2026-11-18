#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define EPEKFALDMKM_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x16169C60)
#define EPEKFALDMKM_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x16169E20)
#define EPEKFALDMKM_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x16169F00)
#define EPEKFALDMKM_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x16169F90)
#define EPEKFALDMKM_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x16169D20)
#define EPEKFALDMKM_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x16169AA0)
#define EPEKFALDMKM__CTOR_OFFSET UNITYSDK_OFFSET(0x16169E10)

inline static constexpr unsigned int EPEKFALDMKM_TypeDefinitionIndex = 58847;

class EPEKFALDMKM : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEKFALDMKM__CTOR_OFFSET))(this);
	}

	::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + EPEKFALDMKM_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
	}

	::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEKFALDMKM_FMHAMBGPKBD_OFFSET))(this);
	}

	::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* NLIIIFNFKLK, ::System::String* IDKCFBPCECO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EPEKFALDMKM_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, NLIIIFNFKLK, IDKCFBPCECO);
	}

	::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + EPEKFALDMKM_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEKFALDMKM_HPFIJKDELAG_OFFSET))(this);
	}

	::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EPEKFALDMKM_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
