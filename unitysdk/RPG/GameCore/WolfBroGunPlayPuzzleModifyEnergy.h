#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WolfBroGunPlayPuzzleModifyEnergy; }

#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLEMODIFYENERGY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7A9F0)
#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLEMODIFYENERGY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC7AA00)
#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLEMODIFYENERGY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC7A9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroGunPlayPuzzleModifyEnergy_TypeDefinitionIndex = 20370;

	class WolfBroGunPlayPuzzleModifyEnergy : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLEMODIFYENERGY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleModifyEnergy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroGunPlayPuzzleModifyEnergy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLEMODIFYENERGY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleModifyEnergy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroGunPlayPuzzleModifyEnergy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLEMODIFYENERGY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
