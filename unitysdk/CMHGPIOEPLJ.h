#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CMHGPIOEPLJ_APLLCIPBJFH_OFFSET UNITYSDK_OFFSET(0xDA34820)
#define CMHGPIOEPLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDA34730)
#define CMHGPIOEPLJ_EJGKNIJIMLH_OFFSET UNITYSDK_OFFSET(0xDA34790)
#define CMHGPIOEPLJ_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0xDA34BF0)
#define CMHGPIOEPLJ_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0xDA34A50)
#define CMHGPIOEPLJ_GET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0xDA34980)
#define CMHGPIOEPLJ_GET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0xDA348B0)
#define CMHGPIOEPLJ_GET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0xDA34B20)

	class CMHGPIOEPLJ : public ::System::Object
	{
	public:
		// static const ::System::Object EMNAKHEHDPG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHGPIOEPLJ_CTOR_OFFSET))(this);
		}

		::System::Boolean EJGKNIJIMLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHGPIOEPLJ_EJGKNIJIMLH_OFFSET))(this);
		}

		::System::Void APLLCIPBJFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CMHGPIOEPLJ_APLLCIPBJFH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_RotationRate()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHGPIOEPLJ_GET_ROTATIONRATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RotationRateUnbiased()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHGPIOEPLJ_GET_ROTATIONRATEUNBIASED_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Gravity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHGPIOEPLJ_GET_GRAVITY_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_UserAcceleration()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHGPIOEPLJ_GET_USERACCELERATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Attitude()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHGPIOEPLJ_GET_ATTITUDE_OFFSET))(this);
		}

	};
