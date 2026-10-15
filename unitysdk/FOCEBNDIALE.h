#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFCPGANBGMI.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class OEAMAMLDKFC;
class PEEDLCHFAFL;
namespace RPG::GameCore { class FiveDimAvatarMoveAbilityConfig; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define FOCEBNDIALE_AJAMJDIIFDO_OFFSET UNITYSDK_OFFSET(0x158D7150)
#define FOCEBNDIALE_ALFEEHAODMH_OFFSET UNITYSDK_OFFSET(0x158D7DD0)
#define FOCEBNDIALE_AOCCHBHOKDO_OFFSET UNITYSDK_OFFSET(0x158D6CC0)
#define FOCEBNDIALE_CLEAR_OFFSET UNITYSDK_OFFSET(0x158D6FA0)
#define FOCEBNDIALE_CTOR_OFFSET UNITYSDK_OFFSET(0x158D9930)
#define FOCEBNDIALE_DGHLCFLEJFC_OFFSET UNITYSDK_OFFSET(0x158D8490)
#define FOCEBNDIALE_EKDDGABODCO_OFFSET UNITYSDK_OFFSET(0x158D9550)
#define FOCEBNDIALE_EMHDHINLCOP_OFFSET UNITYSDK_OFFSET(0x158D7010)
#define FOCEBNDIALE_GEFDKBCCEJC_OFFSET UNITYSDK_OFFSET(0x158D7AB0)
#define FOCEBNDIALE_GET_AVATARMOVEABILITYCONFIG_OFFSET UNITYSDK_OFFSET(0x158D9910)
#define FOCEBNDIALE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x158D70B0)
#define FOCEBNDIALE_GET_PHYSICSPROXYRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x158D98D0)
#define FOCEBNDIALE_GET_PHYSICSPROXYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x158D98B0)
#define FOCEBNDIALE_GET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x158D9390)
#define FOCEBNDIALE_GET_PROXYCOLLIDER_OFFSET UNITYSDK_OFFSET(0x158D98F0)
#define FOCEBNDIALE_GET_SURFACECONSTRAINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x158D9890)
#define FOCEBNDIALE_HKMPJGMGHEG_OFFSET UNITYSDK_OFFSET(0x158D8FF0)
#define FOCEBNDIALE_KFIBFFMNKAK_OFFSET UNITYSDK_OFFSET(0x158D9400)
#define FOCEBNDIALE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x158D67D0)
#define FOCEBNDIALE_LHMKCOHPLMN_OFFSET UNITYSDK_OFFSET(0x158D7120)
#define FOCEBNDIALE_MPKLLPIMPBE_OFFSET UNITYSDK_OFFSET(0x158D8DA0)
#define FOCEBNDIALE_NIOOHGFAKIL_OFFSET UNITYSDK_OFFSET(0x158D96A0)
#define FOCEBNDIALE_NJOCLHDCJBE_OFFSET UNITYSDK_OFFSET(0x158D6890)
#define FOCEBNDIALE_OABJIFMOLIH_OFFSET UNITYSDK_OFFSET(0x158D7FF0)
#define FOCEBNDIALE_OCGPMLABLLF_OFFSET UNITYSDK_OFFSET(0x158D7B30)
#define FOCEBNDIALE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x158D8800)
#define FOCEBNDIALE_SET_AVATARMOVEABILITYCONFIG_OFFSET UNITYSDK_OFFSET(0x158D9920)
#define FOCEBNDIALE_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x158D6BC0)
#define FOCEBNDIALE_SET_PHYSICSPROXYRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x158D98E0)
#define FOCEBNDIALE_SET_PHYSICSPROXYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x158D98C0)
#define FOCEBNDIALE_SET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x158D6C40)
#define FOCEBNDIALE_SET_PROXYCOLLIDER_OFFSET UNITYSDK_OFFSET(0x158D9900)
#define FOCEBNDIALE_SET_SURFACECONSTRAINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x158D98A0)

inline static constexpr unsigned int FOCEBNDIALE_TypeDefinitionIndex = 76957;

	class FOCEBNDIALE : public ::HFCPGANBGMI
	{
	public:
		::UnityEngine::CapsuleCollider* _ProxyCollider_k__BackingField; // 0x40
		::UnityEngine::Transform* _SurfaceConstraintTransform_k__BackingField; // 0x48
		::RPG::GameCore::FiveDimAvatarMoveAbilityConfig* _AvatarMoveAbilityConfig_k__BackingField; // 0x50
		::UnityEngine::Transform* _PhysicsProxyTransform_k__BackingField; // 0x58
		::UnityEngine::Rigidbody* _PhysicsProxyRigidBody_k__BackingField; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCEBNDIALE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HIOEAKHGILF* a1, ::PEEDLCHFAFL* a2, ::NDDFLGNNMDK* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::PEEDLCHFAFL*, ::NDDFLGNNMDK*))((::PBYTE)hIl2Cpp + FOCEBNDIALE_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCEBNDIALE_CLEAR_OFFSET))(this);
		}

		::System::Void EMHDHINLCOP(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + FOCEBNDIALE_EMHDHINLCOP_OFFSET))(this, a1);
		}

		::System::Void AJAMJDIIFDO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOCEBNDIALE_AJAMJDIIFDO_OFFSET))(this, a1);
		}

		::System::Void OABJIFMOLIH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOCEBNDIALE_OABJIFMOLIH_OFFSET))(this, a1);
		}

		::System::Void DGHLCFLEJFC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOCEBNDIALE_DGHLCFLEJFC_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOCEBNDIALE_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void MPKLLPIMPBE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOCEBNDIALE_MPKLLPIMPBE_OFFSET))(this, a1);
		}

		::System::Void HKMPJGMGHEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCEBNDIALE_HKMPJGMGHEG_OFFSET))(this);
		}

		::System::Void NJOCLHDCJBE(::PEEDLCHFAFL* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEEDLCHFAFL*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FOCEBNDIALE_NJOCLHDCJBE_OFFSET))(this, a1, a2);
		}

		::System::Boolean OCGPMLABLLF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCEBNDIALE_OCGPMLABLLF_OFFSET))(this);
		}

		::System::Void AOCCHBHOKDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCEBNDIALE_AOCCHBHOKDO_OFFSET))(this);
		}

		::System::Void ALFEEHAODMH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOCEBNDIALE_ALFEEHAODMH_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* LHMKCOHPLMN()
		{
			return ((::HIOEAKHGILF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCEBNDIALE_LHMKCOHPLMN_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState get_CurrentState()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCEBNDIALE_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentState(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + FOCEBNDIALE_SET_CURRENTSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState get_PrevState()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCEBNDIALE_GET_PREVSTATE_OFFSET))(this);
		}

		::System::Void set_PrevState(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + FOCEBNDIALE_SET_PREVSTATE_OFFSET))(this, a1);
		}

		::OEAMAMLDKFC* GEFDKBCCEJC()
		{
			return ((::OEAMAMLDKFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCEBNDIALE_GEFDKBCCEJC_OFFSET))(this);
		}

		::System::Boolean KFIBFFMNKAK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCEBNDIALE_KFIBFFMNKAK_OFFSET))(this);
		}

		::System::Boolean EKDDGABODCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCEBNDIALE_EKDDGABODCO_OFFSET))(this);
		}

		::System::Boolean NIOOHGFAKIL(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FOCEBNDIALE_NIOOHGFAKIL_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_SurfaceConstraintTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCEBNDIALE_GET_SURFACECONSTRAINTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_SurfaceConstraintTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOCEBNDIALE_SET_SURFACECONSTRAINTTRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_PhysicsProxyTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCEBNDIALE_GET_PHYSICSPROXYTRANSFORM_OFFSET))(this);
		}

		::System::Void set_PhysicsProxyTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOCEBNDIALE_SET_PHYSICSPROXYTRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Rigidbody* get_PhysicsProxyRigidBody()
		{
			return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCEBNDIALE_GET_PHYSICSPROXYRIGIDBODY_OFFSET))(this);
		}

		::System::Void set_PhysicsProxyRigidBody(::UnityEngine::Rigidbody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + FOCEBNDIALE_SET_PHYSICSPROXYRIGIDBODY_OFFSET))(this, a1);
		}

		::UnityEngine::CapsuleCollider* get_ProxyCollider()
		{
			return ((::UnityEngine::CapsuleCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCEBNDIALE_GET_PROXYCOLLIDER_OFFSET))(this);
		}

		::System::Void set_ProxyCollider(::UnityEngine::CapsuleCollider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + FOCEBNDIALE_SET_PROXYCOLLIDER_OFFSET))(this, a1);
		}

		::RPG::GameCore::FiveDimAvatarMoveAbilityConfig* get_AvatarMoveAbilityConfig()
		{
			return ((::RPG::GameCore::FiveDimAvatarMoveAbilityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCEBNDIALE_GET_AVATARMOVEABILITYCONFIG_OFFSET))(this);
		}

		::System::Void set_AvatarMoveAbilityConfig(::RPG::GameCore::FiveDimAvatarMoveAbilityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimAvatarMoveAbilityConfig*))((::PBYTE)hIl2Cpp + FOCEBNDIALE_SET_AVATARMOVEABILITYCONFIG_OFFSET))(this, a1);
		}

	};
