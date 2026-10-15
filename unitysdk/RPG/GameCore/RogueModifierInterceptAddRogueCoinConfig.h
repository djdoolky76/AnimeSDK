#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierInterceptAddRogueCoinConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDROGUECOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E9800)
#define RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDROGUECOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E9810)
#define RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDROGUECOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E97C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierInterceptAddRogueCoinConfig_TypeDefinitionIndex = 17965;

	class RogueModifierInterceptAddRogueCoinConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDROGUECOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierInterceptAddRogueCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierInterceptAddRogueCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDROGUECOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierInterceptAddRogueCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierInterceptAddRogueCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDROGUECOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
