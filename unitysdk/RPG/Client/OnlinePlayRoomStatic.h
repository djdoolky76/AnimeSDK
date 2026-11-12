#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBPDACMBHGL.h"
#include "unitysdk/MEBHANNGPLJ.h"
#include "unitysdk/MFPDAKOIOED.h"
#include "unitysdk/System/Object.h"
class PEEEEGAPCOK;
namespace RPG::Client { class MapDef; }
namespace System { class String; }

#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_CANGOTOONLINESESSIONMODE_OFFSET UNITYSDK_OFFSET(0xE489B90)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_CCTOR_OFFSET UNITYSDK_OFFSET(0xE48C540)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETMAPNAMEBYMAPTYPE_OFFSET UNITYSDK_OFFSET(0xE484060)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETOPERATIONRECORDTEXTWITHTIME_OFFSET UNITYSDK_OFFSET(0xE48BCE0)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETOPERATIONRECORDTEXT_OFFSET UNITYSDK_OFFSET(0xE488C60)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETPLAYTYPEBYROOMTYPE_OFFSET UNITYSDK_OFFSET(0xE48C480)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONFLOOR_1_OFFSET UNITYSDK_OFFSET(0xE48C340)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONFLOOR_OFFSET UNITYSDK_OFFSET(0xE48C280)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONMAP_1_OFFSET UNITYSDK_OFFSET(0xE48C110)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONMAP_OFFSET UNITYSDK_OFFSET(0xE48C050)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISONLINEPLAYROOMVISITFUNCTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0xE48C4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomStatic_TypeDefinitionIndex = 68349;

	class OnlinePlayRoomStatic : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_OnlinePlayRoomChatGroupIconPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0xCC40);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomJukeBoxMapIconID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1800);
		}

		static ::System::UInt32* StaticGet_PlayerRoomMappingInfoID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1804);
		}

		static ::System::UInt32* StaticGet_PlayerRoomGotoID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1808);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomJukeBoxPropID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x180C);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomAnchorMappingInfoID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1810);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomFunctionEntranceListID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1814);
		}

		static ::System::UInt32* StaticGet_VisitingToastCountDownTime()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1818);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomMaxPlayerCount()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x181C);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomFuncEntranceID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1820);
		}

		static ::System::UInt32* StaticGet_PlayerRoomEntranceID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1824);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomVisitFunctionUnlockID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x1828);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomJukeBoxMappingInfoID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "OnlinePlayRoomStatic")->GetStaticField(0x182C);
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
