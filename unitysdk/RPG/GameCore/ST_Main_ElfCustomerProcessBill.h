#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfCustomerProcessBill; }

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7BD40)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7BD50)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7BD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerProcessBill_TypeDefinitionIndex = 21536;

	class ST_Main_ElfCustomerProcessBill : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single LookAtDuration; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfCustomerProcessBill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfCustomerProcessBill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfCustomerProcessBill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfCustomerProcessBill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSBILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
