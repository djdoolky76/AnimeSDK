#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBPDACMBHGL.h"
#include "unitysdk/MEBHANNGPLJ.h"
#include "unitysdk/MFPDAKOIOED.h"
#include "unitysdk/System/Object.h"
class PEEEEGAPCOK;
namespace RPG::Client { class MapDef; }
namespace System { class String; }

#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_CANGOTOONLINESESSIONMODE_OFFSET UNITYSDK_OFFSET(0xD9E9DC0)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_CCTOR_OFFSET UNITYSDK_OFFSET(0xD9EC140)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETMAPNAMEBYMAPTYPE_OFFSET UNITYSDK_OFFSET(0xD9E6220)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETOPERATIONRECORDTEXTWITHTIME_OFFSET UNITYSDK_OFFSET(0xD9EB990)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETOPERATIONRECORDTEXT_OFFSET UNITYSDK_OFFSET(0xD9E9630)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETPLAYTYPEBYROOMTYPE_OFFSET UNITYSDK_OFFSET(0xD9E4F10)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONFLOOR_1_OFFSET UNITYSDK_OFFSET(0xD9EBFF0)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONFLOOR_OFFSET UNITYSDK_OFFSET(0xD9EBF30)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONMAP_1_OFFSET UNITYSDK_OFFSET(0xD9EBDC0)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONMAP_OFFSET UNITYSDK_OFFSET(0xD9EBD00)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISONLINEPLAYROOMVISITFUNCTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD9E4AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomStatic_TypeDefinitionIndex = 66413;

	class OnlinePlayRoomStatic : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_OnlinePlayRoomChatGroupIconPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x2780);
		}

		static ::System::UInt32* StaticGet_PlayerRoomGotoID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1EA0);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomFunctionEntranceListID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1EA4);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomJukeBoxMappingInfoID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1EA8);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomVisitFunctionUnlockID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1EAC);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomJukeBoxPropID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1EB0);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomAnchorMappingInfoID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1EB4);
		}

		static ::System::UInt32* StaticGet_PlayerRoomMappingInfoID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1EB8);
		}

		static ::System::UInt32* StaticGet_VisitingToastCountDownTime()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1EBC);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomFuncEntranceID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1EC0);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomMaxPlayerCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1EC4);
		}

		static ::System::UInt32* StaticGet_PlayerRoomEntranceID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1EC8);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomJukeBoxMapIconID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1ECC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsInOnlineSessionMap()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONMAP_OFFSET))();
		}

		static ::System::Boolean IsInOnlineSessionMap_1(::RPG::Client::MapDef* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONMAP_1_OFFSET))(a1);
		}

		static ::System::Boolean IsInOnlineSessionFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONFLOOR_OFFSET))();
		}

		static ::System::Boolean IsInOnlineSessionFloor_1(::RPG::Client::MapDef* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONFLOOR_1_OFFSET))(a1);
		}

		static ::System::Boolean CanGotoOnlineSessionMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_CANGOTOONLINESESSIONMODE_OFFSET))();
		}

		static ::System::String* GetMapNameByMapType(::CBPDACMBHGL a1)
		{
			return ((::System::String*(*)(::CBPDACMBHGL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETMAPNAMEBYMAPTYPE_OFFSET))(a1);
		}

		static ::MFPDAKOIOED GetPlayTypeByRoomType(::CBPDACMBHGL a1)
		{
			return ((::MFPDAKOIOED(*)(::CBPDACMBHGL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETPLAYTYPEBYROOMTYPE_OFFSET))(a1);
		}

		static ::System::String* GetOperationRecordText(::PEEEEGAPCOK* a1)
		{
			return ((::System::String*(*)(::PEEEEGAPCOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETOPERATIONRECORDTEXT_OFFSET))(a1);
		}

		static ::System::String* GetOperationRecordTextWithTime(::MEBHANNGPLJ a1, ::System::Int64 a2)
		{
			return ((::System::String*(*)(::MEBHANNGPLJ, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETOPERATIONRECORDTEXTWITHTIME_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsOnlinePlayRoomVisitFunctionUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISONLINEPLAYROOMVISITFUNCTIONUNLOCKED_OFFSET))();
		}

	};
}
