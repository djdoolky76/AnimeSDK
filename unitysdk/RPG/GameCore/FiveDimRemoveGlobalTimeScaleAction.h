#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimRemoveGlobalTimeScaleAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D7460)
#define RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D7470)
#define RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D73B0)

namespace RPG::GameCore
{
	class FiveDimRemoveGlobalTimeScaleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* Key; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
