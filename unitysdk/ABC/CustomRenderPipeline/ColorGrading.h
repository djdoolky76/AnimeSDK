#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeComponent.h"
#include "unitysdk/BDC595893C6EE433/B1CEBF4F391B01CE.h"

class BA8E322398FEDDAF_F97B389C173BBBF6;
class BE1E11B808A636AE;
class FD13E078C250FD12;
namespace ABC::CustomRenderPipeline { class ColorGradingQualityParameter; }
namespace ABC::CustomRenderPipeline { class TrackBallParameter; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }

#define ABC_CUSTOMRENDERPIPELINE_COLORGRADING_EXECUTE_OFFSET UNITYSDK_OFFSET(0x27CC570)
#define ABC_CUSTOMRENDERPIPELINE_COLORGRADING_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27CD880)
#define ABC_CUSTOMRENDERPIPELINE_COLORGRADING_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x27CD920)
#define ABC_CUSTOMRENDERPIPELINE_COLORGRADING_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define ABC_CUSTOMRENDERPIPELINE_COLORGRADING_SETCOLORGRADINGTEX_OFFSET UNITYSDK_OFFSET(0x27CD960)
#define ABC_CUSTOMRENDERPIPELINE_COLORGRADING__CTOR_OFFSET UNITYSDK_OFFSET(0x27CDA60)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int ColorGrading_TypeDefinitionIndex = 16734;

	class ColorGrading : public ::UnityEngine::Rendering::VolumeComponent
	{
	public:
		static ::UnityEngine::ComputeShader** StaticGet_m_cs_ColorGrading()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(ColorGrading_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_m_csKernel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGrading_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::ABC::CustomRenderPipeline::ColorGradingQualityParameter* quality; // 0x38
		::ABC::CustomRenderPipeline::TrackBallParameter* ccGlobalSaturation; // 0x40
		::ABC::CustomRenderPipeline::TrackBallParameter* ccGlobalContrast; // 0x48
		::ABC::CustomRenderPipeline::TrackBallParameter* ccGlobalGamma; // 0x50
		::ABC::CustomRenderPipeline::TrackBallParameter* ccGlobalGain; // 0x58
		::ABC::CustomRenderPipeline::TrackBallParameter* ccGlobalOffset; // 0x60
		::ABC::CustomRenderPipeline::TrackBallParameter* ccShadowSaturation; // 0x68
		::ABC::CustomRenderPipeline::TrackBallParameter* ccShadowContrast; // 0x70
		::ABC::CustomRenderPipeline::TrackBallParameter* ccShadowGamma; // 0x78
		::ABC::CustomRenderPipeline::TrackBallParameter* ccShadowGain; // 0x80
		::ABC::CustomRenderPipeline::TrackBallParameter* ccShadowOffset; // 0x88
		::ABC::CustomRenderPipeline::TrackBallParameter* ccMidSaturation; // 0x90
		::ABC::CustomRenderPipeline::TrackBallParameter* ccMidContrast; // 0x98
		::ABC::CustomRenderPipeline::TrackBallParameter* ccMidGamma; // 0xA0
		::ABC::CustomRenderPipeline::TrackBallParameter* ccMidGain; // 0xA8
		::ABC::CustomRenderPipeline::TrackBallParameter* ccMidOffset; // 0xB0
		::ABC::CustomRenderPipeline::TrackBallParameter* ccHighlightSaturation; // 0xB8
		::ABC::CustomRenderPipeline::TrackBallParameter* ccHighlightContrast; // 0xC0
		::ABC::CustomRenderPipeline::TrackBallParameter* ccHighlightGamma; // 0xC8
		::ABC::CustomRenderPipeline::TrackBallParameter* ccHighlightGain; // 0xD0
		::ABC::CustomRenderPipeline::TrackBallParameter* ccHighlightOffset; // 0xD8
		::UnityEngine::Rendering::ClampedFloatParameter* ccShadowMax; // 0xE0
		::UnityEngine::Rendering::ClampedFloatParameter* ccHighlightsMin; // 0xE8
		::UnityEngine::Rendering::ClampedFloatParameter* ccHighlightsMax; // 0xF0
		::UnityEngine::Rendering::ClampedFloatParameter* colorTemperature; // 0xF8
		::UnityEngine::Rendering::ClampedFloatParameter* colorTemperatureTint; // 0x100
		::UnityEngine::Rendering::ClampedFloatParameter* expandGamut; // 0x108
		::UnityEngine::Rendering::ClampedFloatParameter* toneCurveAmount; // 0x110

		static ::System::Void Execute(::BDC595893C6EE433::B1CEBF4F391B01CE E6CE7391633EEC68, ::FD13E078C250FD12* BBA37BE3F1DE1B88, ::BE1E11B808A636AE*& AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::B1CEBF4F391B01CE, ::FD13E078C250FD12*, ::BE1E11B808A636AE*&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_COLORGRADING_EXECUTE_OFFSET))(E6CE7391633EEC68, BBA37BE3F1DE1B88, AFE8F10692F5139F);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_COLORGRADING_ISTILECOMPATIBLE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_COLORGRADING__CTOR_OFFSET))(this);
		}

		static ::System::Void SetColorGradingTex(::BDC595893C6EE433::B1CEBF4F391B01CE E6CE7391633EEC68, ::FD13E078C250FD12* BBA37BE3F1DE1B88, ::BE1E11B808A636AE*& AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::B1CEBF4F391B01CE, ::FD13E078C250FD12*, ::BE1E11B808A636AE*&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_COLORGRADING_SETCOLORGRADINGTEX_OFFSET))(E6CE7391633EEC68, BBA37BE3F1DE1B88, AFE8F10692F5139F);
		}

		static ::System::Void Initialize(::BA8E322398FEDDAF_F97B389C173BBBF6* FC8953071E7A75C8)
		{
			return ((::System::Void(*)(::BA8E322398FEDDAF_F97B389C173BBBF6*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_COLORGRADING_INITIALIZE_OFFSET))(FC8953071E7A75C8);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_COLORGRADING_ISACTIVE_OFFSET))(this);
		}
	};
}
