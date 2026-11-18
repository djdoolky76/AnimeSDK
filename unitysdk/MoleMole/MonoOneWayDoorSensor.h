#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOONEWAYDOORSENSOR_EJKKFLACDLH_OFFSET UNITYSDK_OFFSET(0x181032A0)
#define MOLEMOLE_MONOONEWAYDOORSENSOR_MAEAJKAMBAG_OFFSET UNITYSDK_OFFSET(0x181037E0)
#define MOLEMOLE_MONOONEWAYDOORSENSOR_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x18102E20)
#define MOLEMOLE_MONOONEWAYDOORSENSOR_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x181035B0)
#define MOLEMOLE_MONOONEWAYDOORSENSOR_SYNCSIZE_OFFSET UNITYSDK_OFFSET(0x18103650)
#define MOLEMOLE_MONOONEWAYDOORSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18103790)

namespace MoleMole
{
	inline static constexpr unsigned int MonoOneWayDoorSensor_TypeDefinitionIndex = 86599;

	class MonoOneWayDoorSensor : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single AOLJLCIIJHJ; // 0x0
		::UnityEngine::BoxCollider* stageCollider; // 0x18
		::UnityEngine::BoxCollider* sensorTrigger; // 0x20
		::System::Single sensingRange; // 0x28
		::System::Single forwardDeviation; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONEWAYDOORSENSOR__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONEWAYDOORSENSOR_ONTRIGGERENTER_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONEWAYDOORSENSOR_ONTRIGGEREXIT_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void SyncSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONEWAYDOORSENSOR_SYNCSIZE_OFFSET))(this);
		}

		::UnityEngine::Vector3 EJKKFLACDLH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONEWAYDOORSENSOR_EJKKFLACDLH_OFFSET))(this);
		}

		::System::Void MAEAJKAMBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONEWAYDOORSENSOR_MAEAJKAMBAG_OFFSET))(this);
		}
	};
}
