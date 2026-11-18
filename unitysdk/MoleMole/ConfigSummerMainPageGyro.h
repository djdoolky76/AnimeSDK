#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIGSUMMERMAINPAGEGYRO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7772A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigSummerMainPageGyro_TypeDefinitionIndex = 39509;

	class ConfigSummerMainPageGyro : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 GyroRange; // 0x14
		::UnityEngine::Vector3 UIAdjustRange; // 0x1C
		::System::Single UIAdjustOriginPointDistance; // 0x28
		::UnityEngine::Vector3 CameraAdjustRange; // 0x2C
		::System::Single PlaneDistance; // 0x38
		::System::Boolean EnableDebugTrans; // 0x3C
		::System::Boolean DebugTrans2Gyro; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSUMMERMAINPAGEGYRO__CTOR_OFFSET))(this);
		}
	};
}
