#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/FBJAMCEAOOE.h"
#include "unitysdk/MoleMole/CameraShotData_AFMAAHEHBFC.h"
#include "unitysdk/MoleMole/CameraShotData_EKNIALFMDNP.h"
#include "unitysdk/MoleMole/CameraShotData_HHOMOCCNHLF.h"
#include "unitysdk/MoleMole/CameraShotData_KPJLEGNEBLL.h"
#include "unitysdk/MoleMole/CameraShotData_ShotAttachOffsetData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CAMERASHOTDATA_APPCLMIANHI_OFFSET UNITYSDK_OFFSET(0xFA8B340)
#define MOLEMOLE_CAMERASHOTDATA_DOHDGBJJEDK_OFFSET UNITYSDK_OFFSET(0xFA8B440)
#define MOLEMOLE_CAMERASHOTDATA_GET_ADDTYPE_OFFSET UNITYSDK_OFFSET(0xFA8B0F0)
#define MOLEMOLE_CAMERASHOTDATA_GET_APPLYENTITYTIMESCALE_OFFSET UNITYSDK_OFFSET(0xFA8B140)
#define MOLEMOLE_CAMERASHOTDATA_GET_BLENDDEFINITIONENTER_OFFSET UNITYSDK_OFFSET(0xFA8B190)
#define MOLEMOLE_CAMERASHOTDATA_GET_BLENDDEFINITIONEXIT_OFFSET UNITYSDK_OFFSET(0xFA8B1A0)
#define MOLEMOLE_CAMERASHOTDATA_GET_CINEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xFA8B0B0)
#define MOLEMOLE_CAMERASHOTDATA_GET_DURATIONBYEVENT_OFFSET UNITYSDK_OFFSET(0xFA8B120)
#define MOLEMOLE_CAMERASHOTDATA_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xFA8B110)
#define MOLEMOLE_CAMERASHOTDATA_GET_FOLLOWROOTROT_OFFSET UNITYSDK_OFFSET(0xFA8B170)
#define MOLEMOLE_CAMERASHOTDATA_GET_INGORECAMCOLLIDERDETECT_OFFSET UNITYSDK_OFFSET(0xFA8B150)
#define MOLEMOLE_CAMERASHOTDATA_GET_INGORETIMESCALE_OFFSET UNITYSDK_OFFSET(0xFA8B130)
#define MOLEMOLE_CAMERASHOTDATA_GET_LOOKATTYPE_OFFSET UNITYSDK_OFFSET(0xFA8B180)
#define MOLEMOLE_CAMERASHOTDATA_GET_LOOPINITTIME_OFFSET UNITYSDK_OFFSET(0xFA8B100)
#define MOLEMOLE_CAMERASHOTDATA_GET_PARENTTYPE_OFFSET UNITYSDK_OFFSET(0xFA8B160)
#define MOLEMOLE_CAMERASHOTDATA_GET_SKIPBANNERFADEIN_OFFSET UNITYSDK_OFFSET(0xFA8B0D0)
#define MOLEMOLE_CAMERASHOTDATA_GET_USEBANNER_OFFSET UNITYSDK_OFFSET(0xFA8B0C0)
#define MOLEMOLE_CAMERASHOTDATA_GET_VIDEOTYPE_OFFSET UNITYSDK_OFFSET(0xFA8B0E0)
#define MOLEMOLE_CAMERASHOTDATA_HKHOKLCDFGP_OFFSET UNITYSDK_OFFSET(0xFA8B2C0)
#define MOLEMOLE_CAMERASHOTDATA_MKICBCGLAHP_OFFSET UNITYSDK_OFFSET(0xFA8B4B0)
#define MOLEMOLE_CAMERASHOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xFA8B1B0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraShotData_TypeDefinitionIndex = 46403;

	class CameraShotData : public ::System::Object
	{
	public:
		::System::String* _cinePrefab; // 0x10
		::System::Single cameraPlanNearClipping; // 0x18
		::System::Single cameraPlanFarClipping; // 0x1C
		::System::Boolean _useBanner; // 0x20
		::System::Boolean _skipBannerFadeIn; // 0x21
		::System::Byte _padding0[0x2];
		::FBJAMCEAOOE _videoType; // 0x24
		::MoleMole::CameraShotData_KPJLEGNEBLL _addType; // 0x28
		::MoleMole::CameraShotData_HHOMOCCNHLF playWarpMode; // 0x2C
		::System::Single _loopInitTime; // 0x30
		::System::Single startPolarAngle; // 0x34
		::System::Single _duration; // 0x38
		::System::Boolean _ingoreTimeScale; // 0x3C
		::System::Boolean _applyEntityTimeScale; // 0x3D
		::System::Boolean _ingoreCamColliderDetect; // 0x3E
		::System::Boolean EnableCameraShake; // 0x3F
		::System::Boolean LightDirectionFromCamera; // 0x40
		::System::Byte _padding1[0x7];
		::UnityEngine::AnimationCurve* LightDirectionFromCameraCurve; // 0x48
		::System::Boolean IsAllowQTEPass; // 0x50
		::System::Byte _padding2[0x7];
		::System::String* AllowQTEPassTag; // 0x58
		::System::Boolean IsAllowSwitchAvatarInterrupt; // 0x60
		::System::Boolean IsAllowLevelEndPerformInterrupt; // 0x61
		::System::Boolean ForceInstantApply; // 0x62
		::System::Byte _padding3[0x1];
		::MoleMole::CameraShotData_EKNIALFMDNP _parentType; // 0x64
		::System::Boolean _followRootRot; // 0x68
		::System::Byte _padding4[0x3];
		::UnityEngine::Vector3 baseFollowDeltaOffset; // 0x6C
		::MoleMole::CameraShotData_ShotAttachOffsetData followXZOffsetData; // 0x78
		::MoleMole::CameraShotData_ShotAttachOffsetData followYOffsetData; // 0x98
		::UnityEngine::Quaternion shotOffsetRotation; // 0xB8
		::MoleMole::CameraShotData_EKNIALFMDNP _lookAtType; // 0xC8
		::UnityEngine::Vector3 baseLookDeltaOffset; // 0xCC
		::MoleMole::CameraShotData_ShotAttachOffsetData lookAtXZOffsetData; // 0xD8
		::MoleMole::CameraShotData_ShotAttachOffsetData lookAtYOffsetData; // 0xF8
		::System::Boolean applyOnTransitionYRatio; // 0x118
		::System::Byte _padding5[0x3];
		::MoleMole::CameraShotData_AFMAAHEHBFC camPosRecoverType; // 0x11C
		::System::Single fOnTransitionYRatioValue; // 0x120
		::System::Single fOnTransitionPolarAngle; // 0x124
		::System::Boolean muteCameraDither; // 0x128
		::System::Boolean muteAllCameraDither; // 0x129
		::System::Boolean muteSelfCameraDither; // 0x12A
		::System::Boolean muteLocalAvatarCameraDither; // 0x12B
		::System::Boolean muteAvatarCameraDither; // 0x12C
		::System::Boolean muteMonsterCameraDither; // 0x12D
		::System::Boolean muteBuddyCameraDither; // 0x12E
		::System::Boolean muteCustomAbilityTarget; // 0x12F
		::System::Collections::Generic::List_1<::System::String*>* CustomAbilityTargetKeyList; // 0x130
		::System::Boolean overrideGlobalMuteDither; // 0x138
		::System::Boolean enableSceneObjDither; // 0x139
		::System::Boolean muteBattleScreenEffect; // 0x13A
		::System::Boolean disableLightDistanceCulling; // 0x13B
		::System::Byte _padding6[0x4];
		::Cinemachine::CinemachineBlendDefinition _blendDefinitionEnter; // 0x140
		::System::Boolean useCoreSpaceBlendIn; // 0x150
		::System::Boolean useDeltaBlendIn; // 0x151
		::System::Boolean setAdvancedBlendInFlag; // 0x152
		::System::Byte _padding7[0x1];
		::PipelineCamera::WorldBasicCameraDataDeltaFlag advancedBlendInFlag; // 0x154
		::Cinemachine::CinemachineBlendDefinition _blendDefinitionExit; // 0x158
		::System::Boolean useCoreSpaceBlendOut; // 0x168
		::System::Boolean useDeltaBlendOut; // 0x169
		::System::Boolean setAdvancedBlendOutFlag; // 0x16A
		::System::Byte _padding8[0x1];
		::PipelineCamera::WorldBasicCameraDataDeltaFlag advancedBlendOutFlag; // 0x16C
		::System::Boolean BlendWithIgnoreLookAtTarget; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA__CTOR_OFFSET))(this);
		}

		::System::String* get_cinePrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_CINEPREFABPATH_OFFSET))(this);
		}

		::System::Boolean get_useBanner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_USEBANNER_OFFSET))(this);
		}

		::System::Boolean get_skipBannerFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_SKIPBANNERFADEIN_OFFSET))(this);
		}

		::FBJAMCEAOOE get_videoType()
		{
			return ((::FBJAMCEAOOE(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_VIDEOTYPE_OFFSET))(this);
		}

		::MoleMole::CameraShotData_KPJLEGNEBLL get_addType()
		{
			return ((::MoleMole::CameraShotData_KPJLEGNEBLL(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_ADDTYPE_OFFSET))(this);
		}

		::System::Single get_loopInitTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_LOOPINITTIME_OFFSET))(this);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_DURATION_OFFSET))(this);
		}

		::System::Boolean get_durationByEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_DURATIONBYEVENT_OFFSET))(this);
		}

		::System::Boolean get_ingoreTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_INGORETIMESCALE_OFFSET))(this);
		}

		::System::Boolean get_applyEntityTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_APPLYENTITYTIMESCALE_OFFSET))(this);
		}

		::System::Boolean get_ingoreCamColliderDetect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_INGORECAMCOLLIDERDETECT_OFFSET))(this);
		}

		::MoleMole::CameraShotData_EKNIALFMDNP get_parentType()
		{
			return ((::MoleMole::CameraShotData_EKNIALFMDNP(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_PARENTTYPE_OFFSET))(this);
		}

		::System::Boolean get_followRootRot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_FOLLOWROOTROT_OFFSET))(this);
		}

		::MoleMole::CameraShotData_EKNIALFMDNP get_lookAtType()
		{
			return ((::MoleMole::CameraShotData_EKNIALFMDNP(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_LOOKATTYPE_OFFSET))(this);
		}

		::Cinemachine::CinemachineBlendDefinition get_BlendDefinitionEnter()
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_BLENDDEFINITIONENTER_OFFSET))(this);
		}

		::Cinemachine::CinemachineBlendDefinition get_BlendDefinitionExit()
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_BLENDDEFINITIONEXIT_OFFSET))(this);
		}

		::System::Void HKHOKLCDFGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_HKHOKLCDFGP_OFFSET))(this);
		}

		::System::Void APPCLMIANHI(::System::String* POMGOGNDJPF, ::System::Boolean KGHIDCHKGDG, ::FBJAMCEAOOE GIGLFDKKGBN, ::System::Single MDPPNMIPDMP)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::FBJAMCEAOOE, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_APPCLMIANHI_OFFSET))(this, POMGOGNDJPF, KGHIDCHKGDG, GIGLFDKKGBN, MDPPNMIPDMP);
		}

		::PipelineCamera::WorldBasicCameraDataDeltaFlag DOHDGBJJEDK()
		{
			return ((::PipelineCamera::WorldBasicCameraDataDeltaFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_DOHDGBJJEDK_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraDataDeltaFlag MKICBCGLAHP()
		{
			return ((::PipelineCamera::WorldBasicCameraDataDeltaFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_MKICBCGLAHP_OFFSET))(this);
		}
	};
}
