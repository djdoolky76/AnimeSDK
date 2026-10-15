#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPGTools::Timeline { class VirtualCameraSampleAnimationConfig; }
namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_AMCINKGGPHP_OFFSET UNITYSDK_OFFSET(0xE95BB00)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE95BF30)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE95B500)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_DIRECTORGO_OFFSET UNITYSDK_OFFSET(0xE95B590)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0xE95B570)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0xE95B550)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_OFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0xE95B520)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_JBCMHLFABEM_OFFSET UNITYSDK_OFFSET(0xE95BEC0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_JMGOJDGJBPL_OFFSET UNITYSDK_OFFSET(0xE95B8C0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE95BD30)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE95BE10)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE95B5B0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE95B510)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_DIRECTORGO_OFFSET UNITYSDK_OFFSET(0xE95B5A0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0xE95B580)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0xE95B560)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_OFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0xE95B540)

namespace RPGTools::Timeline
{
	class VirtualCameraSampleAnimationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::VirtualCameraSampleAnimationConfig* _Config_k__BackingField; // 0x10
		::UnityEngine::Vector3 _OffsetPosition_k__BackingField; // 0x18
		::System::Single _NearClipPlane_k__BackingField; // 0x24
		::System::Single _FarClipPlane_k__BackingField; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* _DirectorGo_k__BackingField; // 0x30
		::Cinemachine::CinemachineVirtualCamera* _TargetVCam; // 0x38
		::UnityEngine::Camera* _SampleCam; // 0x40
		::System::Boolean _FirstFrame; // 0x48
		// static const ::System::String* _SAMPLE_CAM_NAME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::VirtualCameraSampleAnimationConfig* get_Config()
		{
			return ((::RPGTools::Timeline::VirtualCameraSampleAnimationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPGTools::Timeline::VirtualCameraSampleAnimationConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VirtualCameraSampleAnimationConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_CONFIG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_OffsetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_OFFSETPOSITION_OFFSET))(this);
		}

		::System::Void set_OffsetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_OFFSETPOSITION_OFFSET))(this, a1);
		}

		::System::Single get_NearClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_NEARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_NearClipPlane(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_NEARCLIPPLANE_OFFSET))(this, a1);
		}

		::System::Single get_FarClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_FARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_FarClipPlane(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_FARCLIPPLANE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_DirectorGo()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_DIRECTORGO_OFFSET))(this);
		}

		::System::Void set_DirectorGo(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_DIRECTORGO_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void JMGOJDGJBPL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_JMGOJDGJBPL_OFFSET))(this, a1);
		}

		::System::Void AMCINKGGPHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_AMCINKGGPHP_OFFSET))(this);
		}

		::System::Void JBCMHLFABEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_JBCMHLFABEM_OFFSET))(this);
		}

	};
}
