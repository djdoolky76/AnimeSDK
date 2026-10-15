#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }

#define RPG_GAMECORE_BASEEXPEDITIONBATTLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D43D940)
#define RPG_GAMECORE_BASEEXPEDITIONBATTLEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D43D8E0)
#define RPG_GAMECORE_BASEEXPEDITIONBATTLEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D43D330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseExpeditionBattleAction_TypeDefinitionIndex = 16205;

	class BaseExpeditionBattleAction : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEEXPEDITIONBATTLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseExpeditionBattleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseExpeditionBattleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEEXPEDITIONBATTLEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseExpeditionBattleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseExpeditionBattleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEEXPEDITIONBATTLEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
