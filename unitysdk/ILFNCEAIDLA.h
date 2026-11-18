#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"
#include "unitysdk/MoleMole/Config/AnimatorEventShowTipEntry_ShowTipEntryConfig.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class Object; }
namespace System { class String; }

#define ILFNCEAIDLA_EGGMEAGKBHA_OFFSET UNITYSDK_OFFSET(0x14A2B650)
#define ILFNCEAIDLA_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x14A2B1E0)
#define ILFNCEAIDLA_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x14A2B440)
#define ILFNCEAIDLA_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x14A2B520)
#define ILFNCEAIDLA_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x14A2B5B0)
#define ILFNCEAIDLA_KFEMPBMEIJJ_OFFSET UNITYSDK_OFFSET(0x14A2B060)
#define ILFNCEAIDLA_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x14A2B2F0)
#define ILFNCEAIDLA_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x14A2A9E0)
#define ILFNCEAIDLA_PEEMAICHNDL_OFFSET UNITYSDK_OFFSET(0x14A2AC90)
#define ILFNCEAIDLA__CTOR_OFFSET UNITYSDK_OFFSET(0x14A2B430)

inline static constexpr unsigned int ILFNCEAIDLA_TypeDefinitionIndex = 74833;

class ILFNCEAIDLA : public ::MoleMole::Config::AnimatorEvent
{
public:
	::Il2CppArray<::System::Object*>* DPAHLHEPELN; // 0x50
	::System::Int32 IOHAHIFNKKD; // 0x58
	::System::Single HAJGAMNMAGN; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFNCEAIDLA__CTOR_OFFSET))(this);
	}

	::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + ILFNCEAIDLA_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
	}

	::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFNCEAIDLA_FMHAMBGPKBD_OFFSET))(this);
	}

	::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* NLIIIFNFKLK, ::System::String* IDKCFBPCECO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ILFNCEAIDLA_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, NLIIIFNFKLK, IDKCFBPCECO);
	}

	::System::Void KFEMPBMEIJJ(::MoleMole::Config::AnimatorEventShowTipEntry_ShowTipEntryConfig NBMEMNABEBO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventShowTipEntry_ShowTipEntryConfig))((::PBYTE)hIl2Cpp + ILFNCEAIDLA_KFEMPBMEIJJ_OFFSET))(this, NBMEMNABEBO);
	}

	::System::Int32 PEEMAICHNDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFNCEAIDLA_PEEMAICHNDL_OFFSET))(this);
	}

	::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + ILFNCEAIDLA_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFNCEAIDLA_HPFIJKDELAG_OFFSET))(this);
	}

	::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ILFNCEAIDLA_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void EGGMEAGKBHA(::System::String* PPGLBDELEBF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ILFNCEAIDLA_EGGMEAGKBHA_OFFSET))(this, PPGLBDELEBF);
	}
};
