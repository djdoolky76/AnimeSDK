#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSetCountByConsumeCoinConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYCONSUMECOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC2C4B0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYCONSUMECOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC2C4C0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYCONSUMECOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC2C470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByConsumeCoinConfig_TypeDefinitionIndex = 17886;

	class RogueModifierSetCountByConsumeCoinConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYCONSUMECOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByConsumeCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByConsumeCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYCONSUMECOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByConsumeCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByConsumeCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYCONSUMECOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
