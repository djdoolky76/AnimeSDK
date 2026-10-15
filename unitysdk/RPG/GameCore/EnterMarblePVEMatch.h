#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnterMarblePVEMatch; }

#define RPG_GAMECORE_ENTERMARBLEPVEMATCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6452D0)
#define RPG_GAMECORE_ENTERMARBLEPVEMATCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6452E0)
#define RPG_GAMECORE_ENTERMARBLEPVEMATCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6452A0)

namespace RPG::GameCore
{
	class EnterMarblePVEMatch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MatchID; // 0x18
		::System::Boolean EnableTeamEdit; // 0x1C
		::System::Byte _padding0[0x3];
		::Il2CppArray<::System::UInt32>* HeroTeamMarbleSealIDList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMARBLEPVEMATCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterMarblePVEMatch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterMarblePVEMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMARBLEPVEMATCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterMarblePVEMatch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterMarblePVEMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMARBLEPVEMATCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
