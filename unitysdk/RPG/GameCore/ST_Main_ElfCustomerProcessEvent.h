#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfCustomerProcessEvent; }

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7BF20)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7BF30)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7BE60)

namespace RPG::GameCore
{
	class ST_Main_ElfCustomerProcessEvent : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfCustomerProcessEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfCustomerProcessEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfCustomerProcessEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfCustomerProcessEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
