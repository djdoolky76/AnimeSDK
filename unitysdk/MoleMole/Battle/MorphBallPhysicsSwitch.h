#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_BATTLE_MORPHBALLPHYSICSSWITCH_DISABLEALL_OFFSET UNITYSDK_OFFSET(0xFFB4520)
#define MOLEMOLE_BATTLE_MORPHBALLPHYSICSSWITCH_DISABLEBALL_OFFSET UNITYSDK_OFFSET(0xFFB4350)
#define MOLEMOLE_BATTLE_MORPHBALLPHYSICSSWITCH_ENABLEBALL_OFFSET UNITYSDK_OFFSET(0xFFB4180)
#define MOLEMOLE_BATTLE_MORPHBALLPHYSICSSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0xFFB46F0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MorphBallPhysicsSwitch_TypeDefinitionIndex = 74542;

	class MorphBallPhysicsSwitch : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Collider*>* avatarColliders; // 0x10
		::Il2CppArray<::UnityEngine::GameObject*>* avatarGameObjects; // 0x18
		::Il2CppArray<::UnityEngine::Collider*>* ballColliders; // 0x20
		::Il2CppArray<::UnityEngine::GameObject*>* ballGameObjects; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MORPHBALLPHYSICSSWITCH__CTOR_OFFSET))(this);
		}

		::System::Void EnableBall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MORPHBALLPHYSICSSWITCH_ENABLEBALL_OFFSET))(this);
		}

		::System::Void DisableBall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MORPHBALLPHYSICSSWITCH_DISABLEBALL_OFFSET))(this);
		}

		::System::Void DisableAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MORPHBALLPHYSICSSWITCH_DISABLEALL_OFFSET))(this);
		}
	};
}
