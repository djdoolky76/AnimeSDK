#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SwitchCaseTaskList; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SWITCHCASETASKLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB407E0)
#define RPG_GAMECORE_SWITCHCASETASKLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB40690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCaseTaskList_TypeDefinitionIndex = 23771;

	class SwitchCaseTaskList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Case; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASETASKLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchCaseTaskList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchCaseTaskList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASETASKLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
