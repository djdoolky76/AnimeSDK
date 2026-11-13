#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameSandboxFixedDeltaTimeMode.h"
#include "unitysdk/RPG/GameCore/LittleGameSandboxScope.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxPerformanceConfig; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXPERFORMANCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F267F00)
#define RPG_GAMECORE_LITTLEGAMESANDBOXPERFORMANCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F267A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxPerformanceConfig_TypeDefinitionIndex = 19113;

	class LittleGameSandboxPerformanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameSandboxScope Scope; // 0x10
		::System::Boolean ForceOwnerIgnoreTickLod; // 0x14
		::System::Boolean ForceInstanceIgnoreTickLod; // 0x15
		::System::Boolean OnlyUseCameraPositionForTickLod; // 0x16
		::System::Boolean UseCameraAsMunicipalStreamingCenter; // 0x17
		::System::Boolean ForceOwnerHighestLod; // 0x18
		::System::Boolean CollectHlodColliders; // 0x19
		::System::Boolean EnableContainerLodTemplate; // 0x1A
		::System::Byte _padding0[0x1];
		::RPG::GameCore::EntityLodTemplateName ContainerLodTemplate; // 0x1C
		::RPG::GameCore::LittleGameSandboxFixedDeltaTimeMode FixedDeltaTimeMode; // 0x20
		::System::Single FixedDeltaTime; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXPERFORMANCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxPerformanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxPerformanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXPERFORMANCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
