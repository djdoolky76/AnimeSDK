#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"

#define RPG_CUSTOMRP_SHADOWUTILSEXT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC78B70)
#define RPG_CUSTOMRP_SHADOWUTILSEXT_GET_FORCESHADOWPOINTSAMPLING_OFFSET UNITYSDK_OFFSET(0x1CC789E0)
#define RPG_CUSTOMRP_SHADOWUTILSEXT_GET_SHADOWFORMAT_OFFSET UNITYSDK_OFFSET(0x1CC789B0)
#define RPG_CUSTOMRP_SHADOWUTILSEXT_INIT_OFFSET UNITYSDK_OFFSET(0x1CC78A20)

namespace RPG::CustomRP
{
	class ShadowUtilsExt : public ::System::Object
	{
	public:
		static ::UnityEngine::Matrix4x4* StaticGet__textureScaleAndBias()
		{
			return (::UnityEngine::Matrix4x4*)UnitySDK::FromName("RPG.CustomRP", "ShadowUtilsExt")->GetStaticField(0xB840);
		}

		static ::System::Boolean* StaticGet__ForceShadowPointSampling()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "ShadowUtilsExt")->GetStaticField(0xB880);
		}

		static ::System::Boolean* StaticGet_usesReversedZBuffer()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "ShadowUtilsExt")->GetStaticField(0xB881);
		}

		static ::UnityEngine::RenderTextureFormat* StaticGet__ShadowmapFormat()
		{
			return (::UnityEngine::RenderTextureFormat*)UnitySDK::FromName("RPG.CustomRP", "ShadowUtilsExt")->GetStaticField(0xB884);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADOWUTILSEXT_CCTOR_OFFSET))();
		}

		static ::UnityEngine::RenderTextureFormat get_shadowFormat()
		{
			return ((::UnityEngine::RenderTextureFormat(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADOWUTILSEXT_GET_SHADOWFORMAT_OFFSET))();
		}

		static ::System::Boolean get_forceShadowPointSampling()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADOWUTILSEXT_GET_FORCESHADOWPOINTSAMPLING_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADOWUTILSEXT_INIT_OFFSET))();
		}

	};
}
