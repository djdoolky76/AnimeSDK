#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x192C0490)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x192C03B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x192CA780)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x192C00F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x192C05B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x192C04F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x192C0610)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x192C5DB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x192C2F70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x192C0770)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x192CACC0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyMainMapsModifier_TypeDefinitionIndex = 40663;

	class ConfigMaterialPropertyMainMapsModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _MainTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _ThreadMap; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _OtherDataTex2; // 0xA8
		::MoleMole::MaterialPropertyModifierValueTexture _EyeColorMap; // 0xD8
		::MoleMole::MaterialPropertyModifierValueTexture _ChannelMixTex; // 0x108
		::MoleMole::MaterialPropertyModifierValueTexture _OtherDataTex; // 0x138
		::MoleMole::MaterialPropertyModifierValueTexture _LightTex; // 0x168
		::MoleMole::MaterialPropertyModifierValueFloat _DoubleSided; // 0x198
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity3; // 0x1A0
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor5; // 0x1A8
		::MoleMole::MaterialPropertyModifierValueFloat _SkinMatId; // 0x1BC
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor2; // 0x1C4
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness4; // 0x1D8
		::MoleMole::MaterialPropertyModifierValueFloat _ChannelMixerUsingUV4; // 0x1E0
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor3; // 0x1E8
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular; // 0x1FC
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor3; // 0x204
		::MoleMole::MaterialPropertyModifierValueFloat _Emission; // 0x218
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness4; // 0x220
		::MoleMole::MaterialPropertyModifierValueFloat _OutlineWidth; // 0x228
		::MoleMole::MaterialPropertyModifierValueFloat _MaxOutlineZOffset; // 0x230
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape5; // 0x238
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor5; // 0x240
		::UnityEngine::Color _ColorRef; // 0x254
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange2; // 0x264
		::MoleMole::MaterialPropertyModifierValueFloat _Metallic; // 0x26C
		::MoleMole::MaterialPropertyModifierValueFloat _UseChannelMixer; // 0x274
		::MoleMole::MaterialPropertyModifierValueColor _Color; // 0x27C
		::MoleMole::MaterialPropertyModifierValueColor _BChannelColorPrecomputed; // 0x290
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular3; // 0x2A4
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape4; // 0x2AC
		::MoleMole::MaterialPropertyModifierValueFloat _OverlayTexScale; // 0x2B4
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor; // 0x2BC
		::MoleMole::MaterialPropertyModifierValueFloat _Anisotropy; // 0x2D0
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize5; // 0x2D8
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular5; // 0x2E0
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange3; // 0x2E8
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor3; // 0x2F0
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize; // 0x304
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor4; // 0x30C
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness5; // 0x320
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape; // 0x328
		::MoleMole::MaterialPropertyModifierValueVector _SilkPackedParams0; // 0x330
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor; // 0x348
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape2; // 0x35C
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness2; // 0x364
		::MoleMole::MaterialPropertyModifierValueColor _RChannelColorPrecomputed; // 0x36C
		::MoleMole::MaterialPropertyModifierValueColor _AChannelColorPrecomputed; // 0x380
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness2; // 0x394
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor4; // 0x39C
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor4; // 0x3B0
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor5; // 0x3C4
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor4; // 0x3D8
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor4; // 0x3EC
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor4; // 0x400
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape3; // 0x414
		::MoleMole::MaterialPropertyModifierValueFloat _SpecIntensity; // 0x41C
		::MoleMole::MaterialPropertyModifierValueFloat _BumpScale; // 0x424
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor; // 0x42C
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor3; // 0x440
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize4; // 0x454
		::MoleMole::MaterialPropertyModifierValueFloat _Glossiness; // 0x45C
		::MoleMole::MaterialPropertyModifierValueColor _SilkFresnelColorEdge; // 0x464
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor2; // 0x478
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular4; // 0x48C
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor5; // 0x494
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange4; // 0x4A8
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize3; // 0x4B0
		::MoleMole::MaterialPropertyModifierValueFloat _SymmetryUV; // 0x4B8
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor; // 0x4C0
		::MoleMole::MaterialPropertyModifierValueColor _GChannelColorPrecomputed; // 0x4D4
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular2; // 0x4E8
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange5; // 0x4F0
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor2; // 0x4F8
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange; // 0x50C
		::UnityEngine::Color _ColorDefault; // 0x514
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor3; // 0x524
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness; // 0x538
		::MoleMole::MaterialPropertyModifierValueFloat _UseOverlayTex; // 0x540
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor2; // 0x548
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness3; // 0x55C
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor5; // 0x564
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity2; // 0x578
		::MoleMole::MaterialPropertyModifierValueFloat _Cull; // 0x580
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor2; // 0x588
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor5; // 0x59C
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity; // 0x5B0
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize2; // 0x5B8
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity4; // 0x5C0
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor3; // 0x5C8
		::MoleMole::MaterialPropertyModifierValueFloat _RenderType; // 0x5DC
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness; // 0x5E4
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor; // 0x5EC
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness5; // 0x600
		::MoleMole::MaterialPropertyModifierValueColor _SilkFresnelColorFront; // 0x608
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor; // 0x61C
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor2; // 0x630
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness3; // 0x644
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity5; // 0x64C
		::MoleMole::MaterialPropertyModifierValueFloat _MaterialNum; // 0x654

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
