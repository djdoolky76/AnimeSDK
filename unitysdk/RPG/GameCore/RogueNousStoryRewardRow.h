#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousStoryRewardRow; }

#define RPG_GAMECORE_ROGUENOUSSTORYREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F8A60)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9F8490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousStoryRewardRow_TypeDefinitionIndex = 14932;

	class RogueNousStoryRewardRow : public ::System::Object
	{
	public:
		::System::Boolean IsImportant; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 QuestID; // 0x14
		::System::UInt32 MainStoryReward; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNousStoryRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNousStoryRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
