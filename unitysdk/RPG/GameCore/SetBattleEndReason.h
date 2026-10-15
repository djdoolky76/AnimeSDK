#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleEndReasonType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetBattleEndReason; }

#define RPG_GAMECORE_SETBATTLEENDREASON_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA96AE0)
#define RPG_GAMECORE_SETBATTLEENDREASON_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA96AF0)
#define RPG_GAMECORE_SETBATTLEENDREASON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA96AB0)

namespace RPG::GameCore
{
	class SetBattleEndReason : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BattleEndReasonType Reason; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEENDREASON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleEndReason* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleEndReason*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEENDREASON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleEndReason* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleEndReason*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEENDREASON_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
