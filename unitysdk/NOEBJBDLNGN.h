#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterUnitState.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class BDENDNDOFLF;
class EKFMIDBJDIA;
namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class NPCComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOEBJBDLNGN_CFCIKOCBGFM_OFFSET UNITYSDK_OFFSET(0xBCE9AE0)
#define NOEBJBDLNGN_COCJOKMBJCG_OFFSET UNITYSDK_OFFSET(0xBCEAEB0)
#define NOEBJBDLNGN_CTOR_OFFSET UNITYSDK_OFFSET(0xBCEAED0)
#define NOEBJBDLNGN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCE8D70)
#define NOEBJBDLNGN_EFOBMIPFPKG_OFFSET UNITYSDK_OFFSET(0xBCEA980)
#define NOEBJBDLNGN_FHAGKAPKHLG_OFFSET UNITYSDK_OFFSET(0xBCE86F0)
#define NOEBJBDLNGN_GKNNOPLGPAA_OFFSET UNITYSDK_OFFSET(0xBCEAEC0)
#define NOEBJBDLNGN_IAFOAKIAJPL_OFFSET UNITYSDK_OFFSET(0xBCE9A30)
#define NOEBJBDLNGN_KGEEAMLOPLE_OFFSET UNITYSDK_OFFSET(0xBCEA630)
#define NOEBJBDLNGN_KNHNGGNPAHO_OFFSET UNITYSDK_OFFSET(0xBCE91A0)
#define NOEBJBDLNGN_LKPMKCDAIKE_OFFSET UNITYSDK_OFFSET(0xBCE9BA0)
#define NOEBJBDLNGN_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xBCE84E0)
#define NOEBJBDLNGN_NBHHNHJCLJG_OFFSET UNITYSDK_OFFSET(0xBCEA050)
#define NOEBJBDLNGN_NCJNADAKJNE_OFFSET UNITYSDK_OFFSET(0xBCE90A0)
#define NOEBJBDLNGN_NDMBJALGBON_OFFSET UNITYSDK_OFFSET(0xBCE8BD0)
#define NOEBJBDLNGN_NGLHEIDGGKI_OFFSET UNITYSDK_OFFSET(0xBCE9930)
#define NOEBJBDLNGN_NHPANMLHPKB_OFFSET UNITYSDK_OFFSET(0xBCEAC40)
#define NOEBJBDLNGN_NJAKMFMPFOP_OFFSET UNITYSDK_OFFSET(0xBCEA590)
#define NOEBJBDLNGN_ODKIGJODOBF_OFFSET UNITYSDK_OFFSET(0xBCEA6C0)
#define NOEBJBDLNGN_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xBCEA3B0)
#define NOEBJBDLNGN_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xBCEA550)
#define NOEBJBDLNGN_PCBLIBLHJIB_OFFSET UNITYSDK_OFFSET(0xBCEAA10)
#define NOEBJBDLNGN_PFIDNHGDFNB_OFFSET UNITYSDK_OFFSET(0xBCE9D60)
#define NOEBJBDLNGN_PPPIBANJJDE_OFFSET UNITYSDK_OFFSET(0xBCEA0A0)
#define NOEBJBDLNGN_TICK_OFFSET UNITYSDK_OFFSET(0xBCE9710)

	class NOEBJBDLNGN : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::BDENDNDOFLF* BOMOFOCIPDK; // 0x18
		::RPG::GameCore::NPCComponent* OLMFOBHMCKN; // 0x20
		::BDENDNDOFLF* BLCLFIPEJGG; // 0x28
		::BDENDNDOFLF* ALMDFFJGPFA; // 0x30
		::System::Collections::Generic::List_1<::BDENDNDOFLF*>* LDBEJNAACIA; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::BDENDNDOFLF*>* JGCMHONLAKO; // 0x40
		::RPG::GameCore::AdventureBehaviorClampAlertLevel HPPOIIHJLFB; // 0x48
		::System::UInt32 AKEKLKEHDPD; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void FHAGKAPKHLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_FHAGKAPKHLG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_DISPOSE_OFFSET))(this);
		}

		::System::Void NCJNADAKJNE(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_NCJNADAKJNE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_TICK_OFFSET))(this, a1);
		}

		::System::Void NGLHEIDGGKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_NGLHEIDGGKI_OFFSET))(this);
		}

		::BDENDNDOFLF* IAFOAKIAJPL(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
		{
			return ((::BDENDNDOFLF*(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_IAFOAKIAJPL_OFFSET))(this, a1);
		}

		::System::Boolean CFCIKOCBGFM(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_CFCIKOCBGFM_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureCharacterUnitState LKPMKCDAIKE()
		{
			return ((::RPG::GameCore::AdventureCharacterUnitState(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_LKPMKCDAIKE_OFFSET))(this);
		}

		::System::Boolean PFIDNHGDFNB(::Il2CppArray<::RPG::GameCore::AdventureCharacterUnitState>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AdventureCharacterUnitState>*))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_PFIDNHGDFNB_OFFSET))(this, a1);
		}

		::System::Boolean NBHHNHJCLJG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_NBHHNHJCLJG_OFFSET))(this);
		}

		::System::String* PPPIBANJJDE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_PPPIBANJJDE_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void NJAKMFMPFOP(::System::Boolean a1, ::RPG::GameCore::AdventureModifierBehaviorFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_NJAKMFMPFOP_OFFSET))(this, a1, a2);
		}

		::System::Void NDMBJALGBON(::BDENDNDOFLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDENDNDOFLF*))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_NDMBJALGBON_OFFSET))(this, a1);
		}

		::System::Void KGEEAMLOPLE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_KGEEAMLOPLE_OFFSET))(this, a1);
		}

		::System::Void EFOBMIPFPKG(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_EFOBMIPFPKG_OFFSET))(this, a1);
		}

		::System::Void PCBLIBLHJIB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_PCBLIBLHJIB_OFFSET))(this, a1);
		}

		::System::Void ODKIGJODOBF(::System::Boolean a1, ::RPG::GameCore::AdventureModifierInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_ODKIGJODOBF_OFFSET))(this, a1, a2);
		}

		::System::Void KNHNGGNPAHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_KNHNGGNPAHO_OFFSET))(this);
		}

		::System::Boolean NHPANMLHPKB(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_NHPANMLHPKB_OFFSET))(this, a1);
		}

		::BDENDNDOFLF* COCJOKMBJCG()
		{
			return ((::BDENDNDOFLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_COCJOKMBJCG_OFFSET))(this);
		}

		::BDENDNDOFLF* GKNNOPLGPAA()
		{
			return ((::BDENDNDOFLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEBJBDLNGN_GKNNOPLGPAA_OFFSET))(this);
		}

	};
