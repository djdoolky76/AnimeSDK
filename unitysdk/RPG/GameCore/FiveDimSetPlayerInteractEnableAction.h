#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetPlayerInteractEnableAction; }

#define RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AC520)
#define RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AC530)
#define RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AC450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerInteractEnableAction_TypeDefinitionIndex = 18770;

	class FiveDimSetPlayerInteractEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINTERACTENABLEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
