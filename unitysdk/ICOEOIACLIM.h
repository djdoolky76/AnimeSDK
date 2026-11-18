#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define ICOEOIACLIM_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1A398340)
#define ICOEOIACLIM_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x1A397E70)
#define ICOEOIACLIM_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x1A398260)
#define ICOEOIACLIM_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x1A398130)
#define ICOEOIACLIM_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x1A3981C0)
#define ICOEOIACLIM_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x1A397FA0)
#define ICOEOIACLIM_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x1A3979E0)
#define ICOEOIACLIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A397920)
#define ICOEOIACLIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A398110)

inline static constexpr unsigned int ICOEOIACLIM_TypeDefinitionIndex = 80700;

class ICOEOIACLIM : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* KIHGNGKBADE; // 0x50
	::System::String* LLBKANFNAAK; // 0x58
	::System::Boolean BPDFPHLBLFN; // 0x60
	::System::Boolean JJMHNJCJCOO; // 0x61
	::System::Boolean OEHEINDALLE; // 0x62
	::System::Boolean HACPFCCDFHD; // 0x63
	::System::Single OKDPFOKIGIK; // 0x64
	::System::Single GBGOMNMLBNO; // 0x68
	::System::UInt32 BEIMJIPKNGA; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOEOIACLIM__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOEOIACLIM_TOSTRING_OFFSET))(this);
	}

	::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + ICOEOIACLIM_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
	}

	::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOEOIACLIM_FMHAMBGPKBD_OFFSET))(this);
	}

	::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* NLIIIFNFKLK, ::System::String* IDKCFBPCECO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ICOEOIACLIM_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, NLIIIFNFKLK, IDKCFBPCECO);
	}

	::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOEOIACLIM_HPFIJKDELAG_OFFSET))(this);
	}

	::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ICOEOIACLIM_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + ICOEOIACLIM_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOEOIACLIM_DPIHOJBBGLA_OFFSET))(this);
	}
};
