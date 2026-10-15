#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCMainStoryRewardRow; }

#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C52F0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9C4750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMainStoryRewardRow_TypeDefinitionIndex = 14795;

	class RogueDLCMainStoryRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 IsImportant; // 0x10
		::System::UInt32 MainStoryID; // 0x14
		::System::UInt32 MainStoryReward; // 0x18
		::System::UInt32 QuestID; // 0x1C
		::System::UInt32 Sort; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCMainStoryRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
