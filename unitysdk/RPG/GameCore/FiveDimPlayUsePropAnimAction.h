#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPlayUsePropAnimAction; }

#define RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D1150)
#define RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D1160)
#define RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D10E0)

namespace RPG::GameCore
{
	class FiveDimPlayUsePropAnimAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlayUsePropAnimAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlayUsePropAnimAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYUSEPROPANIMACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
