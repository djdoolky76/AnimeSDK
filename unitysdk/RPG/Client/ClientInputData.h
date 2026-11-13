#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_CLIENTINPUTDATA_CLEARCACHERUSHMOVEFLAG_OFFSET UNITYSDK_OFFSET(0x1CFFF570)
#define RPG_CLIENT_CLIENTINPUTDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CFFEBA0)
#define RPG_CLIENT_CLIENTINPUTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFF5F0)
#define RPG_CLIENT_CLIENTINPUTDATA_GETCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x1CFFF000)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_CAMERAROTATIONSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x1CFFE760)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_ISCACHERUSHMOVEFLAG_OFFSET UNITYSDK_OFFSET(0x1CFFF500)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_PLAYERMOVECONTROLDIR_OFFSET UNITYSDK_OFFSET(0x1CFFE750)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSNORMALATKBTN_OFFSET UNITYSDK_OFFSET(0x1CFFF5C0)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSSKILLBTN_OFFSET UNITYSDK_OFFSET(0x1CFFF5D0)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_RUSHFLAG_OFFSET UNITYSDK_OFFSET(0x1CFFF480)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_USERECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x1CFFF5E0)
#define RPG_CLIENT_CLIENTINPUTDATA_RESETFLAGONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1CFFED20)
#define RPG_CLIENT_CLIENTINPUTDATA_RESETRECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x1CFFF440)
#define RPG_CLIENT_CLIENTINPUTDATA_SETRECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x1CFFF220)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_PLAYERMOVECONTROLDIR_OFFSET UNITYSDK_OFFSET(0x1CFFE660)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSNORMALATKBTN_OFFSET UNITYSDK_OFFSET(0x1CFFEC80)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSSKILLBTN_OFFSET UNITYSDK_OFFSET(0x1CFFECD0)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_RUSHFLAG_OFFSET UNITYSDK_OFFSET(0x1CFFF490)
#define RPG_CLIENT_CLIENTINPUTDATA_TRYRESETRECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x1CFFEE00)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientInputData_TypeDefinitionIndex = 62688;

	class ClientInputData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 MoveDirection; // 0x10
		::System::Single _PlayerMoveControlDir; // 0x1C
		::System::Boolean CameraTouchDown; // 0x20
		::System::Boolean _PressSkillBtn; // 0x21
		::System::Boolean WalkFlag; // 0x22
		::System::Boolean CameraRotationByController; // 0x23
		::System::Boolean _PressNormalAtkBtn; // 0x24
		::System::Boolean _RushFlag; // 0x25
		::System::Boolean PlayerMove; // 0x26
		::System::Boolean CameraZooming; // 0x27
		::UnityEngine::Vector3 _RecordPlayerInputDir; // 0x28
		::UnityEngine::Vector3 _RecordCameraForward; // 0x34
		::UnityEngine::Vector2 CameraRotationDelta; // 0x40
		::System::Boolean CameraZoomingByController; // 0x48
		::System::Boolean _UseRecordCameraForward; // 0x49
		::System::Boolean CameraRotation; // 0x4A
		::System::Boolean CameraReset; // 0x4B
		::System::Single _LastRushMoveTime; // 0x4C
		::System::Single CameraZoomVelocityAdditiveRatio; // 0x50
		// static const ::System::Object _RecordPlayerInputDirLimit; // 0x0
		// static const ::System::Object CACHE_RUSH_MOVE_TIME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_CTOR_OFFSET))(this);
		}

		::System::Void set_PlayerMoveControlDir(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SET_PLAYERMOVECONTROLDIR_OFFSET))(this, a1);
		}

		::System::Single get_PlayerMoveControlDir()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_PLAYERMOVECONTROLDIR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CameraRotationSpeedRatio()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_CAMERAROTATIONSPEEDRATIO_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_CLEAR_OFFSET))(this);
		}

		::System::Void ResetFlagOnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_RESETFLAGONLATEUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCameraForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GETCAMERAFORWARD_OFFSET))(this);
		}

		::System::Void SetRecordCameraForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SETRECORDCAMERAFORWARD_OFFSET))(this);
		}

		::System::Void ResetRecordCameraForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_RESETRECORDCAMERAFORWARD_OFFSET))(this);
		}

		::System::Void TryResetRecordCameraForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_TRYRESETRECORDCAMERAFORWARD_OFFSET))(this);
		}

		::System::Boolean get_RushFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_RUSHFLAG_OFFSET))(this);
		}

		::System::Void set_RushFlag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SET_RUSHFLAG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCacheRushMoveFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_ISCACHERUSHMOVEFLAG_OFFSET))(this);
		}

		::System::Void ClearCacheRushMoveFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_CLEARCACHERUSHMOVEFLAG_OFFSET))(this);
		}

		::System::Boolean get_PressNormalAtkBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSNORMALATKBTN_OFFSET))(this);
		}

		::System::Void set_PressNormalAtkBtn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSNORMALATKBTN_OFFSET))(this, a1);
		}

		::System::Boolean get_PressSkillBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSSKILLBTN_OFFSET))(this);
		}

		::System::Void set_PressSkillBtn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSSKILLBTN_OFFSET))(this, a1);
		}

		::System::Boolean get_UseRecordCameraForward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_USERECORDCAMERAFORWARD_OFFSET))(this);
		}

	};
}
