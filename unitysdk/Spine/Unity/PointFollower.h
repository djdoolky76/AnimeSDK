#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine { class Bone; }
namespace Spine { class PointAttachment; }
namespace Spine::Unity { class ISkeletonComponent; }
namespace Spine::Unity { class ISkeletonRenderer; }
namespace Spine::Unity { class SkeletonRenderer; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_POINTFOLLOWER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1FEA3280)
#define SPINE_UNITY_POINTFOLLOWER_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0x1FEA3260)
#define SPINE_UNITY_POINTFOLLOWER_GET_SKELETONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1FEA3270)
#define SPINE_UNITY_POINTFOLLOWER_GET_SKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x1FEA3250)
#define SPINE_UNITY_POINTFOLLOWER_HANDLEREBUILDRENDERER_OFFSET UNITYSDK_OFFSET(0x1FEA3690)
#define SPINE_UNITY_POINTFOLLOWER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FEA3290)
#define SPINE_UNITY_POINTFOLLOWER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1FEA39C0)
#define SPINE_UNITY_POINTFOLLOWER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1FEA37F0)
#define SPINE_UNITY_POINTFOLLOWER_UPDATEREFERENCES_OFFSET UNITYSDK_OFFSET(0x1FEA33F0)
#define SPINE_UNITY_POINTFOLLOWER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEA4010)

namespace Spine::Unity
{
	inline static constexpr unsigned int PointFollower_TypeDefinitionIndex = 38124;

	class PointFollower : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x18
		::System::String* slotName; // 0x20
		::System::String* pointAttachmentName; // 0x28
		::System::Boolean followRotation; // 0x30
		::System::Boolean followSkeletonFlip; // 0x31
		::System::Boolean followSkeletonZPosition; // 0x32
		::System::Byte _padding0[0x5];
		::UnityEngine::Transform* skeletonTransform; // 0x38
		::System::Boolean skeletonTransformIsParent; // 0x40
		::System::Byte _padding1[0x7];
		::Spine::PointAttachment* point; // 0x48
		::Spine::Bone* bone; // 0x50
		::System::Boolean valid; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER__CTOR_OFFSET))(this);
		}

		::Spine::Unity::ISkeletonRenderer* get_SkeletonRenderer()
		{
			return ((::Spine::Unity::ISkeletonRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_GET_SKELETONRENDERER_OFFSET))(this);
		}

		::Spine::Unity::ISkeletonRenderer* get_Renderer()
		{
			return ((::Spine::Unity::ISkeletonRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_GET_RENDERER_OFFSET))(this);
		}

		::Spine::Unity::ISkeletonComponent* get_SkeletonComponent()
		{
			return ((::Spine::Unity::ISkeletonComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_GET_SKELETONCOMPONENT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_INITIALIZE_OFFSET))(this);
		}

		::System::Void HandleRebuildRenderer(::Spine::Unity::ISkeletonRenderer* skeletonRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_HANDLEREBUILDRENDERER_OFFSET))(this, skeletonRenderer);
		}

		::System::Void UpdateReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_UPDATEREFERENCES_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_LATEUPDATE_OFFSET))(this);
		}
	};
}
