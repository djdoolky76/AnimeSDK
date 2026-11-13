#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TrackCameraRatioMapMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CameraLookatKeyFrame;
class TrackCameraBlendConfig;
namespace Cinemachine { class CinemachineDollyCart; }
namespace Cinemachine { class CinemachinePathBase; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define TRACKCAMERACONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x17140780)
#define TRACKCAMERACONTROLLER_BCKPMKPMEHN_OFFSET UNITYSDK_OFFSET(0x17140E60)
#define TRACKCAMERACONTROLLER_COHKFHFMGHL_OFFSET UNITYSDK_OFFSET(0x171418B0)
#define TRACKCAMERACONTROLLER_CONVERTRATIOMAPMODE_OFFSET UNITYSDK_OFFSET(0x17141570)
#define TRACKCAMERACONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x17142180)
#define TRACKCAMERACONTROLLER_GETTRACKINDEXBYRATIO_OFFSET UNITYSDK_OFFSET(0x171419B0)
#define TRACKCAMERACONTROLLER_GETTRACKRATIOBYINDEX_OFFSET UNITYSDK_OFFSET(0x17141A80)
#define TRACKCAMERACONTROLLER_INITVC_OFFSET UNITYSDK_OFFSET(0x17140A00)
#define TRACKCAMERACONTROLLER_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x17140BA0)
#define TRACKCAMERACONTROLLER_MAPPATHRATIOTOTRACKRATIO_OFFSET UNITYSDK_OFFSET(0x171411A0)
#define TRACKCAMERACONTROLLER_MAPRATIOSTATIC_1_OFFSET UNITYSDK_OFFSET(0x17141280)
#define TRACKCAMERACONTROLLER_MAPRATIOSTATIC_OFFSET UNITYSDK_OFFSET(0x17142090)
#define TRACKCAMERACONTROLLER_MAPRATIO_OFFSET UNITYSDK_OFFSET(0x17141C90)
#define TRACKCAMERACONTROLLER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17142140)
#define TRACKCAMERACONTROLLER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17142100)
#define TRACKCAMERACONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17140B40)

inline static constexpr unsigned int TrackCameraController_TypeDefinitionIndex = 48309;

	class TrackCameraController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineDollyCart* dollyCart; // 0x18
		::Cinemachine::CinemachineVirtualCamera* VC; // 0x20
		::System::Collections::Generic::List_1<::CameraLookatKeyFrame*>* keyFrames; // 0x28
		::System::Boolean UseNonTransitionMappingCartPosition; // 0x30
		::System::Boolean Modify3CCameraRotationBlendOut; // 0x31
		::System::Boolean IsCutIn; // 0x32
		::System::Boolean IsCutOut; // 0x33
		::System::Byte _padding0[0x4];
		::TrackCameraBlendConfig* BlendIn; // 0x38
		::TrackCameraBlendConfig* BlendOut; // 0x40
		::TrackCameraRatioMapMode RatioMapMode; // 0x48
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* RatioMap; // 0x50
		::System::Single TrackPlayDuration; // 0x58
		::System::Byte _padding2[0x4];
		::UnityEngine::AnimationCurve* TrackPlayCurve; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void InitVC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_INITVC_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void ManualUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_MANUALUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 BCKPMKPMEHN(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_BCKPMKPMEHN_OFFSET))(this, a1, a2);
		}

		::System::Single MapPathRatioToTrackRatio(::System::Single a1, ::System::Func_2<::System::Single, ::System::Single>* a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Func_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_MAPPATHRATIOTOTRACKRATIO_OFFSET))(this, a1, a2);
		}

		::System::Boolean ConvertRatioMapMode(::TrackCameraRatioMapMode a1, ::TrackCameraRatioMapMode a2, ::System::Func_2<::System::Single, ::System::Single>* a3, ::System::Func_2<::System::Single, ::System::Single>* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::TrackCameraRatioMapMode, ::TrackCameraRatioMapMode, ::System::Func_2<::System::Single, ::System::Single>*, ::System::Func_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_CONVERTRATIOMAPMODE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single GetTrackRatioByIndex(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_GETTRACKRATIOBYINDEX_OFFSET))(this, a1);
		}

		::System::Single GetTrackIndexByRatio(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_GETTRACKINDEXBYRATIO_OFFSET))(this, a1);
		}

		::System::Boolean COHKFHFMGHL(::Cinemachine::CinemachinePathBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachinePathBase*))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_COHKFHFMGHL_OFFSET))(this, a1);
		}

		static ::System::Single MapRatio(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_MAPRATIO_OFFSET))(a1, a2, a3);
		}

		static ::System::Single MapRatioStatic(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_MAPRATIOSTATIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single MapRatioStatic_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Single a2, ::System::Boolean a3, ::TrackCameraRatioMapMode a4, ::System::Func_2<::System::Single, ::System::Single>* a5, ::System::Func_2<::System::Single, ::System::Single>* a6)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean, ::TrackCameraRatioMapMode, ::System::Func_2<::System::Single, ::System::Single>*, ::System::Func_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_MAPRATIOSTATIC_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

	};
