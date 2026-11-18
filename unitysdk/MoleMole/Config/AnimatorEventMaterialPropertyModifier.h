#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1651D280)
#define MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x1651CF10)
#define MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER_GKGODFLGGCL_OFFSET UNITYSDK_OFFSET(0x1651D350)
#define MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER_HPFIJKDELAG_OFFSET UNITYSDK_OFFSET(0x1651D2C0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER_KFEDENLCCKN_OFFSET UNITYSDK_OFFSET(0x1651D1E0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x1651D050)
#define MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x1651CAF0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1651C9B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1651D1D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventMaterialPropertyModifier_TypeDefinitionIndex = 68633;

	class AnimatorEventMaterialPropertyModifier : public ::MoleMole::Config::AnimatorEvent
	{
	public:
		::System::String* Tag; // 0x50
		::System::Int32 Priority; // 0x58
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* RenderList; // 0x60
		::System::String* Key; // 0x68
		::System::Boolean ApplyAllRenderers; // 0x70
		::System::Byte _padding1[0x7];
		::System::String* AttachPoint; // 0x78
		::MoleMole::Battle::MaterialPropertyModifierExtraParams ExtraParams; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER_TOSTRING_OFFSET))(this);
		}

		::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
		}

		::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER_FMHAMBGPKBD_OFFSET))(this);
		}

		::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* NLIIIFNFKLK, ::System::String* IDKCFBPCECO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, NLIIIFNFKLK, IDKCFBPCECO);
		}

		::System::Void KFEDENLCCKN(::MoleMole::Config::AnimatorEventEntry* MIALFKCCCPI, ::System::String* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER_KFEDENLCCKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER_DPIHOJBBGLA_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEventEntry* HPFIJKDELAG()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER_HPFIJKDELAG_OFFSET))(this);
		}

		::System::Void GKGODFLGGCL(::MoleMole::Battle::Entity* MIALFKCCCPI, ::NLNIIPDCABP* KMGKAIDEIBA, ::System::Single FDHMCIFPNCK, ::System::Single MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::ONNJLBKOEDN_IINOJMFDFJA CEIDLKIHMLC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIER_GKGODFLGGCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}
	};
}
