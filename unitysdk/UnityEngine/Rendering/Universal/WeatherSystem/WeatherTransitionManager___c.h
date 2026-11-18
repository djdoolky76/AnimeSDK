#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine::Rendering::Universal::WeatherSystem { class IWeatherTransitionInterface; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9CFC10)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER___C__CLEANUPNULLREFERENCES_B__10_0_OFFSET UNITYSDK_OFFSET(0x1C9CFC60)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9CFC50)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int WeatherTransitionManager___c_TypeDefinitionIndex = 27109;

	class WeatherTransitionManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(WeatherTransitionManager___c_TypeDefinitionIndex)->GetStaticField(0x24480);
		}
		static ::System::Predicate_1<::UnityEngine::Rendering::Universal::WeatherSystem::IWeatherTransitionInterface*>** StaticGet___9__10_0()
		{
			return (::System::Predicate_1<::UnityEngine::Rendering::Universal::WeatherSystem::IWeatherTransitionInterface*>**)Il2CppClass::FromTypeDefinitionIndex(WeatherTransitionManager___c_TypeDefinitionIndex)->GetStaticField(0x24488);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CleanupNullReferences_b__10_0(::UnityEngine::Rendering::Universal::WeatherSystem::IWeatherTransitionInterface* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::IWeatherTransitionInterface*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERTRANSITIONMANAGER___C__CLEANUPNULLREFERENCES_B__10_0_OFFSET))(this, item);
		}
	};
}
