#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingNotifySelectStory; }

#define RPG_GAMECORE_SWORDTRAININGNOTIFYSELECTSTORY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4AAA0)
#define RPG_GAMECORE_SWORDTRAININGNOTIFYSELECTSTORY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB4AAB0)
#define RPG_GAMECORE_SWORDTRAININGNOTIFYSELECTSTORY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB4AA70)

namespace RPG::GameCore
{
	class SwordTrainingNotifySelectStory : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StoryID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGNOTIFYSELECTSTORY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingNotifySelectStory* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingNotifySelectStory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGNOTIFYSELECTSTORY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingNotifySelectStory* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingNotifySelectStory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGNOTIFYSELECTSTORY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
