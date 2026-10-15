#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class LittleGameLevelSettings; }
namespace RPG::GameCore { class LittleGameLevelVariableCollection; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMELEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E3840)
#define RPG_GAMECORE_LITTLEGAMELEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E35B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelConfig_TypeDefinitionIndex = 18841;

	class LittleGameLevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameEntityConfig*>* Entities; // 0x10
		::RPG::GameCore::LittleGameType GameType; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* LevelGraph; // 0x20
		::RPG::GameCore::LevelGraphValueSource* LevelGraphValueSource; // 0x28
		::System::Boolean WaitStreaming; // 0x30
		::System::Byte _padding1[0x7];
		::Il2CppArray<::RPG::Client::LockSource>* LockSources; // 0x38
		::RPG::GameCore::LittleGameLevelVariableCollection* LevelVariables; // 0x40
		::RPG::GameCore::LittleGameLevelSettings* LevelSettings; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
