#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ICEMACHINEPLANESHAKE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1705B470)
#define RPG_CLIENT_ICEMACHINEPLANESHAKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1705B6F0)
#define RPG_CLIENT_ICEMACHINEPLANESHAKE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1705B500)
#define RPG_CLIENT_ICEMACHINEPLANESHAKE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1705B660)
#define RPG_CLIENT_ICEMACHINEPLANESHAKE_STARTSHAKE_OFFSET UNITYSDK_OFFSET(0x1705B2A0)
#define RPG_CLIENT_ICEMACHINEPLANESHAKE_STOPSHAKE_OFFSET UNITYSDK_OFFSET(0x1705B3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int IceMachinePlaneShake_TypeDefinitionIndex = 61599;

	class IceMachinePlaneShake : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* VisualRoot; // 0x18
		::System::Single Amplitude; // 0x20
		::System::Single Frequency; // 0x24
		::UnityEngine::Vector3 NDOCDOGOIID; // 0x28
		::System::Single KBDPMBDJIOF; // 0x34
		::System::Boolean FIECBDKDOMO; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICEMACHINEPLANESHAKE_CTOR_OFFSET))(this);
		}

		::System::Void StartShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICEMACHINEPLANESHAKE_STARTSHAKE_OFFSET))(this);
		}

		::System::Void StopShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICEMACHINEPLANESHAKE_STOPSHAKE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICEMACHINEPLANESHAKE_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICEMACHINEPLANESHAKE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICEMACHINEPLANESHAKE_ONDISABLE_OFFSET))(this);
		}

	};
}
