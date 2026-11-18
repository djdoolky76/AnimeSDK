#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SampleCountLevel.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBIAS_OFFSET UNITYSDK_OFFSET(0x121B8850)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBLURENABLED_OFFSET UNITYSDK_OFFSET(0x121B8A50)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBLURPASSES_OFFSET UNITYSDK_OFFSET(0x121B8B50)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBLURRADIUS_OFFSET UNITYSDK_OFFSET(0x121B8AD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBLURSHARPNESS_OFFSET UNITYSDK_OFFSET(0x121B8BD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETCACHEAWARE_OFFSET UNITYSDK_OFFSET(0x121B89D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETDOWNSAMPLE_OFFSET UNITYSDK_OFFSET(0x121B8950)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETINTENSITYMULTIONMOBILE_OFFSET UNITYSDK_OFFSET(0x121B8440)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0x121B8630)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETLOWSSAOQUALITY_OFFSET UNITYSDK_OFFSET(0x121B8540)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETPOWEREXPONENT_OFFSET UNITYSDK_OFFSET(0x121B87D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETRADIUSMULTIONMOBILE_OFFSET UNITYSDK_OFFSET(0x121B84C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETRADIUS_OFFSET UNITYSDK_OFFSET(0x121B8750)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x121B85C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETTHICKNESS_OFFSET UNITYSDK_OFFSET(0x121B88D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETTINT_OFFSET UNITYSDK_OFFSET(0x121B86B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x121B8C50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAmplifyOcclusionEffect_TypeDefinitionIndex = 52483;

	class ConfigEntityAmplifyOcclusionEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* radiusMultiOnMobile; // 0x40
		::MoleMole::Config::ScreenEffectFloat* bias; // 0x48
		::MoleMole::Config::ScreenEffectFloat* blurSharpness; // 0x50
		::MoleMole::Config::ScreenEffectBool* downSample; // 0x58
		::MoleMole::Config::ScreenEffectBool* cacheAware; // 0x60
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x68
		::MoleMole::Config::ScreenEffectFloat* intensityMultiOnMobile; // 0x70
		::MoleMole::Config::ScreenEffectBool* blurEnabled; // 0x78
		::MoleMole::Config::ScreenEffectBool* lowSSAOQuality; // 0x80
		::MoleMole::Config::ScreenEffectFloat* blurPasses; // 0x88
		::MoleMole::Config::ScreenEffectFloat* powerExponent; // 0x90
		::MoleMole::Config::ScreenEffectFloat* thickness; // 0x98
		::MoleMole::Config::ScreenEffectColor* tint; // 0xA0
		::MoleMole::Config::ScreenEffectFloat* radius; // 0xA8
		::MoleMole::Config::ScreenEffectFloat* blurRadius; // 0xB0
		::MoleMole::Config::ScreenEffectFieldHandleType sampleCountHandleType; // 0xB8
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0xBC
		::MoleMole::Config::ScreenEffectFieldHandleType radiusHandleType; // 0xC0
		::MoleMole::Config::ScreenEffectFieldHandleType downSampleHandleType; // 0xC4
		::MoleMole::Config::ScreenEffectFieldHandleType lowSSAOQualityHandleType; // 0xC8
		::MoleMole::Config::ScreenEffectFieldHandleType tintHandleType; // 0xCC
		::MoleMole::Config::ScreenEffectFieldHandleType powerExponentHandleType; // 0xD0
		::MoleMole::Config::ScreenEffectFieldHandleType radiusMultiOnMobileHandleType; // 0xD4
		::UnityEngine::NAPRenderPipeline0::SampleCountLevel sampleCount; // 0xD8
		::MoleMole::Config::ScreenEffectFieldHandleType blurEnabledHandleType; // 0xDC
		::MoleMole::Config::ScreenEffectFieldHandleType thicknessHandleType; // 0xE0
		::MoleMole::Config::ScreenEffectFieldHandleType blurPassesHandleType; // 0xE4
		::MoleMole::Config::ScreenEffectFieldHandleType cacheAwareHandleType; // 0xE8
		::MoleMole::Config::ScreenEffectFieldHandleType biasHandleType; // 0xEC
		::MoleMole::Config::ScreenEffectFieldHandleType blurRadiusHandleType; // 0xF0
		::MoleMole::Config::ScreenEffectFieldHandleType blurSharpnessHandleType; // 0xF4
		::MoleMole::Config::ScreenEffectFieldHandleType intensityMultiOnMobileHandleType; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT__CTOR_OFFSET))(this);
		}

		::System::Single GetIntensityMultiOnMobile(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETINTENSITYMULTIONMOBILE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRadiusMultiOnMobile(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETRADIUSMULTIONMOBILE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLowSSAOQuality(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETLOWSSAOQUALITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::SampleCountLevel GetSampleCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::SampleCountLevel(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETSAMPLECOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPowerExponent(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETPOWEREXPONENT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBias(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBIAS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetThickness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETTHICKNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetDownSample(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETDOWNSAMPLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetCacheAware(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETCACHEAWARE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetBlurEnabled(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBLURENABLED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetBlurRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBLURRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetBlurPasses(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBLURPASSES_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBlurSharpness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAMPLIFYOCCLUSIONEFFECT_GETBLURSHARPNESS_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
