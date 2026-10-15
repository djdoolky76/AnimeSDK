#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Transform; }

#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_AHLOMFGHIAJ_OFFSET UNITYSDK_OFFSET(0x15DE3510)
#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x15DE3630)
#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_LEPJKADIFBM_OFFSET UNITYSDK_OFFSET(0x15DE3160)
#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_SETCAMERALOCK_OFFSET UNITYSDK_OFFSET(0x15DE35D0)
#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x15DE30B0)
#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15DE3100)

	class HipplenBuilderFirstPersonCamController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single mouseSensitivity; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* lookAtTarget; // 0x20
		::System::Single lookBackDelay; // 0x28
		::System::Byte _padding1[0x4];
		::Cinemachine::CinemachineVirtualCamera* virtualCamera; // 0x30
		::System::Single CENBEIAFOFL; // 0x38
		::System::Single CIIMDFEOFJI; // 0x3C
		::System::Single CEGFOKLLCGG; // 0x40
		::System::Boolean IEPJJLLGCEM; // 0x44
		::System::Byte _padding2[0x3];
		::System::Single transitionSpeed; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LEPJKADIFBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_LEPJKADIFBM_OFFSET))(this);
		}

		::System::Void AHLOMFGHIAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_AHLOMFGHIAJ_OFFSET))(this);
		}

		::System::Void SetCameraLock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_SETCAMERALOCK_OFFSET))(this, a1);
		}

	};
