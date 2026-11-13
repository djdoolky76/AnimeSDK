#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace UnityEngine { class RenderTexture; }

#define RPG_CUSTOMRP_UIPASSSETTINGS_CCTOR_OFFSET UNITYSDK_OFFSET(0x2074F270)
#define RPG_CUSTOMRP_UIPASSSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x2074F260)
#define RPG_CUSTOMRP_UIPASSSETTINGS_GET_SCENEPOSTPROCESSRENDERTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x2074F200)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int UIPassSettings_TypeDefinitionIndex = 38503;

	class UIPassSettings : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::System::Boolean>>** StaticGet_OffScreenUIContexts()
		{
			return (::Il2CppArray<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::System::Boolean>>**)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x19FD0);
		}

		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_BlurPartialParamsB()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x19FD8);
		}

		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_BlurPartialParamsA()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x19FE0);
		}

		static ::System::Int32* StaticGet_RectCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5BF0);
		}

		static ::System::Single* StaticGet_BlurFullScale()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5BF4);
		}

		static ::System::Int32* StaticGet_UILayer2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5BF8);
		}

		static ::RPG::CustomRP::Quality* StaticGet_Quality()
		{
			return (::RPG::CustomRP::Quality*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5BFC);
		}

		static ::System::Single* StaticGet_BlurPartialAlpha()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C00);
		}

		static ::System::Single* StaticGet_VignetteSmoothness()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C04);
		}

		static ::System::Single* StaticGet_VignetteIntensity()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C08);
		}

		static ::UnityEngine::Color* StaticGet_VignetteColor()
		{
			return (::UnityEngine::Color*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C0C);
		}

		static ::System::Single* StaticGet_Alpha()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C1C);
		}

		static ::System::Boolean* StaticGet_EnableBlurFull()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C20);
		}

		static ::System::Boolean* StaticGet_VignetteRounded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C21);
		}

		static ::System::Boolean* StaticGet_EnableVignette()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C22);
		}

		static ::System::Int32* StaticGet_UILayer1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C24);
		}

		static ::System::Int32* StaticGet_UILayer3()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C28);
		}

		static ::System::Boolean* StaticGet_EnableOffScreenUI()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C2C);
		}

		static ::System::Boolean* StaticGet_BlurFullDisableUI3DCamera()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C2D);
		}

		static ::System::Boolean* StaticGet_EnableBlurPartial()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C2E);
		}

		static ::System::Boolean* StaticGet_DisableMainCamera()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C2F);
		}

		static ::System::Int32* StaticGet_VersionIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C30);
		}

		static ::UnityEngine::Vector4* StaticGet_BlurPartialSmooth()
		{
			return (::UnityEngine::Vector4*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C34);
		}

		static ::System::Single* StaticGet_Brightness()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C44);
		}

		static ::System::Int32* StaticGet_CircleCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C48);
		}

		static ::System::Single* StaticGet_BlurPartialScale()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C4C);
		}

		static ::UnityEngine::Vector2* StaticGet_VignetteCenter()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("RPG.CustomRP", "UIPassSettings")->GetStaticField(0x5C50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPASSSETTINGS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPASSSETTINGS_CCTOR_OFFSET))();
		}

		static ::System::Boolean get_ScenePostProcessRenderToTexture()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPASSSETTINGS_GET_SCENEPOSTPROCESSRENDERTOTEXTURE_OFFSET))();
		}

	};
}
