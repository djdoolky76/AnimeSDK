#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchCaseTaskListByAttackDamageType; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SWITCHCASETASKLISTBYATTACKDAMAGETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB13030)
#define RPG_GAMECORE_SWITCHCASETASKLISTBYATTACKDAMAGETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB12F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCaseTaskListByAttackDamageType_TypeDefinitionIndex = 23774;

	class SwitchCaseTaskListByAttackDamageType : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AttackDamageType Case; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASETASKLISTBYATTACKDAMAGETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchCaseTaskListByAttackDamageType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchCaseTaskListByAttackDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASETASKLISTBYATTACKDAMAGETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
