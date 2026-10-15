#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueGambleUnitType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournGambleUnitRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNGAMBLEUNITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3BBF0)
#define RPG_GAMECORE_ROGUETOURNGAMBLEUNITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA3BA00)

namespace RPG::GameCore
{
	class RogueTournGambleUnitRow : public ::System::Object
	{
	public:
		::System::String* GambleUnitIcon; // 0x10
		::System::UInt32 GambleUnitParam; // 0x18
		::System::UInt32 UnitTextureParam; // 0x1C
		::System::UInt32 GambleUnitID; // 0x20
		::RPG::GameCore::RogueGambleUnitType GambleUnitType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNGAMBLEUNITROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournGambleUnitRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournGambleUnitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNGAMBLEUNITROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
