#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeComponent.h"
#include "unitysdk/BDC595893C6EE433/B1CEBF4F391B01CE.h"
#include "unitysdk/UnityEngine/F0FD99F32D35D419.h"

class BA8E322398FEDDAF_F97B389C173BBBF6;
class BE1E11B808A636AE;
class FD13E078C250FD12;
namespace ABC::CustomRenderPipeline { class UIAfterUIBlurQualityParameter; }
namespace BDC595893C6EE433 { class EC81A325BE4ED2E9; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class ClampedIntParameter; }

#define ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLUR_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x2796E10)
#define ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLUR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2797110)
#define ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLUR_FULLBLURFINALCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x27972E0)
#define ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLUR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27974A0)
#define ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLUR_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x2797500)
#define ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLUR_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLUR_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0x2797540)
#define ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x27975D0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int UIAfterUIBlur_TypeDefinitionIndex = 16541;

	class UIAfterUIBlur : public ::UnityEngine::Rendering::VolumeComponent
	{
	public:
		static ::BE1E11B808A636AE** StaticGet_m_RTAfterUIBlur()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(UIAfterUIBlur_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::BE1E11B808A636AE** StaticGet_m_GaussianDst()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(UIAfterUIBlur_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Int32* StaticGet_m_targetWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIAfterUIBlur_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::Int32* StaticGet_m_targetHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIAfterUIBlur_TypeDefinitionIndex)->GetStaticField(0x14);
		}
		static ::UnityEngine::Material** StaticGet_m_MatBlur()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIAfterUIBlur_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		::ABC::CustomRenderPipeline::UIAfterUIBlurQualityParameter* quality; // 0x38
		::UnityEngine::Rendering::ClampedIntParameter* BlurSamples; // 0x40
		::UnityEngine::Rendering::ClampedIntParameter* GaussianSamples; // 0x48
		::UnityEngine::Rendering::ClampedFloatParameter* TranslucentAlpha; // 0x50
		::UnityEngine::Rendering::BoolParameter* NeedAnotherGussian; // 0x58

		static ::System::Void Initialize(::BA8E322398FEDDAF_F97B389C173BBBF6* FC8953071E7A75C8)
		{
			return ((::System::Void(*)(::BA8E322398FEDDAF_F97B389C173BBBF6*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLUR_INITIALIZE_OFFSET))(FC8953071E7A75C8);
		}

		static ::System::Void FullBlurFinalComposite(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD, ::FD13E078C250FD12* BBA37BE3F1DE1B88, ::BE1E11B808A636AE* B190FCF551B0EA18, ::BE1E11B808A636AE* B3E3A8495E17DE76, ::BE1E11B808A636AE* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::EC81A325BE4ED2E9*, ::FD13E078C250FD12*, ::BE1E11B808A636AE*, ::BE1E11B808A636AE*, ::BE1E11B808A636AE*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLUR_FULLBLURFINALCOMPOSITE_OFFSET))(AF56F86C59FD37AD, BBA37BE3F1DE1B88, B190FCF551B0EA18, B3E3A8495E17DE76, AFE8F10692F5139F);
		}

		static ::System::Void Configure(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD, ::FD13E078C250FD12* BBA37BE3F1DE1B88, ::UnityEngine::F0FD99F32D35D419& ECED168824949701)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::EC81A325BE4ED2E9*, ::FD13E078C250FD12*, ::UnityEngine::F0FD99F32D35D419&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLUR_CONFIGURE_OFFSET))(AF56F86C59FD37AD, BBA37BE3F1DE1B88, ECED168824949701);
		}

		static ::BE1E11B808A636AE* Execute(::BDC595893C6EE433::B1CEBF4F391B01CE E6CE7391633EEC68, ::FD13E078C250FD12* BBA37BE3F1DE1B88, ::System::Boolean A58E991B0C32BBEA, ::BE1E11B808A636AE*& AFE8F10692F5139F)
		{
			return ((::BE1E11B808A636AE*(*)(::BDC595893C6EE433::B1CEBF4F391B01CE, ::FD13E078C250FD12*, ::System::Boolean, ::BE1E11B808A636AE*&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLUR_EXECUTE_OFFSET))(E6CE7391633EEC68, BBA37BE3F1DE1B88, A58E991B0C32BBEA, AFE8F10692F5139F);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLUR_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void OnCameraCleanup(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::EC81A325BE4ED2E9*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLUR_ONCAMERACLEANUP_OFFSET))(AF56F86C59FD37AD);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLUR_ISACTIVE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_UIAFTERUIBLUR__CTOR_OFFSET))(this);
		}
	};
}
