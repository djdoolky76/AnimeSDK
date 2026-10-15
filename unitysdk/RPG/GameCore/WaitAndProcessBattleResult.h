#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitAndProcessBattleResult; }

#define RPG_GAMECORE_WAITANDPROCESSBATTLERESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC65CE0)
#define RPG_GAMECORE_WAITANDPROCESSBATTLERESULT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC65CF0)
#define RPG_GAMECORE_WAITANDPROCESSBATTLERESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC65C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAndProcessBattleResult_TypeDefinitionIndex = 23411;

	class WaitAndProcessBattleResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANDPROCESSBATTLERESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAndProcessBattleResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAndProcessBattleResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANDPROCESSBATTLERESULT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAndProcessBattleResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAndProcessBattleResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANDPROCESSBATTLERESULT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
