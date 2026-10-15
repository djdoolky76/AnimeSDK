#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WolfBroGunPlayPuzzleLoadClockParkModifier; }

#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA81A0)
#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA81B0)
#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA80E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroGunPlayPuzzleLoadClockParkModifier_TypeDefinitionIndex = 20372;

	class WolfBroGunPlayPuzzleLoadClockParkModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLELOADCLOCKPARKMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
