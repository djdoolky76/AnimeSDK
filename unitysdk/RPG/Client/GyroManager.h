#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IMDHIEKHKNE;
namespace RPG::Client { class GyroManager; }

#define RPG_CLIENT_GYROMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA24B70)
#define RPG_CLIENT_GYROMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CA240F0)
#define RPG_CLIENT_GYROMANAGER_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x1CA249D0)
#define RPG_CLIENT_GYROMANAGER_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1CA247B0)
#define RPG_CLIENT_GYROMANAGER_GET_GYROENABLED_OFFSET UNITYSDK_OFFSET(0x1CA24460)
#define RPG_CLIENT_GYROMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CA24AE0)
#define RPG_CLIENT_GYROMANAGER_GET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x1CA246A0)
#define RPG_CLIENT_GYROMANAGER_GET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x1CA24590)
#define RPG_CLIENT_GYROMANAGER_GET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x1CA248C0)
#define RPG_CLIENT_GYROMANAGER_GET_WITHPERMISSION_OFFSET UNITYSDK_OFFSET(0x1CA24B10)
#define RPG_CLIENT_GYROMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1CA24000)
#define RPG_CLIENT_GYROMANAGER_REFRESHCONFIG_OFFSET UNITYSDK_OFFSET(0x1CA24140)
#define RPG_CLIENT_GYROMANAGER_RELEASEGYRO_OFFSET UNITYSDK_OFFSET(0x1CA243F0)
#define RPG_CLIENT_GYROMANAGER_SET_WITHPERMISSION_OFFSET UNITYSDK_OFFSET(0x1CA24B20)
#define RPG_CLIENT_GYROMANAGER_USEGYRO_OFFSET UNITYSDK_OFFSET(0x1CA24380)

namespace RPG::Client
{
	inline static constexpr unsigned int GyroManager_TypeDefinitionIndex = 70244;

	class GyroManager : public ::System::Object
	{
	public:
		::IMDHIEKHKNE* _GyroProvider; // 0x10
		::System::Int32 _RefCount; // 0x18
		::System::Boolean _WithPermission; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void UseGyro(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_USEGYRO_OFFSET))(this, a1);
		}

		::System::Void ReleaseGyro()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_RELEASEGYRO_OFFSET))(this);
		}

		::System::Boolean get_GyroEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_GET_GYROENABLED_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RotationRate()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_GET_ROTATIONRATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RotationRateUnbiased()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_GET_ROTATIONRATEUNBIASED_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Gravity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_GET_GRAVITY_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_UserAcceleration()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_GET_USERACCELERATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Attitude()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_GET_ATTITUDE_OFFSET))(this);
		}

		static ::RPG::Client::GyroManager* get_Instance()
		{
			return ((::RPG::Client::GyroManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean get_WithPermission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_GET_WITHPERMISSION_OFFSET))(this);
		}

		::System::Void set_WithPermission(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_SET_WITHPERMISSION_OFFSET))(this, a1);
		}

		::System::Void RefreshConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GYROMANAGER_REFRESHCONFIG_OFFSET))(this);
		}

	};
}
