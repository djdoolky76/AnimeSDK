#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ForbidBattleConditionOnStart; }

#define RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E8AD0)
#define RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E8AE0)
#define RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E8A10)

namespace RPG::GameCore
{
	class ForbidBattleConditionOnStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForbidBattleConditionOnStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForbidBattleConditionOnStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForbidBattleConditionOnStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForbidBattleConditionOnStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORBIDBATTLECONDITIONONSTART_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
