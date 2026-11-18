#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define FAOMNFCLHBB_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x161711F0)
#define FAOMNFCLHBB_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x16170F90)
#define FAOMNFCLHBB_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x16171360)
#define FAOMNFCLHBB_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x16171230)
#define FAOMNFCLHBB_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x161712C0)
#define FAOMNFCLHBB_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x161710A0)
#define FAOMNFCLHBB_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x16170C80)
#define FAOMNFCLHBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16170B00)
#define FAOMNFCLHBB__CTOR_OFFSET UNITYSDK_OFFSET(0x161711E0)

inline static constexpr unsigned int FAOMNFCLHBB_TypeDefinitionIndex = 58462;

class FAOMNFCLHBB : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::Single PMLOGFLOLNJ; // 0x50
	::System::Boolean AEOEONPCABN; // 0x54
	::System::Boolean FKBHALBMOKO; // 0x55
	::System::Byte _padding0[0x2];
	::System::Single HBOJLFKAOOH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOMNFCLHBB__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOMNFCLHBB_TOSTRING_OFFSET))(this);
	}

	::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + FAOMNFCLHBB_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
	}

	::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOMNFCLHBB_FMHAMBGPKBD_OFFSET))(this);
	}

	::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* NLIIIFNFKLK, ::System::String* IDKCFBPCECO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FAOMNFCLHBB_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, NLIIIFNFKLK, IDKCFBPCECO);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOMNFCLHBB_DPIHOJBBGLA_OFFSET))(this);
	}

	::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOMNFCLHBB_HPFIJKDELAG_OFFSET))(this);
	}

	::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FAOMNFCLHBB_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + FAOMNFCLHBB_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
