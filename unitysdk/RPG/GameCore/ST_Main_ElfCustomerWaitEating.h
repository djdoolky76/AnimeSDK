#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfCustomerWaitEating; }

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEATING_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8EAC0)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEATING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC8EAD0)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEATING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC8EA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerWaitEating_TypeDefinitionIndex = 21918;

	class ST_Main_ElfCustomerWaitEating : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEATING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitEating* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfCustomerWaitEating*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEATING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitEating* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfCustomerWaitEating*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITEATING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
