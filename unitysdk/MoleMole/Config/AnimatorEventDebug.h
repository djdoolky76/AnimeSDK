#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x163F9110)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x163F8E40)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x163F9150)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x163F9070)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x163F90B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x163F8F30)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x163F8DB0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x163F8C70)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x163F9060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDebug_TypeDefinitionIndex = 40535;

	class AnimatorEventDebug : public ::MoleMole::Config::AnimatorEvent
	{
	public:
		::System::String* message; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_TOSTRING_OFFSET))(this);
		}

		::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
		}

		::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_FMHAMBGPKBD_OFFSET))(this);
		}

		::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* NLIIIFNFKLK, ::System::String* IDKCFBPCECO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, NLIIIFNFKLK, IDKCFBPCECO);
		}

		::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_HPFIJKDELAG_OFFSET))(this);
		}

		::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_DPIHOJBBGLA_OFFSET))(this);
		}

		::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEBUG_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}
	};
}
