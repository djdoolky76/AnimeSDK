#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActSetBlackboardByRandomConfig; }

#define RPG_GAMECORE_ROGUEACTSETBLACKBOARDBYRANDOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A1780)
#define RPG_GAMECORE_ROGUEACTSETBLACKBOARDBYRANDOMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A1790)
#define RPG_GAMECORE_ROGUEACTSETBLACKBOARDBYRANDOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A1740)

namespace RPG::GameCore
{
	class RogueActSetBlackboardByRandomConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETBLACKBOARDBYRANDOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActSetBlackboardByRandomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActSetBlackboardByRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETBLACKBOARDBYRANDOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActSetBlackboardByRandomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActSetBlackboardByRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETBLACKBOARDBYRANDOMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
