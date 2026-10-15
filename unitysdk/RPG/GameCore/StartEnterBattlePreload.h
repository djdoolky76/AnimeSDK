#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StartEnterBattlePreload; }

#define RPG_GAMECORE_STARTENTERBATTLEPRELOAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1CB60)
#define RPG_GAMECORE_STARTENTERBATTLEPRELOAD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1CB70)
#define RPG_GAMECORE_STARTENTERBATTLEPRELOAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1CB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartEnterBattlePreload_TypeDefinitionIndex = 23325;

	class StartEnterBattlePreload : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean EnableCustomPreload; // 0x18
		::System::Boolean UnloadNPC; // 0x19
		::System::Boolean UnloadNPCMonster; // 0x1A
		::System::Boolean UnloadProp; // 0x1B
		::System::Boolean GoPoolRelease; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTENTERBATTLEPRELOAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartEnterBattlePreload* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartEnterBattlePreload*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTENTERBATTLEPRELOAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartEnterBattlePreload* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartEnterBattlePreload*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTENTERBATTLEPRELOAD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
