#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UseSkill; }
namespace System { class String; }

#define RPG_GAMECORE_USESKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC79340)
#define RPG_GAMECORE_USESKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC79350)
#define RPG_GAMECORE_USESKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC79300)

namespace RPG::GameCore
{
	class UseSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SkillName; // 0x18
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x20
		::System::Boolean RecoverySkillCD; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UseSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UseSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
