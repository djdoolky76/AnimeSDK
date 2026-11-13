#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKFLCCJFKNF.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class TarotBookReadReward; }
namespace RPG::GameCore { class TarotBookReadRewardRow; }

#define RPG_CLIENT_TAROTBOOKREADREWARD_CREATE_OFFSET UNITYSDK_OFFSET(0x1ACB4F70)
#define RPG_CLIENT_TAROTBOOKREADREWARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB7910)
#define RPG_CLIENT_TAROTBOOKREADREWARD_GETQUESTDATA_OFFSET UNITYSDK_OFFSET(0x1ACAD3E0)
#define RPG_CLIENT_TAROTBOOKREADREWARD_GET_ID_OFFSET UNITYSDK_OFFSET(0x1ACAC550)
#define RPG_CLIENT_TAROTBOOKREADREWARD_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x1ACB7870)
#define RPG_CLIENT_TAROTBOOKREADREWARD_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1ACB52C0)
#define RPG_CLIENT_TAROTBOOKREADREWARD_GET_STORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1ACB78C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookReadReward_TypeDefinitionIndex = 70018;

	class TarotBookReadReward : public ::System::Object
	{
	public:
		::RPG::GameCore::TarotBookReadRewardRow* _Meta; // 0x10
		::System::Void _ctor(::RPG::GameCore::TarotBookReadRewardRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TarotBookReadRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKREADREWARD_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKREADREWARD_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKREADREWARD_GET_QUESTID_OFFSET))(this);
		}

		::System::UInt32 get_StoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKREADREWARD_GET_STORYCOUNT_OFFSET))(this);
		}

		::AKFLCCJFKNF get_Status()
		{
			return ((::AKFLCCJFKNF(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKREADREWARD_GET_STATUS_OFFSET))(this);
		}

		static ::RPG::Client::TarotBookReadReward* Create(::RPG::GameCore::TarotBookReadRewardRow* a1)
		{
			return ((::RPG::Client::TarotBookReadReward*(*)(::RPG::GameCore::TarotBookReadRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKREADREWARD_CREATE_OFFSET))(a1);
		}

		::RPG::Client::QuestData* GetQuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKREADREWARD_GETQUESTDATA_OFFSET))(this);
		}

	};
}
