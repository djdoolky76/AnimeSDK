#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleCollider_JCAHFAFLPNH.h"
#include "unitysdk/MoleMole/Vehicle/VehicleCollider_KFKKOFHNPJJ.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_VEHICLE_VEHICLECOLLIDER_GETRADIUS_OFFSET UNITYSDK_OFFSET(0x18C3F140)
#define MOLEMOLE_VEHICLE_VEHICLECOLLIDER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x18C3E8A0)
#define MOLEMOLE_VEHICLE_VEHICLECOLLIDER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x18C3ED40)
#define MOLEMOLE_VEHICLE_VEHICLECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C3F320)

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleCollider_TypeDefinitionIndex = 53553;

	class VehicleCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::Vehicle::VehicleCollider_KFKKOFHNPJJ ColliderType; // 0x18
		::MoleMole::Vehicle::VehicleCollider_JCAHFAFLPNH MaterialType; // 0x1C
		::System::String* HitSound; // 0x20
		::System::Boolean OverrideMaxSpeed; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single MaxSpeed; // 0x2C
		::System::Single BaseSpeed; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLECOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLECOLLIDER_ONTRIGGERENTER_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLECOLLIDER_ONTRIGGEREXIT_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Single GetRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLECOLLIDER_GETRADIUS_OFFSET))(this);
		}
	};
}
