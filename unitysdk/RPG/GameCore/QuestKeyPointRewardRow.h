#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class QuestKeyPointRewardRow; }

#define RPG_GAMECORE_QUESTKEYPOINTREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D960E60)
#define RPG_GAMECORE_QUESTKEYPOINTREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D960CB0)

namespace RPG::GameCore
{
	class QuestKeyPointRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestKeyPointReward; // 0x10
		::System::UInt32 QuestKeyPointItem; // 0x14
		::System::UInt32 QuestKeyPoint; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTKEYPOINTREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::QuestKeyPointRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::QuestKeyPointRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTKEYPOINTREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
