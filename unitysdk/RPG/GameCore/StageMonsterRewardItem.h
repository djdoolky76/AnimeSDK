#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageMonsterRewardItem; }

#define RPG_GAMECORE_STAGEMONSTERREWARDITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE34B0)
#define RPG_GAMECORE_STAGEMONSTERREWARDITEM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAE3330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageMonsterRewardItem_TypeDefinitionIndex = 15144;

	class StageMonsterRewardItem : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 Rank; // 0x14
		::System::UInt32 Level; // 0x18
		::System::UInt32 Count; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEMONSTERREWARDITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageMonsterRewardItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEMONSTERREWARDITEM_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
