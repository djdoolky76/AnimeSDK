#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
namespace RPG::Client { class SubMissionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDD46410)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA_GET_SPMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0xDD485C0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xDD46B70)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xDD46CE0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xDD46D90)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA_SET_SPMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0xDD485D0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKHASCHALLENGEREWARD_OFFSET UNITYSDK_OFFSET(0xDD46C30)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKHASTIMELIMITEDREWARD_OFFSET UNITYSDK_OFFSET(0xDD47250)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKINCOMEENTRY_OFFSET UNITYSDK_OFFSET(0xDD47320)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANREPLYCOMMENT_OFFSET UNITYSDK_OFFSET(0xDD47590)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANREPLYMISSIONPOST_OFFSET UNITYSDK_OFFSET(0xDD473C0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANTAKEANCHORPOST_OFFSET UNITYSDK_OFFSET(0xDD474A0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__GENERATEFILTER_OFFSET UNITYSDK_OFFSET(0xDD470C0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__GETCONDITION_OFFSET UNITYSDK_OFFSET(0xDD480C0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ISALLSPMAINMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xDD46FA0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ISEVERYDAYREDDOTACTIVE_OFFSET UNITYSDK_OFFSET(0xDD471A0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ISSHOWCUSTOMNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xDD46D50)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ISSHOWCUSTOMNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xDD46E10)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ONHELIOBUSGETINFO_OFFSET UNITYSDK_OFFSET(0xDD48070)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ONMAINMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xDD483D0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ONSUBMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xDD48540)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__SETMAINMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xDD46680)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA___GETCONDITION_B__16_1_OFFSET UNITYSDK_OFFSET(0xDD485E0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusActivityData_TypeDefinitionIndex = 63031;

	class HeliobusActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SpMainMissionIDList_k__BackingField; // 0xA0
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivityMainMissionIDList; // 0xA8
		::System::UInt32 _HeliobusTeleportUnlockMissionID; // 0xB0
		::System::Boolean _IsTeleportUnlock; // 0xB4
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowCustomNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ISSHOWCUSTOMNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowCustomNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ISSHOWCUSTOMNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsAllSpMainMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ISALLSPMAINMISSIONFINISH_OFFSET))(this);
		}

		::System::Boolean _CheckInComeEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKINCOMEENTRY_OFFSET))(this);
		}

		::System::Boolean _CheckIsCanReplyMissionPost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANREPLYMISSIONPOST_OFFSET))(this);
		}

		::System::Boolean _CheckIsCanTakeAnchorPost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANTAKEANCHORPOST_OFFSET))(this);
		}

		::System::Boolean _CheckIsCanReplyComment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANREPLYCOMMENT_OFFSET))(this);
		}

		::System::Boolean _IsEveryDayRedDotActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ISEVERYDAYREDDOTACTIVE_OFFSET))(this);
		}

		::System::Boolean _CheckHasChallengeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKHASCHALLENGEREWARD_OFFSET))(this);
		}

		::System::Boolean _CheckHasTimeLimitedReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKHASTIMELIMITEDREWARD_OFFSET))(this);
		}

		::System::Void _GenerateFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__GENERATEFILTER_OFFSET))(this);
		}

		::System::Void _OnHeliobusGetInfo(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ONHELIOBUSGETINFO_OFFSET))(this, a1);
		}

		::System::Void _GetCondition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__GETCONDITION_OFFSET))(this);
		}

		::System::Void _OnMainMissionFinished(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ONMAINMISSIONFINISHED_OFFSET))(this, a1);
		}

		::System::Void _OnSubMissionFinished(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ONSUBMISSIONFINISHED_OFFSET))(this, a1);
		}

		::System::Void _SetMainMissionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__SETMAINMISSIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SpMainMissionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA_GET_SPMAINMISSIONIDLIST_OFFSET))(this);
		}

		::System::Void set_SpMainMissionIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA_SET_SPMAINMISSIONIDLIST_OFFSET))(this, a1);
		}

		::System::Void __GetCondition_b__16_1(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA___GETCONDITION_B__16_1_OFFSET))(this, a1);
		}

	};
}
