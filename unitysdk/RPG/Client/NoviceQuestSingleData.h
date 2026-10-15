#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKFLCCJFKNF.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class ActivityNewbiePromoteRow; }

#define RPG_CLIENT_NOVICEQUESTSINGLEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD9DBA90)
#define RPG_CLIENT_NOVICEQUESTSINGLEDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xD9DBC60)
#define RPG_CLIENT_NOVICEQUESTSINGLEDATA_GET__QUESTDATA_OFFSET UNITYSDK_OFFSET(0xD9DBD10)

namespace RPG::Client
{
	inline static constexpr unsigned int NoviceQuestSingleData_TypeDefinitionIndex = 61647;

	class NoviceQuestSingleData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityNewbiePromoteRow* Row; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVICEQUESTSINGLEDATA_CTOR_OFFSET))(this);
		}

		::AKFLCCJFKNF get_Status()
		{
			return ((::AKFLCCJFKNF(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVICEQUESTSINGLEDATA_GET_STATUS_OFFSET))(this);
		}

		::RPG::Client::QuestData* get__QuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVICEQUESTSINGLEDATA_GET__QUESTDATA_OFFSET))(this);
		}

	};
}
