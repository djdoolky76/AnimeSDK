#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class WeatherConfig;

#define WEATHERCONFIGLERPUTILS_LERP_OFFSET UNITYSDK_OFFSET(0x16E8D080)
#define WEATHERCONFIGLERPUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x20073A20)

inline static constexpr unsigned int WeatherConfigLerpUtils_TypeDefinitionIndex = 26495;

class WeatherConfigLerpUtils : public ::System::Object
{
public:
	static ::WeatherConfig** StaticGet_result()
	{
		return (::WeatherConfig**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfigLerpUtils_TypeDefinitionIndex)->GetStaticField(0x22F70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + WEATHERCONFIGLERPUTILS__CCTOR_OFFSET))();
	}

	static ::WeatherConfig* Lerp(::WeatherConfig* from, ::WeatherConfig* to, ::System::Single t, ::System::Boolean isPartialOverride)
	{
		return ((::WeatherConfig*(*)(::WeatherConfig*, ::WeatherConfig*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + WEATHERCONFIGLERPUTILS_LERP_OFFSET))(from, to, t, isPartialOverride);
	}
};
