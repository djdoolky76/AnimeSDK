#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define HOLCFCPGEOD_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x15BE2080)
#define HOLCFCPGEOD_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x15BE2F10)
#define HOLCFCPGEOD_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x15BE2FF0)
#define HOLCFCPGEOD_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x15BE2E70)
#define HOLCFCPGEOD_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x15BE21B0)
#define HOLCFCPGEOD_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x15BE2320)
#define HOLCFCPGEOD__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE2E60)

inline static constexpr unsigned int HOLCFCPGEOD_TypeDefinitionIndex = 62285;

class HOLCFCPGEOD : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* DBNOMPKOADK; // 0x50
	::System::String* GNMKFFCHGMI; // 0x58
	::System::Boolean ABPOGDPDBIL; // 0x60
	::System::Boolean MEELMJGOHDC; // 0x61
	::System::Boolean BIOIHBACLJG; // 0x62
	::System::Byte _padding0[0x1];
	::MoleMole::Config::AbilityTargetting ENDKPBEFBME; // 0x64
	::MoleMole::Config::AbilityTargetting OEFNMCAHNBN; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLCFCPGEOD__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLCFCPGEOD_FMHAMBGPKBD_OFFSET))(this);
	}

	::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* EHPDFPIHAGC, ::System::String* IDKCFBPCECO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOLCFCPGEOD_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, EHPDFPIHAGC, IDKCFBPCECO);
	}

	::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + HOLCFCPGEOD_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
	}

	::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOLCFCPGEOD_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + HOLCFCPGEOD_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLCFCPGEOD_HPFIJKDELAG_OFFSET))(this);
	}
};
