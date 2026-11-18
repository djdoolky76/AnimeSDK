#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace MoleMole::Config { class RaycastHitWallEffectConfig; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x11E73A50)
#define MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x11E73830)
#define MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x11E73B20)
#define MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x11E73A90)
#define MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x11E73C00)
#define MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x11E73900)
#define MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x11E73740)
#define MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11E73680)
#define MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x11E73A40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventRaycastHitWallEffect_TypeDefinitionIndex = 87319;

	class AnimatorEventRaycastHitWallEffect : public ::MoleMole::Config::AnimatorEvent
	{
	public:
		::MoleMole::Config::RaycastHitWallEffectConfig* _currentConfig; // 0x50
		::MoleMole::Config::HitWallCameraShakeConfig* _shakeConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT_TOSTRING_OFFSET))(this);
		}

		::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
		}

		::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT_FMHAMBGPKBD_OFFSET))(this);
		}

		::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* NLIIIFNFKLK, ::System::String* IDKCFBPCECO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, NLIIIFNFKLK, IDKCFBPCECO);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT_DPIHOJBBGLA_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT_HPFIJKDELAG_OFFSET))(this);
		}

		::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}

		::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECT_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}
	};
}
