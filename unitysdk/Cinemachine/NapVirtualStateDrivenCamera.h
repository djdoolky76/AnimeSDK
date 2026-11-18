#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/Cinemachine/NapVirtualStateDrivenCamera_Instruction.h"
#include "unitysdk/UnityEngine/AnimatorClipInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBlend; }
namespace Cinemachine { class CinemachineBlenderSettings; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_CHOOSECURRENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1F881B80)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_CREATEBLEND1_OFFSET UNITYSDK_OFFSET(0x1F882470)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1F881260)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_CHILDCAMERAS_OFFSET UNITYSDK_OFFSET(0x1F882AB0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1F880C80)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1F880E50)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_ISBLENDING_OFFSET UNITYSDK_OFFSET(0x1F882AD0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x1F880DD0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1F880E30)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1F880E00)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_TRANSITIONINGFROM_OFFSET UNITYSDK_OFFSET(0x1F881B60)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_HIDELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F8831D0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1F8814B0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_INVALIDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F882730)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x1F880DE0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_LOOKUPBLEND_OFFSET UNITYSDK_OFFSET(0x1F8820F0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F882750)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F8825D0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONGUIHANDLER_OFFSET UNITYSDK_OFFSET(0x1F8828A0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1F880E70)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1F882880)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1F881410)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x1F882AE0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1F880E60)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_SET_LIVECHILD_OFFSET UNITYSDK_OFFSET(0x1F880DC0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1F880E40)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_SET_TRANSITIONINGFROM_OFFSET UNITYSDK_OFFSET(0x1F881B70)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_UPDATELISTOFCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F880FE0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_VALIDATEINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x1F882CD0)
#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F883360)

namespace Cinemachine
{
	inline static constexpr unsigned int NapVirtualStateDrivenCamera_TypeDefinitionIndex = 34239;

	class NapVirtualStateDrivenCamera : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		::UnityEngine::Transform* m_LookAt; // 0x68
		::UnityEngine::Transform* m_Follow; // 0x70
		::System::Boolean m_ShowDebugText; // 0x78
		::System::Byte _padding0[0x7];
		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* m_ChildCameras; // 0x80
		::Il2CppArray<::System::Object*>* m_Instructions; // 0x88
		::Il2CppArray<::System::String*>* CameraMoveMode; // 0x90
		::Cinemachine::CinemachineBlendDefinition m_DefaultBlend; // 0x98
		::Cinemachine::CinemachineBlenderSettings* m_CustomBlends; // 0xA8
		::Il2CppArray<::System::Object*>* m_ParentCameraMove; // 0xB0
		::Cinemachine::ICinemachineCamera* _LiveChild_k__BackingField; // 0xB8
		::Cinemachine::ICinemachineCamera* _TransitioningFrom_k__BackingField; // 0xC0
		::Cinemachine::CameraState m_State; // 0xC8
		::System::Single mActivationTime; // 0x1B0
		::System::Byte _padding1[0x4];
		::Cinemachine::NapVirtualStateDrivenCamera_Instruction mActiveInstruction; // 0x1B8
		::System::Single mPendingActivationTime; // 0x1D0
		::System::Byte _padding2[0x4];
		::Cinemachine::NapVirtualStateDrivenCamera_Instruction mPendingInstruction; // 0x1D8
		::Cinemachine::CinemachineBlend* mActiveBlend; // 0x1F0
		::System::Boolean isStartExitControlState; // 0x1F8
		::System::Byte _padding3[0x3];
		::System::Single ExitControlStateTimer; // 0x1FC
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* mInstructionDictionary; // 0x200
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* mStateParentLookup; // 0x208
		::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* m_clipInfoList; // 0x210

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA__CTOR_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_LiveChild(::Cinemachine::ICinemachineCamera* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_SET_LIVECHILD_OFFSET))(this, value);
		}

		::Cinemachine::ICinemachineCamera* get_LiveChild()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_LIVECHILD_OFFSET))(this);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* vcam, ::System::Boolean dominantChildOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ISLIVECHILD_OFFSET))(this, vcam, dominantChildOnly);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_STATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_SET_LOOKAT_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_SET_FOLLOW_OFFSET))(this, value);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONTARGETOBJECTWARPED_OFFSET))(this, target, positionDelta);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_FORCECAMERAPOSITION_OFFSET))(this, pos, rot);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, fromCam, worldUp, deltaTime);
		}

		::Cinemachine::ICinemachineCamera* get_TransitioningFrom()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_TRANSITIONINGFROM_OFFSET))(this);
		}

		::System::Void set_TransitioningFrom(::Cinemachine::ICinemachineCamera* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_SET_TRANSITIONINGFROM_OFFSET))(this, value);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, worldUp, deltaTime);
		}

		::Cinemachine::CinemachineBlend* CreateBlend1(::Cinemachine::ICinemachineCamera* camA, ::Cinemachine::ICinemachineCamera* camB, ::Cinemachine::CinemachineBlendDefinition blendDef, ::Cinemachine::CinemachineBlend* activeBlend, ::System::Single stableTime)
		{
			return ((::Cinemachine::CinemachineBlend*(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::CinemachineBlendDefinition, ::Cinemachine::CinemachineBlend*, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_CREATEBLEND1_OFFSET))(this, camA, camB, blendDef, activeBlend, stableTime);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::System::Void OnGuiHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_ONGUIHANDLER_OFFSET))(this);
		}

		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* get_ChildCameras()
		{
			return ((::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_CHILDCAMERAS_OFFSET))(this);
		}

		::System::Boolean get_IsBlending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_GET_ISBLENDING_OFFSET))(this);
		}

		::System::Void InvalidateListOfChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_INVALIDATELISTOFCHILDREN_OFFSET))(this);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateListOfChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_UPDATELISTOFCHILDREN_OFFSET))(this);
		}

		::System::Void HideListOfChildren(::Cinemachine::CinemachineVirtualCameraBase* best)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_HIDELISTOFCHILDREN_OFFSET))(this, best);
		}

		::System::Void ValidateInstructions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_VALIDATEINSTRUCTIONS_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCameraBase* ChooseCurrentCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_CHOOSECURRENTCAMERA_OFFSET))(this);
		}

		::Cinemachine::CinemachineBlendDefinition LookupBlend(::Cinemachine::ICinemachineCamera* fromKey, ::Cinemachine::ICinemachineCamera* toKey)
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_LOOKUPBLEND_OFFSET))(this, fromKey, toKey);
		}
	};
}
