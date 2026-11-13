#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHJLCGGEHPB;
namespace RPG::Client { class OnlinePlayRoomRecentVisitorInfo; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace System { class String; }

#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1BEE9750)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE98E0)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_ENTERROOMTIME_OFFSET UNITYSDK_OFFSET(0x1BEE9710)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_OPERATIONRECORDTEXT_OFFSET UNITYSDK_OFFSET(0x1BEE9730)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_PLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1BEE96F0)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_ENTERROOMTIME_OFFSET UNITYSDK_OFFSET(0x1BEE9720)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_OPERATIONRECORDTEXT_OFFSET UNITYSDK_OFFSET(0x1BEE9740)
#define RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_PLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1BEE9700)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomRecentVisitorInfo_TypeDefinitionIndex = 68348;

	class OnlinePlayRoomRecentVisitorInfo : public ::System::Object
	{
	public:
		::RPG::Client::PlayerBriefDisplayData* _PlayerBriefDisplayData_k__BackingField; // 0x10
		::System::String* _OperationRecordText_k__BackingField; // 0x18
		::System::Int64 _EnterRoomTime_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_CTOR_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* get_PlayerBriefDisplayData()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_PLAYERBRIEFDISPLAYDATA_OFFSET))(this);
		}

		::System::Void set_PlayerBriefDisplayData(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_PLAYERBRIEFDISPLAYDATA_OFFSET))(this, a1);
		}

		::System::Int64 get_EnterRoomTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_ENTERROOMTIME_OFFSET))(this);
		}

		::System::Void set_EnterRoomTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_ENTERROOMTIME_OFFSET))(this, a1);
		}

		::System::String* get_OperationRecordText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_GET_OPERATIONRECORDTEXT_OFFSET))(this);
		}

		::System::Void set_OperationRecordText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_SET_OPERATIONRECORDTEXT_OFFSET))(this, a1);
		}

		static ::RPG::Client::OnlinePlayRoomRecentVisitorInfo* Create(::HHJLCGGEHPB* a1)
		{
			return ((::RPG::Client::OnlinePlayRoomRecentVisitorInfo*(*)(::HHJLCGGEHPB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMRECENTVISITORINFO_CREATE_OFFSET))(a1);
		}

	};
}
