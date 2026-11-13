#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class CJOCDGGCPCN;
class HAGHNEIEPGP;
namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class IRogueTournPersonaStyle; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournTitanBless; }
namespace RPG::GameCore { class RogueTournWeeklyChallengeRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD00E50)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD00E60)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1AD01520)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLFORMULADATA_OFFSET UNITYSDK_OFFSET(0x1AD01EF0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLMIRACLEDATA_OFFSET UNITYSDK_OFFSET(0x1AD01930)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLPERSONASTYLEDATA_OFFSET UNITYSDK_OFFSET(0x1AD026D0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLTITANBLESSDATA_OFFSET UNITYSDK_OFFSET(0x1AD022E0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTDETAILTEXT_OFFSET UNITYSDK_OFFSET(0x1AD014D0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTTEXT_OFFSET UNITYSDK_OFFSET(0x1AD01480)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETDETAILMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0x1AD02B50)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETDISPLAYMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x1AD02AC0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKADDEDEXTRATOURNEXP_OFFSET UNITYSDK_OFFSET(0x1AD03FF0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKCHALLENGEENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AD04010)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x1AD03EF0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x1AD04030)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_ISCURWEEKREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0x1AD04050)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AD03F10)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1AD01360)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x1AD02DC0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SETCURWEEKCHALLENGESEEN_OFFSET UNITYSDK_OFFSET(0x1AD02EB0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKADDEDEXTRATOURNEXP_OFFSET UNITYSDK_OFFSET(0x1AD04000)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKCHALLENGEENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AD04020)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x1AD03F00)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x1AD04040)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_ISCURWEEKREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0x1AD04060)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1AD01030)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__ADDDISPLAYMONSTERDATALISTBYROGUEMONSTERID_OFFSET UNITYSDK_OFFSET(0x1AD03B80)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__GETDISPLAYMONSTERDATALISTBYMONSTERGROUP_OFFSET UNITYSDK_OFFSET(0x1AD037B0)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__GETFINALMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x1AD03630)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREDETAILMONSTERDATALISTDICTS_OFFSET UNITYSDK_OFFSET(0x1AD03140)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREDISPLAYMONSTERDATALISTDICTBYMONSTERGROUP_OFFSET UNITYSDK_OFFSET(0x1AD03950)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREFINALMONSTERDATADICT_OFFSET UNITYSDK_OFFSET(0x1AD02F80)
#define RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x1AD013C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournWeekChallengeData_TypeDefinitionIndex = 69825;

	class RogueTournWeekChallengeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HAGHNEIEPGP*>* _ContentDetails; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _CurWeekRewardItems_k__BackingField; // 0x18
		::System::Object* _DisplayMonsterDataList; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* _DetailMonsterDataLists; // 0x28
		::System::Collections::Generic::List_1<::HAGHNEIEPGP*>* _Contents; // 0x30
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>* _CachedDetailMonsterDataListsRetValue; // 0x38
		::System::Boolean _IsCurWeekRewardFinished_k__BackingField; // 0x40
		::System::Byte _padding0[0x3];
		::System::UInt32 _CurWeekChallengeID_k__BackingField; // 0x44
		::System::UInt32 _CurWeekAddedExtraTournExp_k__BackingField; // 0x48
		::System::UInt32 _CurWeekChallengeEndTimeStamp_k__BackingField; // 0x4C
		// static const ::System::Object _DetailMonsterDataListsCount; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::CJOCDGGCPCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJOCDGGCPCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::String* GetContentText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTTEXT_OFFSET))(this);
		}

		::System::String* GetContentDetailText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTDETAILTEXT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* GetContentAllBuffData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLBUFFDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>* GetContentAllMiracleData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLMIRACLEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* GetContentAllFormulaData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLFORMULADATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* GetContentAllTitanBlessData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLTITANBLESSDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>* GetContentAllPersonaStyleData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETCONTENTALLPERSONASTYLEDATA_OFFSET))(this);
		}

		::RPG::Client::MonsterData* GetDisplayMonsterData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETDISPLAYMONSTERDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>* GetDetailMonsterDataList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GETDETAILMONSTERDATALIST_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Void SetCurWeekChallengeSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SETCURWEEKCHALLENGESEEN_OFFSET))(this);
		}

		::System::Void _PrepareMonsterData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREMONSTERDATA_OFFSET))(this);
		}

		::System::Void _PrepareFinalMonsterDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREFINALMONSTERDATADICT_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterData* _GetFinalMonsterData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__GETFINALMONSTERDATA_OFFSET))(this, a1);
		}

		::System::Void _PrepareDetailMonsterDataListDicts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREDETAILMONSTERDATALISTDICTS_OFFSET))(this);
		}

		::System::Void _PrepareDisplayMonsterDataListDictByMonsterGroup(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__PREPAREDISPLAYMONSTERDATALISTDICTBYMONSTERGROUP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* _GetDisplayMonsterDataListByMonsterGroup(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__GETDISPLAYMONSTERDATALISTBYMONSTERGROUP_OFFSET))(this, a1);
		}

		::System::Void _AddDisplayMonsterDataListByRogueMonsterID(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA__ADDDISPLAYMONSTERDATALISTBYROGUEMONSTERID_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_CurWeekChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKCHALLENGEID_OFFSET))(this);
		}

		::System::Void set_CurWeekChallengeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKCHALLENGEID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_CurWeekAddedExtraTournExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKADDEDEXTRATOURNEXP_OFFSET))(this);
		}

		::System::Void set_CurWeekAddedExtraTournExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKADDEDEXTRATOURNEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurWeekChallengeEndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKCHALLENGEENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_CurWeekChallengeEndTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKCHALLENGEENDTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_CurWeekRewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_CURWEEKREWARDITEMS_OFFSET))(this);
		}

		::System::Void set_CurWeekRewardItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_CURWEEKREWARDITEMS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCurWeekRewardFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET_ISCURWEEKREWARDFINISHED_OFFSET))(this);
		}

		::System::Void set_IsCurWeekRewardFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_SET_ISCURWEEKREWARDFINISHED_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournWeeklyChallengeRow* get__Row()
		{
			return ((::RPG::GameCore::RogueTournWeeklyChallengeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNWEEKCHALLENGEDATA_GET__ROW_OFFSET))(this);
		}

	};
}
