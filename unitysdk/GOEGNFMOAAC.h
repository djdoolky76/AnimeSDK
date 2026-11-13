#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/CloudGame/MailBox/GameControl/Gyroscope.h"

#define GOEGNFMOAAC_APLLCIPBJFH_OFFSET UNITYSDK_OFFSET(0x187B0C40)
#define GOEGNFMOAAC_CTOR_OFFSET UNITYSDK_OFFSET(0x187B0B70)
#define GOEGNFMOAAC_EJGKNIJIMLH_OFFSET UNITYSDK_OFFSET(0x187B0C30)
#define GOEGNFMOAAC_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x187B0F40)
#define GOEGNFMOAAC_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x187B0EE0)
#define GOEGNFMOAAC_GET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x187B0EB0)
#define GOEGNFMOAAC_GET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x187B0E80)
#define GOEGNFMOAAC_GET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x187B0F10)
#define GOEGNFMOAAC_KNPMIIHDPAN_OFFSET UNITYSDK_OFFSET(0x187B0B80)
#define GOEGNFMOAAC_SET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x187B0F50)
#define GOEGNFMOAAC_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x187B0F00)
#define GOEGNFMOAAC_SET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x187B0ED0)
#define GOEGNFMOAAC_SET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x187B0EA0)
#define GOEGNFMOAAC_SET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x187B0F30)

inline static constexpr unsigned int GOEGNFMOAAC_TypeDefinitionIndex = 70242;

	class GOEGNFMOAAC : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion _Attitude_k__BackingField; // 0x10
		::System::Boolean MHEAIOMEGCA; // 0x20
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 _RotationRateUnbiased_k__BackingField; // 0x24
		::UnityEngine::Vector3 _Gravity_k__BackingField; // 0x30
		::UnityEngine::Vector3 _RotationRate_k__BackingField; // 0x3C
		::UnityEngine::Vector3 _UserAcceleration_k__BackingField; // 0x48
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
