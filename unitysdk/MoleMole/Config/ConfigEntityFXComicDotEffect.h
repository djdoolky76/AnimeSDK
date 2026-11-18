#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETOUTLINEDEPTHTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x16537FE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETOUTLINEDIFFOFFSET_OFFSET UNITYSDK_OFFSET(0x16537F60)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETOUTLINEINUBERSHADER_OFFSET UNITYSDK_OFFSET(0x165381E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETOUTLINENORMALDIFFTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x16538060)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETOUTLINENORMALTHRESHOLDSCALE_OFFSET UNITYSDK_OFFSET(0x16538160)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETOUTLINENORMALTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x165380E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETOUTLINEON_OFFSET UNITYSDK_OFFSET(0x16537E60)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETOUTLINEOPACITY_OFFSET UNITYSDK_OFFSET(0x16537EE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETPIXELATIONON_OFFSET UNITYSDK_OFFSET(0x16537D60)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETPIXELSIZE_OFFSET UNITYSDK_OFFSET(0x16537DE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16538260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityFXComicDotEffect_TypeDefinitionIndex = 46711;

	class ConfigEntityFXComicDotEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectBool* outlineOn; // 0x40
		::MoleMole::Config::ScreenEffectFloat* pixelSize; // 0x48
		::MoleMole::Config::ScreenEffectBool* outlineInUberShader; // 0x50
		::MoleMole::Config::ScreenEffectFloat* outlineDiffOffset; // 0x58
		::MoleMole::Config::ScreenEffectFloat* outlineOpacity; // 0x60
		::MoleMole::Config::ScreenEffectFloat* outlineNormalThreshold; // 0x68
		::MoleMole::Config::ScreenEffectFloat* outlineDepthThreshold; // 0x70
		::MoleMole::Config::ScreenEffectFloat* outlineNormalDiffThreshold; // 0x78
		::MoleMole::Config::ScreenEffectBool* pixelationOn; // 0x80
		::MoleMole::Config::ScreenEffectFloat* outlineNormalThresholdScale; // 0x88
		::MoleMole::Config::ScreenEffectFieldHandleType outlineOnHandleType; // 0x90
		::MoleMole::Config::ScreenEffectFieldHandleType outlineInUberShaderHandleType; // 0x94
		::MoleMole::Config::ScreenEffectFieldHandleType pixelSizeHandleType; // 0x98
		::MoleMole::Config::ScreenEffectFieldHandleType outlineNormalThresholdHandleType; // 0x9C
		::MoleMole::Config::ScreenEffectFieldHandleType pixelationOnHandleType; // 0xA0
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDiffOffsetHandleType; // 0xA4
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDepthThresholdHandleType; // 0xA8
		::MoleMole::Config::ScreenEffectFieldHandleType outlineOpacityHandleType; // 0xAC
		::MoleMole::Config::ScreenEffectFieldHandleType outlineNormalDiffThresholdHandleType; // 0xB0
		::MoleMole::Config::ScreenEffectFieldHandleType outlineNormalThresholdScaleHandleType; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetPixelationOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETPIXELATIONON_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPixelSize(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETPIXELSIZE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOutlineOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETOUTLINEON_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetOutlineOpacity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETOUTLINEOPACITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetOutlineDiffOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETOUTLINEDIFFOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetOutlineDepthThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETOUTLINEDEPTHTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetOutlineNormalDiffThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETOUTLINENORMALDIFFTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetOutlineNormalThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETOUTLINENORMALTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetOutlineNormalThresholdScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETOUTLINENORMALTHRESHOLDSCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOutlineInUberShader(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOMICDOTEFFECT_GETOUTLINEINUBERSHADER_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
