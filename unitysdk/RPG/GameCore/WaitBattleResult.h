#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitBattleResult; }

#define RPG_GAMECORE_WAITBATTLERESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC67620)
#define RPG_GAMECORE_WAITBATTLERESULT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC67630)
#define RPG_GAMECORE_WAITBATTLERESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC675F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitBattleResult_TypeDefinitionIndex = 23410;

	class WaitBattleResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* WinTaskList; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LoseTaskList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLERESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitBattleResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitBattleResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLERESULT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitBattleResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitBattleResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLERESULT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
