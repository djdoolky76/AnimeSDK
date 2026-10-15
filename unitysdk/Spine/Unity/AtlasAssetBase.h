#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define SPINE_UNITY_ATLASASSETBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECF8CF0)

namespace Spine::Unity
{
	class AtlasAssetBase : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_CTOR_OFFSET))(this);
		}

	};
}
