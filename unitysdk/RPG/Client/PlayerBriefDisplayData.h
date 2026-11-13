#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
class CJLCPMDGIBO;
class EPBMGIOIHEI;
class JBJNJPAOCDA;
namespace Proto { class AssistSimpleInfo; }
namespace RPG::Client { class FriendModule; }
namespace RPG::Client { class HeadFrameInfo; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client { class PlayerDefaultInfo; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1E2B0F40)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x1E2AFF70)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYONLINEPLAYROOMPLAYERSIMPLEINFO_OFFSET UNITYSDK_OFFSET(0x1E2B0480)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYPLAYERSIMPLEINFO_OFFSET UNITYSDK_OFFSET(0x1E2AFAD0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AFA00)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYAVATARID_OFFSET UNITYSDK_OFFSET(0x1E2B0B50)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x1E2B08C0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYPOS_OFFSET UNITYSDK_OFFSET(0x1E2B04D0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_APPLYTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1E2B1870)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ASSISTAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0x1E2B1270)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HASREMARKNAME_OFFSET UNITYSDK_OFFSET(0x1E2B13D0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x1E2B1490)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x1E29E230)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1E2B1720)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0x1E2B17D0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ISMARKED_OFFSET UNITYSDK_OFFSET(0x1E29EAA0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_LASTLOGOUTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1E29EC00)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_LOGOUTTIMESPAN_OFFSET UNITYSDK_OFFSET(0x1E2B14A0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E29E0E0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0x1E2B1640)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0x1E2B17B0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x1E2B1690)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1E2B1890)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET__FRIENDMODULE_OFFSET UNITYSDK_OFFSET(0x1E2B11E0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_APPLYTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1E2B1880)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x1E2AFE70)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0x1E2AFEF0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0x1E2B17C0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x1E2AFDD0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1E2B18A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerBriefDisplayData_TypeDefinitionIndex = 65708;

	class PlayerBriefDisplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::Proto::AssistSimpleInfo*>* _AssistInfos; // 0x10
		::RPG::Client::PlayerDefaultInfo* PlayerDefaultInfo; // 0x18
		::RPG::Client::HeadFrameInfo* _HeadFrameInfo_k__BackingField; // 0x20
		::System::String* OriginName; // 0x28
		::CJLCPMDGIBO* _PlayerOutfit_k__BackingField; // 0x30
		::RPG::Client::PlayerPlatformInfo* PlatformInfo; // 0x38
		::System::UInt32 Level; // 0x40
		::System::UInt32 BubbleID; // 0x44
		::System::Int64 _UpdateTimeStamp_k__BackingField; // 0x48
		::System::UInt32 UID; // 0x50
		::System::UInt32 _LastLogoutTimeStamp; // 0x54
		::System::UInt32 AssistAvatarDressedSkinID; // 0x58
		::System::Byte _padding0[0x4];
		::RPG::Client::DateTimePro _LastLogoutTime; // 0x60
		::System::UInt32 _ApplyTimeStamp_k__BackingField; // 0x68
		::System::Boolean IsOnline; // 0x6C
		::System::Boolean IsBanned; // 0x6D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlayerBriefDisplayData* CreateByPlayerSimpleInfo(::EPBMGIOIHEI* a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::EPBMGIOIHEI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYPLAYERSIMPLEINFO_OFFSET))(a1);
		}

		static ::RPG::Client::PlayerBriefDisplayData* CreateByLocalPlayer()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYLOCALPLAYER_OFFSET))();
		}

		static ::RPG::Client::PlayerBriefDisplayData* CreateByOnlinePlayRoomPlayerSimpleInfo(::JBJNJPAOCDA* a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::JBJNJPAOCDA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYONLINEPLAYROOMPLAYERSIMPLEINFO_OFFSET))(a1);
		}

		::Proto::AssistSimpleInfo* GetAssistInfoByPos(::System::Int32 a1)
		{
			return ((::Proto::AssistSimpleInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYPOS_OFFSET))(this, a1);
		}

		::Proto::AssistSimpleInfo* GetAssistInfoByIndex(::System::Int32 a1)
		{
			return ((::Proto::AssistSimpleInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYINDEX_OFFSET))(this, a1);
		}

		::Proto::AssistSimpleInfo* GetAssistInfoByAvatarID(::System::Int32 a1)
		{
			return ((::Proto::AssistSimpleInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYAVATARID_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 get_AssistAvatarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ASSISTAVATARCOUNT_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_HasRemarkName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HASREMARKNAME_OFFSET))(this);
		}

		::RPG::Client::HeadFrameInfo* get_HeadFrameInfo()
		{
			return ((::RPG::Client::HeadFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADFRAMEINFO_OFFSET))(this);
		}

		::System::TimeSpan get_LogoutTimeSpan()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_LOGOUTTIMESPAN_OFFSET))(this);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_HEADICONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PersonalCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_PERSONALCARDID_OFFSET))(this);
		}

		::System::Void set_PersonalCardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_PERSONALCARDID_OFFSET))(this, a1);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_SIGNATURE_OFFSET))(this, a1);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::CJLCPMDGIBO* get_PlayerOutfit()
		{
			return ((::CJLCPMDGIBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_PLAYEROUTFIT_OFFSET))(this);
		}

		::System::Void set_PlayerOutfit(::CJLCPMDGIBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLCPMDGIBO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_PLAYEROUTFIT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMarked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ISMARKED_OFFSET))(this);
		}

		::System::Boolean get_IsFriend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ISFRIEND_OFFSET))(this);
		}

		::System::UInt32 get_LastLogoutTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_LASTLOGOUTTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_ApplyTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_APPLYTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_ApplyTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_APPLYTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Int64 get_UpdateTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_UPDATETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_UpdateTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_UPDATETIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::Client::FriendModule* get__FriendModule()
		{
			return ((::RPG::Client::FriendModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET__FRIENDMODULE_OFFSET))(this);
		}

	};
}
