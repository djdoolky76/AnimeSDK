#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameSandboxScope.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxResourceConfig; }
namespace RPG::GameCore { class LittleGameSandboxStreamingConfig; }
namespace RPG::GameCore { class TemporarySubStageConfig; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXRESOURCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA28930)
#define RPG_GAMECORE_LITTLEGAMESANDBOXRESOURCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA284E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxResourceConfig_TypeDefinitionIndex = 19098;

	class LittleGameSandboxResourceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameSandboxScope Scope; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TemporarySubStageConfig* TemporarySubStage; // 0x18
		::RPG::GameCore::LittleGameSandboxStreamingConfig* Streaming; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXRESOURCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxResourceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxResourceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXRESOURCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
