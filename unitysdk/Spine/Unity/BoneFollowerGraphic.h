#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/BoneFollower_AxisOrientation.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine { class Bone; }
namespace Spine { class Slot; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F5BC550)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_GETATTACHMENTZPOSITION_OFFSET UNITYSDK_OFFSET(0x1F5BD460)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_GET_SKELETONGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1F5BC460)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F5BC570)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5BC750)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_SETBONE_OFFSET UNITYSDK_OFFSET(0x1F5BC490)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_SET_SKELETONGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1F5BC470)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5BD570)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC__GETATTACHMENTZPOSITION_B__22_0_OFFSET UNITYSDK_OFFSET(0x1F5BD5E0)

namespace Spine::Unity
{
	inline static constexpr unsigned int BoneFollowerGraphic_TypeDefinitionIndex = 38121;

	class BoneFollowerGraphic : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x18
		::System::Boolean initializeOnAwake; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* boneName; // 0x28
		::System::Boolean followBoneRotation; // 0x30
		::System::Boolean followSkeletonFlip; // 0x31
		::System::Boolean followLocalScale; // 0x32
		::System::Boolean followParentWorldScale; // 0x33
		::System::Boolean followXYPosition; // 0x34
		::System::Boolean followZPosition; // 0x35
		::System::Boolean followAttachmentZSpacing; // 0x36
		::System::Byte _padding1[0x1];
		::Spine::Unity::BoneFollower_AxisOrientation maintainedAxisOrientation; // 0x38
		::System::Byte _padding2[0x4];
		::Spine::Bone* bone; // 0x40
		::UnityEngine::Transform* skeletonTransform; // 0x48
		::System::Boolean skeletonTransformIsParent; // 0x50
		::System::Boolean valid; // 0x51

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC__CTOR_OFFSET))(this);
		}

		::Spine::Unity::SkeletonGraphic* get_SkeletonGraphic()
		{
			return ((::Spine::Unity::SkeletonGraphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_GET_SKELETONGRAPHIC_OFFSET))(this);
		}

		::System::Void set_SkeletonGraphic(::Spine::Unity::SkeletonGraphic* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_SET_SKELETONGRAPHIC_OFFSET))(this, value);
		}

		::System::Boolean SetBone(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_SETBONE_OFFSET))(this, name);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_AWAKE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_INITIALIZE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_LATEUPDATE_OFFSET))(this);
		}

		::System::Single GetAttachmentZPosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_GETATTACHMENTZPOSITION_OFFSET))(this);
		}

		::System::Boolean _GetAttachmentZPosition_b__22_0(::Spine::Slot* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Slot*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC__GETATTACHMENTZPOSITION_B__22_0_OFFSET))(this, slot);
		}
	};
}
