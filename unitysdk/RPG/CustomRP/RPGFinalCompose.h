#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::CustomRP { class MaterialLibrary; }
namespace RPG::CustomRP { class RPGAdditionalColorGrading; }
namespace RPG::CustomRP { class RPGBlink; }
namespace RPG::CustomRP { class RPGBloomRenderer; }
namespace RPG::CustomRP { class RPGChromaticAberration; }
namespace RPG::CustomRP { class RPGColorGrading; }
namespace RPG::CustomRP { class RPGFXAA; }
namespace RPG::CustomRP { class RPGLensDistortion; }
namespace RPG::CustomRP { class RPGPolaroid; }
namespace RPG::CustomRP { class RPGSpeedLine; }
namespace RPG::CustomRP { class RPGTonemapping; }
namespace RPG::CustomRP { class RPGVignette; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class HableCurve; }

#define RPG_CUSTOMRP_RPGFINALCOMPOSE_CACHELUTPARAMS_OFFSET UNITYSDK_OFFSET(0x198ECAB0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_CTOR_OFFSET UNITYSDK_OFFSET(0x198E53C0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_DUMPTONEMAPPINGDATA_OFFSET UNITYSDK_OFFSET(0x198E55C0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x198E5440)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_GET_CURRENTHDRHEADROOM_OFFSET UNITYSDK_OFFSET(0x198ECA80)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x198E6680)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_ISADDITIONALCOLORGRADINGENABLED_OFFSET UNITYSDK_OFFSET(0x198E5A00)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_ISLUTDIRTY_OFFSET UNITYSDK_OFFSET(0x198EC100)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_ISRARELYUSEDEFFECTSENABLED_OFFSET UNITYSDK_OFFSET(0x198E5B00)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_RELEASE_OFFSET UNITYSDK_OFFSET(0x198E5530)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_SETUPFINALOUTPUT_OFFSET UNITYSDK_OFFSET(0x198E5520)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_UPDATE_OFFSET UNITYSDK_OFFSET(0x198E5430)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__GENERATELUTIFNEEDED_OFFSET UNITYSDK_OFFSET(0x198E9ED0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__GENERATELUT_OFFSET UNITYSDK_OFFSET(0x198ED450)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__ISCOLORGRADINGBAKELUT_OFFSET UNITYSDK_OFFSET(0x198E7880)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPADDITIONALCOLORGRADING_OFFSET UNITYSDK_OFFSET(0x198E5B70)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPBLINK_OFFSET UNITYSDK_OFFSET(0x198E91D0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPCHROMATICABERRATION_OFFSET UNITYSDK_OFFSET(0x198EA120)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPCOLORGRADING_OFFSET UNITYSDK_OFFSET(0x198E78C0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPFXAA_OFFSET UNITYSDK_OFFSET(0x198EBF20)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPLENSDISTORTION_OFFSET UNITYSDK_OFFSET(0x198EB2F0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPPOLAROID_OFFSET UNITYSDK_OFFSET(0x198E89C0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPSPEEDLINE_OFFSET UNITYSDK_OFFSET(0x198EA400)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPTONEMAPPING_OFFSET UNITYSDK_OFFSET(0x198EDA10)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPVIGNETTE_OFFSET UNITYSDK_OFFSET(0x198EA270)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__UBERBLIT_OFFSET UNITYSDK_OFFSET(0x198EBA50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGFinalCompose_TypeDefinitionIndex = 38741;

	class RPGFinalCompose : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::UnityEngine::RenderTexture* _CachedLutRT; // 0x28
		::UnityEngine::Material* _Fxaa; // 0x30
		::RPG::CustomRP::RPGBloomRenderer* _BloomRenderer; // 0x38
		::UnityEngine::Texture2D* _InternalSpeedlineSeed; // 0x40
		::UnityEngine::Material* _LutBake; // 0x48
		::UnityEngine::Material* _Uber; // 0x50
		::UnityEngine::Rendering::HableCurve* _HableCurve; // 0x58
		::UnityEngine::Texture2D* _InternalSpectralLut; // 0x60
		::UnityEngine::Color _CachedLevelColor; // 0x68
		::System::Single _CachedToeLength; // 0x78
		::System::Int32 _OutputRT; // 0x7C
		::System::Single _CachedShoulderStrength; // 0x80
		::UnityEngine::Vector4 _CachedColorGainHighlight; // 0x84
		::UnityEngine::Vector4 _CachedColorGainMidtone; // 0x94
		::UnityEngine::Vector4 _CachedColorContrastGlobal; // 0xA4
		::System::Single _CachedLevelShadowTone; // 0xB4
		::System::Single _CachedHDRHeadroom; // 0xB8
		::System::Single _CachedGamma; // 0xBC
		::UnityEngine::Vector4 _CachedColorSaturationGlobal; // 0xC0
		::UnityEngine::Vector4 _CachedColorSaturationHighlight; // 0xD0
		::System::Int32 _GenerateFrameCount; // 0xE0
		::System::Single _CachedShoulderLength; // 0xE4
		::UnityEngine::Vector4 _LutParam; // 0xE8
		::System::Single _CachedToeStrength; // 0xF8
		::UnityEngine::Vector4 _CachedColorSaturationMidtone; // 0xFC
		::System::Single _CachedExpandGamut; // 0x10C
		::System::Single _CachedColorCorrectionHighlightMin; // 0x110
		::System::Single _CachedColorCorrectionShadowMax; // 0x114
		::UnityEngine::Vector4 _CachedColorContrastMidtone; // 0x118
		::UnityEngine::Vector4 _CachedColorContrastShadow; // 0x128
		::UnityEngine::Vector4 _CachedColorGainGlobal; // 0x138
		::UnityEngine::Vector4 _CachedColorContrastHighlight; // 0x148
		::System::Single _CachedLevelHighTone; // 0x158
		::UnityEngine::Vector4 _CachedColorGainShadow; // 0x15C
		::UnityEngine::Vector4 _CachedColorSaturationShadow; // 0x16C
		::System::Boolean _CachedColorGradingEnable; // 0x17C
		::System::Boolean _CachedDebugEnableGamutClipping; // 0x17D
		::System::Boolean _CachedForceDisableToneMapping; // 0x17E
		::System::Boolean _CachedTonemappingEnable; // 0x17F
		::System::Boolean _CachedHDRActive; // 0x180
		::System::Boolean _CachedDebugHDROutputIntermediate; // 0x181
		::System::Byte _padding0[0x2];
		::System::Single _CachedShoulderAngle; // 0x184
		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* a1, ::RPG::CustomRP::RPGBloomRenderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*, ::RPG::CustomRP::RPGBloomRenderer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_UPDATE_OFFSET))(this);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_FRAMECLEANUP_OFFSET))(this, a1);
		}

		::System::Void SetupFinalOutput(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_SETUPFINALOUTPUT_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_RELEASE_OFFSET))(this);
		}

		::System::Void DumpTonemappingData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_DUMPTONEMAPPINGDATA_OFFSET))(this);
		}

		::System::Boolean IsAdditionalColorGradingEnabled(::RPG::CustomRP::RPGAdditionalColorGrading* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::RPGAdditionalColorGrading*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_ISADDITIONALCOLORGRADINGENABLED_OFFSET))(this, a1);
		}

		::System::Boolean IsRarelyUsedEffectsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_ISRARELYUSEDEFFECTSENABLED_OFFSET))(this);
		}

		::System::Void _SetupAdditionalColorGrading(::RPG::CustomRP::RPGAdditionalColorGrading* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGAdditionalColorGrading*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPADDITIONALCOLORGRADING_OFFSET))(this, a1);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_INNEREXECUTE_OFFSET))(this, a1);
		}

		::System::Void _SetupChromaticAberration(::RPG::CustomRP::RPGChromaticAberration* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGChromaticAberration*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPCHROMATICABERRATION_OFFSET))(this, a1);
		}

		::System::Void _SetupVignette(::RPG::CustomRP::RPGVignette* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGVignette*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPVIGNETTE_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupSpeedLine(::RPG::CustomRP::RPGSpeedLine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGSpeedLine*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPSPEEDLINE_OFFSET))(this, a1);
		}

		::System::Boolean _IsColorGradingBakeLUT(::RPG::CustomRP::RPGColorGrading* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::RPGColorGrading*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__ISCOLORGRADINGBAKELUT_OFFSET))(this, a1);
		}

		::System::Boolean IsLUTDirty(::RPG::CustomRP::RPGTonemapping* a1, ::RPG::CustomRP::RPGColorGrading* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::RPGTonemapping*, ::RPG::CustomRP::RPGColorGrading*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_ISLUTDIRTY_OFFSET))(this, a1, a2);
		}

		::System::Void CacheLUTParams(::RPG::CustomRP::RPGTonemapping* a1, ::RPG::CustomRP::RPGColorGrading* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGTonemapping*, ::RPG::CustomRP::RPGColorGrading*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_CACHELUTPARAMS_OFFSET))(this, a1, a2);
		}

		::System::Void _GenerateLutIfNeeded(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RPGTonemapping* a2, ::RPG::CustomRP::RPGColorGrading* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGTonemapping*, ::RPG::CustomRP::RPGColorGrading*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__GENERATELUTIFNEEDED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_currentHDRHeadroom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_GET_CURRENTHDRHEADROOM_OFFSET))(this);
		}

		::System::Void _GenerateLut(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RPGTonemapping* a2, ::RPG::CustomRP::RPGColorGrading* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGTonemapping*, ::RPG::CustomRP::RPGColorGrading*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__GENERATELUT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SetupTonemapping(::RPG::CustomRP::RPGTonemapping* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGTonemapping*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPTONEMAPPING_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupColorGrading(::RPG::CustomRP::RPGColorGrading* a1, ::UnityEngine::Material* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGColorGrading*, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPCOLORGRADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetupPolaroid(::RPG::CustomRP::RPGPolaroid* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGPolaroid*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPPOLAROID_OFFSET))(this, a1);
		}

		::System::Void _SetupBlink(::RPG::CustomRP::RPGBlink* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGBlink*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPBLINK_OFFSET))(this, a1);
		}

		::System::Void _SetupLensDistortion(::RPG::CustomRP::RPGLensDistortion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGLensDistortion*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPLENSDISTORTION_OFFSET))(this, a1);
		}

		::System::Void _UberBlit(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__UBERBLIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetupFxaa(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RPGFXAA* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGFXAA*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPFXAA_OFFSET))(this, a1, a2, a3);
		}

	};
}
