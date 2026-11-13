#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
namespace RPG::Client { class TreasureDungeonLevelData; }
namespace RPG::Client { class TreasureDungeonModule; }
namespace RPG::GameCore { class TreasureDungeoActivityQuestConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE66DC0)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_GET__GUIDEMISSIONID_OFFSET UNITYSDK_OFFSET(0x1CE678D0)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_GET__TREASUREDUNGEONMODULE_OFFSET UNITYSDK_OFFSET(0x1CE674C0)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1CE67790)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_RECORDALLSEENDUNGEON_OFFSET UNITYSDK_OFFSET(0x1CE672B0)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_RECORDSEENDUNGEON_OFFSET UNITYSDK_OFFSET(0x1CE67700)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_REFRESHREDDOT_OFFSET UNITYSDK_OFFSET(0x1CE66DE0)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__RECORDSEENDUNGEONLEVEL_OFFSET UNITYSDK_OFFSET(0x1CE67570)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHFINALREWARD_OFFSET UNITYSDK_OFFSET(0x1CE679E0)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHHASREWARDDUNGEON_OFFSET UNITYSDK_OFFSET(0x1CE67AF0)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHNEWDUNGEONLISTBYLEVELDATA_OFFSET UNITYSDK_OFFSET(0x1CE67C40)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHNEWDUNGEONLIST_OFFSET UNITYSDK_OFFSET(0x1CE67100)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHREWARD_OFFSET UNITYSDK_OFFSET(0x1CE66F70)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonActivityData_TypeDefinitionIndex = 63078;

	class TreasureDungeonActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* NewDungeonList; // 0xA0
		::System::Collections::Generic::List_1<::System::UInt32>* HasRewardDungeonList; // 0xA8
		::System::Boolean IsFinalRewardCanTake; // 0xB0
		::System::Boolean _IsInited; // 0xB1
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void RefreshRedDot(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_REFRESHREDDOT_OFFSET))(this, a1);
		}

		::System::Void RecordAllSeenDungeon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_RECORDALLSEENDUNGEON_OFFSET))(this);
		}

		::System::Void RecordSeenDungeon(::RPG::Client::TreasureDungeonLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_RECORDSEENDUNGEON_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHREWARD_OFFSET))(this);
		}

		::System::Void _RefreshHasRewardDungeon(::RPG::GameCore::TreasureDungeoActivityQuestConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHHASREWARDDUNGEON_OFFSET))(this, a1);
		}

		::System::Void _RefreshNewDungeonListByLevelData(::RPG::Client::TreasureDungeonLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHNEWDUNGEONLISTBYLEVELDATA_OFFSET))(this, a1);
		}

		::System::Void _RefreshNewDungeonList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHNEWDUNGEONLIST_OFFSET))(this);
		}

		::System::Void _RefreshFinalReward(::RPG::GameCore::TreasureDungeoActivityQuestConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHFINALREWARD_OFFSET))(this, a1);
		}

		::System::Void _RecordSeenDungeonLevel(::RPG::Client::TreasureDungeonLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__RECORDSEENDUNGEONLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::TreasureDungeonModule* get__TreasureDungeonModule()
		{
			return ((::RPG::Client::TreasureDungeonModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_GET__TREASUREDUNGEONMODULE_OFFSET))(this);
		}

		::System::UInt32 get__GuideMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_GET__GUIDEMISSIONID_OFFSET))(this);
		}

	};
}
