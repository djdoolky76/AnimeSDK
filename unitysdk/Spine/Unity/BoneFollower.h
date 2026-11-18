#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/BoneFollower_AxisOrientation.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine { class Bone; }
namespace Spine { class Slot; }
namespace Spine::Unity { class ISkeletonRenderer; }
namespace Spine::Unity { class SkeletonRenderer; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_BONEFOLLOWER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F8031E0)
#define SPINE_UNITY_BONEFOLLOWER_GETATTACHMENTZPOSITION_OFFSET UNITYSDK_OFFSET(0x1F804340)
#define SPINE_UNITY_BONEFOLLOWER_GET_SKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x1F803100)
#define SPINE_UNITY_BONEFOLLOWER_HANDLEREBUILDRENDERER_OFFSET UNITYSDK_OFFSET(0x1F803200)
#define SPINE_UNITY_BONEFOLLOWER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F803210)
#define SPINE_UNITY_BONEFOLLOWER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8036F0)
#define SPINE_UNITY_BONEFOLLOWER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F803520)
#define SPINE_UNITY_BONEFOLLOWER_SETBONE_OFFSET UNITYSDK_OFFSET(0x1F803130)
#define SPINE_UNITY_BONEFOLLOWER_SET_SKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x1F803110)
#define SPINE_UNITY_BONEFOLLOWER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F804440)
#define SPINE_UNITY_BONEFOLLOWER__GETATTACHMENTZPOSITION_B__25_0_OFFSET UNITYSDK_OFFSET(0x1F8044B0)

namespace Spine::Unity
{
	inline static constexpr unsigned int BoneFollower_TypeDefinitionIndex = 38119;

	class BoneFollower : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x18
		::System::String* boneName; // 0x20
		::System::Boolean followXYPosition; // 0x28
		::System::Boolean followZPosition; // 0x29
		::System::Boolean followAttachmentZSpacing; // 0x2A
		::System::Boolean followBoneRotation; // 0x2B
		::System::Boolean followSkeletonFlip; // 0x2C
		::System::Boolean followLocalScale; // 0x2D
		::System::Boolean followParentWorldScale; // 0x2E
		::System::Byte _padding0[0x1];
		::Spine::Unity::BoneFollower_AxisOrientation maintainedAxisOrientation; // 0x30
		::System::Boolean initializeOnAwake; // 0x34
		::System::Boolean valid; // 0x35
		::System::Byte _padding1[0x2];
		::Spine::Bone* bone; // 0x38
		::UnityEngine::Transform* skeletonTransform; // 0x40
		::System::Boolean skeletonTransformIsParent; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER__CTOR_OFFSET))(this);
		}

		::Spine::Unity::SkeletonRenderer* get_SkeletonRenderer()
		{
			return ((::Spine::Unity::SkeletonRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_GET_SKELETONRENDERER_OFFSET))(this);
		}

		::System::Void set_SkeletonRenderer(::Spine::Unity::SkeletonRenderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_SET_SKELETONRENDERER_OFFSET))(this, value);
		}

		::System::Boolean SetBone(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_SETBONE_OFFSET))(this, name);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_AWAKE_OFFSET))(this);
		}

		::System::Void HandleRebuildRenderer(::Spine::Unity::ISkeletonRenderer* skeletonRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_HANDLEREBUILDRENDERER_OFFSET))(this, skeletonRenderer);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_INITIALIZE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_LATEUPDATE_OFFSET))(this);
		}

		::System::Single GetAttachmentZPosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_GETATTACHMENTZPOSITION_OFFSET))(this);
		}

		::System::Boolean _GetAttachmentZPosition_b__25_0(::Spine::Slot* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Slot*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER__GETATTACHMENTZPOSITION_B__25_0_OFFSET))(this, slot);
		}
	};
}
