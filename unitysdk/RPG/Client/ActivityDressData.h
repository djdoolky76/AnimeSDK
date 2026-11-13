#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
namespace RPG::Client { class QuestData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYDRESSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBE3B40)
#define RPG_CLIENT_ACTIVITYDRESSDATA_GETITEMID_OFFSET UNITYSDK_OFFSET(0x1DBE3E00)
#define RPG_CLIENT_ACTIVITYDRESSDATA_GETPLAYERCARDID_OFFSET UNITYSDK_OFFSET(0x1DBE4170)
#define RPG_CLIENT_ACTIVITYDRESSDATA_GETPLAYERICONPATH_OFFSET UNITYSDK_OFFSET(0x1DBE41D0)
#define RPG_CLIENT_ACTIVITYDRESSDATA_GETVIDEOID_OFFSET UNITYSDK_OFFSET(0x1DBE42A0)
#define RPG_CLIENT_ACTIVITYDRESSDATA_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x1DBE3CF0)
#define RPG_CLIENT_ACTIVITYDRESSDATA_ISQUESTFINISH_OFFSET UNITYSDK_OFFSET(0x1DBE40C0)
#define RPG_CLIENT_ACTIVITYDRESSDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1DBE4300)
#define RPG_CLIENT_ACTIVITYDRESSDATA__CANGETREWARD_OFFSET UNITYSDK_OFFSET(0x1DBE4380)
#define RPG_CLIENT_ACTIVITYDRESSDATA__GETQUESTDATA_OFFSET UNITYSDK_OFFSET(0x1DBE3B50)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityDressData_TypeDefinitionIndex = 62980;

	class ActivityDressData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDRESSDATA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::QuestData* _GetQuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDRESSDATA__GETQUESTDATA_OFFSET))(this);
		}

		::System::UInt32 GetItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDRESSDATA_GETITEMID_OFFSET))(this);
		}

		::System::Boolean IsQuestFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDRESSDATA_ISQUESTFINISH_OFFSET))(this);
		}

		::System::UInt32 GetPlayerCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDRESSDATA_GETPLAYERCARDID_OFFSET))(this);
		}

		::System::String* GetPlayerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDRESSDATA_GETPLAYERICONPATH_OFFSET))(this);
		}

		::System::UInt32 GetVideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDRESSDATA_GETVIDEOID_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDRESSDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _CanGetReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDRESSDATA__CANGETREWARD_OFFSET))(this);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDRESSDATA_GET_QUESTID_OFFSET))(this);
		}

	};
}
