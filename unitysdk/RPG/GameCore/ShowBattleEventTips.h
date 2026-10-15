#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowBattleEventTips; }

#define RPG_GAMECORE_SHOWBATTLEEVENTTIPS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD7CA0)
#define RPG_GAMECORE_SHOWBATTLEEVENTTIPS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD7CB0)
#define RPG_GAMECORE_SHOWBATTLEEVENTTIPS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD7C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleEventTips_TypeDefinitionIndex = 22943;

	class ShowBattleEventTips : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID TextTips; // 0x18
		::System::Single TotalTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEEVENTTIPS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleEventTips* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleEventTips*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEEVENTTIPS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleEventTips* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleEventTips*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEEVENTTIPS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
