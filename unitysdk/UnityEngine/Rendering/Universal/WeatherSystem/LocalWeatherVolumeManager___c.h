#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Rendering::Universal::WeatherSystem { class LocalWeatherVolumeContext; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMEMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E88DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMEMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16E88E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMEMANAGER___C__TRYGETLOCALWEATHERVOLUME_B__1_0_OFFSET UNITYSDK_OFFSET(0x16E88E30)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int LocalWeatherVolumeManager___c_TypeDefinitionIndex = 26772;

	class LocalWeatherVolumeManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolumeContext*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolumeContext*>**)Il2CppClass::FromTypeDefinitionIndex(LocalWeatherVolumeManager___c_TypeDefinitionIndex)->GetStaticField(0x22F30);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LocalWeatherVolumeManager___c_TypeDefinitionIndex)->GetStaticField(0x22F38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMEMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMEMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _TryGetLocalWeatherVolume_b__1_0(::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolumeContext* x, ::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolumeContext* y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolumeContext*, ::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolumeContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_LOCALWEATHERVOLUMEMANAGER___C__TRYGETLOCALWEATHERVOLUME_B__1_0_OFFSET))(this, x, y);
		}
	};
}
