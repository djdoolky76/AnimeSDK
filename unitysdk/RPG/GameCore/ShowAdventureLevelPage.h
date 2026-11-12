#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowAdventureLevelPage; }

#define RPG_GAMECORE_SHOWADVENTURELEVELPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECE8420)
#define RPG_GAMECORE_SHOWADVENTURELEVELPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECE8430)
#define RPG_GAMECORE_SHOWADVENTURELEVELPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECE8360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowAdventureLevelPage_TypeDefinitionIndex = 21234;

	class ShowAdventureLevelPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWADVENTURELEVELPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowAdventureLevelPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowAdventureLevelPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWADVENTURELEVELPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowAdventureLevelPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowAdventureLevelPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWADVENTURELEVELPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
