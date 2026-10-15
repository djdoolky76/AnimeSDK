#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicScoreRow; }

#define RPG_GAMECORE_ROGUEMAGICSCOREROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D60E0)
#define RPG_GAMECORE_ROGUEMAGICSCOREROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9D5F30)

namespace RPG::GameCore
{
	class RogueMagicScoreRow : public ::System::Object
	{
	public:
		::System::UInt32 LayerNum; // 0x10
		::System::UInt32 RoomNum; // 0x14
		::System::UInt32 WeeklyScore; // 0x18
		::System::UInt32 WorldLevel; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCOREROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicScoreRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicScoreRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCOREROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
