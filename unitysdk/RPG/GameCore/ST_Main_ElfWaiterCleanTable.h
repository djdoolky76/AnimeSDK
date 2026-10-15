#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfWaiterCleanTable; }

#define RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7D330)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANTABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7D340)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANTABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7D270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterCleanTable_TypeDefinitionIndex = 21521;

	class ST_Main_ElfWaiterCleanTable : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANTABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterCleanTable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterCleanTable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANTABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterCleanTable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterCleanTable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANTABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
