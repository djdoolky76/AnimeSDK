#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineCore_UpdateFilter.h"
#include "unitysdk/Cinemachine/UpdateTracker_UpdateClock.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineBrain_BrainEvent; }
namespace Cinemachine { class CinemachineCore; }
namespace Cinemachine { class CinemachineCore_AxisInputDelegate; }
namespace Cinemachine { class CinemachineCore_GetBlendOverrideDelegate; }
namespace Cinemachine { class CinemachineMixingCamera; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINECORE_ADDACTIVEBRAIN_OFFSET UNITYSDK_OFFSET(0x174AFF90)
#define CINEMACHINE_CINEMACHINECORE_ADDACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x174C24B0)
#define CINEMACHINE_CINEMACHINECORE_CAMERADESTROYED_OFFSET UNITYSDK_OFFSET(0x174C25A0)
#define CINEMACHINE_CINEMACHINECORE_CAMERADISABLED_OFFSET UNITYSDK_OFFSET(0x174C29C0)
#define CINEMACHINE_CINEMACHINECORE_CAMERAENABLED_OFFSET UNITYSDK_OFFSET(0x174C2660)
#define CINEMACHINE_CINEMACHINECORE_CCTOR_OFFSET UNITYSDK_OFFSET(0x174C3770)
#define CINEMACHINE_CINEMACHINECORE_CTOR_OFFSET UNITYSDK_OFFSET(0x174C23C0)
#define CINEMACHINE_CINEMACHINECORE_DELAYMIXINGVCAMUPDATEORDER_OFFSET UNITYSDK_OFFSET(0x174C2A90)
#define CINEMACHINE_CINEMACHINECORE_FINDPOTENTIALTARGETBRAIN_OFFSET UNITYSDK_OFFSET(0x174C3550)
#define CINEMACHINE_CINEMACHINECORE_GENERATECAMERAACTIVATIONEVENT_OFFSET UNITYSDK_OFFSET(0x174AE3C0)
#define CINEMACHINE_CINEMACHINECORE_GENERATECAMERACUTEVENT_OFFSET UNITYSDK_OFFSET(0x174AE490)
#define CINEMACHINE_CINEMACHINECORE_GETACTIVEBRAIN_OFFSET UNITYSDK_OFFSET(0x174C2460)
#define CINEMACHINE_CINEMACHINECORE_GETUPDATETARGET_OFFSET UNITYSDK_OFFSET(0x174C32B0)
#define CINEMACHINE_CINEMACHINECORE_GETVCAMUPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x174C34C0)
#define CINEMACHINE_CINEMACHINECORE_GETVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x174B3DA0)
#define CINEMACHINE_CINEMACHINECORE_GET_BRAINCOUNT_OFFSET UNITYSDK_OFFSET(0x174C2440)
#define CINEMACHINE_CINEMACHINECORE_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x174A3A60)
#define CINEMACHINE_CINEMACHINECORE_GET_CURRENTUPDATEFILTER_OFFSET UNITYSDK_OFFSET(0x174C34A0)
#define CINEMACHINE_CINEMACHINECORE_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x174AF830)
#define CINEMACHINE_CINEMACHINECORE_GET_FIXEDFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x174C2DB0)
#define CINEMACHINE_CINEMACHINECORE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x174AE2A0)
#define CINEMACHINE_CINEMACHINECORE_GET_VIRTUALCAMERACOUNT_OFFSET UNITYSDK_OFFSET(0x174B3D80)
#define CINEMACHINE_CINEMACHINECORE_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x174C3400)
#define CINEMACHINE_CINEMACHINECORE_ISLIVE_OFFSET UNITYSDK_OFFSET(0x174AF780)
#define CINEMACHINE_CINEMACHINECORE_REMOVEACTIVEBRAIN_OFFSET UNITYSDK_OFFSET(0x174B0320)
#define CINEMACHINE_CINEMACHINECORE_REMOVEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x174C2570)
#define CINEMACHINE_CINEMACHINECORE_REMOVEUPDATESTATUSCACHE_OFFSET UNITYSDK_OFFSET(0x174B28A0)
#define CINEMACHINE_CINEMACHINECORE_SET_CURRENTUPDATEFILTER_OFFSET UNITYSDK_OFFSET(0x174C34B0)
#define CINEMACHINE_CINEMACHINECORE_SET_FIXEDFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x174C2DE0)
#define CINEMACHINE_CINEMACHINECORE_UPDATEALLACTIVEVIRTUALCAMERAS_OFFSET UNITYSDK_OFFSET(0x174B2940)
#define CINEMACHINE_CINEMACHINECORE_UPDATEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x174C2E10)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCore_TypeDefinitionIndex = 40739;

	class CinemachineCore : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Cinemachine::CinemachineBrain*>* mActiveBrains; // 0x10
		::System::Collections::Generic::Dictionary_2<::Cinemachine::CinemachineVirtualCameraBase*, ::System::Object*>* mUpdateStatus; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>*>* mAllCameras; // 0x20
		::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>* mActiveCameras; // 0x28
		::Cinemachine::CinemachineVirtualCameraBase* mRoundRobinVcamLastFrame; // 0x30
		::Cinemachine::CinemachineCore_UpdateFilter _CurrentUpdateFilter_k__BackingField; // 0x38
		static ::Cinemachine::CinemachineCore_AxisInputDelegate** StaticGet_GetInputAxis()
		{
			return (::Cinemachine::CinemachineCore_AxisInputDelegate**)UnitySDK::FromName("Cinemachine", "CinemachineCore")->GetStaticField(0xAA0);
		}

		static ::Cinemachine::CinemachineBrain_BrainEvent** StaticGet_CameraCutEvent()
		{
			return (::Cinemachine::CinemachineBrain_BrainEvent**)UnitySDK::FromName("Cinemachine", "CinemachineCore")->GetStaticField(0xAA8);
		}

		static ::System::String** StaticGet_kVersionString()
		{
			return (::System::String**)UnitySDK::FromName("Cinemachine", "CinemachineCore")->GetStaticField(0xAB0);
		}

		static ::Cinemachine::CinemachineCore** StaticGet_sInstance()
		{
			return (::Cinemachine::CinemachineCore**)UnitySDK::FromName("Cinemachine", "CinemachineCore")->GetStaticField(0xAB8);
		}

		static ::Cinemachine::CinemachineCore_GetBlendOverrideDelegate** StaticGet_GetBlendOverride()
		{
			return (::Cinemachine::CinemachineCore_GetBlendOverrideDelegate**)UnitySDK::FromName("Cinemachine", "CinemachineCore")->GetStaticField(0xAC0);
		}

		static ::Cinemachine::CinemachineBrain_BrainEvent** StaticGet_CameraUpdatedEvent()
		{
			return (::Cinemachine::CinemachineBrain_BrainEvent**)UnitySDK::FromName("Cinemachine", "CinemachineCore")->GetStaticField(0xAC8);
		}

		static ::System::Int32* StaticGet__FixedFrameCount_k__BackingField()
		{
			return (::System::Int32*)UnitySDK::FromName("Cinemachine", "CinemachineCore")->GetStaticField(0x590);
		}

		static ::System::Boolean* StaticGet_DontSkipWhenCameraCullingMaskAll()
		{
			return (::System::Boolean*)UnitySDK::FromName("Cinemachine", "CinemachineCore")->GetStaticField(0x594);
		}

		static ::System::Boolean* StaticGet_sShowHiddenObjects()
		{
			return (::System::Boolean*)UnitySDK::FromName("Cinemachine", "CinemachineCore")->GetStaticField(0x595);
		}

		static ::System::Single* StaticGet_CurrentTimeOverride()
		{
			return (::System::Single*)UnitySDK::FromName("Cinemachine", "CinemachineCore")->GetStaticField(0x598);
		}

		static ::System::Single* StaticGet_mLastUpdateTime()
		{
			return (::System::Single*)UnitySDK::FromName("Cinemachine", "CinemachineCore")->GetStaticField(0x59C);
		}

		static ::System::Single* StaticGet_UniformDeltaTimeOverride()
		{
			return (::System::Single*)UnitySDK::FromName("Cinemachine", "CinemachineCore")->GetStaticField(0x5A0);
		}

		static ::System::Int32* StaticGet_kStreamingVersion()
		{
			return (::System::Int32*)UnitySDK::FromName("Cinemachine", "CinemachineCore")->GetStaticField(0x5A4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_CCTOR_OFFSET))();
		}

		static ::Cinemachine::CinemachineCore* get_Instance()
		{
			return ((::Cinemachine::CinemachineCore*(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_DELTATIME_OFFSET))();
		}

		static ::System::Single get_CurrentTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_CURRENTTIME_OFFSET))();
		}

		::System::Int32 get_BrainCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_BRAINCOUNT_OFFSET))(this);
		}

		::Cinemachine::CinemachineBrain* GetActiveBrain(::System::Int32 a1)
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETACTIVEBRAIN_OFFSET))(this, a1);
		}

		::System::Void AddActiveBrain(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_ADDACTIVEBRAIN_OFFSET))(this, a1);
		}

		::System::Void RemoveActiveBrain(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_REMOVEACTIVEBRAIN_OFFSET))(this, a1);
		}

		::System::Int32 get_VirtualCameraCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_VIRTUALCAMERACOUNT_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCameraBase* GetVirtualCamera(::System::Int32 a1)
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETVIRTUALCAMERA_OFFSET))(this, a1);
		}

		::System::Void AddActiveCamera(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_ADDACTIVECAMERA_OFFSET))(this, a1);
		}

		::System::Void RemoveActiveCamera(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_REMOVEACTIVECAMERA_OFFSET))(this, a1);
		}

		::System::Void CameraDestroyed(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_CAMERADESTROYED_OFFSET))(this, a1);
		}

		::System::Void CameraEnabled(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_CAMERAENABLED_OFFSET))(this, a1);
		}

		::System::Void CameraDisabled(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_CAMERADISABLED_OFFSET))(this, a1);
		}

		::System::Void DelayMixingVCamUpdateOrder(::Cinemachine::CinemachineMixingCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineMixingCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_DELAYMIXINGVCAMUPDATEORDER_OFFSET))(this, a1);
		}

		static ::System::Int32 get_FixedFrameCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_FIXEDFRAMECOUNT_OFFSET))();
		}

		static ::System::Void set_FixedFrameCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_SET_FIXEDFRAMECOUNT_OFFSET))(a1);
		}

		::System::Void UpdateAllActiveVirtualCameras(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_UPDATEALLACTIVEVIRTUALCAMERAS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateVirtualCamera(::Cinemachine::CinemachineVirtualCameraBase* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_UPDATEVIRTUALCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveUpdateStatusCache(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_REMOVEUPDATESTATUSCACHE_OFFSET))(this, a1);
		}

		static ::System::Void InitializeModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_INITIALIZEMODULE_OFFSET))();
		}

		::Cinemachine::CinemachineCore_UpdateFilter get_CurrentUpdateFilter()
		{
			return ((::Cinemachine::CinemachineCore_UpdateFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_CURRENTUPDATEFILTER_OFFSET))(this);
		}

		::System::Void set_CurrentUpdateFilter(::Cinemachine::CinemachineCore_UpdateFilter a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineCore_UpdateFilter))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_SET_CURRENTUPDATEFILTER_OFFSET))(this, a1);
		}

		static ::UnityEngine::Transform* GetUpdateTarget(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::UnityEngine::Transform*(*)(::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETUPDATETARGET_OFFSET))(a1);
		}

		::Cinemachine::UpdateTracker_UpdateClock GetVcamUpdateStatus(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::Cinemachine::UpdateTracker_UpdateClock(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETVCAMUPDATESTATUS_OFFSET))(this, a1);
		}

		::System::Boolean IsLive(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_ISLIVE_OFFSET))(this, a1);
		}

		::System::Void GenerateCameraActivationEvent(::Cinemachine::ICinemachineCamera* a1, ::Cinemachine::ICinemachineCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GENERATECAMERAACTIVATIONEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void GenerateCameraCutEvent(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GENERATECAMERACUTEVENT_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineBrain* FindPotentialTargetBrain(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_FINDPOTENTIALTARGETBRAIN_OFFSET))(this, a1);
		}

	};
}
