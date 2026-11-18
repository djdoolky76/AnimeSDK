#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NJBAOCDBIIP_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0xE1A51B0)
#define NJBAOCDBIIP_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0xE1A3D20)
#define NJBAOCDBIIP_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0xE1A51F0)
#define NJBAOCDBIIP_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0xE1A52D0)
#define NJBAOCDBIIP_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0xE1A5110)
#define NJBAOCDBIIP_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0xE1A45D0)
#define NJBAOCDBIIP_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0xE1A37D0)
#define NJBAOCDBIIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE1A3710)
#define NJBAOCDBIIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE1A4F30)

inline static constexpr unsigned int NJBAOCDBIIP_TypeDefinitionIndex = 48548;

class NJBAOCDBIIP : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::Collections::Generic::List_1<::System::String*>* LKGLKNBKJBP; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KDBLKAAKHJE; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* JJOIEGFLFAL; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* ENFGJCKLIEI; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBAOCDBIIP__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBAOCDBIIP_TOSTRING_OFFSET))(this);
	}

	::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + NJBAOCDBIIP_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
	}

	::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBAOCDBIIP_FMHAMBGPKBD_OFFSET))(this);
	}

	::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* NLIIIFNFKLK, ::System::String* IDKCFBPCECO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NJBAOCDBIIP_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, NLIIIFNFKLK, IDKCFBPCECO);
	}

	::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NJBAOCDBIIP_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBAOCDBIIP_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + NJBAOCDBIIP_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBAOCDBIIP_HPFIJKDELAG_OFFSET))(this);
	}
};
