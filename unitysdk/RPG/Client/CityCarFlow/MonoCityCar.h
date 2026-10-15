#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace IRIClusterBuilder { class IRI2VolumeTemplate; }
namespace RPG::Client::CityCarFlow { class MonoCityCarControl; }
namespace System { class Object; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCAR_CTOR_OFFSET UNITYSDK_OFFSET(0xCB718B0)

namespace RPG::Client::CityCarFlow
{
	class MonoCityCar : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::CityCarFlow::MonoCityCarControl* Control; // 0x18
		::IRIClusterBuilder::IRI2VolumeTemplate* Template; // 0x20
		::System::Single MaxSpeed; // 0x28
		::UnityEngine::Vector2 MaxSpeedRatioRange; // 0x2C
		::System::Single Acceleration; // 0x34
		::UnityEngine::Vector2 AccelerationRatioRange; // 0x38
		::System::Single Deceleration; // 0x40
		::System::Single EmergencyBrake; // 0x44
		::System::Boolean IsPoliceCar; // 0x48
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::Object*>* BlockAudioEventConfigs; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCAR_CTOR_OFFSET))(this);
		}

	};
}
