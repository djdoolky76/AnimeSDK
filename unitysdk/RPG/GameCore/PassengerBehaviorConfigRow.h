#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PassengerBehaviorConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PASSENGERBEHAVIORCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F09F0)
#define RPG_GAMECORE_PASSENGERBEHAVIORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8F07C0)

namespace RPG::GameCore
{
	class PassengerBehaviorConfigRow : public ::System::Object
	{
	public:
		::System::String* NPCOverrideConfig; // 0x10
		::System::UInt32 BehaviorID; // 0x18
		::System::UInt32 NPCGroupID; // 0x1C
		::System::UInt32 AnchorID; // 0x20
		::System::UInt32 NPCID; // 0x24
		::System::UInt32 FloorID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASSENGERBEHAVIORCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PassengerBehaviorConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PassengerBehaviorConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASSENGERBEHAVIORCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
