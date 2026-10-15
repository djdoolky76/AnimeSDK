#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerGuestSequenceRow; }

#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6205D0)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D61FFB0)

namespace RPG::GameCore
{
	class DrinkMakerGuestSequenceRow : public ::System::Object
	{
	public:
		::System::Boolean NeedOpenWorkBook; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 SequenceID; // 0x14
		::System::UInt32 StartChatID; // 0x18
		::System::UInt32 GuestID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerGuestSequenceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerGuestSequenceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
