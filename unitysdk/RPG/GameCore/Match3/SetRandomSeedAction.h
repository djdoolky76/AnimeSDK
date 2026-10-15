#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class SetRandomSeedAction; }

#define RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8509D0)
#define RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8509E0)
#define RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D850980)

namespace RPG::GameCore::Match3
{
	class SetRandomSeedAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 RandomSeed; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::SetRandomSeedAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::SetRandomSeedAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::SetRandomSeedAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::SetRandomSeedAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETRANDOMSEEDACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
