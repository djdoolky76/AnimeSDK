#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGuideChapter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7B7A0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GETCHAPTERS_OFFSET UNITYSDK_OFFSET(0x1CD79CC0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GETCURCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1CD79A20)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GETGUIDECHAPTERBYID_OFFSET UNITYSDK_OFFSET(0x1CD79960)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_ALLCHAPTERQUESTIDS_OFFSET UNITYSDK_OFFSET(0x1CD7AA20)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_COMMONCHAPTERS_OFFSET UNITYSDK_OFFSET(0x1CD7AC60)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_COMPLETEDCHAPTERCNT_OFFSET UNITYSDK_OFFSET(0x1CD791B0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_CURCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1CD79550)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_CURCHAPTER_OFFSET UNITYSDK_OFFSET(0x1CD7A320)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_FIRSTCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1CD7A4D0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_FIRSTCHAPTER_OFFSET UNITYSDK_OFFSET(0x1CD7A560)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_ISALLCHAPTERGOT_OFFSET UNITYSDK_OFFSET(0x1CD7A820)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CD79120)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_LASTCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1CD7A770)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_SEASONCHAPTERS_OFFSET UNITYSDK_OFFSET(0x1CD7AC80)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_TOTALCHAPTERCNT_OFFSET UNITYSDK_OFFSET(0x1CD79350)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASANYCHAPTERCANGETREWARD_OFFSET UNITYSDK_OFFSET(0x1CD7A250)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASCHAPTERCANGETREWARDAFTER_OFFSET UNITYSDK_OFFSET(0x1CD79DB0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASCHAPTERCANGETREWARDBEFORE_OFFSET UNITYSDK_OFFSET(0x1CD796C0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASCHAPTERCANGETREWARD_OFFSET UNITYSDK_OFFSET(0x1CD7A050)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASUNLOCKQUESTINUNLOCKCHAPTER_OFFSET UNITYSDK_OFFSET(0x1CD793A0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_SET_COMMONCHAPTERS_OFFSET UNITYSDK_OFFSET(0x1CD7AC70)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_SET_SEASONCHAPTERS_OFFSET UNITYSDK_OFFSET(0x1CD7AC90)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK_SYNC_OFFSET UNITYSDK_OFFSET(0x1CD7ACA0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK__ADDCHAPTER_OFFSET UNITYSDK_OFFSET(0x1CD7B5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGuideBook_TypeDefinitionIndex = 66446;

	class GridFightGuideBook : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGuideChapter*>* _CommonChapters_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGuideChapter*>* _SeasonChapters_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGuideChapter*>* _Chapters; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Boolean HasUnlockQuestInUnlockChapter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASUNLOCKQUESTINUNLOCKCHAPTER_OFFSET))(this);
		}

		::System::Boolean HasChapterCanGetRewardBefore(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASCHAPTERCANGETREWARDBEFORE_OFFSET))(this, a1);
		}

		::System::Boolean HasChapterCanGetRewardAfter(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASCHAPTERCANGETREWARDAFTER_OFFSET))(this, a1);
		}

		::System::Boolean HasChapterCanGetReward(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASCHAPTERCANGETREWARD_OFFSET))(this, a1);
		}

		::System::Boolean HasAnyChapterCanGetReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_HASANYCHAPTERCANGETREWARD_OFFSET))(this);
		}

		::System::UInt32 GetCurChapterID(::System::Boolean a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GETCURCHAPTERID_OFFSET))(this, a1);
		}

		::System::Int32 get_CurChapterID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_CURCHAPTERID_OFFSET))(this);
		}

		::System::Int32 get_FirstChapterID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_FIRSTCHAPTERID_OFFSET))(this);
		}

		::System::Int32 get_LastChapterID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_LASTCHAPTERID_OFFSET))(this);
		}

		::System::Int32 get_CompletedChapterCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_COMPLETEDCHAPTERCNT_OFFSET))(this);
		}

		::System::Boolean get_IsAllChapterGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_ISALLCHAPTERGOT_OFFSET))(this);
		}

		::System::Int32 get_TotalChapterCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_TOTALCHAPTERCNT_OFFSET))(this);
		}

		::RPG::Client::GridFightGuideChapter* get_CurChapter()
		{
			return ((::RPG::Client::GridFightGuideChapter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_CURCHAPTER_OFFSET))(this);
		}

		::RPG::Client::GridFightGuideChapter* get_FirstChapter()
		{
			return ((::RPG::Client::GridFightGuideChapter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_FIRSTCHAPTER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AllChapterQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_ALLCHAPTERQUESTIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGuideChapter*>* get_CommonChapters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGuideChapter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_COMMONCHAPTERS_OFFSET))(this);
		}

		::System::Void set_CommonChapters(::System::Collections::Generic::List_1<::RPG::Client::GridFightGuideChapter*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGuideChapter*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_SET_COMMONCHAPTERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGuideChapter*>* get_SeasonChapters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGuideChapter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GET_SEASONCHAPTERS_OFFSET))(this);
		}

		::System::Void set_SeasonChapters(::System::Collections::Generic::List_1<::RPG::Client::GridFightGuideChapter*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGuideChapter*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_SET_SEASONCHAPTERS_OFFSET))(this, a1);
		}

		::System::Void Sync(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_SYNC_OFFSET))(this, a1);
		}

		::System::Void _AddChapter(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK__ADDCHAPTER_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::GridFightGuideChapter* GetGuideChapterByID(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightGuideChapter*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GETGUIDECHAPTERBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGuideChapter*>* GetChapters(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGuideChapter*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK_GETCHAPTERS_OFFSET))(this, a1);
		}

	};
}
