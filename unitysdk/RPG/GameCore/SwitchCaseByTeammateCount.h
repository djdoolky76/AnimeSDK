#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamMemberCountingOption.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchCaseByTeammateCount; }
namespace RPG::GameCore { class SwitchCaseTaskList; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB40460)
#define RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB40470)
#define RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB40420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCaseByTeammateCount_TypeDefinitionIndex = 23773;

	class SwitchCaseByTeammateCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType TeamType; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::SwitchCaseTaskList*>* CaseTaskList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DefaultTaskList; // 0x28
		::RPG::GameCore::TeamMemberCountingOption TeamMemberCountingOption; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchCaseByTeammateCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchCaseByTeammateCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchCaseByTeammateCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchCaseByTeammateCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
