#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_ROGUEMAGICACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE9CD3F0)
#define RPG_CLIENT_ROGUEMAGICACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xE9CD400)
#define RPG_CLIENT_ROGUEMAGICACTIVITYDATA__ISSHOWHANDBOOKREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xE9CD5B0)
#define RPG_CLIENT_ROGUEMAGICACTIVITYDATA__ISSHOWQUESTREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xE9CD510)
#define RPG_CLIENT_ROGUEMAGICACTIVITYDATA__ISSHOWSTORYARCHIVEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xE9CD940)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicActivityData_TypeDefinitionIndex = 63063;

	class RogueMagicActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowQuestRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICACTIVITYDATA__ISSHOWQUESTREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowHandbookRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICACTIVITYDATA__ISSHOWHANDBOOKREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowStoryArchiveRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICACTIVITYDATA__ISSHOWSTORYARCHIVEREWARDREDDOT_OFFSET))(this);
		}

	};
}
