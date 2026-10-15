#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetCameraActiveAction; }

#define RPG_GAMECORE_FIVEDIMSETCAMERAACTIVEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D91C0)
#define RPG_GAMECORE_FIVEDIMSETCAMERAACTIVEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D91D0)
#define RPG_GAMECORE_FIVEDIMSETCAMERAACTIVEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D90F0)

namespace RPG::GameCore
{
	class FiveDimSetCameraActiveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Active; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCAMERAACTIVEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetCameraActiveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetCameraActiveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCAMERAACTIVEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetCameraActiveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetCameraActiveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCAMERAACTIVEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
