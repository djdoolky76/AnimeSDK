#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/MoleMole/Config/AnimatorEventWriteAIParamEntry_ParaType.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1651DF20)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x1651DC80)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x1651DFF0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x1651DF60)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x1651E0D0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x1651DDB0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x1651D8A0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1651D7B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1651DF10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventWriteAIParam_TypeDefinitionIndex = 52422;

	class AnimatorEventWriteAIParam : public ::MoleMole::Config::AnimatorEvent
	{
	public:
		::MoleMole::Config::AnimatorEventWriteAIParamEntry_ParaType paraType; // 0x50
		::System::Byte _padding0[0x4];
		::System::String* paramName; // 0x58
		::System::Single floatParamValue; // 0x60
		::System::Int32 intParamValue; // 0x64
		::System::String* stringParamValue; // 0x68
		::System::Boolean boolParamValue; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_TOSTRING_OFFSET))(this);
		}

		::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
		}

		::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_FMHAMBGPKBD_OFFSET))(this);
		}

		::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* NLIIIFNFKLK, ::System::String* IDKCFBPCECO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, NLIIIFNFKLK, IDKCFBPCECO);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_DPIHOJBBGLA_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_HPFIJKDELAG_OFFSET))(this);
		}

		::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}

		::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAM_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}
	};
}
