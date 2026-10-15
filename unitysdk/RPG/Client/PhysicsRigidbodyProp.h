#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }

#define RPG_CLIENT_PHYSICSRIGIDBODYPROP_BAFPHGKPALG_OFFSET UNITYSDK_OFFSET(0xDB1A7A0)
#define RPG_CLIENT_PHYSICSRIGIDBODYPROP_BDEKJOPOMKO_OFFSET UNITYSDK_OFFSET(0xDB1AAB0)
#define RPG_CLIENT_PHYSICSRIGIDBODYPROP_CTOR_OFFSET UNITYSDK_OFFSET(0xDB1AC00)
#define RPG_CLIENT_PHYSICSRIGIDBODYPROP_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xDB1A480)
#define RPG_CLIENT_PHYSICSRIGIDBODYPROP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDB1A560)
#define RPG_CLIENT_PHYSICSRIGIDBODYPROP_PAUSEMOVE_OFFSET UNITYSDK_OFFSET(0xDB1A6D0)
#define RPG_CLIENT_PHYSICSRIGIDBODYPROP_RESUMEMOVE_OFFSET UNITYSDK_OFFSET(0xDB1A740)
#define RPG_CLIENT_PHYSICSRIGIDBODYPROP_START_OFFSET UNITYSDK_OFFSET(0xDB1A2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhysicsRigidbodyProp_TypeDefinitionIndex = 68643;

	class PhysicsRigidbodyProp : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single PushForceScale; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Collider* GBDKBLPAHEL; // 0x20
		::UnityEngine::Vector3 CBMGKKHPLEH; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::Rigidbody* HPAGDLDHKFC; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHYSICSRIGIDBODYPROP_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHYSICSRIGIDBODYPROP_START_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHYSICSRIGIDBODYPROP_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHYSICSRIGIDBODYPROP_ONDESTROY_OFFSET))(this);
		}

		::System::Void PauseMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHYSICSRIGIDBODYPROP_PAUSEMOVE_OFFSET))(this);
		}

		::System::Void ResumeMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHYSICSRIGIDBODYPROP_RESUMEMOVE_OFFSET))(this);
		}

		::System::Void BAFPHGKPALG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHYSICSRIGIDBODYPROP_BAFPHGKPALG_OFFSET))(this);
		}

		::System::Void BDEKJOPOMKO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHYSICSRIGIDBODYPROP_BDEKJOPOMKO_OFFSET))(this, a1);
		}

	};
}
