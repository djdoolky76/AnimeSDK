#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KJJMGKAEOED;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOANIMATORPLATFORM_APPLYPLATFORMMOVEMENT_OFFSET UNITYSDK_OFFSET(0xD72E570)
#define RPG_CLIENT_MONOANIMATORPLATFORM_AWAKE_OFFSET UNITYSDK_OFFSET(0xD72E0E0)
#define RPG_CLIENT_MONOANIMATORPLATFORM_CALLPLATFORMMOVE_OFFSET UNITYSDK_OFFSET(0xD72E5F0)
#define RPG_CLIENT_MONOANIMATORPLATFORM_CTOR_OFFSET UNITYSDK_OFFSET(0xD72E960)
#define RPG_CLIENT_MONOANIMATORPLATFORM_GET_MOVEDDELEGATE_OFFSET UNITYSDK_OFFSET(0xD72E0B0)
#define RPG_CLIENT_MONOANIMATORPLATFORM_GET_NEEDREFRESHRAYCAST_OFFSET UNITYSDK_OFFSET(0xD72E0D0)
#define RPG_CLIENT_MONOANIMATORPLATFORM_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xD72E090)
#define RPG_CLIENT_MONOANIMATORPLATFORM_HKFNJPILAFK_OFFSET UNITYSDK_OFFSET(0xD72E6B0)
#define RPG_CLIENT_MONOANIMATORPLATFORM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD72E500)
#define RPG_CLIENT_MONOANIMATORPLATFORM_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD72E190)
#define RPG_CLIENT_MONOANIMATORPLATFORM_SET_MOVEDDELEGATE_OFFSET UNITYSDK_OFFSET(0xD72E0C0)
#define RPG_CLIENT_MONOANIMATORPLATFORM_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xD72E0A0)

namespace RPG::Client
{
	class MonoAnimatorPlatform : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean autoSync; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::GameObject* colliderObject; // 0x20
		::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x28
		::KJJMGKAEOED* _MovedDelegate_k__BackingField; // 0x30
		::UnityEngine::Transform* DLFBEADOODM; // 0x38
		::UnityEngine::Vector3 CKLFGEFOOHJ; // 0x40
		::UnityEngine::Quaternion OMLNMHHKNBG; // 0x4C
		::UnityEngine::Vector3 CPGIPHLCAFI; // 0x5C
		::UnityEngine::Quaternion CMIDMBEAKNJ; // 0x68
		::UnityEngine::Vector3 CLKEOIEHDMA; // 0x78
		::UnityEngine::Quaternion GCAFEABEPJL; // 0x84
		::System::Boolean PNGFCMIOIDI; // 0x94
		::System::Byte _padding1[0x3];
		::System::Action* MPKAFEJFNKN; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORPLATFORM_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORPLATFORM_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORPLATFORM_SET_OWNERENTITY_OFFSET))(this, a1);
		}

		::KJJMGKAEOED* get_MovedDelegate()
		{
			return ((::KJJMGKAEOED*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORPLATFORM_GET_MOVEDDELEGATE_OFFSET))(this);
		}

		::System::Void set_MovedDelegate(::KJJMGKAEOED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJJMGKAEOED*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORPLATFORM_SET_MOVEDDELEGATE_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedRefreshRaycast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORPLATFORM_GET_NEEDREFRESHRAYCAST_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORPLATFORM_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORPLATFORM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORPLATFORM_ONDISABLE_OFFSET))(this);
		}

		::System::Void ApplyPlatformMovement(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORPLATFORM_APPLYPLATFORMMOVEMENT_OFFSET))(this, a1);
		}

		::System::Void CallPlatformMove(::KJJMGKAEOED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJJMGKAEOED*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORPLATFORM_CALLPLATFORMMOVE_OFFSET))(this, a1);
		}

		::System::Void HKFNJPILAFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORPLATFORM_HKFNJPILAFK_OFFSET))(this);
		}

	};
}
