#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueGambleGroupLevelType.h"
#include "unitysdk/RPG/GameCore/RogueGambleMachineType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournGambleGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNGAMBLEGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3B9F0)
#define RPG_GAMECORE_ROGUETOURNGAMBLEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA3B790)

namespace RPG::GameCore
{
	class RogueTournGambleGroupRow : public ::System::Object
	{
	public:
		::System::String* GambleGroupIcon; // 0x10
		::RPG::Client::TextID GroupName; // 0x18
		::RPG::GameCore::RogueGambleMachineType GambleGroupType; // 0x28
		::System::UInt32 GambleGroupID; // 0x2C
		::RPG::GameCore::RogueGambleGroupLevelType GambleGroupLevel; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNGAMBLEGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournGambleGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournGambleGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNGAMBLEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
