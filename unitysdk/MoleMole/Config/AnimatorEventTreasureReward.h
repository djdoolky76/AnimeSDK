#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x12764AC0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x12764800)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x12764BA0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x12764A30)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x12764B00)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x127648F0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x12763F70)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12763EB0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x12764A20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventTreasureReward_TypeDefinitionIndex = 84209;

	class AnimatorEventTreasureReward : public ::MoleMole::Config::AnimatorEvent
	{
	public:
		::System::Int32 overridePickType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD_TOSTRING_OFFSET))(this);
		}

		::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
		}

		::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD_FMHAMBGPKBD_OFFSET))(this);
		}

		::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* NLIIIFNFKLK, ::System::String* IDKCFBPCECO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, NLIIIFNFKLK, IDKCFBPCECO);
		}

		::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD_HPFIJKDELAG_OFFSET))(this);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD_DPIHOJBBGLA_OFFSET))(this);
		}

		::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTREASUREREWARD_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}
	};
}
