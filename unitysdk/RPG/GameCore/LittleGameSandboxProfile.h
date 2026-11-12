#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxAudioConfig; }
namespace RPG::GameCore { class LittleGameSandboxEffectConfig; }
namespace RPG::GameCore { class LittleGameSandboxGameplayConfig; }
namespace RPG::GameCore { class LittleGameSandboxPerformanceConfig; }
namespace RPG::GameCore { class LittleGameSandboxPlayerConfig; }
namespace RPG::GameCore { class LittleGameSandboxProfile; }
namespace RPG::GameCore { class LittleGameSandboxRenderingConfig; }
namespace RPG::GameCore { class LittleGameSandboxResourceConfig; }
namespace RPG::GameCore { class LittleGameSandboxWorldConfig; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA284D0)
#define RPG_GAMECORE_LITTLEGAMESANDBOXPROFILE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA278F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxProfile_TypeDefinitionIndex = 19097;

	class LittleGameSandboxProfile : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameSandboxResourceConfig* Resources; // 0x10
		::RPG::GameCore::LittleGameSandboxWorldConfig* World; // 0x18
		::RPG::GameCore::LittleGameSandboxPlayerConfig* Player; // 0x20
		::RPG::GameCore::LittleGameSandboxGameplayConfig* Gameplay; // 0x28
		::RPG::GameCore::LittleGameSandboxRenderingConfig* Rendering; // 0x30
		::RPG::GameCore::LittleGameSandboxAudioConfig* Audio; // 0x38
		::RPG::GameCore::LittleGameSandboxPerformanceConfig* Performance; // 0x40
		::RPG::GameCore::LittleGameSandboxEffectConfig* Effects; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXPROFILE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxProfile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxProfile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXPROFILE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
