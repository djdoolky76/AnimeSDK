#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ED06460)
#define SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED065B0)
#define SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1ED064D0)

namespace Spine::Unity
{
	class FollowLocationRigidbody : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* reference; // 0x18
		::UnityEngine::Rigidbody* ownRigidbody; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY_AWAKE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY_FIXEDUPDATE_OFFSET))(this);
		}

	};
}
