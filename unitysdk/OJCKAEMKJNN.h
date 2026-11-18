#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define OJCKAEMKJNN_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x15F78960)
#define OJCKAEMKJNN_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x15F78CE0)
#define OJCKAEMKJNN_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x15F78C50)
#define OJCKAEMKJNN_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x15F78DC0)
#define OJCKAEMKJNN_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x15F788A0)
#define OJCKAEMKJNN_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x15F78A60)
#define OJCKAEMKJNN__CTOR_OFFSET UNITYSDK_OFFSET(0x15F78C40)

inline static constexpr unsigned int OJCKAEMKJNN_TypeDefinitionIndex = 60836;

class OJCKAEMKJNN : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* IMMPCBJMEGF; // 0x50
	::System::String* LCPALAHMDML; // 0x58
	::System::Boolean HPJBOBMFNMM; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCKAEMKJNN__CTOR_OFFSET))(this);
	}

	::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* EHPDFPIHAGC, ::System::String* IDKCFBPCECO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + OJCKAEMKJNN_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, EHPDFPIHAGC, IDKCFBPCECO);
	}

	::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCKAEMKJNN_FMHAMBGPKBD_OFFSET))(this);
	}

	::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + OJCKAEMKJNN_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
	}

	::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCKAEMKJNN_HPFIJKDELAG_OFFSET))(this);
	}

	::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + OJCKAEMKJNN_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + OJCKAEMKJNN_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
