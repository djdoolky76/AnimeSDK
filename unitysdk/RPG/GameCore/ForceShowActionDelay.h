#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ForceShowActionDelay; }

#define RPG_GAMECORE_FORCESHOWACTIONDELAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E9D70)
#define RPG_GAMECORE_FORCESHOWACTIONDELAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E9D80)
#define RPG_GAMECORE_FORCESHOWACTIONDELAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E9D40)

namespace RPG::GameCore
{
	class ForceShowActionDelay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESHOWACTIONDELAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForceShowActionDelay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForceShowActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESHOWACTIONDELAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForceShowActionDelay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForceShowActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESHOWACTIONDELAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
