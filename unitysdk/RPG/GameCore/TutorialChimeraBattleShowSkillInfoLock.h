#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialChimeraBattleShowSkillInfoLock; }

#define RPG_GAMECORE_TUTORIALCHIMERABATTLESHOWSKILLINFOLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC664E0)
#define RPG_GAMECORE_TUTORIALCHIMERABATTLESHOWSKILLINFOLOCK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC664F0)
#define RPG_GAMECORE_TUTORIALCHIMERABATTLESHOWSKILLINFOLOCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC664A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialChimeraBattleShowSkillInfoLock_TypeDefinitionIndex = 24384;

	class TutorialChimeraBattleShowSkillInfoLock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 ChimeraID; // 0x1C
		::System::Boolean AutoSend; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERABATTLESHOWSKILLINFOLOCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialChimeraBattleShowSkillInfoLock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialChimeraBattleShowSkillInfoLock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERABATTLESHOWSKILLINFOLOCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialChimeraBattleShowSkillInfoLock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialChimeraBattleShowSkillInfoLock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERABATTLESHOWSKILLINFOLOCK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
