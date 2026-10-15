#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WolfBroGunPlayPuzzleSetupStartupMode; }

#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLESETUPSTARTUPMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7AB40)
#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLESETUPSTARTUPMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC7AB50)
#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLESETUPSTARTUPMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC7AB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroGunPlayPuzzleSetupStartupMode_TypeDefinitionIndex = 20371;

	class WolfBroGunPlayPuzzleSetupStartupMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Mode; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLESETUPSTARTUPMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleSetupStartupMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroGunPlayPuzzleSetupStartupMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLESETUPSTARTUPMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleSetupStartupMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroGunPlayPuzzleSetupStartupMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLESETUPSTARTUPMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
