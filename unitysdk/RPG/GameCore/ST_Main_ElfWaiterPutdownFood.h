#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfWaiterPutdownFood; }

#define RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7D710)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7D720)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7D6E0)

namespace RPG::GameCore
{
	class ST_Main_ElfWaiterPutdownFood : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Duration; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterPutdownFood* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterPutdownFood*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterPutdownFood* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterPutdownFood*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERPUTDOWNFOOD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
