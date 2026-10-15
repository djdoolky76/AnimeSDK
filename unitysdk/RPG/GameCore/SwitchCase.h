#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateTaskListWithFail; }
namespace RPG::GameCore { class SwitchCase; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SWITCHCASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB12460)
#define RPG_GAMECORE_SWITCHCASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB12470)
#define RPG_GAMECORE_SWITCHCASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB12420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCase_TypeDefinitionIndex = 23767;

	class SwitchCase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WithBreak; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::PredicateTaskListWithFail*>* TaskList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DefaultTask; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchCase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchCase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchCase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchCase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
