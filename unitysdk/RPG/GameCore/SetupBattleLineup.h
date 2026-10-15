#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetupBattleLineup; }

#define RPG_GAMECORE_SETUPBATTLELINEUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACCA10)
#define RPG_GAMECORE_SETUPBATTLELINEUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DACCA20)
#define RPG_GAMECORE_SETUPBATTLELINEUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DACC9E0)

namespace RPG::GameCore
{
	class SetupBattleLineup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* CharacterIDList; // 0x18
		::Il2CppArray<::System::UInt32>* EnhancedIDList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPBATTLELINEUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupBattleLineup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupBattleLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPBATTLELINEUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupBattleLineup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupBattleLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPBATTLELINEUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
