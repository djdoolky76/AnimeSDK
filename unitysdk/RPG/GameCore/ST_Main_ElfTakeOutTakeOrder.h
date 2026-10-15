#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfTakeOutTakeOrder; }

#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTTAKEORDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7CCF0)
#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTTAKEORDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7CD00)
#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTTAKEORDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7CC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfTakeOutTakeOrder_TypeDefinitionIndex = 21537;

	class ST_Main_ElfTakeOutTakeOrder : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTTAKEORDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfTakeOutTakeOrder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfTakeOutTakeOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTTAKEORDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfTakeOutTakeOrder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfTakeOutTakeOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTTAKEORDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
