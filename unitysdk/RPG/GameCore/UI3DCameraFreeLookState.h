#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UI3DCameraStateBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace Cinemachine { class CinemachineFreeLook; }
namespace RPG::Client { class InputDataController; }
namespace RPG::Client { class UI3DFreeLookController; }
namespace RPG::GameCore { class UI3DCameraFreeLookSetting; }
namespace RPG::GameCore { class UI3DVirtualCameraComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA08E90)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_ENABLECAMERAZOOM_OFFSET UNITYSDK_OFFSET(0x1AA08370)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GETAXISVALUEFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1AA08CE0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GETAXISVALUE_OFFSET UNITYSDK_OFFSET(0x1AA08B40)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GET__FREELOOKCAMERA_OFFSET UNITYSDK_OFFSET(0x1AA084B0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_INITSETTING_OFFSET UNITYSDK_OFFSET(0x1AA08050)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_INIT_OFFSET UNITYSDK_OFFSET(0x1AA07730)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1AA06A70)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_RESETZOOM_OFFSET UNITYSDK_OFFSET(0x1AA07E00)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x1AA07900)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETAXISVALUETOCAMERA_OFFSET UNITYSDK_OFFSET(0x1AA08DB0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETFOLLOWPOINTNAME_OFFSET UNITYSDK_OFFSET(0x1AA08320)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETFOLLOW_OFFSET UNITYSDK_OFFSET(0x1AA07990)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETLOOKATPOINTNAME_OFFSET UNITYSDK_OFFSET(0x1AA082D0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETLOOKAT_OFFSET UNITYSDK_OFFSET(0x1AA07940)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CALCULATEZOOMRATIO_OFFSET UNITYSDK_OFFSET(0x1AA06C20)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CREATEDUMMYLOOKATPOINT_OFFSET UNITYSDK_OFFSET(0x1AA07B30)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CREATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AA083C0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__DEFAULTZOOM_OFFSET UNITYSDK_OFFSET(0x1AA07D60)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETLERPINTERP_OFFSET UNITYSDK_OFFSET(0x1AA08A30)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETORBITSHEIGHT_OFFSET UNITYSDK_OFFSET(0x1AA08910)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETYAXISCLAMPVALUE_OFFSET UNITYSDK_OFFSET(0x1AA089A0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETZOOMINTERP_OFFSET UNITYSDK_OFFSET(0x1AA08610)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__LERPDURATION_OFFSET UNITYSDK_OFFSET(0x1AA088B0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__NEEDLERPPOSITION_OFFSET UNITYSDK_OFFSET(0x1AA087F0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONACTIVE_OFFSET UNITYSDK_OFFSET(0x1AA079E0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1AA07DC0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONSETTINGCHANGED_OFFSET UNITYSDK_OFFSET(0x1AA08230)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__RESETCAMERAAXIS_OFFSET UNITYSDK_OFFSET(0x1AA07CD0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__RESETLOOKATPOSITION_OFFSET UNITYSDK_OFFSET(0x1AA07E90)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__SETINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x1AA06B20)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATECAMERAROT_OFFSET UNITYSDK_OFFSET(0x1AA07670)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATECAMERAZOOM_OFFSET UNITYSDK_OFFSET(0x1AA071E0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATELOOKATANDFOLLOW_OFFSET UNITYSDK_OFFSET(0x1AA06FC0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMMAX_OFFSET UNITYSDK_OFFSET(0x1AA07FF0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMMIN_OFFSET UNITYSDK_OFFSET(0x1AA085B0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMSPEED_OFFSET UNITYSDK_OFFSET(0x1AA08550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DCameraFreeLookState_TypeDefinitionIndex = 58766;

	class UI3DCameraFreeLookState : public ::RPG::GameCore::UI3DCameraStateBase
	{
	public:
		::UnityEngine::Transform* _DummyLookAtTrans; // 0x38
		::System::String* _LookAtPointName; // 0x40
		::RPG::GameCore::UI3DCameraFreeLookSetting* _Setting; // 0x48
		::RPG::Client::UI3DFreeLookController* _FreeLookController; // 0x50
		::RPG::Client::InputDataController* _InputController; // 0x58
		::UnityEngine::Transform* _DummyFollowTrans; // 0x60
		::System::String* _FollowPointName; // 0x68
		::System::Single _SettingChangedTime; // 0x70
		::UnityEngine::Vector3 _PerviousLookAtPosition; // 0x74
		::System::Boolean _EnableCameraZoom; // 0x80
		::System::Byte _padding0[0x3];
		::System::Single _ZoomSmoothVelocity; // 0x84
		::System::Single _LastDisSmooth; // 0x88
		::System::Single _CurrentZoom; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::UI3DVirtualCameraComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DVirtualCameraComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_INIT_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_RESET_OFFSET))(this);
		}

		::System::Void SetLookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETLOOKAT_OFFSET))(this, a1);
		}

		::System::Void SetFollow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETFOLLOW_OFFSET))(this, a1);
		}

		::System::Void _OnActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONACTIVE_OFFSET))(this);
		}

		::System::Void _OnDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONDEACTIVE_OFFSET))(this);
		}

		::System::Void ResetZoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_RESETZOOM_OFFSET))(this);
		}

		::System::Void InitSetting(::RPG::GameCore::UI3DCameraFreeLookSetting* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DCameraFreeLookSetting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_INITSETTING_OFFSET))(this, a1);
		}

		::System::Void SetLookAtPointName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETLOOKATPOINTNAME_OFFSET))(this, a1);
		}

		::System::Void SetFollowPointName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETFOLLOWPOINTNAME_OFFSET))(this, a1);
		}

		::System::Void EnableCameraZoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_ENABLECAMERAZOOM_OFFSET))(this, a1);
		}

		::System::Void _CreateDummyLookAtPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CREATEDUMMYLOOKATPOINT_OFFSET))(this);
		}

		::UnityEngine::Transform* _CreateTransform(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CREATETRANSFORM_OFFSET))(this, a1);
		}

		::System::Void _SetInputAxisProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__SETINPUTAXISPROVIDER_OFFSET))(this);
		}

		::System::Single _CalculateZoomRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CALCULATEZOOMRATIO_OFFSET))(this);
		}

		::System::Single _ZoomMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMMIN_OFFSET))(this);
		}

		::System::Single _ZoomMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMMAX_OFFSET))(this);
		}

		::System::Single _ZoomSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMSPEED_OFFSET))(this);
		}

		::System::Single _DefaultZoom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__DEFAULTZOOM_OFFSET))(this);
		}

		::System::Void _ResetLookAtPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__RESETLOOKATPOSITION_OFFSET))(this);
		}

		::System::Void _UpdateLookAtAndFollow(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATELOOKATANDFOLLOW_OFFSET))(this, a1);
		}

		::System::Boolean _NeedLerpPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__NEEDLERPPOSITION_OFFSET))(this);
		}

		::System::Single _LerpDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__LERPDURATION_OFFSET))(this);
		}

		::System::Void _UpdateCameraZoom(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATECAMERAZOOM_OFFSET))(this, a1);
		}

		::System::Void _UpdateCameraRot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATECAMERAROT_OFFSET))(this);
		}

		::System::Single _GetOrbitsHeight(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETORBITSHEIGHT_OFFSET))(this, a1);
		}

		::System::Single _GetYAxisClampValue(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETYAXISCLAMPVALUE_OFFSET))(this, a1);
		}

		::System::Single _GetZoomInterp(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETZOOMINTERP_OFFSET))(this, a1);
		}

		::System::Single _GetLerpInterp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETLERPINTERP_OFFSET))(this);
		}

		::System::Void _ResetCameraAxis()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__RESETCAMERAAXIS_OFFSET))(this);
		}

		::System::Void _OnSettingChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONSETTINGCHANGED_OFFSET))(this);
		}

		::System::Single GetAxisValue(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GETAXISVALUE_OFFSET))(this, a1);
		}

		::System::Single GetAxisValueFromCamera(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GETAXISVALUEFROMCAMERA_OFFSET))(this, a1);
		}

		::System::Void SetAxisValueToCamera(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETAXISVALUETOCAMERA_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CinemachineFreeLook* get__FreeLookCamera()
		{
			return ((::Cinemachine::CinemachineFreeLook*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GET__FREELOOKCAMERA_OFFSET))(this);
		}

	};
}
