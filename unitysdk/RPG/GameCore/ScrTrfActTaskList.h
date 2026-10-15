#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferBaseAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ScrTrfActTaskList; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SCRTRFACTTASKLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8AC60)
#define RPG_GAMECORE_SCRTRFACTTASKLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8AC70)
#define RPG_GAMECORE_SCRTRFACTTASKLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8AC30)

namespace RPG::GameCore
{
	class ScrTrfActTaskList : public ::RPG::GameCore::ScreenTransferBaseAction
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTTASKLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScrTrfActTaskList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScrTrfActTaskList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTTASKLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScrTrfActTaskList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScrTrfActTaskList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTTASKLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
