#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FantasticStoryBuffRow; }

#define RPG_GAMECORE_FANTASTICSTORYBUFFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D696940)
#define RPG_GAMECORE_FANTASTICSTORYBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6966C0)

namespace RPG::GameCore
{
	class FantasticStoryBuffRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AvailableBattleID; // 0x10
		::System::UInt32 MazebuffID; // 0x18
		::System::UInt32 BuffSlot; // 0x1C
		::System::UInt32 ActivityModuleID; // 0x20
		::System::Boolean ClientShowAvailableTips; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 BuffID; // 0x28
		::System::UInt32 UnlockChapterID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYBUFFROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FantasticStoryBuffRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FantasticStoryBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
