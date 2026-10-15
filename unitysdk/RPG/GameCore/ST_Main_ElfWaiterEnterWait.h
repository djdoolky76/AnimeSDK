#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfWaiterEnterWait; }

#define RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7D4C0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7D4D0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7D400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterEnterWait_TypeDefinitionIndex = 21526;

	class ST_Main_ElfWaiterEnterWait : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterEnterWait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterEnterWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterEnterWait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterEnterWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERENTERWAIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
