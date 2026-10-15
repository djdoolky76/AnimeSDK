#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfLeaderSkillConfig; }
namespace RPG::GameCore { class ElfLeaderSkillLevelConfig; }

#define RPG_GAMECORE_ELFLEADERSKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D636910)
#define RPG_GAMECORE_ELFLEADERSKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D636820)

namespace RPG::GameCore
{
	class ElfLeaderSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElfLeaderSkillLevelConfig*>* LeaderSkillLevelConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFLEADERSKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfLeaderSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfLeaderSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFLEADERSKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
