#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace Spine::Unity { class SkeletonDataAsset; }

#define SPINE_UNITY_ANIMATIONREFERENCEASSETCONTAINER_GET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x1F5BC3E0)
#define SPINE_UNITY_ANIMATIONREFERENCEASSETCONTAINER_SET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x1F5BC3F0)
#define SPINE_UNITY_ANIMATIONREFERENCEASSETCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5BC400)

namespace Spine::Unity
{
	inline static constexpr unsigned int AnimationReferenceAssetContainer_TypeDefinitionIndex = 38092;

	class AnimationReferenceAssetContainer : public ::UnityEngine::ScriptableObject
	{
	public:
		::Spine::Unity::SkeletonDataAsset* skeletonDataAsset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONREFERENCEASSETCONTAINER__CTOR_OFFSET))(this);
		}

		::Spine::Unity::SkeletonDataAsset* get_SkeletonDataAsset()
		{
			return ((::Spine::Unity::SkeletonDataAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONREFERENCEASSETCONTAINER_GET_SKELETONDATAASSET_OFFSET))(this);
		}

		::System::Void set_SkeletonDataAsset(::Spine::Unity::SkeletonDataAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONREFERENCEASSETCONTAINER_SET_SKELETONDATAASSET_OFFSET))(this, value);
		}
	};
}
