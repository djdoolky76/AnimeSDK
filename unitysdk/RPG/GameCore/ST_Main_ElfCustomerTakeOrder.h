#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfCustomerTakeOrder; }

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERTAKEORDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8E930)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERTAKEORDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC8E940)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERTAKEORDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC8E870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerTakeOrder_TypeDefinitionIndex = 21917;

	class ST_Main_ElfCustomerTakeOrder : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERTAKEORDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfCustomerTakeOrder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfCustomerTakeOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERTAKEORDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfCustomerTakeOrder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfCustomerTakeOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERTAKEORDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
