#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKFLCCJFKNF.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_ADDQUESTIDSTO_OFFSET UNITYSDK_OFFSET(0x1CD7AC00)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7B780)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETCHAPTERQUESTLISTREWARD_OFFSET UNITYSDK_OFFSET(0x1CD7C230)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETCHAPTERREWARD_OFFSET UNITYSDK_OFFSET(0x1CD7C530)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETQUESTBYINDEX_OFFSET UNITYSDK_OFFSET(0x1CD7BF20)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERAIMQUESTDATA_OFFSET UNITYSDK_OFFSET(0x1CD7B900)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERAIMQUESTID_OFFSET UNITYSDK_OFFSET(0x1CD7B8C0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1CD795E0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERQUESTIDS_OFFSET UNITYSDK_OFFSET(0x1CD7BC30)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERQUESTSTATUS_OFFSET UNITYSDK_OFFSET(0x1CD7BD20)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERQUESTS_OFFSET UNITYSDK_OFFSET(0x1CD7B9D0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_COMPLETEDQUESTCNT_OFFSET UNITYSDK_OFFSET(0x1CD7BE30)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_COMPLETENEEDCNT_OFFSET UNITYSDK_OFFSET(0x1CD7BCC0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_HASQUESTREWARD_OFFSET UNITYSDK_OFFSET(0x1CD79620)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0x1CD79D20)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_ISCHAPTERAIMCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CD7A2B0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_ISCHAPTERCLEAR_OFFSET UNITYSDK_OFFSET(0x1CD7A970)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_ISSEASON_OFFSET UNITYSDK_OFFSET(0x1CD799E0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_TOTALQUESTCNT_OFFSET UNITYSDK_OFFSET(0x1CD7BED0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_QUESTWEIGHT_OFFSET UNITYSDK_OFFSET(0x1CD7C620)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER__GETQUESTSTATUS_OFFSET UNITYSDK_OFFSET(0x1CD7BD80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGuideChapter_TypeDefinitionIndex = 66448;

	class GridFightGuideChapter : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _QuestList; // 0x10
		::System::UInt32 _ChapterAimQuest; // 0x18
		::System::Boolean _IsSeason; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 _ChapterID; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::UInt32>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_ChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERID_OFFSET))(this);
		}

		::System::Boolean get_IsSeason()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_ISSEASON_OFFSET))(this);
		}

		::System::UInt32 get_ChapterAimQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERAIMQUESTID_OFFSET))(this);
		}

		::RPG::Client::QuestData* get_ChapterAimQuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERAIMQUESTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* get_ChapterQuests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERQUESTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ChapterQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERQUESTIDS_OFFSET))(this);
		}

		::System::Boolean get_IsChapterAimCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_ISCHAPTERAIMCOMPLETED_OFFSET))(this);
		}

		::System::UInt32 get_CompleteNeedCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_COMPLETENEEDCNT_OFFSET))(this);
		}

		::AKFLCCJFKNF get_ChapterQuestStatus()
		{
			return ((::AKFLCCJFKNF(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERQUESTSTATUS_OFFSET))(this);
		}

		::System::Boolean get_IsChapterClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_ISCHAPTERCLEAR_OFFSET))(this);
		}

		::System::Int32 get_CompletedQuestCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_COMPLETEDQUESTCNT_OFFSET))(this);
		}

		::System::Int32 get_TotalQuestCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_TOTALQUESTCNT_OFFSET))(this);
		}

		::System::Boolean get_HasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_HASREWARD_OFFSET))(this);
		}

		::System::Boolean get_HasQuestReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_HASQUESTREWARD_OFFSET))(this);
		}

		::System::Void AddQuestIDsTo(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_ADDQUESTIDSTO_OFFSET))(this, a1);
		}

		::RPG::Client::QuestData* GetQuestByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETQUESTBYINDEX_OFFSET))(this, a1);
		}

		::System::Void GetChapterQuestListReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETCHAPTERQUESTLISTREWARD_OFFSET))(this);
		}

		::System::Void GetChapterReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETCHAPTERREWARD_OFFSET))(this);
		}

		static ::AKFLCCJFKNF _GetQuestStatus(::System::UInt32 a1)
		{
			return ((::AKFLCCJFKNF(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER__GETQUESTSTATUS_OFFSET))(a1);
		}

		static ::System::Int32 QuestWeight(::RPG::Client::QuestData* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_QUESTWEIGHT_OFFSET))(a1);
		}

	};
}
