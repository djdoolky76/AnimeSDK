#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfCustomerEating; }

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREATING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4E210)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREATING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4E220)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREATING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4E150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerEating_TypeDefinitionIndex = 21531;

	class ST_Main_ElfCustomerEating : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREATING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfCustomerEating* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfCustomerEating*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREATING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfCustomerEating* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfCustomerEating*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREATING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
