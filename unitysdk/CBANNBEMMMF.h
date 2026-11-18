#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }

#define CBANNBEMMMF_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1399B490)
#define CBANNBEMMMF_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x1399B000)
#define CBANNBEMMMF_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x1399B280)
#define CBANNBEMMMF_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x1399B360)
#define CBANNBEMMMF_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x1399B3F0)
#define CBANNBEMMMF_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x1399B120)
#define CBANNBEMMMF_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x1399AE10)
#define CBANNBEMMMF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1399AD50)
#define CBANNBEMMMF__CTOR_OFFSET UNITYSDK_OFFSET(0x1399B270)

inline static constexpr unsigned int CBANNBEMMMF_TypeDefinitionIndex = 57050;

class CBANNBEMMMF : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* NKFIDAAPAKL; // 0x50
	::System::String* HGILALKACEE; // 0x58
	::MoleMole::Config::ConfigPosRot* HFILKHBIDCG; // 0x60
	::MoleMole::Config::ScreenEffectType MFLCCPAHBKN; // 0x68
	::System::Boolean LIGICMNNJPM; // 0x6C
	::System::Boolean FELBDDACEAJ; // 0x6D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBANNBEMMMF__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBANNBEMMMF_TOSTRING_OFFSET))(this);
	}

	::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + CBANNBEMMMF_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
	}

	::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBANNBEMMMF_FMHAMBGPKBD_OFFSET))(this);
	}

	::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* NLIIIFNFKLK, ::System::String* IDKCFBPCECO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CBANNBEMMMF_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, NLIIIFNFKLK, IDKCFBPCECO);
	}

	::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + CBANNBEMMMF_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBANNBEMMMF_HPFIJKDELAG_OFFSET))(this);
	}

	::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CBANNBEMMMF_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBANNBEMMMF_DPIHOJBBGLA_OFFSET))(this);
	}
};
