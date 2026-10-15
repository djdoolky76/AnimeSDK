#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSceneDangerMonsterWarningConfig; }
namespace RPG::GameCore { class NPCMonsterWarningConfigClass; }

#define RPG_GAMECORE_NPCMONSTERWARNINGCONFIGCLASS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A4A80)
#define RPG_GAMECORE_NPCMONSTERWARNINGCONFIGCLASS_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8A49F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCMonsterWarningConfigClass_TypeDefinitionIndex = 17623;

	class NPCMonsterWarningConfigClass : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AdvSceneDangerMonsterWarningConfig* AdvSceneDangerMonsterWarning; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERWARNINGCONFIGCLASS_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::NPCMonsterWarningConfigClass* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NPCMonsterWarningConfigClass*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERWARNINGCONFIGCLASS_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
