#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimageAssetBase.h"

#define UNITYENGINE_ANIMAGECLIPASSET_A28E7BEC8189FE0A_OFFSET UNITYSDK_OFFSET(0x40FAF70)
#define UNITYENGINE_ANIMAGECLIPASSET_E538B175C4826E43_OFFSET UNITYSDK_OFFSET(0x40FAFF0)
#define UNITYENGINE_ANIMAGECLIPASSET_EB411732C99E3152_OFFSET UNITYSDK_OFFSET(0x40FAEC0)
#define UNITYENGINE_ANIMAGECLIPASSET_F951938B11DAAB33_OFFSET UNITYSDK_OFFSET(0x40FAFB0)
#define UNITYENGINE_ANIMAGECLIPASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x40FAF00)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimageClipAsset_TypeDefinitionIndex = 21223;

	class AnimageClipAsset : public ::UnityEngine::AnimageAssetBase
	{
	public:
		static ::System::Void EB411732C99E3152(::UnityEngine::AnimageClipAsset* A993F89E4CDDB266)
		{
			return ((::System::Void(*)(::UnityEngine::AnimageClipAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECLIPASSET_EB411732C99E3152_OFFSET))(A993F89E4CDDB266);
		}

		::System::Void E538B175C4826E43(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECLIPASSET_E538B175C4826E43_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECLIPASSET__CTOR_OFFSET))(this);
		}

		::System::Boolean F951938B11DAAB33()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECLIPASSET_F951938B11DAAB33_OFFSET))(this);
		}

		::System::Single A28E7BEC8189FE0A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECLIPASSET_A28E7BEC8189FE0A_OFFSET))(this);
		}
	};
}
