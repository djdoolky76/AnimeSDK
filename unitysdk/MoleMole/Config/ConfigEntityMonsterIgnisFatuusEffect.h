#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSACTIVE_OFFSET UNITYSDK_OFFSET(0x1909F900)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSBLURPOW2_OFFSET UNITYSDK_OFFSET(0x190A0D80)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSBLURPOW_OFFSET UNITYSDK_OFFSET(0x190A0400)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLOR2_OFFSET UNITYSDK_OFFSET(0x190A0500)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0x1909FAC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORDISTORTIONINTENSITY2_OFFSET UNITYSDK_OFFSET(0x190A0E00)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORDISTORTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x190A0480)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTURE2_OFFSET UNITYSDK_OFFSET(0x190A07A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTUREUVSCALE2_OFFSET UNITYSDK_OFFSET(0x190A0810)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTUREUVSCALE_OFFSET UNITYSDK_OFFSET(0x1909FEA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTUREUVSPEED2_OFFSET UNITYSDK_OFFSET(0x190A0890)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTUREUVSPEED_OFFSET UNITYSDK_OFFSET(0x1909FF20)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTURE_OFFSET UNITYSDK_OFFSET(0x1909FE30)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLOR_OFFSET UNITYSDK_OFFSET(0x1909FBA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDEPTHMASKOFFSET_OFFSET UNITYSDK_OFFSET(0x1909FA50)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISAPPEAREND_OFFSET UNITYSDK_OFFSET(0x190A1000)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISAPPEARSTART_OFFSET UNITYSDK_OFFSET(0x190A0F80)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISTORTIONINTENSITY2_OFFSET UNITYSDK_OFFSET(0x190A0C80)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISTORTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x190A0300)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISTORTIONOFFSET2_OFFSET UNITYSDK_OFFSET(0x190A0D00)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISTORTIONOFFSET_OFFSET UNITYSDK_OFFSET(0x190A0380)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDOWNSAMPLE_OFFSET UNITYSDK_OFFSET(0x1909F970)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSFADEIN_OFFSET UNITYSDK_OFFSET(0x190A1080)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSFADEOUT_OFFSET UNITYSDK_OFFSET(0x190A1100)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTURE2_OFFSET UNITYSDK_OFFSET(0x190A0B10)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTUREUVSCALE2_OFFSET UNITYSDK_OFFSET(0x190A0B80)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTUREUVSCALE_OFFSET UNITYSDK_OFFSET(0x190A0200)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTUREUVSPEED2_OFFSET UNITYSDK_OFFSET(0x190A0C00)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTUREUVSPEED_OFFSET UNITYSDK_OFFSET(0x190A0280)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTURE_OFFSET UNITYSDK_OFFSET(0x190A0190)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSSELFMASK_OFFSET UNITYSDK_OFFSET(0x1909F9E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSSOFTEDGEPOW_OFFSET UNITYSDK_OFFSET(0x190A0E80)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSSOFTEDGERANGE_OFFSET UNITYSDK_OFFSET(0x190A0F00)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETUSEMONSTERIGNISFATUUSCOLORTEXTUREALPHA_OFFSET UNITYSDK_OFFSET(0x1909FB30)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GET_MONSTERIGNISFATUUSCOLORTEXTURE2_OFFSET UNITYSDK_OFFSET(0x190A05A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GET_MONSTERIGNISFATUUSCOLORTEXTURE_OFFSET UNITYSDK_OFFSET(0x1909FC40)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GET_MONSTERIGNISFATUUSNOISETEXTURE2_OFFSET UNITYSDK_OFFSET(0x190A0910)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GET_MONSTERIGNISFATUUSNOISETEXTURE_OFFSET UNITYSDK_OFFSET(0x1909FFA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x190A1180)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityMonsterIgnisFatuusEffect_TypeDefinitionIndex = 87742;

	class ConfigEntityMonsterIgnisFatuusEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusDistortionOffset; // 0x40
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusBlurPow; // 0x48
		::MoleMole::Config::ScreenEffectColor* monsterIgnisFatuusColor2; // 0x50
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusSoftEdgePow; // 0x58
		::MoleMole::Config::ScreenEffectVector2* monsterIgnisFatuusColorTextureUVSpeed2; // 0x60
		::UnityEngine::Texture2D* _monsterIgnisFatuusNoiseTexture; // 0x68
		::System::String* monsterIgnisFatuusColorTexturePath; // 0x70
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusDistortionIntensity2; // 0x78
		::MoleMole::Config::ScreenEffectVector2* monsterIgnisFatuusNoiseTextureUVSpeed2; // 0x80
		::System::String* monsterIgnisFatuusColorTexture2Path; // 0x88
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusColorDistortionIntensity; // 0x90
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusFadeIn; // 0x98
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusDisappearEnd; // 0xA0
		::System::String* monsterIgnisFatuusNoiseTexture2Path; // 0xA8
		::MoleMole::Config::ScreenEffectColor* monsterIgnisFatuusColor; // 0xB0
		::UnityEngine::Texture2D* _monsterIgnisFatuusColorTexture2; // 0xB8
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusDistortionOffset2; // 0xC0
		::MoleMole::Config::ScreenEffectVector2* monsterIgnisFatuusColorTextureUVScale2; // 0xC8
		::MoleMole::Config::ScreenEffectVector2* monsterIgnisFatuusNoiseTextureUVSpeed; // 0xD0
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusFadeOut; // 0xD8
		::MoleMole::Config::ScreenEffectVector2* monsterIgnisFatuusColorTextureUVSpeed; // 0xE0
		::UnityEngine::Texture2D* _monsterIgnisFatuusNoiseTexture2; // 0xE8
		::MoleMole::Config::ScreenEffectVector2* monsterIgnisFatuusColorTextureUVScale; // 0xF0
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusSoftEdgeRange; // 0xF8
		::MoleMole::Config::ScreenEffectVector2* monsterIgnisFatuusNoiseTextureUVScale; // 0x100
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusBlurPow2; // 0x108
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusDistortionIntensity; // 0x110
		::System::String* monsterIgnisFatuusNoiseTexturePath; // 0x118
		::MoleMole::Config::ScreenEffectVector2* monsterIgnisFatuusNoiseTextureUVScale2; // 0x120
		::UnityEngine::Texture2D* _monsterIgnisFatuusColorTexture; // 0x128
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusDisappearStart; // 0x130
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusColorDistortionIntensity2; // 0x138
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusDistortionIntensity2HandleType; // 0x140
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusDisappearEndHandleType; // 0x144
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColor2HandleType; // 0x148
		::System::Boolean monsterIgnisFatuusSelfMask; // 0x14C
		::System::Boolean monsterIgnisFatuusActive; // 0x14D
		::System::Boolean useMonsterIgnisFatuusColorTextureAlpha; // 0x14E
		::System::Byte _padding0[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusDisappearStartHandleType; // 0x150
		::MoleMole::Config::ScreenEffectFieldHandleType useMonsterIgnisFatuusColorTextureAlphaHandleType; // 0x154
		::System::Int32 monsterIgnisFatuusDownSample; // 0x158
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusNoiseTextureUVSpeedHandleType; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusSelfMaskHandleType; // 0x160
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusDistortionOffset2HandleType; // 0x164
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorBlendModeHandleType; // 0x168
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusNoiseTextureUVScale2HandleType; // 0x16C
		::System::Single monsterIgnisFatuusDepthMaskOffset; // 0x170
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusDepthMaskOffsetHandleType; // 0x174
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorTextureUVSpeedHandleType; // 0x178
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorTextureUVScaleHandleType; // 0x17C
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusActiveHandleType; // 0x180
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusBlurPow2HandleType; // 0x184
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusNoiseTextureHandleType; // 0x188
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorTextureUVSpeed2HandleType; // 0x18C
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusSoftEdgeRangeHandleType; // 0x190
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusNoiseTextureUVSpeed2HandleType; // 0x194
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorDistortionIntensityHandleType; // 0x198
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorTextureUVScale2HandleType; // 0x19C
		::UnityEngine::Rendering::Universal::BlendModes monsterIgnisFatuusColorBlendMode; // 0x1A0
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusNoiseTexture2HandleType; // 0x1A4
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorTextureHandleType; // 0x1A8
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusNoiseTextureUVScaleHandleType; // 0x1AC
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusFadeInHandleType; // 0x1B0
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusDistortionOffsetHandleType; // 0x1B4
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorHandleType; // 0x1B8
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusBlurPowHandleType; // 0x1BC
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusFadeOutHandleType; // 0x1C0
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorDistortionIntensity2HandleType; // 0x1C4
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusDownSampleHandleType; // 0x1C8
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorTexture2HandleType; // 0x1CC
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusSoftEdgePowHandleType; // 0x1D0
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusDistortionIntensityHandleType; // 0x1D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetMonsterIgnisFatuusActive(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSACTIVE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetMonsterIgnisFatuusDownSample(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDOWNSAMPLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetMonsterIgnisFatuusSelfMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSSELFMASK_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusDepthMaskOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDEPTHMASKOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::BlendModes GetMonsterIgnisFatuusColorBlendMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::BlendModes(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORBLENDMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseMonsterIgnisFatuusColorTextureAlpha(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETUSEMONSTERIGNISFATUUSCOLORTEXTUREALPHA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetMonsterIgnisFatuusColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_monsterIgnisFatuusColorTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GET_MONSTERIGNISFATUUSCOLORTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* GetMonsterIgnisFatuusColorTexture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMonsterIgnisFatuusColorTextureUVScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTUREUVSCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMonsterIgnisFatuusColorTextureUVSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTUREUVSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_monsterIgnisFatuusNoiseTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GET_MONSTERIGNISFATUUSNOISETEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* GetMonsterIgnisFatuusNoiseTexture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMonsterIgnisFatuusNoiseTextureUVScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTUREUVSCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMonsterIgnisFatuusNoiseTextureUVSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTUREUVSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusDistortionIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISTORTIONINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusDistortionOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISTORTIONOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusBlurPow(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSBLURPOW_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusColorDistortionIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORDISTORTIONINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetMonsterIgnisFatuusColor2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLOR2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_monsterIgnisFatuusColorTexture2()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GET_MONSTERIGNISFATUUSCOLORTEXTURE2_OFFSET))(this);
		}

		::UnityEngine::Texture* GetMonsterIgnisFatuusColorTexture2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTURE2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMonsterIgnisFatuusColorTextureUVScale2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTUREUVSCALE2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMonsterIgnisFatuusColorTextureUVSpeed2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTUREUVSPEED2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_monsterIgnisFatuusNoiseTexture2()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GET_MONSTERIGNISFATUUSNOISETEXTURE2_OFFSET))(this);
		}

		::UnityEngine::Texture* GetMonsterIgnisFatuusNoiseTexture2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTURE2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMonsterIgnisFatuusNoiseTextureUVScale2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTUREUVSCALE2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMonsterIgnisFatuusNoiseTextureUVSpeed2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTUREUVSPEED2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusDistortionIntensity2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISTORTIONINTENSITY2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusDistortionOffset2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISTORTIONOFFSET2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusBlurPow2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSBLURPOW2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusColorDistortionIntensity2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORDISTORTIONINTENSITY2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusSoftEdgePow(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSSOFTEDGEPOW_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusSoftEdgeRange(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSSOFTEDGERANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusDisappearStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISAPPEARSTART_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusDisappearEnd(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISAPPEAREND_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusFadeIn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSFADEIN_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusFadeOut(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSFADEOUT_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
