#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RayfireRigid; }
namespace UnityEngine { class Rigidbody; }

#define RAYFIRE_RAYFIREBOMB_PROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireBomb_Projectile_TypeDefinitionIndex = 15439;

	class RayfireBomb_Projectile : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 positionPivot; // 0x10
		::UnityEngine::Vector3 positionClosest; // 0x1C
		::System::Single fade; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::Rigidbody* rb; // 0x30
		::RayFire::RayfireRigid* scrRigid; // 0x38
		::UnityEngine::Quaternion rotation; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREBOMB_PROJECTILE__CTOR_OFFSET))(this);
		}
	};
}
