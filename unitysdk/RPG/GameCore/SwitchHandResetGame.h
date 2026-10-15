#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SwitchHandResetGame; }

#define RPG_GAMECORE_SWITCHHANDRESETGAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB15040)
#define RPG_GAMECORE_SWITCHHANDRESETGAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB15050)
#define RPG_GAMECORE_SWITCHHANDRESETGAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB15010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandResetGame_TypeDefinitionIndex = 20959;

	class SwitchHandResetGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ID; // 0x18
		::RPG::GameCore::DynamicString* AnchorID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDRESETGAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandResetGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandResetGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDRESETGAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandResetGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandResetGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDRESETGAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
