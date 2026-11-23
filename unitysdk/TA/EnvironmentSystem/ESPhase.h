#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F18A3FB6208252BC/B6BC8C2221EFAB0D.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/EB80375AD30FE13D.h"
#include "unitysdk/TA/EnvironmentSystem/ESPhase_B49D374ED9CEA60A.h"

namespace TA::EnvironmentSystem { class ESCategory; }
namespace TA::EnvironmentSystem { class FogCategory; }
namespace TA::EnvironmentSystem { class GICategory; }
namespace TA::EnvironmentSystem { class LightCategory; }
namespace TA::EnvironmentSystem { class SceneCategory; }
namespace TA::EnvironmentSystem { class SkyCategory; }
namespace TA::EnvironmentSystem { class WeatherCategory; }

#define TA_ENVIRONMENTSYSTEM_ESPHASE_GETCATEGORY_OFFSET UNITYSDK_OFFSET(0x28B29A0)
#define TA_ENVIRONMENTSYSTEM_ESPHASE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x28B2A90)
#define TA_ENVIRONMENTSYSTEM_ESPHASE_SETLERPCONFIG_OFFSET UNITYSDK_OFFSET(0x28B2DC0)
#define TA_ENVIRONMENTSYSTEM_ESPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x28B2F30)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ESPhase_TypeDefinitionIndex = 16296;

	class ESPhase : public ::UnityEngine::ScriptableObject
	{
	public:
		::TA::EnvironmentSystem::LightCategory* lightCategory; // 0x18
		::TA::EnvironmentSystem::GICategory* giCategory; // 0x20
		::TA::EnvironmentSystem::SceneCategory* sceneCategory; // 0x28
		::TA::EnvironmentSystem::SkyCategory* skyCategory; // 0x30
		::TA::EnvironmentSystem::FogCategory* fogCategory; // 0x38
		::TA::EnvironmentSystem::WeatherCategory* weatherCategory; // 0x40
		::Il2CppArray<::TA::EnvironmentSystem::ESCategory*>* _categories; // 0x48

		::TA::EnvironmentSystem::ESCategory* GetCategory(::F18A3FB6208252BC::B6BC8C2221EFAB0D A33ADE68E3F2CC9A)
		{
			return ((::TA::EnvironmentSystem::ESCategory*(*)(::PVOID, ::F18A3FB6208252BC::B6BC8C2221EFAB0D))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPHASE_GETCATEGORY_OFFSET))(this, A33ADE68E3F2CC9A);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPHASE__CTOR_OFFSET))(this);
		}

		::TA::EnvironmentSystem::ESPhase_B49D374ED9CEA60A GetEnumerator()
		{
			return ((::TA::EnvironmentSystem::ESPhase_B49D374ED9CEA60A(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPHASE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void SetLerpConfig(::EB80375AD30FE13D ACDE58E97E37D13C)
		{
			return ((::System::Void(*)(::PVOID, ::EB80375AD30FE13D))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPHASE_SETLERPCONFIG_OFFSET))(this, ACDE58E97E37D13C);
		}
	};
}
