#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfWaiterCarrayFood; }

#define RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7D010)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7D020)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7CF50)

namespace RPG::GameCore
{
	class ST_Main_ElfWaiterCarrayFood : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterCarrayFood* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterCarrayFood*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterCarrayFood* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterCarrayFood*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
