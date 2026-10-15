#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/BCENMJEPKMP.h"
namespace RPG::Client { class ConeCollider; }
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_RANGELIMITCOLLIDER_CTOR_OFFSET UNITYSDK_OFFSET(0xDE53770)
#define RPG_CLIENT_RANGELIMITCOLLIDER_INIT_OFFSET UNITYSDK_OFFSET(0xDE53350)
#define RPG_CLIENT_RANGELIMITCOLLIDER_SETUPRANGELIMITCOLLIDER_OFFSET UNITYSDK_OFFSET(0xDE534B0)

namespace RPG::Client
{
	class RangeLimitCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* MEMMLNBHMHA; // 0x18
		::UnityEngine::MeshCollider* MHINJGKOAOO; // 0x20
		::RPG::Client::ConeCollider* OBHOKMBIBAH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANGELIMITCOLLIDER_CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANGELIMITCOLLIDER_INIT_OFFSET))(this, a1);
		}

		::System::Void SetupRangeLimitCollider(::System::Boolean a1, ::BCENMJEPKMP a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::BCENMJEPKMP, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANGELIMITCOLLIDER_SETUPRANGELIMITCOLLIDER_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
