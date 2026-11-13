#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace Cinemachine { class CinemachineCRPVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER_ACTIVEVCAMERA_1_OFFSET UNITYSDK_OFFSET(0x1400A7A0)
#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER_ACTIVEVCAMERA_OFFSET UNITYSDK_OFFSET(0x1400A680)
#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1400ABA0)
#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1400A480)
#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1400A820)
#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x1400AAA0)
#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER_SETTARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x1400A5A0)
#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1400A430)
#define RPG_CLIENT_MONOCRPVCAMERACONTROLLER__SYNCTOCRPVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1400A920)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCRPVCameraController_TypeDefinitionIndex = 70913;

	class MonoCRPVCameraController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineCRPVirtualCamera* _CRPVCamera; // 0x18
		::UnityEngine::Rendering::CRPVirtualCamera* _TargetCamera; // 0x20
		::System::Boolean _Inited; // 0x28
		::System::Byte _padding0[0x7];
		::Cinemachine::CinemachineVirtualCamera* _VCamera; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER_START_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void SetTargetCamera(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER_SETTARGETCAMERA_OFFSET))(this, a1);
		}

		::System::Void ActiveVCamera(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER_ACTIVEVCAMERA_OFFSET))(this, a1);
		}

		::System::Void ActiveVCamera_1(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER_ACTIVEVCAMERA_1_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void ManualUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER_MANUALUPDATE_OFFSET))(this, a1);
		}

		::System::Void _SyncToCRPVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCRPVCAMERACONTROLLER__SYNCTOCRPVIRTUALCAMERA_OFFSET))(this);
		}

	};
}
