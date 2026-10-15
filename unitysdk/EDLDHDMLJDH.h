#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
#include "unitysdk/System/Object.h"
class DJMHCEKLKEO;
class DNKEOHEHEAK;
class EDLDHDMLJDH;
class EKFMIDBJDIA;
class GFDKGLOANOH;
namespace RPG::Client { class BaseMonoTriggerRegion; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }
namespace System { class Action; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define EDLDHDMLJDH_ABKNPIFCOMG_OFFSET UNITYSDK_OFFSET(0x133298B0)
#define EDLDHDMLJDH_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x13327A30)
#define EDLDHDMLJDH_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x133294A0)
#define EDLDHDMLJDH_CBFHDGLMAOO_OFFSET UNITYSDK_OFFSET(0x13328990)
#define EDLDHDMLJDH_CCPAGEDBAFK_OFFSET UNITYSDK_OFFSET(0x133276E0)
#define EDLDHDMLJDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1332A220)
#define EDLDHDMLJDH_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x13326E00)
#define EDLDHDMLJDH_CLLMJAKIKCA_OFFSET UNITYSDK_OFFSET(0x13326DA0)
#define EDLDHDMLJDH_CNDBJOJEGON_OFFSET UNITYSDK_OFFSET(0x13327830)
#define EDLDHDMLJDH_CTOR_OFFSET UNITYSDK_OFFSET(0x13326570)
#define EDLDHDMLJDH_DIPFOIAKDDM_OFFSET UNITYSDK_OFFSET(0x133273C0)
#define EDLDHDMLJDH_DIPGJOOBILF_OFFSET UNITYSDK_OFFSET(0x13329F80)
#define EDLDHDMLJDH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13326780)
#define EDLDHDMLJDH_DOBGOGPNHOO_OFFSET UNITYSDK_OFFSET(0x13328B70)
#define EDLDHDMLJDH_DOONENTER_OFFSET UNITYSDK_OFFSET(0x13328480)
#define EDLDHDMLJDH_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x13328510)
#define EDLDHDMLJDH_EPANHAFOIBN_OFFSET UNITYSDK_OFFSET(0x13326D40)
#define EDLDHDMLJDH_FANDKPBLDMB_OFFSET UNITYSDK_OFFSET(0x13329920)
#define EDLDHDMLJDH_FEGDPHCGCEK_OFFSET UNITYSDK_OFFSET(0x13328DE0)
#define EDLDHDMLJDH_FEOEOEMHHEN_OFFSET UNITYSDK_OFFSET(0x133274F0)
#define EDLDHDMLJDH_GET_ALLOWSEACHENTITYINPARENT_OFFSET UNITYSDK_OFFSET(0x13329810)
#define EDLDHDMLJDH_GET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET UNITYSDK_OFFSET(0x13329850)
#define EDLDHDMLJDH_GET_FORCETRIGGERINDANGERSTATUS_OFFSET UNITYSDK_OFFSET(0x133298E0)
#define EDLDHDMLJDH_GET_IGNOREFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x13329890)
#define EDLDHDMLJDH_GET_ISNAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x13329900)
#define EDLDHDMLJDH_GET_ONLYTRIGGERBYFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x13329870)
#define EDLDHDMLJDH_GET_TARGETLAYERMASK_OFFSET UNITYSDK_OFFSET(0x13329830)
#define EDLDHDMLJDH_GET__TRIGGERREGION_OFFSET UNITYSDK_OFFSET(0x133298C0)
#define EDLDHDMLJDH_GLMHLOMFOMD_OFFSET UNITYSDK_OFFSET(0x13328DF0)
#define EDLDHDMLJDH_GOAAMCNEFKG_OFFSET UNITYSDK_OFFSET(0x13329D90)
#define EDLDHDMLJDH_HBCEGPMECGG_OFFSET UNITYSDK_OFFSET(0x13326B90)
#define EDLDHDMLJDH_HKOCGHIEADE_OFFSET UNITYSDK_OFFSET(0x133296F0)
#define EDLDHDMLJDH_HPJHKAOJJHF_OFFSET UNITYSDK_OFFSET(0x13326A90)
#define EDLDHDMLJDH_IHIGNLAJIPM_OFFSET UNITYSDK_OFFSET(0x13326730)
#define EDLDHDMLJDH_IKGFCCKGMAH_OFFSET UNITYSDK_OFFSET(0x13328600)
#define EDLDHDMLJDH_ILMNABNCBGC_OFFSET UNITYSDK_OFFSET(0x13329780)
#define EDLDHDMLJDH_JCKAKCFGMFL_OFFSET UNITYSDK_OFFSET(0x13329240)
#define EDLDHDMLJDH_JEAJPENJOMA_OFFSET UNITYSDK_OFFSET(0x13329A90)
#define EDLDHDMLJDH_JFNHHDODPON_OFFSET UNITYSDK_OFFSET(0x13329110)
#define EDLDHDMLJDH_JIOLAAGJAME_OFFSET UNITYSDK_OFFSET(0x133285A0)
#define EDLDHDMLJDH_KJPDFPADKBG_OFFSET UNITYSDK_OFFSET(0x133267F0)
#define EDLDHDMLJDH_LAEFCLCFOJP_OFFSET UNITYSDK_OFFSET(0x133281F0)
#define EDLDHDMLJDH_LDCFDGALJJD_OFFSET UNITYSDK_OFFSET(0x13329C70)
#define EDLDHDMLJDH_LMEDHAIEABD_OFFSET UNITYSDK_OFFSET(0x13326D00)
#define EDLDHDMLJDH_LPGKNDANOOM_OFFSET UNITYSDK_OFFSET(0x13326CB0)
#define EDLDHDMLJDH_MOMBCIOFOEH_OFFSET UNITYSDK_OFFSET(0x13329500)
#define EDLDHDMLJDH_NADNHMLJCEN_OFFSET UNITYSDK_OFFSET(0x13329190)
#define EDLDHDMLJDH_NLKCMAFDDMG_OFFSET UNITYSDK_OFFSET(0x133293E0)
#define EDLDHDMLJDH_NPIJIDCMPAE_OFFSET UNITYSDK_OFFSET(0x133268C0)
#define EDLDHDMLJDH_ONTRIGGEREDLOGICFINISH_OFFSET UNITYSDK_OFFSET(0x13328000)
#define EDLDHDMLJDH_PKJMICGJPNM_OFFSET UNITYSDK_OFFSET(0x133288C0)
#define EDLDHDMLJDH_PNJIDDMMOGN_OFFSET UNITYSDK_OFFSET(0x13327450)
#define EDLDHDMLJDH_SET_ALLOWSEACHENTITYINPARENT_OFFSET UNITYSDK_OFFSET(0x13329820)
#define EDLDHDMLJDH_SET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET UNITYSDK_OFFSET(0x13329860)
#define EDLDHDMLJDH_SET_FORCETRIGGERINDANGERSTATUS_OFFSET UNITYSDK_OFFSET(0x133298F0)
#define EDLDHDMLJDH_SET_IGNOREFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x133298A0)
#define EDLDHDMLJDH_SET_ISNAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x13329910)
#define EDLDHDMLJDH_SET_ONLYTRIGGERBYFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x13329880)
#define EDLDHDMLJDH_SET_TARGETLAYERMASK_OFFSET UNITYSDK_OFFSET(0x13329840)
#define EDLDHDMLJDH_SET__TRIGGERREGION_OFFSET UNITYSDK_OFFSET(0x133298D0)
#define EDLDHDMLJDH_TICK_OFFSET UNITYSDK_OFFSET(0x13328080)

inline static constexpr unsigned int EDLDHDMLJDH_TypeDefinitionIndex = 57499;

	class EDLDHDMLJDH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* HCMPJJHDCKI; // 0x10
		::RPG::GameCore::GameEntity* NMPAPJAHAAD; // 0x18
		::UnityEngine::Coroutine* MOIKONHOCJO; // 0x20
		::RPG::GameCore::GameEntity* HDIONGLKHCI; // 0x28
		::RPG::Client::BaseMonoTriggerRegion* __TriggerRegion_k__BackingField; // 0x30
		::RPG::GameCore::PredicateConfig* NJGDADPNBAA; // 0x38
		::RPG::GameCore::PredicateConfig* FCEDCJIGLBB; // 0x40
		::RPG::GameCore::ColliderTriggerComponent* ODBBIEJFGAO; // 0x48
		::System::Action* ANIBJDMJNGK; // 0x50
		::System::Action* DPOLBPPPNGO; // 0x58
		::Il2CppArray<::System::UInt32>* AEDAOGFLEDF; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DNKEOHEHEAK*>* LLCFBCFLKGO; // 0x68
		::RPG::GameCore::TriggerValidGuestConfig* KDHGNHDCCCL; // 0x70
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x78
		::System::Predicate_1<::RPG::GameCore::GameEntity*>* KGGCMFMFBLH; // 0x80
		::System::Int32 _TargetLayerMask_k__BackingField; // 0x88
		::System::Boolean LPNLCDIBJOG; // 0x8C
		::System::Boolean _ForceTriggerInDangerStatus_k__BackingField; // 0x8D
		::System::Boolean BBMBJCGMOJL; // 0x8E
		::System::Boolean _AllowSeachEntityInParent_k__BackingField; // 0x8F
		::System::Boolean _OnlyTriggerByFakeAvatar_k__BackingField; // 0x90
		::System::Boolean _IsNamedTrigger_k__BackingField; // 0x91
		::System::Boolean JPPLHJHEFDA; // 0x92
		::System::Byte _padding0[0x1];
		::System::UInt32 OMOGDIKAFJJ; // 0x94
		::System::Boolean _IgnoreFakeAvatar_k__BackingField; // 0x98
		::System::Boolean IEFNFMKDFPE; // 0x99
		::System::Boolean _CheckPropInteractMustNotInDanger_k__BackingField; // 0x9A
		::System::Boolean ILEKKOCDECK; // 0x9B
		static ::RPG::GameCore::TriggerValidGuestConfig** StaticGet_GJIGIDEOEIP()
		{
			return (::RPG::GameCore::TriggerValidGuestConfig**)UnitySDK::FromName("", "EDLDHDMLJDH")->GetStaticField(0x6FF80);
		}

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDLDHDMLJDH_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_DISPOSE_OFFSET))(this);
		}

		::System::Void HPJHKAOJJHF(::Il2CppArray<::RPG::GameCore::EntityType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_HPJHKAOJJHF_OFFSET))(this, a1);
		}

		::System::Void HBCEGPMECGG(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_HBCEGPMECGG_OFFSET))(this, a1);
		}

		::System::Void LPGKNDANOOM(::RPG::Client::BaseMonoTriggerRegion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseMonoTriggerRegion*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_LPGKNDANOOM_OFFSET))(this, a1);
		}

		::RPG::Client::BaseMonoTriggerRegion* LMEDHAIEABD()
		{
			return ((::RPG::Client::BaseMonoTriggerRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_LMEDHAIEABD_OFFSET))(this);
		}

		::System::Boolean EPANHAFOIBN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_EPANHAFOIBN_OFFSET))(this, a1);
		}

		::System::Boolean CLLMJAKIKCA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_CLLMJAKIKCA_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void CCPAGEDBAFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_CCPAGEDBAFK_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM(::UnityEngine::Transform* a1, ::DJMHCEKLKEO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::DJMHCEKLKEO*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_AHEEAFKFALM_OFFSET))(this, a1, a2);
		}

		::System::Void OnTriggeredLogicFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_ONTRIGGEREDLOGICFINISH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_TICK_OFFSET))(this, a1);
		}

		::System::Boolean LAEFCLCFOJP(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_LAEFCLCFOJP_OFFSET))(this, a1);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_DOONEXIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean JIOLAAGJAME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_JIOLAAGJAME_OFFSET))(this);
		}

		::System::Boolean IKGFCCKGMAH(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_IKGFCCKGMAH_OFFSET))(this, a1);
		}

		::System::Void PKJMICGJPNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_PKJMICGJPNM_OFFSET))(this);
		}

		::System::Void CBFHDGLMAOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_CBFHDGLMAOO_OFFSET))(this);
		}

		::System::Void KJPDFPADKBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_KJPDFPADKBG_OFFSET))(this);
		}

		::System::Void NPIJIDCMPAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_NPIJIDCMPAE_OFFSET))(this);
		}

		::System::Void DOBGOGPNHOO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_DOBGOGPNHOO_OFFSET))(this, a1);
		}

		::System::Void GLMHLOMFOMD(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_GLMHLOMFOMD_OFFSET))(this, a1);
		}

		::System::Void NADNHMLJCEN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_NADNHMLJCEN_OFFSET))(this, a1);
		}

		::System::Void NLKCMAFDDMG(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_NLKCMAFDDMG_OFFSET))(this, a1);
		}

		::System::Void JCKAKCFGMFL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_JCKAKCFGMFL_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* JFNHHDODPON()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_JFNHHDODPON_OFFSET))(this);
		}

		::System::Void FEOEOEMHHEN(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_FEOEOEMHHEN_OFFSET))(this, a1, a2);
		}

		::System::Boolean CNDBJOJEGON(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_CNDBJOJEGON_OFFSET))(this, a1, a2);
		}

		static ::System::UInt32 IHIGNLAJIPM(::System::UInt32 a1, ::RPG::GameCore::EntityType a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_IHIGNLAJIPM_OFFSET))(a1, a2);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_BLILDBCEGFH_OFFSET))(this, a1, a2);
		}

		::System::Void HKOCGHIEADE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_HKOCGHIEADE_OFFSET))(this, a1);
		}

		::System::Void MOMBCIOFOEH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_MOMBCIOFOEH_OFFSET))(this, a1);
		}

		::System::Boolean DIPFOIAKDDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_DIPFOIAKDDM_OFFSET))(this);
		}

		::System::Void ILMNABNCBGC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_ILMNABNCBGC_OFFSET))(this, a1);
		}

		::RPG::Client::BaseMonoTriggerRegion* FEGDPHCGCEK()
		{
			return ((::RPG::Client::BaseMonoTriggerRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_FEGDPHCGCEK_OFFSET))(this);
		}

		::System::Boolean get_AllowSeachEntityInParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_GET_ALLOWSEACHENTITYINPARENT_OFFSET))(this);
		}

		::System::Void set_AllowSeachEntityInParent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_SET_ALLOWSEACHENTITYINPARENT_OFFSET))(this, a1);
		}

		::System::Int32 get_TargetLayerMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_GET_TARGETLAYERMASK_OFFSET))(this);
		}

		::System::Void set_TargetLayerMask(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_SET_TARGETLAYERMASK_OFFSET))(this, a1);
		}

		::System::Boolean get_CheckPropInteractMustNotInDanger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_GET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET))(this);
		}

		::System::Void set_CheckPropInteractMustNotInDanger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_SET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET))(this, a1);
		}

		::System::Boolean get_OnlyTriggerByFakeAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_GET_ONLYTRIGGERBYFAKEAVATAR_OFFSET))(this);
		}

		::System::Void set_OnlyTriggerByFakeAvatar(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_SET_ONLYTRIGGERBYFAKEAVATAR_OFFSET))(this, a1);
		}

		::System::Boolean get_IgnoreFakeAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_GET_IGNOREFAKEAVATAR_OFFSET))(this);
		}

		::System::Void set_IgnoreFakeAvatar(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_SET_IGNOREFAKEAVATAR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DNKEOHEHEAK*>* ABKNPIFCOMG()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DNKEOHEHEAK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_ABKNPIFCOMG_OFFSET))(this);
		}

		::RPG::Client::BaseMonoTriggerRegion* get__TriggerRegion()
		{
			return ((::RPG::Client::BaseMonoTriggerRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_GET__TRIGGERREGION_OFFSET))(this);
		}

		::System::Void set__TriggerRegion(::RPG::Client::BaseMonoTriggerRegion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseMonoTriggerRegion*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_SET__TRIGGERREGION_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceTriggerInDangerStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_GET_FORCETRIGGERINDANGERSTATUS_OFFSET))(this);
		}

		::System::Void set_ForceTriggerInDangerStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_SET_FORCETRIGGERINDANGERSTATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNamedTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_GET_ISNAMEDTRIGGER_OFFSET))(this);
		}

		::System::Void set_IsNamedTrigger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_SET_ISNAMEDTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean FANDKPBLDMB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_FANDKPBLDMB_OFFSET))(this, a1);
		}

		::RPG::GameCore::TriggerValidGuestConfig* JEAJPENJOMA()
		{
			return ((::RPG::GameCore::TriggerValidGuestConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_JEAJPENJOMA_OFFSET))(this);
		}

		::System::Boolean LDCFDGALJJD(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_LDCFDGALJJD_OFFSET))(this, a1, a2);
		}

		::System::Boolean GOAAMCNEFKG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_GOAAMCNEFKG_OFFSET))(this, a1);
		}

		::System::Boolean PNJIDDMMOGN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_PNJIDDMMOGN_OFFSET))(this, a1);
		}

		static ::System::Void DIPGJOOBILF(::RPG::GameCore::TriggerValidGuestConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TriggerValidGuestConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + EDLDHDMLJDH_DIPGJOOBILF_OFFSET))(a1, a2);
		}

	};
