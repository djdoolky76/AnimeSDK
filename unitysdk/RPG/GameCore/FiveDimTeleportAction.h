#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPortalTarget; }
namespace RPG::GameCore { class FiveDimTeleportAction; }

#define RPG_GAMECORE_FIVEDIMTELEPORTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E0E70)
#define RPG_GAMECORE_FIVEDIMTELEPORTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E0E80)
#define RPG_GAMECORE_FIVEDIMTELEPORTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E0E40)

namespace RPG::GameCore
{
	class FiveDimTeleportAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimPortalTarget* Target; // 0x10
		::System::Boolean NoCameraBlend; // 0x18
		::System::Boolean WaitFullStreaming; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTELEPORTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTeleportAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTeleportAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTELEPORTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTeleportAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTeleportAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTELEPORTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
