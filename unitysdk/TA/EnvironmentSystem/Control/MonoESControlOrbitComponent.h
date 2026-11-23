#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define TA_ENVIRONMENTSYSTEM_CONTROL_MONOESCONTROLORBITCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x28640B0)

namespace TA::EnvironmentSystem::Control
{
	inline static constexpr unsigned int MonoESControlOrbitComponent_TypeDefinitionIndex = 16001;

	class MonoESControlOrbitComponent
	{
	public:
		::System::Single OrbitRadius; // 0x28
		::System::Single SunTheta; // 0x2C
		::System::Single SunInclination; // 0x30
		::UnityEngine::Vector2 SunPitchOffset; // 0x34
		::System::Single MoonTheta; // 0x3C
		::System::Single MoonInclination; // 0x40
		::UnityEngine::Vector2 MoonPitchOffset; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_CONTROL_MONOESCONTROLORBITCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
