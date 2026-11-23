#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeComponent.h"
#include "unitysdk/BDC595893C6EE433/B1CEBF4F391B01CE.h"

class BA8E322398FEDDAF_F97B389C173BBBF6;
class BE1E11B808A636AE;
class FD13E078C250FD12;
namespace BDC595893C6EE433 { class EC81A325BE4ED2E9; }
namespace UnityEngine { class E2E2311225330715; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class BoolParameter; }

#define ABC_CUSTOMRENDERPIPELINE_LIGHTSHAFT_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x2831B60)
#define ABC_CUSTOMRENDERPIPELINE_LIGHTSHAFT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2831DE0)
#define ABC_CUSTOMRENDERPIPELINE_LIGHTSHAFT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x28327E0)
#define ABC_CUSTOMRENDERPIPELINE_LIGHTSHAFT_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1873260)
#define ABC_CUSTOMRENDERPIPELINE_LIGHTSHAFT_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define ABC_CUSTOMRENDERPIPELINE_LIGHTSHAFT_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0x2832840)
#define ABC_CUSTOMRENDERPIPELINE_LIGHTSHAFT_PREPARE_OFFSET UNITYSDK_OFFSET(0x28328D0)
#define ABC_CUSTOMRENDERPIPELINE_LIGHTSHAFT__CTOR_OFFSET UNITYSDK_OFFSET(0x2832A50)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int LightShaft_TypeDefinitionIndex = 16908;

	class LightShaft : public ::UnityEngine::Rendering::VolumeComponent
	{
	public:
		static ::UnityEngine::E2E2311225330715** StaticGet_m_LSMPB()
		{
			return (::UnityEngine::E2E2311225330715**)Il2CppClass::FromTypeDefinitionIndex(LightShaft_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::BE1E11B808A636AE** StaticGet_m_RT_LSSetup()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(LightShaft_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::BE1E11B808A636AE** StaticGet_m_RT_LSBlur0()
		{
			return (::BE1E11B808A636AE**)Il2CppClass::FromTypeDefinitionIndex(LightShaft_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::UnityEngine::Material** StaticGet_m_mat_lightShaft()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(LightShaft_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		::UnityEngine::Rendering::BoolParameter* isOpened; // 0x38

		static ::System::Void Configure(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD, ::FD13E078C250FD12* BBA37BE3F1DE1B88)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::EC81A325BE4ED2E9*, ::FD13E078C250FD12*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LIGHTSHAFT_CONFIGURE_OFFSET))(AF56F86C59FD37AD, BBA37BE3F1DE1B88);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LIGHTSHAFT_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void OnCameraCleanup(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::EC81A325BE4ED2E9*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LIGHTSHAFT_ONCAMERACLEANUP_OFFSET))(AF56F86C59FD37AD);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LIGHTSHAFT_ISACTIVE_OFFSET))(this);
		}

		static ::System::Void Initialize(::BA8E322398FEDDAF_F97B389C173BBBF6* FC8953071E7A75C8)
		{
			return ((::System::Void(*)(::BA8E322398FEDDAF_F97B389C173BBBF6*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LIGHTSHAFT_INITIALIZE_OFFSET))(FC8953071E7A75C8);
		}

		static ::System::Boolean Execute(::BDC595893C6EE433::B1CEBF4F391B01CE E6CE7391633EEC68, ::FD13E078C250FD12* BBA37BE3F1DE1B88, ::BE1E11B808A636AE*& AFE8F10692F5139F)
		{
			return ((::System::Boolean(*)(::BDC595893C6EE433::B1CEBF4F391B01CE, ::FD13E078C250FD12*, ::BE1E11B808A636AE*&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LIGHTSHAFT_EXECUTE_OFFSET))(E6CE7391633EEC68, BBA37BE3F1DE1B88, AFE8F10692F5139F);
		}

		static ::System::Void Prepare()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LIGHTSHAFT_PREPARE_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LIGHTSHAFT__CTOR_OFFSET))(this);
		}
	};
}
