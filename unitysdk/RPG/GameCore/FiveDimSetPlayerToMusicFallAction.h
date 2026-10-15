#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetPlayerToMusicFallAction; }

#define RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DA850)
#define RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DA860)
#define RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DA790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerToMusicFallAction_TypeDefinitionIndex = 18757;

	class FiveDimSetPlayerToMusicFallAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsEnter; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
