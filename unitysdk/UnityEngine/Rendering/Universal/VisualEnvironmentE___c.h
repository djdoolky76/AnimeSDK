#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::Rendering::Universal { class OverrideWeatherConfigScriptableObject; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE_WeatherConfigOverrideData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2A5050)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A5090)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__SETOVERRIDEWEATHERCONFIGV2_B__419_0_OFFSET UNITYSDK_OFFSET(0x1D2A5210)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__SETOVERRIDEWEATHERCONFIG_B__367_0_OFFSET UNITYSDK_OFFSET(0x1D2A51D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__TRYOVERRIDEWEATHERV2_B__422_0_OFFSET UNITYSDK_OFFSET(0x1D2A5250)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__UPDATELIGHTNINGFX_B__259_0_OFFSET UNITYSDK_OFFSET(0x1D2A50A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE___c_TypeDefinitionIndex = 26354;

	class VisualEnvironmentE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x23D90);
		}
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__419_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x23D98);
		}
		static ::System::Comparison_1<::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*>** StaticGet___9__367_0()
		{
			return (::System::Comparison_1<::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x23DA0);
		}
		static ::System::Predicate_1<::System::Object*>** StaticGet___9__422_0()
		{
			return (::System::Predicate_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x23DA8);
		}
		static ::System::Predicate_1<::UnityEngine::ParticleSystem*>** StaticGet___9__259_0()
		{
			return (::System::Predicate_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE___c_TypeDefinitionIndex)->GetStaticField(0x23DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateLightningFx_b__259_0(::UnityEngine::ParticleSystem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__UPDATELIGHTNINGFX_B__259_0_OFFSET))(this, x);
		}

		::System::Int32 _SetOverrideWeatherConfig_b__367_0(::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>* x, ::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*, ::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__SETOVERRIDEWEATHERCONFIG_B__367_0_OFFSET))(this, x, y);
		}

		::System::Int32 _SetOverrideWeatherConfigV2_b__419_0(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData* x, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__SETOVERRIDEWEATHERCONFIGV2_B__419_0_OFFSET))(this, x, y);
		}

		::System::Boolean _TryOverrideWeatherV2_b__422_0(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData* tempData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE___C__TRYOVERRIDEWEATHERV2_B__422_0_OFFSET))(this, tempData);
		}
	};
}
