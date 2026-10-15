#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StartMarblePVEChallengeMatch; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEF720)
#define RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAEF730)
#define RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEF6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartMarblePVEChallengeMatch_TypeDefinitionIndex = 21273;

	class StartMarblePVEChallengeMatch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MatchID; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccImmediately; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFailImmediately; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartMarblePVEChallengeMatch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartMarblePVEChallengeMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartMarblePVEChallengeMatch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartMarblePVEChallengeMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMARBLEPVECHALLENGEMATCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
