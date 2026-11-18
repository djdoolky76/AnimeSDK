#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class CameraChangeAttribute; }
namespace MoleMole::Config { class CameraChangeAttribute_FOV; }

#define MOLEMOLE_CONFIG_CAMERATARGETCONFIG_GETFOVPARAM_OFFSET UNITYSDK_OFFSET(0x1652CEB0)
#define MOLEMOLE_CONFIG_CAMERATARGETCONFIG_GETPOSITIONPARAM_OFFSET UNITYSDK_OFFSET(0x1652C900)
#define MOLEMOLE_CONFIG_CAMERATARGETCONFIG_GETROTATIONPARAM_OFFSET UNITYSDK_OFFSET(0x1652CBB0)
#define MOLEMOLE_CONFIG_CAMERATARGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1652CF90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraTargetConfig_TypeDefinitionIndex = 62418;

	class CameraTargetConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::CameraChangeAttribute* posConfig; // 0x10
		::MoleMole::Config::CameraChangeAttribute* rotateConfig; // 0x18
		::MoleMole::Config::CameraChangeAttribute_FOV* fovConfig; // 0x20
		::System::Single changeTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERATARGETCONFIG__CTOR_OFFSET))(this);
		}

		::System::Object* GetPositionParam(::UnityEngine::Vector3 now_position)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERATARGETCONFIG_GETPOSITIONPARAM_OFFSET))(this, now_position);
		}

		::System::Object* GetRotationParam(::UnityEngine::Quaternion now_rotation)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERATARGETCONFIG_GETROTATIONPARAM_OFFSET))(this, now_rotation);
		}

		::System::Object* GetFOVParam(::System::Single now_fov)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERATARGETCONFIG_GETFOVPARAM_OFFSET))(this, now_fov);
		}
	};
}
