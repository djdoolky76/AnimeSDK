#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetRenderingItemStateAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DAF90)
#define RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DAFA0)
#define RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DAF60)

namespace RPG::GameCore
{
	class FiveDimSetRenderingItemStateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* StateName; // 0x10
		::System::Boolean IsReset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetRenderingItemStateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetRenderingItemStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetRenderingItemStateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetRenderingItemStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
