#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueGambleGroupLevelType.h"
#include "unitysdk/RPG/GameCore/RogueGambleMachineType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicGambleGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICGAMBLEGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A6D50)
#define RPG_GAMECORE_ROGUEMAGICGAMBLEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9A6B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicGambleGroupRow_TypeDefinitionIndex = 14888;

	class RogueMagicGambleGroupRow : public ::System::Object
	{
	public:
		::System::String* GambleGroupIcon; // 0x10
		::System::UInt32 GambleGroupID; // 0x18
		::RPG::GameCore::RogueGambleMachineType GambleGroupType; // 0x1C
		::RPG::GameCore::RogueGambleGroupLevelType GambleGroupLevel; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICGAMBLEGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicGambleGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicGambleGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICGAMBLEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
