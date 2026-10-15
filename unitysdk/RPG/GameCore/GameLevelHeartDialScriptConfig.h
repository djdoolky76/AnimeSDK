#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameLevelHeartDialDialogueConfig; }
namespace RPG::GameCore { class GameLevelHeartDialScriptConfig; }

#define RPG_GAMECORE_GAMELEVELHEARTDIALSCRIPTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E9670)
#define RPG_GAMECORE_GAMELEVELHEARTDIALSCRIPTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E9550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameLevelHeartDialScriptConfig_TypeDefinitionIndex = 17422;

	class GameLevelHeartDialScriptConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ScriptID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::GameLevelHeartDialDialogueConfig*>* DialogueConfigList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALSCRIPTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameLevelHeartDialScriptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameLevelHeartDialScriptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALSCRIPTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
