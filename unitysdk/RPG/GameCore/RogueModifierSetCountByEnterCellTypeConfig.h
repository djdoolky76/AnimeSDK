#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSetCountByEnterCellTypeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERCELLTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A470)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERCELLTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A480)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERCELLTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1A430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByEnterCellTypeConfig_TypeDefinitionIndex = 17718;

	class RogueModifierSetCountByEnterCellTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERCELLTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByEnterCellTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByEnterCellTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERCELLTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByEnterCellTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByEnterCellTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERCELLTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
