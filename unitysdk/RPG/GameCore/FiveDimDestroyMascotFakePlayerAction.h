#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDestroyMascotFakePlayerAction; }

#define RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B8B50)
#define RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B8B60)
#define RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B8AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDestroyMascotFakePlayerAction_TypeDefinitionIndex = 18678;

	class FiveDimDestroyMascotFakePlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
