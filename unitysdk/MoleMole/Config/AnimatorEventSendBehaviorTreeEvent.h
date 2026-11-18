#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENT_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x192895A0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENT_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x19289980)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENT_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x192898F0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENT_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x19289850)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENT_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x19289670)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENT_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x19289730)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19289840)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventSendBehaviorTreeEvent_TypeDefinitionIndex = 72248;

	class AnimatorEventSendBehaviorTreeEvent : public ::MoleMole::Config::AnimatorEvent
	{
	public:
		::System::String* EventName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENT__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENT_FMHAMBGPKBD_OFFSET))(this);
		}

		::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* EHPDFPIHAGC, ::System::String* IDKCFBPCECO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENT_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, EHPDFPIHAGC, IDKCFBPCECO);
		}

		::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENT_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
		}

		::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENT_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENT_HPFIJKDELAG_OFFSET))(this);
		}

		::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENT_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}
	};
}
