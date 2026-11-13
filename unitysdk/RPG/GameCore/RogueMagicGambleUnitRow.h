#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueGambleUnitType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicGambleUnitRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICGAMBLEUNITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x20774A90)
#define RPG_GAMECORE_ROGUEMAGICGAMBLEUNITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x207748D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicGambleUnitRow_TypeDefinitionIndex = 15046;

	class RogueMagicGambleUnitRow : public ::System::Object
	{
	public:
		::System::String* GambleUnitIcon; // 0x10
		::System::UInt32 GambleUnitID; // 0x18
		::System::UInt32 GambleUnitParam; // 0x1C
		::RPG::GameCore::RogueGambleUnitType GambleUnitType; // 0x20
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
