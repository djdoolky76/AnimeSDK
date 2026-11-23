#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F18A3FB6208252BC/FCB902384D348065.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/B8AC70DD96553B07.h"
#include "unitysdk/UnityEngine/Vector3.h"

class E8A78F48109658AD;
namespace TA::EnvironmentSystem { class ESPhase; }
namespace UnityEngine { class Transform; }

#define TA_ENVIRONMENTSYSTEM_ESVOLUME_COMPARETO_OFFSET UNITYSDK_OFFSET(0x28C75F0)
#define TA_ENVIRONMENTSYSTEM_ESVOLUME_CONTAINS_OFFSET UNITYSDK_OFFSET(0x28C7720)
#define TA_ENVIRONMENTSYSTEM_ESVOLUME_GET_PARENTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define TA_ENVIRONMENTSYSTEM_ESVOLUME_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define TA_ENVIRONMENTSYSTEM_ESVOLUME_GET_PRIORITYLEVEL_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define TA_ENVIRONMENTSYSTEM_ESVOLUME_GET_PRIORITYOFFSET_OFFSET UNITYSDK_OFFSET(0x17D6170)
#define TA_ENVIRONMENTSYSTEM_ESVOLUME_GET_USEOVERRIDEDTIME_OFFSET UNITYSDK_OFFSET(0x17D6270)
#define TA_ENVIRONMENTSYSTEM_ESVOLUME_REGISTER_OFFSET UNITYSDK_OFFSET(0x28C78E0)
#define TA_ENVIRONMENTSYSTEM_ESVOLUME_SET_PARENTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x184C910)
#define TA_ENVIRONMENTSYSTEM_ESVOLUME_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define TA_ENVIRONMENTSYSTEM_ESVOLUME_TICK_OFFSET UNITYSDK_OFFSET(0x28C7980)
#define TA_ENVIRONMENTSYSTEM_ESVOLUME_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x28C7AA0)
#define TA_ENVIRONMENTSYSTEM_ESVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x28C7B40)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ESVolume_TypeDefinitionIndex = 16343;

	class ESVolume : public ::System::Object
	{
	public:
		::TA::EnvironmentSystem::ESPhase* _phases; // 0x10
		::F18A3FB6208252BC::FCB902384D348065 _priorityLevel; // 0x18
		::System::Int32 _priorityOffset; // 0x1C
		::System::Boolean _useOverridedTime; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single OverridedTime24; // 0x24
		::System::Single LerpDuration; // 0x28
		::System::Byte _padding1[0x4];
		::E8A78F48109658AD* Bound; // 0x30
		::UnityEngine::B8AC70DD96553B07 LayerMask; // 0x38
		::System::Byte _padding2[0x4];
		::UnityEngine::Transform* _ParentTransform_k__BackingField; // 0x40

		::System::Void Register()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVOLUME_REGISTER_OFFSET))(this);
		}

		::System::Boolean Contains(::UnityEngine::Vector3 B29D1DDC06A667C8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVOLUME_CONTAINS_OFFSET))(this, B29D1DDC06A667C8);
		}

		::TA::EnvironmentSystem::ESPhase* get_Phase()
		{
			return ((::TA::EnvironmentSystem::ESPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVOLUME_GET_PHASE_OFFSET))(this);
		}

		::System::Int32 get_PriorityOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVOLUME_GET_PRIORITYOFFSET_OFFSET))(this);
		}

		::System::Void set_ParentTransform(::UnityEngine::Transform* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVOLUME_SET_PARENTTRANSFORM_OFFSET))(this, E937D4885DAA1AE8);
		}

		::F18A3FB6208252BC::FCB902384D348065 get_PriorityLevel()
		{
			return ((::F18A3FB6208252BC::FCB902384D348065(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVOLUME_GET_PRIORITYLEVEL_OFFSET))(this);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVOLUME_TICK_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ParentTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVOLUME_GET_PARENTTRANSFORM_OFFSET))(this);
		}

		::System::Int32 CompareTo(::TA::EnvironmentSystem::ESVolume* BEEE7A5A60941632)
		{
			return ((::System::Int32(*)(::PVOID, ::TA::EnvironmentSystem::ESVolume*))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVOLUME_COMPARETO_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::Void set_Phase(::TA::EnvironmentSystem::ESPhase* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::TA::EnvironmentSystem::ESPhase*))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVOLUME_SET_PHASE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVOLUME__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseOverridedTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVOLUME_GET_USEOVERRIDEDTIME_OFFSET))(this);
		}

		::System::Void UnRegister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVOLUME_UNREGISTER_OFFSET))(this);
		}
	};
}
