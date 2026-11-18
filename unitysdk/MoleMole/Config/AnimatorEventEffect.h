#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x19B05F90)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_FBMKNJLKGDG_OFFSET UNITYSDK_OFFSET(0x19B05DD0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x19B059B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x19B05EB0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_HOCFIKKKCFK_OFFSET UNITYSDK_OFFSET(0x19B05D30)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x19B05FD0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_INCNHMDDGNN_OFFSET UNITYSDK_OFFSET(0x19B05310)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x19B05C90)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x19B05AE0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x19B05230)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_MMHLJALHFEF_OFFSET UNITYSDK_OFFSET(0x19B05140)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_PLIBJBGBEAB_OFFSET UNITYSDK_OFFSET(0x19B050F0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B04F70)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B05C80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventEffect_TypeDefinitionIndex = 41665;

	class AnimatorEventEffect : public ::MoleMole::Config::AnimatorEvent
	{
	public:
		::System::String* EffectPatternName; // 0x50
		::System::String* AttachPointName; // 0x58
		::MoleMole::Config::ConfigPosRot* EffectConfigPosRot; // 0x60
		::System::Single OverrideScaleX; // 0x68
		::System::Single OverrideScaleY; // 0x6C
		::System::Single OverrideScaleZ; // 0x70
		::System::Byte _padding0[0x4];
		::MoleMole::Config::EffectAutoDynamicValue* EffectAutoDynamic; // 0x78
		::System::Int32 effectPatternHash; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_TOSTRING_OFFSET))(this);
		}

		::System::Void PLIBJBGBEAB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_PLIBJBGBEAB_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE);
		}

		::System::Void MMHLJALHFEF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_MMHLJALHFEF_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
		}

		::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
		}

		::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_FMHAMBGPKBD_OFFSET))(this);
		}

		::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* NLIIIFNFKLK, ::System::String* IDKCFBPCECO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, NLIIIFNFKLK, IDKCFBPCECO);
		}

		::System::Void INCNHMDDGNN(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_INCNHMDDGNN_OFFSET))(this, KECKGDFIALJ, PMNLNNGEIFM);
		}

		::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void HOCFIKKKCFK(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_HOCFIKKKCFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void FBMKNJLKGDG(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_FBMKNJLKGDG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}

		::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_DPIHOJBBGLA_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECT_HPFIJKDELAG_OFFSET))(this);
		}
	};
}
