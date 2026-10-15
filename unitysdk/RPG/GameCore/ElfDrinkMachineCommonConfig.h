#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfDrinkMachineCommonConfig; }

#define RPG_GAMECORE_ELFDRINKMACHINECOMMONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D635430)
#define RPG_GAMECORE_ELFDRINKMACHINECOMMONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D635310)

namespace RPG::GameCore
{
	class ElfDrinkMachineCommonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MaxDrinkCount; // 0x10
		::System::UInt32 MakeDrinkCount; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDRINKMACHINECOMMONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfDrinkMachineCommonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfDrinkMachineCommonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDRINKMACHINECOMMONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
