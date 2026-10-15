#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueKillPassiveMonster; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEKILLPASSIVEMONSTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7C480)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEKILLPASSIVEMONSTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7C490)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEKILLPASSIVEMONSTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7C450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueKillPassiveMonster_TypeDefinitionIndex = 21785;

	class SetDynamicValueByRogueKillPassiveMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEKILLPASSIVEMONSTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueKillPassiveMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueKillPassiveMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEKILLPASSIVEMONSTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueKillPassiveMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueKillPassiveMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEKILLPASSIVEMONSTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
