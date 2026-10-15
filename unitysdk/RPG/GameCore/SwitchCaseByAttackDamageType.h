#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class SwitchCaseByAttackDamageType; }
namespace RPG::GameCore { class SwitchCaseTaskListByAttackDamageType; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3FF70)
#define RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB3FF80)
#define RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3FF40)

namespace RPG::GameCore
{
	class SwitchCaseByAttackDamageType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AttackDamageTypeConfig* Source; // 0x18
		::Il2CppArray<::RPG::GameCore::SwitchCaseTaskListByAttackDamageType*>* CaseTaskList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DefaultTaskList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchCaseByAttackDamageType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchCaseByAttackDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchCaseByAttackDamageType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchCaseByAttackDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
