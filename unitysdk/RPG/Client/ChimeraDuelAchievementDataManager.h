#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraDuelAchievementDataGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xCB17A60)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAMANAGER_GETCHIMERADUELACHIEVEMENTDATAGROUPS_OFFSET UNITYSDK_OFFSET(0xCB178F0)

namespace RPG::Client
{
	class ChimeraDuelAchievementDataManager : public ::System::Object
	{
	public:
		::System::UInt32 _MaxTabCount; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAMANAGER_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelAchievementDataGroup*>* GetChimeraDuelAchievementDataGroups(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelAchievementDataGroup*>*(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAMANAGER_GETCHIMERADUELACHIEVEMENTDATAGROUPS_OFFSET))(this, a1, a2);
		}

	};
}
