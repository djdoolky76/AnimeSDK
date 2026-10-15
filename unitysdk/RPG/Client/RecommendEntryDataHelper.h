#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RecommendEntryDataRepository; }

#define RPG_CLIENT_RECOMMENDENTRYDATAHELPER_GETREPOSITORY_OFFSET UNITYSDK_OFFSET(0xDE612B0)

namespace RPG::Client
{
	class RecommendEntryDataHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::RecommendEntryDataRepository* GetRepository()
		{
			return ((::RPG::Client::RecommendEntryDataRepository*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATAHELPER_GETREPOSITORY_OFFSET))();
		}

	};
}
