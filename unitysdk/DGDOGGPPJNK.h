#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }

#define DGDOGGPPJNK_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x19D5F870)
#define DGDOGGPPJNK_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x19D5F570)
#define DGDOGGPPJNK_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x19D5F950)
#define DGDOGGPPJNK_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x19D5F7E0)
#define DGDOGGPPJNK_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x19D5F8B0)
#define DGDOGGPPJNK_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x19D5F680)
#define DGDOGGPPJNK_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x19D5EE40)
#define DGDOGGPPJNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19D5ED80)
#define DGDOGGPPJNK__CTOR_OFFSET UNITYSDK_OFFSET(0x19D5F7D0)

inline static constexpr unsigned int DGDOGGPPJNK_TypeDefinitionIndex = 59583;

class DGDOGGPPJNK : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* HIEKPPDAMLM; // 0x50
	::MoleMole::Config::ConfigSoundActionGeneral* GJBHEJGENMI; // 0x58
	::System::String* MFGKGAEJBII; // 0x60
	::MoleMole::Config::ConfigSoundActionGeneral* LJCDJFCPDEF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDOGGPPJNK__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDOGGPPJNK_TOSTRING_OFFSET))(this);
	}

	::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + DGDOGGPPJNK_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
	}

	::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDOGGPPJNK_FMHAMBGPKBD_OFFSET))(this);
	}

	::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* NLIIIFNFKLK, ::System::String* IDKCFBPCECO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DGDOGGPPJNK_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, NLIIIFNFKLK, IDKCFBPCECO);
	}

	::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDOGGPPJNK_HPFIJKDELAG_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDOGGPPJNK_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DGDOGGPPJNK_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + DGDOGGPPJNK_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
