#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONODRONEAIRWALLCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0xE1E6080)
#define RPG_CLIENT_MONODRONEAIRWALLCONTROL_CCTOR_OFFSET UNITYSDK_OFFSET(0xE1E6940)
#define RPG_CLIENT_MONODRONEAIRWALLCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE1E6930)
#define RPG_CLIENT_MONODRONEAIRWALLCONTROL_ISCLOSETPOINT_OFFSET UNITYSDK_OFFSET(0xE1E6700)
#define RPG_CLIENT_MONODRONEAIRWALLCONTROL_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0xE1E6400)
#define RPG_CLIENT_MONODRONEAIRWALLCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xE1E6230)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDroneAirwallControl_TypeDefinitionIndex = 70531;

	class MonoDroneAirwallControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* TargetPos; // 0x18
		::UnityEngine::Renderer* TargetRenderer; // 0x20
		::UnityEngine::MeshCollider* AirwallCollider; // 0x28
		::UnityEngine::Vector3 center; // 0x30
		::System::Single avoidanceDistance; // 0x3C
		::System::Single avoidanceMarkerSize; // 0x40
		::System::Single avoidanceMarker; // 0x44
		::UnityEngine::Collider* BoundingCollider; // 0x48
		::System::Boolean IAOBBMAFCGK; // 0x50
		::System::Byte _padding0[0x7];
		::UnityEngine::MaterialPropertyBlock* KHFINMBNGBE; // 0x58
		static ::System::Int32* StaticGet_ADBBBDDPDGJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoDroneAirwallControl")->GetStaticField(0x15760);
		}

		static ::System::Int32* StaticGet_NPPGCBMJHFJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoDroneAirwallControl")->GetStaticField(0x15764);
		}

		static ::System::Int32* StaticGet_JKDBJLDGGLP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoDroneAirwallControl")->GetStaticField(0x15768);
		}

		static ::System::Int32* StaticGet_LMDKDABEFEH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoDroneAirwallControl")->GetStaticField(0x1576C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODRONEAIRWALLCONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODRONEAIRWALLCONTROL_CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODRONEAIRWALLCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODRONEAIRWALLCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateTarget(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODRONEAIRWALLCONTROL_UPDATETARGET_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsClosetPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODRONEAIRWALLCONTROL_ISCLOSETPOINT_OFFSET))(this, a1);
		}

	};
}
