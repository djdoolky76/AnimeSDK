#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_LIGHTINGSETTINGS_B257A93AD87D5D94_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define UNITYENGINE_LIGHTINGSETTINGS_EB411732C99E3152_OFFSET UNITYSDK_OFFSET(0x41305D0)

namespace UnityEngine
{
	inline static constexpr unsigned int LightingSettings_TypeDefinitionIndex = 17111;

	class LightingSettings : public ::UnityEngine::Object
	{
	public:
		static ::System::Void EB411732C99E3152(::UnityEngine::LightingSettings* BD8273AB04C4B760)
		{
			return ((::System::Void(*)(::UnityEngine::LightingSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTINGSETTINGS_EB411732C99E3152_OFFSET))(BD8273AB04C4B760);
		}

		::System::Void B257A93AD87D5D94()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTINGSETTINGS_B257A93AD87D5D94_OFFSET))(this);
		}
	};
}
