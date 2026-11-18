#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/System/Object.h"

class MEKACGJBPGE;

#define SHARE_HOLLOWQUESTUTIL_GETLOCKSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1EC8D5B0)
#define SHARE_HOLLOWQUESTUTIL_GETQUESTCONFIG_OFFSET UNITYSDK_OFFSET(0x1EC8D4D0)
#define SHARE_HOLLOWQUESTUTIL_ISABYSSQUEST_OFFSET UNITYSDK_OFFSET(0x1EC8D470)
#define SHARE_HOLLOWQUESTUTIL_ISABYSSS2QUEST_OFFSET UNITYSDK_OFFSET(0x1EC8D490)
#define SHARE_HOLLOWQUESTUTIL_ISHEATQUEST_OFFSET UNITYSDK_OFFSET(0x1EC8D4B0)

namespace Share
{
	inline static constexpr unsigned int HollowQuestUtil_TypeDefinitionIndex = 17069;

	class HollowQuestUtil : public ::System::Object
	{
	public:
		static ::System::Boolean IsAbyssQuest(::Share::EHollowQuestType questType)
		{
			return ((::System::Boolean(*)(::Share::EHollowQuestType))((::PBYTE)hIl2Cpp + SHARE_HOLLOWQUESTUTIL_ISABYSSQUEST_OFFSET))(questType);
		}

		static ::System::Boolean IsAbyssS2Quest(::Share::EHollowQuestType questType)
		{
			return ((::System::Boolean(*)(::Share::EHollowQuestType))((::PBYTE)hIl2Cpp + SHARE_HOLLOWQUESTUTIL_ISABYSSS2QUEST_OFFSET))(questType);
		}

		static ::System::Boolean IsHeatQuest(::Share::EHollowQuestType questType)
		{
			return ((::System::Boolean(*)(::Share::EHollowQuestType))((::PBYTE)hIl2Cpp + SHARE_HOLLOWQUESTUTIL_ISHEATQUEST_OFFSET))(questType);
		}

		static ::MEKACGJBPGE* GetQuestConfig(::System::Int32 questID)
		{
			return ((::MEKACGJBPGE*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SHARE_HOLLOWQUESTUTIL_GETQUESTCONFIG_OFFSET))(questID);
		}

		static ::System::Int32 GetLockSlotCount(::System::Int32 questID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SHARE_HOLLOWQUESTUTIL_GETLOCKSLOTCOUNT_OFFSET))(questID);
		}
	};
}
