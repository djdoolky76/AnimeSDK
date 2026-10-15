#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfFeverSkillConfig; }
namespace RPG::GameCore { class ElfLeaderSkillConfig; }
namespace RPG::GameCore { class ElfSkillConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ELFSKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D638860)
#define RPG_GAMECORE_ELFSKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D637D90)

namespace RPG::GameCore
{
	class ElfSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EatSpeedUpEffectPath; // 0x10
		::System::String* MoveSpeedUpEffectPath; // 0x18
		::System::String* LeaderSkillEffectPath; // 0x20
		::RPG::GameCore::ElfFeverSkillConfig* FeverSkillConfig; // 0x28
		::RPG::GameCore::ElfLeaderSkillConfig* LeaderSkillConfig; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
