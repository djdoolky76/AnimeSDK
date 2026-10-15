#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialChimeraBattlePauseGameLock; }

#define RPG_GAMECORE_TUTORIALCHIMERABATTLEPAUSEGAMELOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC38A40)
#define RPG_GAMECORE_TUTORIALCHIMERABATTLEPAUSEGAMELOCK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC38A50)
#define RPG_GAMECORE_TUTORIALCHIMERABATTLEPAUSEGAMELOCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC38A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialChimeraBattlePauseGameLock_TypeDefinitionIndex = 24383;

	class TutorialChimeraBattlePauseGameLock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Pause; // 0x18
		::System::Boolean AutoSend; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERABATTLEPAUSEGAMELOCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialChimeraBattlePauseGameLock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialChimeraBattlePauseGameLock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERABATTLEPAUSEGAMELOCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialChimeraBattlePauseGameLock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialChimeraBattlePauseGameLock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERABATTLEPAUSEGAMELOCK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
