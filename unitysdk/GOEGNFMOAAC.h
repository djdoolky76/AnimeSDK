#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/CloudGame/MailBox/GameControl/Gyroscope.h"

#define GOEGNFMOAAC_APLLCIPBJFH_OFFSET UNITYSDK_OFFSET(0x15B2C1B0)
#define GOEGNFMOAAC_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2C0E0)
#define GOEGNFMOAAC_EJGKNIJIMLH_OFFSET UNITYSDK_OFFSET(0x15B2C1A0)
#define GOEGNFMOAAC_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x15B2C4B0)
#define GOEGNFMOAAC_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x15B2C450)
#define GOEGNFMOAAC_GET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x15B2C420)
#define GOEGNFMOAAC_GET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x15B2C3F0)
#define GOEGNFMOAAC_GET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x15B2C480)
#define GOEGNFMOAAC_KNPMIIHDPAN_OFFSET UNITYSDK_OFFSET(0x15B2C0F0)
#define GOEGNFMOAAC_SET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x15B2C4C0)
#define GOEGNFMOAAC_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x15B2C470)
#define GOEGNFMOAAC_SET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x15B2C440)
#define GOEGNFMOAAC_SET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x15B2C410)
#define GOEGNFMOAAC_SET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x15B2C4A0)

	class GOEGNFMOAAC : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 _RotationRate_k__BackingField; // 0x10
		::System::Boolean MHEAIOMEGCA; // 0x1C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 _UserAcceleration_k__BackingField; // 0x20
		::UnityEngine::Vector3 _Gravity_k__BackingField; // 0x2C
		::UnityEngine::Vector3 _RotationRateUnbiased_k__BackingField; // 0x38
		::UnityEngine::Quaternion _Attitude_k__BackingField; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEGNFMOAAC_CTOR_OFFSET))(this);
		}

		::System::Void KNPMIIHDPAN(::CloudGame::MailBox::GameControl::Gyroscope a1)
		{
			return ((::System::Void(*)(::PVOID, ::CloudGame::MailBox::GameControl::Gyroscope))((::PBYTE)hIl2Cpp + GOEGNFMOAAC_KNPMIIHDPAN_OFFSET))(this, a1);
		}

		::System::Boolean EJGKNIJIMLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEGNFMOAAC_EJGKNIJIMLH_OFFSET))(this);
		}

		::System::Void APLLCIPBJFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOEGNFMOAAC_APLLCIPBJFH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_RotationRate()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEGNFMOAAC_GET_ROTATIONRATE_OFFSET))(this);
		}

		::System::Void set_RotationRate(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GOEGNFMOAAC_SET_ROTATIONRATE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_RotationRateUnbiased()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEGNFMOAAC_GET_ROTATIONRATEUNBIASED_OFFSET))(this);
		}

		::System::Void set_RotationRateUnbiased(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GOEGNFMOAAC_SET_ROTATIONRATEUNBIASED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Gravity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEGNFMOAAC_GET_GRAVITY_OFFSET))(this);
		}

		::System::Void set_Gravity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GOEGNFMOAAC_SET_GRAVITY_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_UserAcceleration()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEGNFMOAAC_GET_USERACCELERATION_OFFSET))(this);
		}

		::System::Void set_UserAcceleration(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GOEGNFMOAAC_SET_USERACCELERATION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_Attitude()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEGNFMOAAC_GET_ATTITUDE_OFFSET))(this);
		}

		::System::Void set_Attitude(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GOEGNFMOAAC_SET_ATTITUDE_OFFSET))(this, a1);
		}

	};
