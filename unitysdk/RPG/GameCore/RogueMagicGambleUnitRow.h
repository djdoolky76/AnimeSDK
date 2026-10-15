#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueGambleUnitType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicGambleUnitRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICGAMBLEUNITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D4880)
#define RPG_GAMECORE_ROGUEMAGICGAMBLEUNITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9D46C0)

namespace RPG::GameCore
{
	class RogueMagicGambleUnitRow : public ::System::Object
	{
	public:
		::System::String* GambleUnitIcon; // 0x10
		::RPG::GameCore::RogueGambleUnitType GambleUnitType; // 0x18
		::System::UInt32 GambleUnitParam; // 0x1C
		::System::UInt32 GambleUnitID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICGAMBLEUNITROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicGambleUnitRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicGambleUnitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICGAMBLEUNITROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
