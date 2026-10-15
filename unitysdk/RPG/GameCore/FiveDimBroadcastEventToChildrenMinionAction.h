#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBroadcastEventToChildrenMinionAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B38E0)
#define RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B38F0)
#define RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B3830)

namespace RPG::GameCore
{
	class FiveDimBroadcastEventToChildrenMinionAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* EventName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
