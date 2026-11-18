#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Blend2DRuntimeData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/StringIDWrapper.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/OneBoneLayer.h"
#include "unitysdk/OneBoneLayerRuntimeData.h"

class AMLegIK;
class Blend2dData;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimageComponent; }
namespace UnityEngine { class Transform; }

#define BONEADJUST_ADJUSTBONETRANSFORMBYONEBONELAYERDATAWITH2TARGETPOSE_OFFSET UNITYSDK_OFFSET(0x114166A0)
#define BONEADJUST_ADJUSTBONETRANSFORMBYSCATTER2DBLEND_OFFSET UNITYSDK_OFFSET(0x11413400)
#define BONEADJUST_ADJUSTBONETRANSFORMBYVELOCITYIMPL_OFFSET UNITYSDK_OFFSET(0x11417F20)
#define BONEADJUST_ADJUSTBONETRANSFORMBYVELOCITY_OFFSET UNITYSDK_OFFSET(0x11415550)
#define BONEADJUST_BLEND2DCOMPUTECHILDNODEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x11416D80)
#define BONEADJUST_GET_ANIMDIRVEC_OFFSET UNITYSDK_OFFSET(0x1140F6D0)
#define BONEADJUST_GET_ENABLEFORWARDLEANING_OFFSET UNITYSDK_OFFSET(0x1140F6F0)
#define BONEADJUST_GET_ENABLEPITCHROLLBYGROUND_OFFSET UNITYSDK_OFFSET(0x1140F710)
#define BONEADJUST_GET_FORCEENABLEKNEESMOOTH_OFFSET UNITYSDK_OFFSET(0x1140F670)
#define BONEADJUST_GET_IKDIRVEC_OFFSET UNITYSDK_OFFSET(0x1140F6E0)
#define BONEADJUST_GET_ISONMOVINGPLATFORM_OFFSET UNITYSDK_OFFSET(0x1140F650)
#define BONEADJUST_GET_OVERRIDEDDOWNSTAIRKNEEBENDSPEED_OFFSET UNITYSDK_OFFSET(0x1140F6B0)
#define BONEADJUST_GET_OVERRIDEDUPSTAIRKNEEBENDSPEED_OFFSET UNITYSDK_OFFSET(0x1140F690)
#define BONEADJUST_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1140F730)
#define BONEADJUST_ISBOUNDTOAMLEGIK_OFFSET UNITYSDK_OFFSET(0x11416600)
#define BONEADJUST_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11415A80)
#define BONEADJUST_LIFTBONESACCORDINGIK_OFFSET UNITYSDK_OFFSET(0x11415AE0)
#define BONEADJUST_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x11411D70)
#define BONEADJUST_ONLATEANIMAGEIK_OFFSET UNITYSDK_OFFSET(0x11412940)
#define BONEADJUST_PITCHROLLBYGROUND_OFFSET UNITYSDK_OFFSET(0x11415D70)
#define BONEADJUST_RECORDANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0x11411520)
#define BONEADJUST_SET_ENABLEFORWARDLEANING_OFFSET UNITYSDK_OFFSET(0x1140F700)
#define BONEADJUST_SET_ENABLEPITCHROLLBYGROUND_OFFSET UNITYSDK_OFFSET(0x1140F720)
#define BONEADJUST_SET_FORCEENABLEKNEESMOOTH_OFFSET UNITYSDK_OFFSET(0x1140F680)
#define BONEADJUST_SET_ISONMOVINGPLATFORM_OFFSET UNITYSDK_OFFSET(0x1140F660)
#define BONEADJUST_SET_OVERRIDEDDOWNSTAIRKNEEBENDSPEED_OFFSET UNITYSDK_OFFSET(0x1140F6C0)
#define BONEADJUST_SET_OVERRIDEDUPSTAIRKNEEBENDSPEED_OFFSET UNITYSDK_OFFSET(0x1140F6A0)
#define BONEADJUST_SMOOTHKNEE_OFFSET UNITYSDK_OFFSET(0x114129B0)
#define BONEADJUST_START_OFFSET UNITYSDK_OFFSET(0x114114D0)
#define BONEADJUST_TRYRAYCASTGROUND_OFFSET UNITYSDK_OFFSET(0x11418450)
#define BONEADJUST_UPDATE_OFFSET UNITYSDK_OFFSET(0x11411C70)
#define BONEADJUST__CCTOR_OFFSET UNITYSDK_OFFSET(0x11418CD0)
#define BONEADJUST__CTOR_OFFSET UNITYSDK_OFFSET(0x11418A70)

inline static constexpr unsigned int BoneAdjust_TypeDefinitionIndex = 92217;

class BoneAdjust : public ::UnityEngine::MonoBehaviour
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_pitchRollRaycastBuffer()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(BoneAdjust_TypeDefinitionIndex)->GetStaticField(0x3A4D0);
	}
	// static const ::System::String* GroundTag; // 0x0
	::UnityEngine::AnimageComponent* animageComponent; // 0x18
	::AMLegIK* amLegIk; // 0x20
	::System::Boolean initialized; // 0x28
	::System::Boolean isOnMovingPlatform; // 0x29
	::System::Byte _padding0[0x6];
	::Il2CppArray<::UnityEngine::Transform*>* Feet; // 0x30
	::System::Single UpstairKneeBendSpeed; // 0x38
	::System::Single DownstairKneeBendSpeed; // 0x3C
	::System::Boolean EnableKneeSmooth; // 0x40
	::System::Boolean _ForceEnableKneeSmooth_k__BackingField; // 0x41
	::System::Byte _padding1[0x2];
	::System::Single _OverridedUpstairKneeBendSpeed_k__BackingField; // 0x44
	::System::Single _OverridedDownstairKneeBendSpeed_k__BackingField; // 0x48
	::System::Byte _padding2[0x4];
	::Il2CppArray<::UnityEngine::StringIDWrapper>* footNameWrappers; // 0x50
	::Il2CppArray<::UnityEngine::StringIDWrapper>* calfNameWrappers; // 0x58
	::Il2CppArray<::UnityEngine::StringIDWrapper>* thighNameWrappers; // 0x60
	::Il2CppArray<::System::Single>* lastframeKneeBend; // 0x68
	::Il2CppArray<::System::Single>* animKneeAngle; // 0x70
	::System::Single OptimizeThreshold; // 0x78
	::System::Boolean EnableAnimOffsetFactor; // 0x7C
	::System::Byte _padding3[0x3];
	::System::Single AnimOffsetAngle; // 0x80
	::System::Byte _padding4[0x4];
	::Blend2dData* DataBlend2d; // 0x88
	::Blend2DRuntimeData RuntimeDataBlend2d; // 0x90
	::Il2CppArray<::System::Boolean>* useBlend; // 0x98
	::Il2CppArray<::System::Single>* animOffsetFactor; // 0xA0
	::Il2CppArray<::UnityEngine::Vector3>* animDirVec; // 0xA8
	::Il2CppArray<::UnityEngine::Vector3>* ikDirVec; // 0xB0
	::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>* DrivenBoneAnimPos; // 0xB8
	::Il2CppArray<::Il2CppArray<::UnityEngine::Quaternion>*>* DrivenBoneAnimRot; // 0xC0
	::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>* DrivenBoneAnimScale; // 0xC8
	::Il2CppArray<::UnityEngine::StringIDWrapper>* MasterBoneRootNameHandle; // 0xD0
	::Il2CppArray<::UnityEngine::StringIDWrapper>* MasterBoneNameHandle; // 0xD8
	::Il2CppArray<::Il2CppArray<::UnityEngine::StringIDWrapper>*>* DrivenBoneNameHandles; // 0xE0
	::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>* AnimDrivenPos; // 0xE8
	::Il2CppArray<::Il2CppArray<::UnityEngine::Quaternion>*>* AnimDrivenQuat; // 0xF0
	::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>* AnimDrivenScale; // 0xF8
	::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>* IkDrivenPos; // 0x100
	::Il2CppArray<::Il2CppArray<::UnityEngine::Quaternion>*>* IkDrivenRot; // 0x108
	::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>* IkDrivenScale; // 0x110
	::System::Boolean enableForwardLeaning; // 0x118
	::System::Byte _padding5[0x3];
	::System::Single lastAdjustedByVelocityWeight; // 0x11C
	::UnityEngine::Vector3 lastPos; // 0x120
	::UnityEngine::Vector3 velocity; // 0x12C
	::System::Single AdjustWeightDamping; // 0x138
	::System::Single VelocityWeight; // 0x13C
	::System::Single VelocityAngle; // 0x140
	::System::Byte _padding6[0x4];
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* BoneAdjustedByVelocityUpStair; // 0x148
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BoneAdjustedByVelocityVecsUpStair; // 0x150
	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* BoneAfjustedByVelocityRotsUpStair; // 0x158
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* BoneAdjustedByVelocityDownStair; // 0x160
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BoneAdjustedByVelocityVecsDownStair; // 0x168
	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* BoneAfjustedByVelocityRotsDownStair; // 0x170
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* BonesToBeLifted; // 0x178
	::UnityEngine::Transform* TargetBone; // 0x180
	::System::Single ForwardRaycastOffset; // 0x188
	::System::Single BackwardRaycastOffset; // 0x18C
	::System::Single RaycastHeight; // 0x190
	::System::Boolean _EnablePitchRollByGround_k__BackingField; // 0x194
	::System::Byte _padding7[0x3];
	::System::Single prevHeightDiff; // 0x198

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BONEADJUST__CCTOR_OFFSET))();
	}

	::System::Boolean get_IsOnMovingPlatform()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_GET_ISONMOVINGPLATFORM_OFFSET))(this);
	}

	::System::Void set_IsOnMovingPlatform(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BONEADJUST_SET_ISONMOVINGPLATFORM_OFFSET))(this, value);
	}

	::System::Boolean get_ForceEnableKneeSmooth()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_GET_FORCEENABLEKNEESMOOTH_OFFSET))(this);
	}

	::System::Void set_ForceEnableKneeSmooth(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BONEADJUST_SET_FORCEENABLEKNEESMOOTH_OFFSET))(this, value);
	}

	::System::Single get_OverridedUpstairKneeBendSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_GET_OVERRIDEDUPSTAIRKNEEBENDSPEED_OFFSET))(this);
	}

	::System::Void set_OverridedUpstairKneeBendSpeed(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BONEADJUST_SET_OVERRIDEDUPSTAIRKNEEBENDSPEED_OFFSET))(this, value);
	}

	::System::Single get_OverridedDownstairKneeBendSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_GET_OVERRIDEDDOWNSTAIRKNEEBENDSPEED_OFFSET))(this);
	}

	::System::Void set_OverridedDownstairKneeBendSpeed(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BONEADJUST_SET_OVERRIDEDDOWNSTAIRKNEEBENDSPEED_OFFSET))(this, value);
	}

	::Il2CppArray<::UnityEngine::Vector3>* get_AnimDirVec()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_GET_ANIMDIRVEC_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Vector3>* get_IkDirVec()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_GET_IKDIRVEC_OFFSET))(this);
	}

	::System::Boolean get_EnableForwardLeaning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_GET_ENABLEFORWARDLEANING_OFFSET))(this);
	}

	::System::Void set_EnableForwardLeaning(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BONEADJUST_SET_ENABLEFORWARDLEANING_OFFSET))(this, value);
	}

	::System::Boolean get_EnablePitchRollByGround()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_GET_ENABLEPITCHROLLBYGROUND_OFFSET))(this);
	}

	::System::Void set_EnablePitchRollByGround(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BONEADJUST_SET_ENABLEPITCHROLLBYGROUND_OFFSET))(this, value);
	}

	::System::Void Initialize(::System::Boolean forceReinitialize)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BONEADJUST_INITIALIZE_OFFSET))(this, forceReinitialize);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_START_OFFSET))(this);
	}

	::System::Void RecordAnimationData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_RECORDANIMATIONDATA_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_UPDATE_OFFSET))(this);
	}

	::System::Void OnAnimatorIK(::System::Int32 layerIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BONEADJUST_ONANIMATORIK_OFFSET))(this, layerIndex);
	}

	::System::Void OnLateAnimageIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_ONLATEANIMAGEIK_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_LATEUPDATE_OFFSET))(this);
	}

	::System::Void SmoothKnee()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_SMOOTHKNEE_OFFSET))(this);
	}

	::System::Boolean IsBoundToAmLegIk(::AMLegIK* newBinding)
	{
		return ((::System::Boolean(*)(::PVOID, ::AMLegIK*))((::PBYTE)hIl2Cpp + BONEADJUST_ISBOUNDTOAMLEGIK_OFFSET))(this, newBinding);
	}

	::System::Void AdjustBoneTransformByScatter2dBlend(::System::Boolean isAnimageIk)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BONEADJUST_ADJUSTBONETRANSFORMBYSCATTER2DBLEND_OFFSET))(this, isAnimageIk);
	}

	::System::Void AdjustBoneTransformByOneBoneLayerDataWith2TargetPose(::OneBoneLayer& oneBoneLayer, ::OneBoneLayerRuntimeData& oneBoneLayerRuntimeData, ::UnityEngine::Vector3 inputDirVec, ::Il2CppArray<::UnityEngine::Vector3>*& resultPos, ::Il2CppArray<::UnityEngine::Quaternion>*& resultRot, ::Il2CppArray<::UnityEngine::Vector3>*& resultScale)
	{
		return ((::System::Void(*)(::PVOID, ::OneBoneLayer&, ::OneBoneLayerRuntimeData&, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Quaternion>*&, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + BONEADJUST_ADJUSTBONETRANSFORMBYONEBONELAYERDATAWITH2TARGETPOSE_OFFSET))(this, oneBoneLayer, oneBoneLayerRuntimeData, inputDirVec, resultPos, resultRot, resultScale);
	}

	::System::Void Blend2dComputeChildNodeWeights(::OneBoneLayer& oneBoneLayer, ::OneBoneLayerRuntimeData& oneBoneLayerRuntimeData, ::UnityEngine::Vector3 inputDirVec, ::Il2CppArray<::UnityEngine::Vector3>*& resultPos, ::Il2CppArray<::UnityEngine::Quaternion>*& resultRot, ::Il2CppArray<::UnityEngine::Vector3>*& resultScale, ::System::Boolean isAnim)
	{
		return ((::System::Void(*)(::PVOID, ::OneBoneLayer&, ::OneBoneLayerRuntimeData&, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Quaternion>*&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + BONEADJUST_BLEND2DCOMPUTECHILDNODEWEIGHTS_OFFSET))(this, oneBoneLayer, oneBoneLayerRuntimeData, inputDirVec, resultPos, resultRot, resultScale, isAnim);
	}

	::System::Void AdjustBoneTransformByVelocity()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_ADJUSTBONETRANSFORMBYVELOCITY_OFFSET))(this);
	}

	::System::Void AdjustBoneTransformByVelocityImpl(::System::Single weight, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* boneAdjustedByVelocity, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* boneAdjustedByVelocityVecs, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* boneAdjustedByVelocityRots)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*))((::PBYTE)hIl2Cpp + BONEADJUST_ADJUSTBONETRANSFORMBYVELOCITYIMPL_OFFSET))(this, weight, boneAdjustedByVelocity, boneAdjustedByVelocityVecs, boneAdjustedByVelocityRots);
	}

	::System::Void LiftBonesAccordingIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_LIFTBONESACCORDINGIK_OFFSET))(this);
	}

	::System::Void PitchRollByGround()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONEADJUST_PITCHROLLBYGROUND_OFFSET))(this);
	}

	::System::Boolean TryRaycastGround(::UnityEngine::Vector3 origin, ::UnityEngine::RaycastHit& hit)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + BONEADJUST_TRYRAYCASTGROUND_OFFSET))(this, origin, hit);
	}
};
