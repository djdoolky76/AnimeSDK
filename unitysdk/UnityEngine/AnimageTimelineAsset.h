#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimageAssetBase.h"

#define UNITYENGINE_ANIMAGETIMELINEASSET_EB411732C99E3152_OFFSET UNITYSDK_OFFSET(0x40FE010)
#define UNITYENGINE_ANIMAGETIMELINEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x40FE050)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimageTimelineAsset_TypeDefinitionIndex = 21215;

	class AnimageTimelineAsset : public ::UnityEngine::AnimageAssetBase
	{
	public:
		static ::System::Void EB411732C99E3152(::UnityEngine::AnimageTimelineAsset* A993F89E4CDDB266)
		{
			return ((::System::Void(*)(::UnityEngine::AnimageTimelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGETIMELINEASSET_EB411732C99E3152_OFFSET))(A993F89E4CDDB266);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGETIMELINEASSET__CTOR_OFFSET))(this);
		}
	};
}
