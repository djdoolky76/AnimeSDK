#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAHGGNHDBMN.h"
#include "unitysdk/LHLKKIEDJJM.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class LIGMENPEBBB;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class AvatarLayoutCameraConfig; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_CLEARAVATARLAYOUTCAMERA_OFFSET UNITYSDK_OFFSET(0x10793540)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_DOENTERAVATARLAYOUTCAMERA_OFFSET UNITYSDK_OFFSET(0x10794D20)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_DOEXITAVATARLAYOUTCAMERA_OFFSET UNITYSDK_OFFSET(0x10794A20)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ENTERAVATARLAYOUTCAMERA_OFFSET UNITYSDK_OFFSET(0x10793F20)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_EXITAVATARLAYOUTCAMERA_OFFSET UNITYSDK_OFFSET(0x10794720)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x10794360)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_GETCAMERAMOVEFOLLOWROTATION_OFFSET UNITYSDK_OFFSET(0x10794520)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_GET_CAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x10793110)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_GET_CURRENTCAMERAKEY_OFFSET UNITYSDK_OFFSET(0x10793120)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_GET_ISCAMERAACTIVE_OFFSET UNITYSDK_OFFSET(0x10793130)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_INITDATA_OFFSET UNITYSDK_OFFSET(0x107932C0)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10793140)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x107933C0)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONENTERBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0x10795080)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10793670)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10793610)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_REFRESHAVATARLAYOUTCAMERA_OFFSET UNITYSDK_OFFSET(0x10793710)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_SETLASTEXITCAMERABLENDOUT_OFFSET UNITYSDK_OFFSET(0x10793EA0)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_TRYPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0x10793D40)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x107950F0)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM__DOENTERAVATARLAYOUTCAMERA_B__28_0_OFFSET UNITYSDK_OFFSET(0x10795110)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM__DOENTERAVATARLAYOUTCAMERA_B__28_1_OFFSET UNITYSDK_OFFSET(0x10795160)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x107951A0)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10795230)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM___BASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x107952C0)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10795360)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarLayoutCameraSubSystem_TypeDefinitionIndex = 46715;

	class AvatarLayoutCameraSubSystem
	{
	public:
		::MoleMole::Cameras::AvatarLayoutCameraConfig* _cameraConfig; // 0x10
		::System::String* _curCameraKey; // 0x18
		::System::Collections::Generic::List_1<::LHLKKIEDJJM>* _playDataList; // 0x20
		::LIGMENPEBBB* _lastExitAvatarLayoutCamera; // 0x28
		::MoleMole::EntityHandle _curFollowEntity; // 0x30
		::GEIHCPAOKKK* _curModelComponent; // 0x40
		::LIGMENPEBBB* _avatarLayoutCamera; // 0x48
		::UnityEngine::Quaternion _lastCameraFollowRotation; // 0x50
		::UnityEngine::Vector3 _lastCameraFollowPosition; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM__CTOR_OFFSET))(this);
		}

		::MoleMole::Cameras::AvatarLayoutCameraConfig* get_CameraConfig()
		{
			return ((::MoleMole::Cameras::AvatarLayoutCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_GET_CAMERACONFIG_OFFSET))(this);
		}

		::System::String* get_CurrentCameraKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_GET_CURRENTCAMERAKEY_OFFSET))(this);
		}

		::System::Boolean get_IsCameraActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_GET_ISCAMERAACTIVE_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void SetLastExitCameraBlendOut(::System::Single overrideBlendOutTime, ::System::String* overrideBlendOutCurveKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_SETLASTEXITCAMERABLENDOUT_OFFSET))(this, overrideBlendOutTime, overrideBlendOutCurveKey);
		}

		::System::Void EnterAvatarLayoutCamera(::System::String* key, ::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ENTERAVATARLAYOUTCAMERA_OFFSET))(this, key, entity);
		}

		::System::Void ExitAvatarLayoutCamera(::System::String* key, ::MoleMole::Battle::Entity* entity, ::AAHGGNHDBMN blendOutType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*, ::AAHGGNHDBMN))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_EXITAVATARLAYOUTCAMERA_OFFSET))(this, key, entity, blendOutType);
		}

		::System::Void ClearAvatarLayoutCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_CLEARAVATARLAYOUTCAMERA_OFFSET))(this);
		}

		::System::Void RefreshAvatarLayoutCamera(::AAHGGNHDBMN blendOutType, ::System::Boolean enableOverrideBlendOut)
		{
			return ((::System::Void(*)(::PVOID, ::AAHGGNHDBMN, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_REFRESHAVATARLAYOUTCAMERA_OFFSET))(this, blendOutType, enableOverrideBlendOut);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_INITDATA_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCameraMoveFollowPosition(::MoleMole::Battle::Entity* entity)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET))(this, entity);
		}

		::UnityEngine::Quaternion GetCameraMoveFollowRotation(::MoleMole::Battle::Entity* entity)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_GETCAMERAMOVEFOLLOWROTATION_OFFSET))(this, entity);
		}

		::System::Void TryPlayDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_TRYPLAYDATALIST_OFFSET))(this);
		}

		::System::Void DoEnterAvatarLayoutCamera(::LHLKKIEDJJM playData)
		{
			return ((::System::Void(*)(::PVOID, ::LHLKKIEDJJM))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_DOENTERAVATARLAYOUTCAMERA_OFFSET))(this, playData);
		}

		::System::Void DoExitAvatarLayoutCamera(::System::String* key, ::MoleMole::Battle::Entity* entity, ::AAHGGNHDBMN blendOutType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*, ::AAHGGNHDBMN))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_DOEXITAVATARLAYOUTCAMERA_OFFSET))(this, key, entity, blendOutType);
		}

		::System::Void OnEnterBattlePhotoMode(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONENTERBATTLEPHOTOMODE_OFFSET))(this, obj);
		}

		::UnityEngine::Vector3 _DoEnterAvatarLayoutCamera_b__28_0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM__DOENTERAVATARLAYOUTCAMERA_B__28_0_OFFSET))(this);
		}

		::UnityEngine::Quaternion _DoEnterAvatarLayoutCamera_b__28_1()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM__DOENTERAVATARLAYOUTCAMERA_B__28_1_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM___BASE_ONLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
