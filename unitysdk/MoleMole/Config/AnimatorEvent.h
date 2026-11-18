#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/ONNJLBKOEDN_IINOJMFDFJA.h"
#include "unitysdk/PPANJPHEHLI.h"
#include "unitysdk/System/Object.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATOREVENT_BGLCJIKKFCM_OFFSET UNITYSDK_OFFSET(0x163F78E0)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_DEJLEHAMMKD_OFFSET UNITYSDK_OFFSET(0x163F88D0)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x163F77B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_FMHAMBGPKBD_OFFSET UNITYSDK_OFFSET(0x163F7710)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_GET_NEEDHANDLEBEFOREPHYSICS_OFFSET UNITYSDK_OFFSET(0x163F73F0)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_GET_NEEDPRELOAD_OFFSET UNITYSDK_OFFSET(0x163F7440)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_JCLCEKJGEPN_OFFSET UNITYSDK_OFFSET(0x163F7FC0)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_LBOMMOLFGFA_OFFSET UNITYSDK_OFFSET(0x163F7750)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_LEMPLMPEPNG_OFFSET UNITYSDK_OFFSET(0x163F7680)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_MMHLJALHFEF_OFFSET UNITYSDK_OFFSET(0x163F75F0)
#define MOLEMOLE_CONFIG_ANIMATOREVENT_PLIBJBGBEAB_OFFSET UNITYSDK_OFFSET(0x163F75A0)
#define MOLEMOLE_CONFIG_ANIMATOREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x163F7490)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEvent_TypeDefinitionIndex = 65236;

	class AnimatorEvent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* AnimateZoneTags; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* AnimateZoneTagsBlackList; // 0x18
		::System::Collections::Generic::List_1<::System::Tuple_2<::System::String*, ::MoleMole::Config::EntityType>*>* MPAnimateZoneTagsWhiteList; // 0x20
		::System::Collections::Generic::List_1<::System::Tuple_2<::System::String*, ::MoleMole::Config::EntityType>*>* MPAnimateZoneTagsBlackList; // 0x28
		::System::Single normalizedTime; // 0x30
		::System::Boolean maxFrame; // 0x34
		::System::Byte _padding0[0x3];
		::System::Int32 frame; // 0x38
		::System::Boolean forceTrigger; // 0x3C
		::System::Boolean forceTriggerOnTransitionIn; // 0x3D
		::System::Boolean forceTriggerOnTransitionOut; // 0x3E
		::System::Byte _padding1[0x1];
		::PPANJPHEHLI _callbackFlags; // 0x40
		::System::Byte _padding2[0x4];
		::System::Type* typeCache; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedHandleBeforePhysics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_GET_NEEDHANDLEBEFOREPHYSICS_OFFSET))(this);
		}

		::System::Boolean get_NeedPreload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_GET_NEEDPRELOAD_OFFSET))(this);
		}

		::System::Void PLIBJBGBEAB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_PLIBJBGBEAB_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE);
		}

		::System::Void MMHLJALHFEF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_MMHLJALHFEF_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
		}

		::System::Void LEMPLMPEPNG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::NLNIIPDCABP* FNFNDIBMPDE, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single KGIGMHCDOCF, ::ONNJLBKOEDN_IINOJMFDFJA FCHEPGPLFJG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single, ::ONNJLBKOEDN_IINOJMFDFJA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_LEMPLMPEPNG_OFFSET))(this, KECKGDFIALJ, FNFNDIBMPDE, KDEHMPGOCEP, PADJNMGMGHO, KGIGMHCDOCF, FCHEPGPLFJG);
		}

		::MoleMole::Config::AnimatorEventEntry* FMHAMBGPKBD()
		{
			return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_FMHAMBGPKBD_OFFSET))(this);
		}

		::System::Void LBOMMOLFGFA(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* EHPDFPIHAGC, ::System::String* IDKCFBPCECO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_LBOMMOLFGFA_OFFSET))(this, AAIJGGIEOGK, EHPDFPIHAGC, IDKCFBPCECO);
		}

		::MoleMole::Config::AnimatorEvent* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Void BGLCJIKKFCM(::MoleMole::Config::AnimatorEventEntry* OONKKJDJGLC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_BGLCJIKKFCM_OFFSET))(this, OONKKJDJGLC);
		}

		::System::Boolean JCLCEKJGEPN(::NLNIIPDCABP* FNFNDIBMPDE)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_JCLCEKJGEPN_OFFSET))(this, FNFNDIBMPDE);
		}

		::System::Void DEJLEHAMMKD(::MoleMole::Config::AnimatorEventEntry* OONKKJDJGLC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENT_DEJLEHAMMKD_OFFSET))(this, OONKKJDJGLC);
		}
	};
}
