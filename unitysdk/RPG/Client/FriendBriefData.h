#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIHJILNECAD.h"
#include "unitysdk/System/Object.h"
class BBNFMNHGIPN;
class EPBMGIOIHEI;
class PAEFDELFKJK;
namespace RPG::Client { class FriendBriefData; }
namespace RPG::Client { class FriendChallengeBattleRecordDisplayInfo; }
namespace RPG::Client { class FriendGridFightBattleRecordDisplayInfo; }
namespace RPG::Client { class FriendRogueBattleRecordDisplayInfo; }
namespace System { class String; }

#define RPG_CLIENT_FRIENDBRIEFDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19AF4E70)
#define RPG_CLIENT_FRIENDBRIEFDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x19AF4DA0)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETCHALLENGEBATTLERECORDDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x19AF4FC0)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x19AF53D0)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETGRIDFIGHTBATTLERECORDDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x19AF5290)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETPLAYINGSTATE_OFFSET UNITYSDK_OFFSET(0x19AF4F80)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETROGUEBATTLERECORDDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x19AF5110)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETROWPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x19AF4EF0)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_ADDTIME_OFFSET UNITYSDK_OFFSET(0x19AF5550)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_ISMARKED_OFFSET UNITYSDK_OFFSET(0x19AF5440)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x19AF5570)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_ISSHOWBATTLERECORD_OFFSET UNITYSDK_OFFSET(0x19AF5500)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_PS_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x19AF54B0)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x19AF5460)
#define RPG_CLIENT_FRIENDBRIEFDATA_SETISMARKED_OFFSET UNITYSDK_OFFSET(0x19AF4F30)
#define RPG_CLIENT_FRIENDBRIEFDATA_SET_ADDTIME_OFFSET UNITYSDK_OFFSET(0x19AF5560)
#define RPG_CLIENT_FRIENDBRIEFDATA_SET_ISMARKED_OFFSET UNITYSDK_OFFSET(0x19AF5450)
#define RPG_CLIENT_FRIENDBRIEFDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x19AF4DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendBriefData_TypeDefinitionIndex = 65694;

	class FriendBriefData : public ::System::Object
	{
	public:
		::PAEFDELFKJK* _RowBattleRecordDisplayInfo; // 0x10
		::RPG::Client::FriendChallengeBattleRecordDisplayInfo* _ChallengeBattleRecordDisplayInfo; // 0x18
		::System::String* RemarkName; // 0x20
		::RPG::Client::FriendGridFightBattleRecordDisplayInfo* _GridFightBattleRecordDisplayInfo; // 0x28
		::EPBMGIOIHEI* _RowPlayerInfo; // 0x30
		::RPG::Client::FriendRogueBattleRecordDisplayInfo* _RogueBattleRecordDisplayInfo; // 0x38
		::System::Boolean _IsMarked_k__BackingField; // 0x40
		::System::Byte _padding0[0x3];
		::DIHJILNECAD _PlayingState; // 0x44
		::System::Int64 _AddTime_k__BackingField; // 0x48
		::System::Void _ctor(::BBNFMNHGIPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBNFMNHGIPN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FriendBriefData* Create(::BBNFMNHGIPN* a1)
		{
			return ((::RPG::Client::FriendBriefData*(*)(::BBNFMNHGIPN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::BBNFMNHGIPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBNFMNHGIPN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_SYNC_OFFSET))(this, a1);
		}

		::EPBMGIOIHEI* GetRowPlayerInfo()
		{
			return ((::EPBMGIOIHEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETROWPLAYERINFO_OFFSET))(this);
		}

		::System::Void SetIsMarked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_SETISMARKED_OFFSET))(this, a1);
		}

		::DIHJILNECAD GetPlayingState()
		{
			return ((::DIHJILNECAD(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETPLAYINGSTATE_OFFSET))(this);
		}

		::RPG::Client::FriendChallengeBattleRecordDisplayInfo* GetChallengeBattleRecordDisplayInfo()
		{
			return ((::RPG::Client::FriendChallengeBattleRecordDisplayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETCHALLENGEBATTLERECORDDISPLAYINFO_OFFSET))(this);
		}

		::RPG::Client::FriendRogueBattleRecordDisplayInfo* GetRogueBattleRecordDisplayInfo()
		{
			return ((::RPG::Client::FriendRogueBattleRecordDisplayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETROGUEBATTLERECORDDISPLAYINFO_OFFSET))(this);
		}

		::RPG::Client::FriendGridFightBattleRecordDisplayInfo* GetGridFightBattleRecordDisplayInfo()
		{
			return ((::RPG::Client::FriendGridFightBattleRecordDisplayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETGRIDFIGHTBATTLERECORDDISPLAYINFO_OFFSET))(this);
		}

		::System::String* GetDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETDISPLAYNAME_OFFSET))(this);
		}

		::System::Boolean get_IsMarked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_ISMARKED_OFFSET))(this);
		}

		::System::Void set_IsMarked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_SET_ISMARKED_OFFSET))(this, a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_UID_OFFSET))(this);
		}

		::System::String* get_PS_AccountID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_PS_ACCOUNTID_OFFSET))(this);
		}

		::System::Boolean get_IsShowBattleRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_ISSHOWBATTLERECORD_OFFSET))(this);
		}

		::System::Int64 get_AddTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_ADDTIME_OFFSET))(this);
		}

		::System::Void set_AddTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_SET_ADDTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_ISNEW_OFFSET))(this);
		}

	};
}
