#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NLIIOJPPABJ.h"
#include "unitysdk/RPG/GameCore/ProjectileMoveBehavior.h"
#include "unitysdk/RPG/GameCore/ProjectileState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
class GGJEMEHMBNL;
class HPICNGFLLCA;
class LACOFPCJAFI;
class MBBEBLGELAP;
class NAOKFLDEDBJ;
class NBHAKGBHPOE;
class OHHPOGMFPBF;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoProjectileEffect; }
namespace RPG::GameCore { class ColliderConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class ProjectileTemplateConfig; }
namespace RPG::GameCore { class ProjectileTemplateData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define NAOKFLDEDBJ_AIABMLAOBCC_OFFSET UNITYSDK_OFFSET(0xC32F480)
#define NAOKFLDEDBJ_AINDLKCHGGE_OFFSET UNITYSDK_OFFSET(0xC330E90)
#define NAOKFLDEDBJ_BHBLCFAHJKP_OFFSET UNITYSDK_OFFSET(0xC32F300)
#define NAOKFLDEDBJ_BJMIADCJBOL_OFFSET UNITYSDK_OFFSET(0xC32F500)
#define NAOKFLDEDBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xC332CF0)
#define NAOKFLDEDBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC32E890)
#define NAOKFLDEDBJ_DHPNJCIFJBL_OFFSET UNITYSDK_OFFSET(0xC32FDF0)
#define NAOKFLDEDBJ_DIMEJEACBCP_OFFSET UNITYSDK_OFFSET(0xC330B10)
#define NAOKFLDEDBJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC32EF60)
#define NAOKFLDEDBJ_DJIIOPOPDCD_OFFSET UNITYSDK_OFFSET(0xC332650)
#define NAOKFLDEDBJ_DPMCKGFPGKO_OFFSET UNITYSDK_OFFSET(0xC3318C0)
#define NAOKFLDEDBJ_FIMNFOAEOHH_OFFSET UNITYSDK_OFFSET(0xC332A10)
#define NAOKFLDEDBJ_FIOGIHDLLEN_OFFSET UNITYSDK_OFFSET(0xC32FAF0)
#define NAOKFLDEDBJ_FOCEDEPCJIJ_OFFSET UNITYSDK_OFFSET(0xC32E720)
#define NAOKFLDEDBJ_GAKDFPGOBGF_OFFSET UNITYSDK_OFFSET(0xC32E630)
#define NAOKFLDEDBJ_GET_DATABEHAVIORTYPE_OFFSET UNITYSDK_OFFSET(0xC330DB0)
#define NAOKFLDEDBJ_GET_DATAREF_OFFSET UNITYSDK_OFFSET(0xC330D90)
#define NAOKFLDEDBJ_GET_ENSURECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xC330E50)
#define NAOKFLDEDBJ_GET_ID_OFFSET UNITYSDK_OFFSET(0xC330EF0)
#define NAOKFLDEDBJ_GET_ISHIT_OFFSET UNITYSDK_OFFSET(0xC330DD0)
#define NAOKFLDEDBJ_GET_ONPROJECTILEHIT_OFFSET UNITYSDK_OFFSET(0xC330DF0)
#define NAOKFLDEDBJ_GET_ONPROJECTILELIFETIMEFINISH_OFFSET UNITYSDK_OFFSET(0xC330E10)
#define NAOKFLDEDBJ_GET_OWNERABILITYREF_OFFSET UNITYSDK_OFFSET(0xC330D70)
#define NAOKFLDEDBJ_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xC330D50)
#define NAOKFLDEDBJ_GET_PREVIOUSPROJECTILE_OFFSET UNITYSDK_OFFSET(0xC330E70)
#define NAOKFLDEDBJ_GET_SKILLCONTEXT_OFFSET UNITYSDK_OFFSET(0xC330E30)
#define NAOKFLDEDBJ_GET_STATE_OFFSET UNITYSDK_OFFSET(0xC330CF0)
#define NAOKFLDEDBJ_GET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0xC330D10)
#define NAOKFLDEDBJ_GET_TARGETPOSENTITY_OFFSET UNITYSDK_OFFSET(0xC330D30)
#define NAOKFLDEDBJ_GLCKDFOBJEI_OFFSET UNITYSDK_OFFSET(0xC330C70)
#define NAOKFLDEDBJ_GNNDEKJDPIF_OFFSET UNITYSDK_OFFSET(0xC3323D0)
#define NAOKFLDEDBJ_GOHLINALEDE_OFFSET UNITYSDK_OFFSET(0xC32F680)
#define NAOKFLDEDBJ_HKBIDEOPEPM_OFFSET UNITYSDK_OFFSET(0xC3322C0)
#define NAOKFLDEDBJ_JACJJOAKCME_OFFSET UNITYSDK_OFFSET(0xC32F9B0)
#define NAOKFLDEDBJ_JJKHEFMPNEP_OFFSET UNITYSDK_OFFSET(0xC330F10)
#define NAOKFLDEDBJ_JKLHKEKFIAN_OFFSET UNITYSDK_OFFSET(0xC332AA0)
#define NAOKFLDEDBJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC32F370)
#define NAOKFLDEDBJ_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0xC330B60)
#define NAOKFLDEDBJ_KDONLCELGKG_OFFSET UNITYSDK_OFFSET(0xC32F180)
#define NAOKFLDEDBJ_KGKBLKFGIGF_OFFSET UNITYSDK_OFFSET(0xC32FAB0)
#define NAOKFLDEDBJ_LHIOJHIKGDA_OFFSET UNITYSDK_OFFSET(0xC330BB0)
#define NAOKFLDEDBJ_MLAIPFDKEIP_OFFSET UNITYSDK_OFFSET(0xC332700)
#define NAOKFLDEDBJ_NIDODGIADIA_OFFSET UNITYSDK_OFFSET(0xC32F780)
#define NAOKFLDEDBJ_OOCFMHJIDPD_OFFSET UNITYSDK_OFFSET(0xC32F890)
#define NAOKFLDEDBJ_OPIGIBDAEMP_OFFSET UNITYSDK_OFFSET(0xC31D760)
#define NAOKFLDEDBJ_SET_DATABEHAVIORTYPE_OFFSET UNITYSDK_OFFSET(0xC330DC0)
#define NAOKFLDEDBJ_SET_DATAREF_OFFSET UNITYSDK_OFFSET(0xC330DA0)
#define NAOKFLDEDBJ_SET_ENSURECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xC330E60)
#define NAOKFLDEDBJ_SET_ID_OFFSET UNITYSDK_OFFSET(0xC330F00)
#define NAOKFLDEDBJ_SET_ISHIT_OFFSET UNITYSDK_OFFSET(0xC330DE0)
#define NAOKFLDEDBJ_SET_ONPROJECTILEHIT_OFFSET UNITYSDK_OFFSET(0xC330E00)
#define NAOKFLDEDBJ_SET_ONPROJECTILELIFETIMEFINISH_OFFSET UNITYSDK_OFFSET(0xC330E20)
#define NAOKFLDEDBJ_SET_OWNERABILITYREF_OFFSET UNITYSDK_OFFSET(0xC330D80)
#define NAOKFLDEDBJ_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xC330D60)
#define NAOKFLDEDBJ_SET_PREVIOUSPROJECTILE_OFFSET UNITYSDK_OFFSET(0xC330E80)
#define NAOKFLDEDBJ_SET_SKILLCONTEXT_OFFSET UNITYSDK_OFFSET(0xC330E40)
#define NAOKFLDEDBJ_SET_STATE_OFFSET UNITYSDK_OFFSET(0xC330D00)
#define NAOKFLDEDBJ_SET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0xC330D20)
#define NAOKFLDEDBJ_SET_TARGETPOSENTITY_OFFSET UNITYSDK_OFFSET(0xC330D40)
#define NAOKFLDEDBJ___CTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0xC332DB0)

inline static constexpr unsigned int NAOKFLDEDBJ_TypeDefinitionIndex = 55924;

	class NAOKFLDEDBJ : public ::System::Object
	{
	public:
		::RPG::GameCore::NewProjectileConfig* _DataRef_k__BackingField; // 0x10
		::NBHAKGBHPOE* _OnProjectileHit_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _TargetEntity_k__BackingField; // 0x20
		::UnityEngine::Rigidbody* NCLFBGFOJKC; // 0x28
		::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x30
		::OHHPOGMFPBF* _SkillContext_k__BackingField; // 0x38
		::GGJEMEHMBNL* LKNBIAHBIFP; // 0x40
		::System::String* LBGEHJJFKCL; // 0x48
		::UnityEngine::GameObject* FCKCHPNEEKB; // 0x50
		::NAOKFLDEDBJ* _PreviousProjectile_k__BackingField; // 0x58
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CJDIGEBAGBO; // 0x60
		::UnityEngine::Transform* MJMHMMFKBCC; // 0x68
		::RPG::Client::MonoProjectileEffect* LLEDDKCJBBM; // 0x70
		::System::String* MGHMMOLGFKL; // 0x78
		::UnityEngine::Animator* OELNPDNHMPG; // 0x80
		::RPG::GameCore::GameEntity* _TargetPosEntity_k__BackingField; // 0x88
		::HPICNGFLLCA* _OwnerAbilityRef_k__BackingField; // 0x90
		::LACOFPCJAFI* _OnProjectileLifetimeFinish_k__BackingField; // 0x98
		::UnityEngine::Vector3 EGHDMDEJICM; // 0xA0
		::System::Single INIEIBBFCIM; // 0xAC
		::UnityEngine::Vector3 CNCEDLKOHFL; // 0xB0
		::UnityEngine::Vector3 HFOMPEEAPCG; // 0xBC
		::UnityEngine::Vector3 DBGPPLMHKHJ; // 0xC8
		::UnityEngine::Vector3 MHHGMIHOCMJ; // 0xD4
		::System::Single DNPEHPPLEOA; // 0xE0
		::System::Boolean NIPHGONDDHC; // 0xE4
		::System::Boolean _IsHit_k__BackingField; // 0xE5
		::System::Boolean _EnsureCallbackOrder_k__BackingField; // 0xE6
		::System::Boolean FHHPOKGHNBG; // 0xE7
		::System::Int32 _ID_k__BackingField; // 0xE8
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0xEC
		::UnityEngine::Vector3 KONBAMDOGDH; // 0xF8
		::System::Int32 BILLIIBBKPE; // 0x104
		::UnityEngine::Vector3 IFIEBIEIKIE; // 0x108
		::UnityEngine::Vector3 AKOIKFDLNID; // 0x114
		::RPG::GameCore::ProjectileState _State_k__BackingField; // 0x120
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x124
		::UnityEngine::Vector3 HFCLFJMMFJK; // 0x130
		::System::Single FPHNBMKFDDN; // 0x13C
		::NLIIOJPPABJ NNGCDEHEDJE; // 0x140
		::RPG::GameCore::ProjectileMoveBehavior _DataBehaviorType_k__BackingField; // 0x148
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_IKADOAGOFEM()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "NAOKFLDEDBJ")->GetStaticField(0x155D0);
		}

		static ::RPG::GameCore::ProjectileTemplateConfig** StaticGet_BGGJAPNALIN()
		{
			return (::RPG::GameCore::ProjectileTemplateConfig**)UnitySDK::FromName("", "NAOKFLDEDBJ")->GetStaticField(0x155D8);
		}

		static ::System::String** StaticGet_LBGAAPBDIDI()
		{
			return (::System::String**)UnitySDK::FromName("", "NAOKFLDEDBJ")->GetStaticField(0x155E0);
		}

		static ::RPG::GameCore::ColliderConfig** StaticGet_IMBCEMCKDGO()
		{
			return (::RPG::GameCore::ColliderConfig**)UnitySDK::FromName("", "NAOKFLDEDBJ")->GetStaticField(0x155E8);
		}

		static ::System::Int32* StaticGet_BNGOLNHFADJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NAOKFLDEDBJ")->GetStaticField(0x4750);
		}

		static ::System::Int32* StaticGet_LIPDNJHCKGC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NAOKFLDEDBJ")->GetStaticField(0x4754);
		}

		::System::Void _ctor(::RPG::GameCore::ProjectileData* a1, ::HPICNGFLLCA* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::NBHAKGBHPOE* a5, ::OHHPOGMFPBF* a6, ::LACOFPCJAFI* a7, ::System::Boolean a8, ::RPG::GameCore::NewProjectileConfig* a9)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::HPICNGFLLCA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::NBHAKGBHPOE*, ::OHHPOGMFPBF*, ::LACOFPCJAFI*, ::System::Boolean, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_CCTOR_OFFSET))();
		}

		static ::System::Void GAKDFPGOBGF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GAKDFPGOBGF_OFFSET))();
		}

		static ::RPG::GameCore::ProjectileTemplateData* FOCEDEPCJIJ(::System::String* a1)
		{
			return ((::RPG::GameCore::ProjectileTemplateData*(*)(::System::String*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_FOCEDEPCJIJ_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_DISPOSE_OFFSET))(this);
		}

		::System::Void KDONLCELGKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_KDONLCELGKG_OFFSET))(this);
		}

		::System::Boolean BHBLCFAHJKP(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_BHBLCFAHJKP_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GOHLINALEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GOHLINALEDE_OFFSET))(this);
		}

		::System::Void NIDODGIADIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_NIDODGIADIA_OFFSET))(this);
		}

		::System::Void OOCFMHJIDPD(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_OOCFMHJIDPD_OFFSET))(this, a1);
		}

		::System::Void JACJJOAKCME(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_JACJJOAKCME_OFFSET))(this, a1);
		}

		::System::Void KGKBLKFGIGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_KGKBLKFGIGF_OFFSET))(this);
		}

		::System::Boolean FIOGIHDLLEN(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_FIOGIHDLLEN_OFFSET))(this, a1);
		}

		::System::Boolean OPIGIBDAEMP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::RaycastHit a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_OPIGIBDAEMP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void DHPNJCIFJBL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_DHPNJCIFJBL_OFFSET))(this, a1, a2, a3);
		}

		::MBBEBLGELAP* DIMEJEACBCP()
		{
			return ((::MBBEBLGELAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_DIMEJEACBCP_OFFSET))(this);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Void LHIOJHIKGDA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_LHIOJHIKGDA_OFFSET))(this, a1);
		}

		::System::Void GLCKDFOBJEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GLCKDFOBJEI_OFFSET))(this);
		}

		::RPG::GameCore::ProjectileState get_State()
		{
			return ((::RPG::GameCore::ProjectileState(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::GameCore::ProjectileState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ProjectileState))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_TargetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GET_TARGETENTITY_OFFSET))(this);
		}

		::System::Void set_TargetEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_SET_TARGETENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_TargetPosEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GET_TARGETPOSENTITY_OFFSET))(this);
		}

		::System::Void set_TargetPosEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_SET_TARGETPOSENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_SET_OWNERENTITY_OFFSET))(this, a1);
		}

		::HPICNGFLLCA* get_OwnerAbilityRef()
		{
			return ((::HPICNGFLLCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GET_OWNERABILITYREF_OFFSET))(this);
		}

		::System::Void set_OwnerAbilityRef(::HPICNGFLLCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPICNGFLLCA*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_SET_OWNERABILITYREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::NewProjectileConfig* get_DataRef()
		{
			return ((::RPG::GameCore::NewProjectileConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GET_DATAREF_OFFSET))(this);
		}

		::System::Void set_DataRef(::RPG::GameCore::NewProjectileConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_SET_DATAREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::ProjectileMoveBehavior get_DataBehaviorType()
		{
			return ((::RPG::GameCore::ProjectileMoveBehavior(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GET_DATABEHAVIORTYPE_OFFSET))(this);
		}

		::System::Void set_DataBehaviorType(::RPG::GameCore::ProjectileMoveBehavior a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ProjectileMoveBehavior))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_SET_DATABEHAVIORTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GET_ISHIT_OFFSET))(this);
		}

		::System::Void set_IsHit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_SET_ISHIT_OFFSET))(this, a1);
		}

		::NBHAKGBHPOE* get_OnProjectileHit()
		{
			return ((::NBHAKGBHPOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GET_ONPROJECTILEHIT_OFFSET))(this);
		}

		::System::Void set_OnProjectileHit(::NBHAKGBHPOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBHAKGBHPOE*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_SET_ONPROJECTILEHIT_OFFSET))(this, a1);
		}

		::LACOFPCJAFI* get_OnProjectileLifetimeFinish()
		{
			return ((::LACOFPCJAFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GET_ONPROJECTILELIFETIMEFINISH_OFFSET))(this);
		}

		::System::Void set_OnProjectileLifetimeFinish(::LACOFPCJAFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LACOFPCJAFI*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_SET_ONPROJECTILELIFETIMEFINISH_OFFSET))(this, a1);
		}

		::OHHPOGMFPBF* get_SkillContext()
		{
			return ((::OHHPOGMFPBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GET_SKILLCONTEXT_OFFSET))(this);
		}

		::System::Void set_SkillContext(::OHHPOGMFPBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHHPOGMFPBF*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_SET_SKILLCONTEXT_OFFSET))(this, a1);
		}

		::System::Boolean get_EnsureCallbackOrder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GET_ENSURECALLBACKORDER_OFFSET))(this);
		}

		::System::Void set_EnsureCallbackOrder(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_SET_ENSURECALLBACKORDER_OFFSET))(this, a1);
		}

		::NAOKFLDEDBJ* get_PreviousProjectile()
		{
			return ((::NAOKFLDEDBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GET_PREVIOUSPROJECTILE_OFFSET))(this);
		}

		::System::Void set_PreviousProjectile(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_SET_PREVIOUSPROJECTILE_OFFSET))(this, a1);
		}

		::System::Boolean AINDLKCHGGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_AINDLKCHGGE_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_SET_ID_OFFSET))(this, a1);
		}

		::System::Void JJKHEFMPNEP(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_JJKHEFMPNEP_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* DPMCKGFPGKO(::RPG::Client::MonoEffect* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_DPMCKGFPGKO_OFFSET))(this, a1);
		}

		::System::Void HKBIDEOPEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_HKBIDEOPEPM_OFFSET))(this);
		}

		::System::Void GNNDEKJDPIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_GNNDEKJDPIF_OFFSET))(this);
		}

		::System::Void DJIIOPOPDCD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_DJIIOPOPDCD_OFFSET))(this, a1);
		}

		::System::Boolean AIABMLAOBCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_AIABMLAOBCC_OFFSET))(this);
		}

		::System::Void BJMIADCJBOL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_BJMIADCJBOL_OFFSET))(this, a1);
		}

		::System::Void MLAIPFDKEIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_MLAIPFDKEIP_OFFSET))(this);
		}

		::System::Single FIMNFOAEOHH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_FIMNFOAEOHH_OFFSET))(this);
		}

		::System::Void JKLHKEKFIAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ_JKLHKEKFIAN_OFFSET))(this);
		}

		::System::Void __ctor_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOKFLDEDBJ___CTOR_B__4_0_OFFSET))(this);
		}

	};
