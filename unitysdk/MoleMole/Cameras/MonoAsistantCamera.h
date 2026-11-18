#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_BUILDASSITANTCAMERA_OFFSET UNITYSDK_OFFSET(0x16510C20)
#define MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_GET_ISRENDERTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x16510B10)
#define MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_GET_TARGETRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x16510BC0)
#define MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_SETSTATUS_OFFSET UNITYSDK_OFFSET(0x16510B30)
#define MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_SET_ISRENDERTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x16510B20)
#define MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_TICKCAMERALOOKATANDFOLLOW_OFFSET UNITYSDK_OFFSET(0x16510D60)
#define MOLEMOLE_CAMERAS_MONOASISTANTCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x16510DA0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int MonoAsistantCamera_TypeDefinitionIndex = 70115;

	class MonoAsistantCamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* asistantCamera; // 0x18
		::UnityEngine::RenderTexture* targetRT; // 0x20
		::System::Boolean _GBCPPOHANGF_k__BackingField; // 0x28
		::System::Byte _padding0[0x7];
		::UnityEngine::Transform* followTran; // 0x30
		::UnityEngine::Transform* LookAtTran; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOASISTANTCAMERA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsRenderToTexture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_GET_ISRENDERTOTEXTURE_OFFSET))(this);
		}

		::System::Void set_IsRenderToTexture(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_SET_ISRENDERTOTEXTURE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void SetStatus(::System::Boolean GEGOALONGBI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_SETSTATUS_OFFSET))(this, GEGOALONGBI);
		}

		::UnityEngine::RenderTexture* get_targetRenderTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_GET_TARGETRENDERTEXTURE_OFFSET))(this);
		}

		::System::Void BuildAssitantCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_BUILDASSITANTCAMERA_OFFSET))(this);
		}

		::System::Void TickCameraLookAtAndFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_TICKCAMERALOOKATANDFOLLOW_OFFSET))(this);
		}
	};
}
