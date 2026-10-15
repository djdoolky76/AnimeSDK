#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SwitchCaseByDynamicValue; }
namespace RPG::GameCore { class SwitchCaseTaskList; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SWITCHCASEBYDYNAMICVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB12890)
#define RPG_GAMECORE_SWITCHCASEBYDYNAMICVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB128A0)
#define RPG_GAMECORE_SWITCHCASEBYDYNAMICVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB12850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCaseByDynamicValue_TypeDefinitionIndex = 23772;

	class SwitchCaseByDynamicValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Switch; // 0x18
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Boolean WithBreak; // 0x24
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::SwitchCaseTaskList*>* CaseTaskList; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DefaultTaskList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYDYNAMICVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchCaseByDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchCaseByDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYDYNAMICVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchCaseByDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchCaseByDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYDYNAMICVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
