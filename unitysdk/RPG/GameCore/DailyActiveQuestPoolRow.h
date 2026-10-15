#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DailyActiveQuestPoolRow; }

#define RPG_GAMECORE_DAILYACTIVEQUESTPOOLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EE380)
#define RPG_GAMECORE_DAILYACTIVEQUESTPOOLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5EE260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DailyActiveQuestPoolRow_TypeDefinitionIndex = 13115;

	class DailyActiveQuestPoolRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestID; // 0x10
		::System::UInt32 Type; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYACTIVEQUESTPOOLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DailyActiveQuestPoolRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DailyActiveQuestPoolRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYACTIVEQUESTPOOLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
