#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCEndGameRewardRow; }

#define RPG_GAMECORE_ROGUEDLCENDGAMEREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C0B30)
#define RPG_GAMECORE_ROGUEDLCENDGAMEREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9C09F0)

namespace RPG::GameCore
{
	class RogueDLCEndGameRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 Sort; // 0x10
		::System::UInt32 EndGameRewardID; // 0x14
		::System::UInt32 QuestID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENDGAMEREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCEndGameRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCEndGameRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENDGAMEREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
