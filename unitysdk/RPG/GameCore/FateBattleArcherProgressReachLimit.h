#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateBattleArcherProgressReachLimit; }

#define RPG_GAMECORE_FATEBATTLEARCHERPROGRESSREACHLIMIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66CAA0)
#define RPG_GAMECORE_FATEBATTLEARCHERPROGRESSREACHLIMIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66CAB0)
#define RPG_GAMECORE_FATEBATTLEARCHERPROGRESSREACHLIMIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66CA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateBattleArcherProgressReachLimit_TypeDefinitionIndex = 23293;

	class FateBattleArcherProgressReachLimit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ReachedLimit; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEARCHERPROGRESSREACHLIMIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateBattleArcherProgressReachLimit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateBattleArcherProgressReachLimit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEARCHERPROGRESSREACHLIMIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateBattleArcherProgressReachLimit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateBattleArcherProgressReachLimit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEARCHERPROGRESSREACHLIMIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
