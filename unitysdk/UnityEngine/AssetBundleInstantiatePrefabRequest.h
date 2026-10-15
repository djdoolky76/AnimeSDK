#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"

#define UNITYENGINE_ASSETBUNDLEINSTANTIATEPREFABREQUEST_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C1920)

namespace UnityEngine
{
	class AssetBundleInstantiatePrefabRequest : public ::UnityEngine::AsyncOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLEINSTANTIATEPREFABREQUEST_CTOR_OFFSET))(this);
		}

	};
}
