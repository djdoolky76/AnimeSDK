#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitRogueTournPermanantTalentStateChange; }

#define RPG_GAMECORE_LOOPWAITROGUETOURNPERMANANTTALENTSTATECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F6910)
#define RPG_GAMECORE_LOOPWAITROGUETOURNPERMANANTTALENTSTATECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F6920)
#define RPG_GAMECORE_LOOPWAITROGUETOURNPERMANANTTALENTSTATECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F68E0)

namespace RPG::GameCore
{
	class LoopWaitRogueTournPermanantTalentStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROGUETOURNPERMANANTTALENTSTATECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitRogueTournPermanantTalentStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitRogueTournPermanantTalentStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROGUETOURNPERMANANTTALENTSTATECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitRogueTournPermanantTalentStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitRogueTournPermanantTalentStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROGUETOURNPERMANANTTALENTSTATECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
