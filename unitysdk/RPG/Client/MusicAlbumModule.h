#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class MNCBEDBDDHL;
namespace RPG::Client { class MusicAlbumGroupData; }
namespace RPG::Client { class MusicAlbumItemData; }
namespace RPG::Client { class PlayingMusicItemsInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSICALBUMMODULE_CLEAROVERRIDEPLAYINGINFO_OFFSET UNITYSDK_OFFSET(0x1C2A68A0)
#define RPG_CLIENT_MUSICALBUMMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A7080)
#define RPG_CLIENT_MUSICALBUMMODULE_GETMUSICALBUMITEMDATA_OFFSET UNITYSDK_OFFSET(0x1C2A6BB0)
#define RPG_CLIENT_MUSICALBUMMODULE_GETUNLOCKMUSICALBUMGROUPDATAS_OFFSET UNITYSDK_OFFSET(0x1C2A6CA0)
#define RPG_CLIENT_MUSICALBUMMODULE_GET_CURUSEMUSICID_OFFSET UNITYSDK_OFFSET(0x1C2A5160)
#define RPG_CLIENT_MUSICALBUMMODULE_GET_PLAYINGINFO_OFFSET UNITYSDK_OFFSET(0x1C2A7030)
#define RPG_CLIENT_MUSICALBUMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1C2A64E0)
#define RPG_CLIENT_MUSICALBUMMODULE_OVERRIDEPLAYINGINFO_OFFSET UNITYSDK_OFFSET(0x1C2A6800)
#define RPG_CLIENT_MUSICALBUMMODULE_SETCURPLAYINGINFO_OFFSET UNITYSDK_OFFSET(0x1C2A6690)
#define RPG_CLIENT_MUSICALBUMMODULE_SETTRIALMUSICID_OFFSET UNITYSDK_OFFSET(0x1C2A68F0)
#define RPG_CLIENT_MUSICALBUMMODULE_UNLOCKBACKGROUNDMUSICCSREQ_OFFSET UNITYSDK_OFFSET(0x1C2A6B20)
#define RPG_CLIENT_MUSICALBUMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1C2A5890)
#define RPG_CLIENT_MUSICALBUMMODULE__GETGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1C2A5C70)
#define RPG_CLIENT_MUSICALBUMMODULE__ONGETJUKEBOXDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1C2A5B50)
#define RPG_CLIENT_MUSICALBUMMODULE__ONPLAYBACKGROUNDMUSICSCRSP_OFFSET UNITYSDK_OFFSET(0x1C2A5E80)
#define RPG_CLIENT_MUSICALBUMMODULE__ONTRIALBACKGROUNDMUSICSCRSP_OFFSET UNITYSDK_OFFSET(0x1C2A5E20)
#define RPG_CLIENT_MUSICALBUMMODULE__ONUNLOCKBACKGROUNDMUSICSCRSP_OFFSET UNITYSDK_OFFSET(0x1C2A5F50)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicAlbumModule_TypeDefinitionIndex = 68296;

	class MusicAlbumModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::PlayingMusicItemsInfo* _SelfPlayingInfo; // 0x10
		::RPG::Client::PlayingMusicItemsInfo* _OverridePlayingInfo; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicAlbumGroupData*>* _MusicAlbumGroupDict; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetJukeboxDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__ONGETJUKEBOXDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrialBackGroundMusicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__ONTRIALBACKGROUNDMUSICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPlayBackGroundMusicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__ONPLAYBACKGROUNDMUSICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnUnlockBackGroundMusicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__ONUNLOCKBACKGROUNDMUSICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_INIT_OFFSET))(this);
		}

		::System::Void SetCurPlayingInfo(::RPG::Client::PlayingMusicItemsInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_SETCURPLAYINGINFO_OFFSET))(this, a1);
		}

		::System::Void OverridePlayingInfo(::MNCBEDBDDHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNCBEDBDDHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_OVERRIDEPLAYINGINFO_OFFSET))(this, a1);
		}

		::System::Void ClearOverridePlayingInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_CLEAROVERRIDEPLAYINGINFO_OFFSET))(this);
		}

		::System::Void SetTrialMusicID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_SETTRIALMUSICID_OFFSET))(this, a1);
		}

		::System::Void UnlockBackGroundMusicCsReq(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_UNLOCKBACKGROUNDMUSICCSREQ_OFFSET))(this, a1);
		}

		::RPG::Client::MusicAlbumItemData* GetMusicAlbumItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MusicAlbumItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_GETMUSICALBUMITEMDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicAlbumGroupData*>* GetUnlockMusicAlbumGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicAlbumGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_GETUNLOCKMUSICALBUMGROUPDATAS_OFFSET))(this);
		}

		::RPG::Client::MusicAlbumGroupData* _GetGroupData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MusicAlbumGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE__GETGROUPDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurUseMusicID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_GET_CURUSEMUSICID_OFFSET))(this);
		}

		::RPG::Client::PlayingMusicItemsInfo* get_PlayingInfo()
		{
			return ((::RPG::Client::PlayingMusicItemsInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE_GET_PLAYINGINFO_OFFSET))(this);
		}

	};
}
