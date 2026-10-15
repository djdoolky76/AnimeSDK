#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfCustomerWaitEvent; }

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7C3D0)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7C3E0)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7C310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerWaitEvent_TypeDefinitionIndex = 21533;

	class ST_Main_ElfCustomerWaitEvent : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfCustomerWaitEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfCustomerWaitEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
