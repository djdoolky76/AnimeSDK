#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FRVOnlyLockMovementAction; }

#define RPG_GAMECORE_FRVONLYLOCKMOVEMENTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC8D440)
#define RPG_GAMECORE_FRVONLYLOCKMOVEMENTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1FC8D450)
#define RPG_GAMECORE_FRVONLYLOCKMOVEMENTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1FC8D350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FRVOnlyLockMovementAction_TypeDefinitionIndex = 16934;

	class FRVOnlyLockMovementAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsLocked; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRVONLYLOCKMOVEMENTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FRVOnlyLockMovementAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FRVOnlyLockMovementAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRVONLYLOCKMOVEMENTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FRVOnlyLockMovementAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FRVOnlyLockMovementAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRVONLYLOCKMOVEMENTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
