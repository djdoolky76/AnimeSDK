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

#define NOEBJBDLNGN_CFCIKOCBGFM_OFFSET UNITYSDK_OFFSET(0x19CE11D0)
#define NOEBJBDLNGN_COCJOKMBJCG_OFFSET UNITYSDK_OFFSET(0x19CE25A0)
#define NOEBJBDLNGN_CTOR_OFFSET UNITYSDK_OFFSET(0x19CE25C0)
#define NOEBJBDLNGN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19CE0470)
#define NOEBJBDLNGN_EFOBMIPFPKG_OFFSET UNITYSDK_OFFSET(0x19CE2070)
#define NOEBJBDLNGN_FHAGKAPKHLG_OFFSET UNITYSDK_OFFSET(0x19CDFE00)
#define NOEBJBDLNGN_GKNNOPLGPAA_OFFSET UNITYSDK_OFFSET(0x19CE25B0)
#define NOEBJBDLNGN_IAFOAKIAJPL_OFFSET UNITYSDK_OFFSET(0x19CE1120)
#define NOEBJBDLNGN_KGEEAMLOPLE_OFFSET UNITYSDK_OFFSET(0x19CE1D20)
#define NOEBJBDLNGN_KNHNGGNPAHO_OFFSET UNITYSDK_OFFSET(0x19CE0890)
#define NOEBJBDLNGN_LKPMKCDAIKE_OFFSET UNITYSDK_OFFSET(0x19CE1290)
#define NOEBJBDLNGN_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x19CDFC00)
#define NOEBJBDLNGN_NBHHNHJCLJG_OFFSET UNITYSDK_OFFSET(0x19CE1740)
#define NOEBJBDLNGN_NCJNADAKJNE_OFFSET UNITYSDK_OFFSET(0x19CE0790)
#define NOEBJBDLNGN_NDMBJALGBON_OFFSET UNITYSDK_OFFSET(0x19CE02D0)
#define NOEBJBDLNGN_NGLHEIDGGKI_OFFSET UNITYSDK_OFFSET(0x19CE1020)
#define NOEBJBDLNGN_NHPANMLHPKB_OFFSET UNITYSDK_OFFSET(0x19CE2330)
#define NOEBJBDLNGN_NJAKMFMPFOP_OFFSET UNITYSDK_OFFSET(0x19CE1C80)
#define NOEBJBDLNGN_ODKIGJODOBF_OFFSET UNITYSDK_OFFSET(0x19CE1DB0)
#define NOEBJBDLNGN_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x19CE1AA0)
#define NOEBJBDLNGN_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x19CE1C40)
#define NOEBJBDLNGN_PCBLIBLHJIB_OFFSET UNITYSDK_OFFSET(0x19CE2100)
#define NOEBJBDLNGN_PFIDNHGDFNB_OFFSET UNITYSDK_OFFSET(0x19CE1450)
#define NOEBJBDLNGN_PPPIBANJJDE_OFFSET UNITYSDK_OFFSET(0x19CE1790)
#define NOEBJBDLNGN_TICK_OFFSET UNITYSDK_OFFSET(0x19CE0E00)

inline static constexpr unsigned int NOEBJBDLNGN_TypeDefinitionIndex = 58274;

	class NOEBJBDLNGN : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::NPCComponent* OLMFOBHMCKN; // 0x18
		::BDENDNDOFLF* BLCLFIPEJGG; // 0x20
		::BDENDNDOFLF* BOMOFOCIPDK; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::BDENDNDOFLF*>* JGCMHONLAKO; // 0x30
		::BDENDNDOFLF* ALMDFFJGPFA; // 0x38
		::System::Collections::Generic::List_1<::BDENDNDOFLF*>* LDBEJNAACIA; // 0x40
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
