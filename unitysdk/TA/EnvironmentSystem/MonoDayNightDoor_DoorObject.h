#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_DOOROBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x28C62F0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int MonoDayNightDoor_DoorObject_TypeDefinitionIndex = 16302;

	class MonoDayNightDoor_DoorObject : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* obj; // 0x10
		::System::Boolean useCollider; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::Mesh* customMesh; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_DOOROBJECT__CTOR_OFFSET))(this);
		}
	};
}
