#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CommonSkill; }
namespace RPG::GameCore { class ElationConfig; }
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace RPG::GameCore { class SkillConfig; }

#define RPG_GAMECORE_COMMONSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CC460)
#define RPG_GAMECORE_COMMONSKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CC330)

namespace RPG::GameCore
{
	class CommonSkill : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SkillID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::SkillConfig* Config; // 0x18
		::RPG::GameCore::SkillAbilityConfig* SkillAbility; // 0x20
		::RPG::GameCore::ElationConfig* ElationConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONSKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CommonSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CommonSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONSKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
