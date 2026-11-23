#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDC595893C6EE433/E62B6E53F892264C.h"
#include "unitysdk/UnityEngine/Rendering/VolumeComponent.h"
#include "unitysdk/BDC595893C6EE433/B1CEBF4F391B01CE.h"

class BA8E322398FEDDAF_F97B389C173BBBF6;
class BE1E11B808A636AE;
class FD13E078C250FD12;
namespace ABC::CustomRenderPipeline { class RadialBlurQualityParameter; }
namespace BDC595893C6EE433 { class EC81A325BE4ED2E9; }
namespace UnityEngine { class E2E2311225330715; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class ClampedIntParameter; }

#define ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x27914F0)
#define ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2791830)
#define ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2791880)
#define ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_INLEXECUTEDIRECTION_OFFSET UNITYSDK_OFFSET(0x2791940)
#define ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_INLEXECUTERADIAL_OFFSET UNITYSDK_OFFSET(0x2791DB0)
#define ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x2792370)
#define ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0x27923B0)
#define ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_PREPARE_OFFSET UNITYSDK_OFFSET(0x2792470)
#define ABC_CUSTOMRENDERPIPELINE_RADIALBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x27926A0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int RadialBlur_TypeDefinitionIndex = 16586;

	class RadialBlur : public ::UnityEngine::Rendering::VolumeComponent
	{
	public:
		static ::BE1E11B808A636AE** StaticGet_m_RTHalf()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(RadialBlur_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::BE1E11B808A636AE** StaticGet_m_RTRadialBlur()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(RadialBlur_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::BE1E11B808A636AE** StaticGet_m_RTDirectionBlur()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(RadialBlur_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::BE1E11B808A636AE** StaticGet_m_RTChromaticAberraion()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(RadialBlur_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::BDC595893C6EE433::E62B6E53F892264C* StaticGet_m_KWRadial()
		{
			return (::BDC595893C6EE433::E62B6E53F892264C*)Il2CppClass::FromTypeDefinitionIndex(RadialBlur_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::UnityEngine::Material** StaticGet_m_MatBlur()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(RadialBlur_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::UnityEngine::Material** StaticGet_m_MatUber()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(RadialBlur_TypeDefinitionIndex)->GetStaticField(0x38);
		}
		static ::UnityEngine::E2E2311225330715** StaticGet_m_MPB()
		{
			return (::UnityEngine::E2E2311225330715**)Il2CppClass::FromTypeDefinitionIndex(RadialBlur_TypeDefinitionIndex)->GetStaticField(0x40);
		}
		::ABC::CustomRenderPipeline::RadialBlurQualityParameter* quality; // 0x38
		::UnityEngine::Rendering::ClampedFloatParameter* RadialBlurX; // 0x40
		::UnityEngine::Rendering::ClampedFloatParameter* RadialBlurY; // 0x48
		::UnityEngine::Rendering::ClampedFloatParameter* RadialBlurRadius; // 0x50
		::UnityEngine::Rendering::ClampedIntParameter* RadialIteration; // 0x58
		::UnityEngine::Rendering::ClampedFloatParameter* RadialStart; // 0x60
		::UnityEngine::Rendering::ClampedFloatParameter* RadialFeather; // 0x68
		::UnityEngine::Rendering::BoolParameter* RadialBlurBounded; // 0x70
		::UnityEngine::Rendering::BoolParameter* EnableDirectionBlur; // 0x78
		::UnityEngine::Rendering::ClampedIntParameter* DirectionBlurIteration; // 0x80
		::UnityEngine::Rendering::ClampedFloatParameter* DirectionBlurRadius; // 0x88
		::UnityEngine::Rendering::ClampedFloatParameter* DirectionAngle; // 0x90
		::UnityEngine::Rendering::ClampedFloatParameter* ExtrusionXIntensity; // 0x98
		::UnityEngine::Rendering::ClampedFloatParameter* ExtrusionYIntensity; // 0xA0

		static ::System::Void Prepare()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_PREPARE_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RADIALBLUR__CTOR_OFFSET))(this);
		}

		static ::System::Void Execute(::BDC595893C6EE433::B1CEBF4F391B01CE E6CE7391633EEC68, ::FD13E078C250FD12* BBA37BE3F1DE1B88, ::BE1E11B808A636AE*& AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::B1CEBF4F391B01CE, ::FD13E078C250FD12*, ::BE1E11B808A636AE*&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_EXECUTE_OFFSET))(E6CE7391633EEC68, BBA37BE3F1DE1B88, AFE8F10692F5139F);
		}

		static ::System::Void OnCameraCleanup(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::EC81A325BE4ED2E9*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_ONCAMERACLEANUP_OFFSET))(AF56F86C59FD37AD);
		}

		static ::System::Void Initialize(::BA8E322398FEDDAF_F97B389C173BBBF6* FC8953071E7A75C8, ::BDC595893C6EE433::E62B6E53F892264C& BECD46D4EE655A4D)
		{
			return ((::System::Void(*)(::BA8E322398FEDDAF_F97B389C173BBBF6*, ::BDC595893C6EE433::E62B6E53F892264C&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_INITIALIZE_OFFSET))(FC8953071E7A75C8, BECD46D4EE655A4D);
		}

		static ::System::Void InlExecuteRadial(::BDC595893C6EE433::B1CEBF4F391B01CE E6CE7391633EEC68, ::FD13E078C250FD12* BBA37BE3F1DE1B88, ::BE1E11B808A636AE*& AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::B1CEBF4F391B01CE, ::FD13E078C250FD12*, ::BE1E11B808A636AE*&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_INLEXECUTERADIAL_OFFSET))(E6CE7391633EEC68, BBA37BE3F1DE1B88, AFE8F10692F5139F);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_ISACTIVE_OFFSET))(this);
		}

		static ::System::Void Configure(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD, ::FD13E078C250FD12* BBA37BE3F1DE1B88)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::EC81A325BE4ED2E9*, ::FD13E078C250FD12*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_CONFIGURE_OFFSET))(AF56F86C59FD37AD, BBA37BE3F1DE1B88);
		}

		static ::System::Void InlExecuteDirection(::BDC595893C6EE433::B1CEBF4F391B01CE E6CE7391633EEC68, ::FD13E078C250FD12* BBA37BE3F1DE1B88, ::BE1E11B808A636AE*& AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::B1CEBF4F391B01CE, ::FD13E078C250FD12*, ::BE1E11B808A636AE*&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_INLEXECUTEDIRECTION_OFFSET))(E6CE7391633EEC68, BBA37BE3F1DE1B88, AFE8F10692F5139F);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RADIALBLUR_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
