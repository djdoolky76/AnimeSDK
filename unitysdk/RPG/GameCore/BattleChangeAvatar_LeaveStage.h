#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleChangeAvatar_LeaveStage; }

#define RPG_GAMECORE_BATTLECHANGEAVATAR_LEAVESTAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4539E0)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_LEAVESTAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4539F0)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_LEAVESTAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D453920)

namespace RPG::GameCore
{
	class BattleChangeAvatar_LeaveStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_LEAVESTAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleChangeAvatar_LeaveStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleChangeAvatar_LeaveStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_LEAVESTAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleChangeAvatar_LeaveStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleChangeAvatar_LeaveStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_LEAVESTAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
