#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEmojiSenderRow; }

#define RPG_GAMECORE_IDLELIVEEMOJISENDERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77A1E0)
#define RPG_GAMECORE_IDLELIVEEMOJISENDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77A060)

namespace RPG::GameCore
{
	class IdleLiveEmojiSenderRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEMOJISENDERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveEmojiSenderRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveEmojiSenderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEMOJISENDERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
