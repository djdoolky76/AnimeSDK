#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/BasePixAirView.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CIAOJAMKBGG;
class EPPKLLIIDCH;
class FHKGNKFGIDF;
class NJKFCOIBIOK;
namespace RPG::Client { class MonoEffect; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_BINDMESSAGE_OFFSET UNITYSDK_OFFSET(0xDEF39A0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_CEPJHGNMKJD_OFFSET UNITYSDK_OFFSET(0xDEF3E40)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_CHNBBKIOAAB_OFFSET UNITYSDK_OFFSET(0xDEF4C60)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDEF5370)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_ECHAGBBNIIO_OFFSET UNITYSDK_OFFSET(0xDEF4240)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_ENJMMHDCAPH_OFFSET UNITYSDK_OFFSET(0xDEF4A20)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_FIREDISAPPEAREFFECT_OFFSET UNITYSDK_OFFSET(0xDEF30C0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_FJMBEBJBELJ_OFFSET UNITYSDK_OFFSET(0xDEF3D60)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_FPIPLCJOGAC_OFFSET UNITYSDK_OFFSET(0xDEF4DC0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_GET_ENEMYDISPLAYID_OFFSET UNITYSDK_OFFSET(0xDEF5350)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_GET_SHIELDANCHOR_OFFSET UNITYSDK_OFFSET(0xDEF41D0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_IJEPAJIMDPA_OFFSET UNITYSDK_OFFSET(0xDEF3B90)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_JJKAENPICND_OFFSET UNITYSDK_OFFSET(0xDEF4740)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_KGFFHDMLKIO_OFFSET UNITYSDK_OFFSET(0xDEF43A0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_KNPKKIBDCIH_OFFSET UNITYSDK_OFFSET(0xDEF4630)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xDEF48C0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_MBBBEGACGCA_OFFSET UNITYSDK_OFFSET(0xDEF44F0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDEF5070)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_PBJPOPAEEFE_OFFSET UNITYSDK_OFFSET(0xDEF3FD0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_RANDOMGETHITANCHOR_OFFSET UNITYSDK_OFFSET(0xDEF52E0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_SET_ENEMYDISPLAYID_OFFSET UNITYSDK_OFFSET(0xDEF5360)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_START_OFFSET UNITYSDK_OFFSET(0xDEF34B0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_TRIGGERANIM_OFFSET UNITYSDK_OFFSET(0xDEF3EE0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xDEF4D40)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirPlaneView_TypeDefinitionIndex = 79658;

	class PixAirPlaneView : public ::RPG::Client::LittleGame::PixAir::BasePixAirView
	{
	public:
		::System::UInt32 _EnemyDisplayID_k__BackingField; // 0x38
		::System::UInt32 JODKNBFBCBD; // 0x3C
		::System::UInt32 HOPBKLANLGL; // 0x40
		::System::Byte _padding0[0x4];
		::System::String* PCFMADKKLBM; // 0x48
		::UnityEngine::Animator* APPGGMLEPLN; // 0x50
		::UnityEngine::Transform* PlayerShieldAnchor; // 0x58
		::UnityEngine::Transform* EnemyShieldAnchor; // 0x60
		::UnityEngine::Transform* BurnAnchor; // 0x68
		::Il2CppArray<::UnityEngine::Transform*>* HitAnchors; // 0x70
		::UnityEngine::Transform* ViewAnchor; // 0x78
		::UnityEngine::Transform* CoreEquipSlot; // 0x80
		::Il2CppArray<::UnityEngine::Transform*>* EquipmentSlots; // 0x88
		// static const ::System::String* AddShieldEffectPath; // 0x0
		// static const ::System::String* DamageShieldEffectPath; // 0x0
		// static const ::System::String* DisappearEffectPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_START_OFFSET))(this);
		}

		::System::Void BindMessage(::NJKFCOIBIOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFCOIBIOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_BINDMESSAGE_OFFSET))(this, a1);
		}

		::System::Void FireDisappearEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_FIREDISAPPEAREFFECT_OFFSET))(this);
		}

		::System::Void FJMBEBJBELJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_FJMBEBJBELJ_OFFSET))(this);
		}

		::System::Boolean TriggerAnim(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_TRIGGERANIM_OFFSET))(this, a1);
		}

		::System::Void PBJPOPAEEFE(::CIAOJAMKBGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIAOJAMKBGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_PBJPOPAEEFE_OFFSET))(this, a1);
		}

		::System::Void ECHAGBBNIIO(::EPPKLLIIDCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPPKLLIIDCH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_ECHAGBBNIIO_OFFSET))(this, a1);
		}

		::System::Void KGFFHDMLKIO(::FHKGNKFGIDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHKGNKFGIDF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_KGFFHDMLKIO_OFFSET))(this, a1);
		}

		::System::Void MBBBEGACGCA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_MBBBEGACGCA_OFFSET))(this, a1);
		}

		::System::Int32 KNPKKIBDCIH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_KNPKKIBDCIH_OFFSET))(this);
		}

		::System::Void JJKAENPICND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_JJKAENPICND_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void CEPJHGNMKJD(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_CEPJHGNMKJD_OFFSET))(this, a1, a2);
		}

		::System::UInt32 IJEPAJIMDPA(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_IJEPAJIMDPA_OFFSET))(this, a1, a2);
		}

		::System::Void ENJMMHDCAPH(::RPG::Client::MonoEffect* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_ENJMMHDCAPH_OFFSET))(this, a1, a2);
		}

		::System::String* CHNBBKIOAAB(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_CHNBBKIOAAB_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void FPIPLCJOGAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_FPIPLCJOGAC_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Transform* RandomGetHitAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_RANDOMGETHITANCHOR_OFFSET))(this);
		}

		::System::UInt32 get_EnemyDisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_GET_ENEMYDISPLAYID_OFFSET))(this);
		}

		::System::Void set_EnemyDisplayID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_SET_ENEMYDISPLAYID_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_ShieldAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW_GET_SHIELDANCHOR_OFFSET))(this);
		}

	};
}
