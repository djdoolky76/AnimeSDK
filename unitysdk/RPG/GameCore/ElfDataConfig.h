#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfDataConfig; }

#define RPG_GAMECORE_ELFDATACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D634EB0)
#define RPG_GAMECORE_ELFDATACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D634EC0)
#define RPG_GAMECORE_ELFDATACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D634DF0)

namespace RPG::GameCore
{
	class ElfDataConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDATACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfDataConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfDataConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDATACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfDataConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfDataConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDATACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
