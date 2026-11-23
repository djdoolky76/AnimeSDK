#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimageAssetBase.h"

#define UNITYENGINE_ANIMAGEGRAPHASSET_EB411732C99E3152_OFFSET UNITYSDK_OFFSET(0x40FDB30)
#define UNITYENGINE_ANIMAGEGRAPHASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x40FDB70)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimageGraphAsset_TypeDefinitionIndex = 21233;

	class AnimageGraphAsset : public ::UnityEngine::AnimageAssetBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGEGRAPHASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void EB411732C99E3152(::UnityEngine::AnimageGraphAsset* A993F89E4CDDB266)
		{
			return ((::System::Void(*)(::UnityEngine::AnimageGraphAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGEGRAPHASSET_EB411732C99E3152_OFFSET))(A993F89E4CDDB266);
		}
	};
}
