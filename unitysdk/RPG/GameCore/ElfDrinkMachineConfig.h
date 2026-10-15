#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfDrinkMachineConfig; }

#define RPG_GAMECORE_ELFDRINKMACHINECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D635490)
#define RPG_GAMECORE_ELFDRINKMACHINECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6354A0)
#define RPG_GAMECORE_ELFDRINKMACHINECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D635440)

namespace RPG::GameCore
{
	class ElfDrinkMachineConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 Price; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDRINKMACHINECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfDrinkMachineConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfDrinkMachineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDRINKMACHINECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfDrinkMachineConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfDrinkMachineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDRINKMACHINECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
