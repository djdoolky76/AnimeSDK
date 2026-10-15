#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/OverrideLightType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_CCTOR_OFFSET UNITYSDK_OFFSET(0xE191D80)
#define RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_DOFNAHOEIAO_OFFSET UNITYSDK_OFFSET(0xF2450)
#define RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_HNJCLJMEAJJ_OFFSET UNITYSDK_OFFSET(0xF2440)
#define RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_JHNCMJJMGKK_1_OFFSET UNITYSDK_OFFSET(0xF2430)
#define RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_JHNCMJJMGKK_OFFSET UNITYSDK_OFFSET(0xF2370)

namespace RPG::Client::TAUtils
{
	struct alignas(8) OverrideLightModule
	{
		::RPG::Client::TAUtils::OverrideLightType OverrideLightType; // 0x10
		::UnityEngine::Vector4 OverrideLightPosition; // 0x14
		::UnityEngine::Vector4 OverrideLightDirection; // 0x24
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* OverrideLightTransform; // 0x38
		::UnityEngine::Color OverrideLightColor; // 0x40
		::System::Single OverrideLightIntensity; // 0x50
		::System::Boolean OverrideESParams; // 0x54
		::System::Boolean OverrideESLightParams; // 0x55
		::System::Byte _padding1[0x2];
		::UnityEngine::Color OverrideESAddColor; // 0x58
		::System::Single OverrideESCharacterShadowFactor; // 0x68
		::System::Boolean OverrideESRimParams; // 0x6C
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector2 OverrideESRimLightOffset; // 0x70
		::System::Single OverrideESRimLightWidth; // 0x78
		::System::Single OverrideESRimLightIntensity; // 0x7C
		::UnityEngine::Color OverrideESRimLightColor; // 0x80
		::System::Single OverrideESRimLightAddMode; // 0x90
		::System::Single OverrideESRimShadowIntensity; // 0x94
		::UnityEngine::Color OverrideESRimShadowColor; // 0x98
		::System::Boolean OverrideESHeightLerpParams; // 0xA8
		::System::Byte _padding3[0x3];
		::System::Single OverrideESHeightLerpTop; // 0xAC
		::System::Single OverrideESHeightLerpBottom; // 0xB0
		::UnityEngine::Color OverrideESHeightLerpTopColor; // 0xB4
		::UnityEngine::Color OverrideESHeightLerpMiddleColor; // 0xC4
		::UnityEngine::Color OverrideESHeightLerpBottomColor; // 0xD4
		::System::Boolean OverrideESLevelAdjustParams; // 0xE4
		::System::Boolean OverrideESLevelAdjustOn; // 0xE5
		::System::Byte _padding4[0x2];
		::UnityEngine::Color OverrideESLevelSkinLightColor; // 0xE8
		::UnityEngine::Color OverrideESLevelSkinShadowColor; // 0xF8
		::UnityEngine::Color OverrideESLevelHighLightColor; // 0x108
		::UnityEngine::Color OverrideESLevelShadowColor; // 0x118
		::System::Single OverrideESLevelEyeShadowIntensity; // 0x128
		::System::Single OverrideESLevelShadow; // 0x12C
		::System::Single OverrideESLevelMid; // 0x130
		::System::Single OverrideESLevelHighLight; // 0x134
		::System::Boolean OverrideESEffCustomLight; // 0x138
		::System::Byte _padding5[0x3];
		::UnityEngine::Vector4 _OverrideLightPositionWS; // 0x13C
		::UnityEngine::Color _OverrideLightColor; // 0x14C
		static ::RPG::Client::TAUtils::OverrideLightModule* StaticGet_Default()
		{
			return (::RPG::Client::TAUtils::OverrideLightModule*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x3240);
		}

		static ::System::Int32* StaticGet__CharacterLocalMainLightColor2ShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x23F0);
		}

		static ::System::Int32* StaticGet__ESLevelShadowColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x23F4);
		}

		static ::System::Int32* StaticGet__CharacterWorldSpaceOffsetShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x23F8);
		}

		static ::System::Int32* StaticGet__ESRimLightOffsetShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x23FC);
		}

		static ::System::Int32* StaticGet__ESRimLightColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2400);
		}

		static ::System::Int32* StaticGet__ESRimLightIntensityShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2404);
		}

		static ::System::Int32* StaticGet__ESLevelMidShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2408);
		}

		static ::System::Int32* StaticGet__ESLevelHighLightShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x240C);
		}

		static ::System::Int32* StaticGet__ESRimShadowIntensityShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2410);
		}

		static ::System::Int32* StaticGet__CharacterLocalMainLightColor1ShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2414);
		}

		static ::System::Int32* StaticGet__ESHeightLerpTopShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2418);
		}

		static ::System::Int32* StaticGet__ESLevelAdjustOnShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x241C);
		}

		static ::System::Int32* StaticGet__ESLevelShadowShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2420);
		}

		static ::System::Int32* StaticGet__CharacterLocalMainLightPositionShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2424);
		}

		static ::System::Int32* StaticGet__ESLevelSkinLightColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2428);
		}

		static ::System::Int32* StaticGet__ESAddColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x242C);
		}

		static ::System::Int32* StaticGet__SceneLightPositionShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2430);
		}

		static ::System::Int32* StaticGet__ESHeightLerpMiddleColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2434);
		}

		static ::System::Int32* StaticGet__ESHeightLerpTopColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2438);
		}

		static ::System::Int32* StaticGet__MainLightColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x243C);
		}

		static ::System::Int32* StaticGet__ESLevelEyeShadowIntensityShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2440);
		}

		static ::System::Int32* StaticGet__ESLevelSkinShadowColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2444);
		}

		static ::System::Int32* StaticGet__MainLightPositionShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2448);
		}

		static ::System::Int32* StaticGet__ESCharacterShadowFactorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x244C);
		}

		static ::System::Int32* StaticGet__ESLevelHighLightColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2450);
		}

		static ::System::Int32* StaticGet__CustomMainLightDirShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2454);
		}

		static ::System::Int32* StaticGet__ESRimShadowColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2458);
		}

		static ::System::Int32* StaticGet__ESRimLightAddModeShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x245C);
		}

		static ::System::Int32* StaticGet__ESHeightLerpBottomColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2460);
		}

		static ::System::Int32* StaticGet__ESHeightLerpBottomShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2464);
		}

		static ::System::Int32* StaticGet__ESRimLightWidthShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2468);
		}

		static ::System::Int32* StaticGet__CharacterLocalMainLightColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x246C);
		}

		static ::System::Int32* StaticGet__ESEffCustomLightPositionShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2470);
		}

		static ::System::Int32* StaticGet__ESEffCustomLightDirShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2474);
		}

		static ::System::Int32* StaticGet__SceneLightColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.TAUtils", "OverrideLightModule")->GetStaticField(0x2478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_CCTOR_OFFSET))();
		}

		::System::Void JHNCMJJMGKK(::UnityEngine::Renderer* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_JHNCMJJMGKK_OFFSET))(this, a1, a2);
		}

		::System::Void JHNCMJJMGKK_1(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_JHNCMJJMGKK_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HNJCLJMEAJJ(::UnityEngine::Material* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_HNJCLJMEAJJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DOFNAHOEIAO(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_DOFNAHOEIAO_OFFSET))(this, a1);
		}

	};
}
