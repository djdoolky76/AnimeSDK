#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define SPINE_UNITY_SKELETONDATAMODIFIERASSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFB0BA0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonDataModifierAsset_TypeDefinitionIndex = 46082;

	class SkeletonDataModifierAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAMODIFIERASSET_CTOR_OFFSET))(this);
		}

	};
}
