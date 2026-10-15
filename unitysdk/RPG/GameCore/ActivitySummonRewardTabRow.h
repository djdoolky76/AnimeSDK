#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivitySummonRewardTabRow; }

#define RPG_GAMECORE_ACTIVITYSUMMONREWARDTABROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D353460)
#define RPG_GAMECORE_ACTIVITYSUMMONREWARDTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D353210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySummonRewardTabRow_TypeDefinitionIndex = 12413;

	class ActivitySummonRewardTabRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID QuestName; // 0x10
		::RPG::Client::TextID OriginalQuestName; // 0x20
		::System::UInt32 ID; // 0x30
		::System::UInt32 GroupID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONREWARDTABROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivitySummonRewardTabRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivitySummonRewardTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONREWARDTABROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
