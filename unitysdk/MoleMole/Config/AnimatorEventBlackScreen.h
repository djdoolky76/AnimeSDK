#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x11E73190)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x11E729F0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x11E731D0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x11E73350)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x11E732B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x11E72B00)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x11E72C50)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11E72940)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN__CTOR_OFFSET UNITYSDK_OFFSET(0x11E73170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventBlackScreen_TypeDefinitionIndex = 56392;

	class AnimatorEventBlackScreen : public ::MoleMole::Config::AnimatorEvent
	{
	public:
		::System::Single Duration; // 0x50
		::System::Byte _padding0[0x4];
		::System::String* Curve; // 0x58
		::System::String* Tag; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN_TOSTRING_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN_FMHAMBGPKBD_OFFSET))(this);
		}

		::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* EHPDFPIHAGC, ::System::String* IDKCFBPCECO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, EHPDFPIHAGC, IDKCFBPCECO);
		}

		::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN_DPIHOJBBGLA_OFFSET))(this);
		}

		::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}

		::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREEN_HPFIJKDELAG_OFFSET))(this);
		}
	};
}
