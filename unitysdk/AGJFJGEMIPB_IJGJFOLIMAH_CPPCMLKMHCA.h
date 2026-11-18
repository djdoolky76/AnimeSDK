#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class OverrideWeatherConfigScriptableObject; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define AGJFJGEMIPB_IJGJFOLIMAH_CPPCMLKMHCA_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x6F1EF0)
#define AGJFJGEMIPB_IJGJFOLIMAH_CPPCMLKMHCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6F1EE0)

inline static constexpr unsigned int AGJFJGEMIPB_IJGJFOLIMAH_CPPCMLKMHCA_TypeDefinitionIndex = 91427;

struct alignas(8) AGJFJGEMIPB_IJGJFOLIMAH_CPPCMLKMHCA
{
	::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject* AHMFPFACACD; // 0x10
	::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* KFLJDIAMHBH; // 0x10
	::System::Boolean JKKJFMGOFFD; // 0x18

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_IJGJFOLIMAH_CPPCMLKMHCA_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_IJGJFOLIMAH_CPPCMLKMHCA_DPIHOJBBGLA_OFFSET))(this);
	}
};
