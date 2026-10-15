#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerRogueAvatarPick; }

#define RPG_GAMECORE_TRIGGERROGUEAVATARPICK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC58160)
#define RPG_GAMECORE_TRIGGERROGUEAVATARPICK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC58170)
#define RPG_GAMECORE_TRIGGERROGUEAVATARPICK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC58130)

namespace RPG::GameCore
{
	class TriggerRogueAvatarPick : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean TargetIsOwner; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 GroupPropID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEAVATARPICK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerRogueAvatarPick* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerRogueAvatarPick*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEAVATARPICK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerRogueAvatarPick* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerRogueAvatarPick*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEAVATARPICK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
