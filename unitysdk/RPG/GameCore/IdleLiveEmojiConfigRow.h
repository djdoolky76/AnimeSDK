#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JICLAHGGFJL;
namespace RPG::GameCore { class IdleLiveEmojiConfigRow; }

#define RPG_GAMECORE_IDLELIVEEMOJICONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D779F10)
#define RPG_GAMECORE_IDLELIVEEMOJICONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D779DC0)

namespace RPG::GameCore
{
	class IdleLiveEmojiConfigRow : public ::System::Object
	{
	public:
		::JICLAHGGFJL* TextNumRange; // 0x10
		::System::Single Interval; // 0x18
		::System::UInt32 EmojiPhaseID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEMOJICONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveEmojiConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveEmojiConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEMOJICONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
