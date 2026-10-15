#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfFeverSkillConfig; }
namespace RPG::GameCore { class ElfFeverSkillLevelConfig; }

#define RPG_GAMECORE_ELFFEVERSKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D636100)
#define RPG_GAMECORE_ELFFEVERSKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D636010)

namespace RPG::GameCore
{
	class ElfFeverSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElfFeverSkillLevelConfig*>* FeverSkillLevelConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFEVERSKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfFeverSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfFeverSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFEVERSKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
