#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialChangeLockTarget; }
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALCHANGELOCKTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC386A0)
#define RPG_GAMECORE_TUTORIALCHANGELOCKTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC386B0)
#define RPG_GAMECORE_TUTORIALCHANGELOCKTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC38670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialChangeLockTarget_TypeDefinitionIndex = 24351;

	class TutorialChangeLockTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* MonsterTag; // 0x18
		::System::UInt32 AvatarID; // 0x20
		::System::Boolean IsLockTeammate; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHANGELOCKTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialChangeLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialChangeLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHANGELOCKTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialChangeLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialChangeLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHANGELOCKTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
