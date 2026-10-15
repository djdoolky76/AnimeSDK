#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowMazePuzzleChallengeFinishToast; }

#define RPG_GAMECORE_SHOWMAZEPUZZLECHALLENGEFINISHTOAST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE1620)
#define RPG_GAMECORE_SHOWMAZEPUZZLECHALLENGEFINISHTOAST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE1630)
#define RPG_GAMECORE_SHOWMAZEPUZZLECHALLENGEFINISHTOAST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE15E0)

namespace RPG::GameCore
{
	class ShowMazePuzzleChallengeFinishToast : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsSuccess; // 0x18
		::System::Boolean IsPuzzle; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEPUZZLECHALLENGEFINISHTOAST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMazePuzzleChallengeFinishToast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMazePuzzleChallengeFinishToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEPUZZLECHALLENGEFINISHTOAST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMazePuzzleChallengeFinishToast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMazePuzzleChallengeFinishToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEPUZZLECHALLENGEFINISHTOAST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
