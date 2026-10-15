#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIHAAHEDBDH;
class MNCBEDBDDHL;
class OFMIJBJLFCF;
namespace RPG::Client { class MusicAlbumItemData; }
namespace RPG::Client { class PlayingMusicItemsInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ADDPLAYINGWHITENOISE_OFFSET UNITYSDK_OFFSET(0xDBF5FE0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_CLEARALLPLAYINGWHITENOISE_OFFSET UNITYSDK_OFFSET(0xDBF6450)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_COPYFROM_OFFSET UNITYSDK_OFFSET(0xDBF5400)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDBF5010)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGBGMMUSICITEMDATA_OFFSET UNITYSDK_OFFSET(0xDBF6720)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGWHITENOISEDATA_OFFSET UNITYSDK_OFFSET(0xDBF5F40)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGWHITENOISEVOLUME_OFFSET UNITYSDK_OFFSET(0xDBF59E0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETWHITENOISEPLAYINGCOUNT_OFFSET UNITYSDK_OFFSET(0xDBF5D70)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_BGMINFO_OFFSET UNITYSDK_OFFSET(0xDBF6780)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_ISWHITENOISEPAUSED_OFFSET UNITYSDK_OFFSET(0xDBF67C0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_MAXPLAYINGWHITENOISECOUNT_OFFSET UNITYSDK_OFFSET(0xDBF61C0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_WHITENOISEINFOLIST_OFFSET UNITYSDK_OFFSET(0xDBF67A0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISBGMPAUSED_OFFSET UNITYSDK_OFFSET(0xDBF5D10)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISBGMSAME_OFFSET UNITYSDK_OFFSET(0xDBF5690)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISPLAYINGWHITENOISEBYEVENTNAME_OFFSET UNITYSDK_OFFSET(0xDBF5DC0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISPLAYINGWHITENOISE_OFFSET UNITYSDK_OFFSET(0xDBF5970)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISSAME_OFFSET UNITYSDK_OFFSET(0xDBF5620)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISWHITENOISESAME_OFFSET UNITYSDK_OFFSET(0xDBF5730)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_REMOVEPLAYINGWHITENOISE_OFFSET UNITYSDK_OFFSET(0xDBF6210)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETBGMPAUSED_OFFSET UNITYSDK_OFFSET(0xDBF5C70)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETPLAYINGWHITENOISEVOLUME_OFFSET UNITYSDK_OFFSET(0xDBF64F0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETWHITENOISEPAUSED_OFFSET UNITYSDK_OFFSET(0xDBF5CC0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_BGMINFO_OFFSET UNITYSDK_OFFSET(0xDBF6790)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_ISWHITENOISEPAUSED_OFFSET UNITYSDK_OFFSET(0xDBF67D0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_WHITENOISEINFOLIST_OFFSET UNITYSDK_OFFSET(0xDBF67B0)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SWITCHBGM_OFFSET UNITYSDK_OFFSET(0xDBF5C00)
#define RPG_CLIENT_PLAYINGMUSICITEMSINFO_SYNCSERVERDATA_OFFSET UNITYSDK_OFFSET(0xDBF5090)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayingMusicItemsInfo_TypeDefinitionIndex = 66364;

	class PlayingMusicItemsInfo : public ::System::Object
	{
	public:
		::OFMIJBJLFCF* _BgmInfo_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::MIHAAHEDBDH*>* _WhiteNoiseInfoList_k__BackingField; // 0x18
		::System::Boolean _IsWhiteNoisePaused_k__BackingField; // 0x20
		// static const ::System::Object _MaxPlayingWhiteNoiseCount; // 0x0
		// static const ::System::Object _MaxPlayingWhiteNoiseVolume; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_CTOR_OFFSET))(this);
		}

		::System::Void SyncServerData(::MNCBEDBDDHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNCBEDBDDHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SYNCSERVERDATA_OFFSET))(this, a1);
		}

		::System::Void CopyFrom(::RPG::Client::PlayingMusicItemsInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_COPYFROM_OFFSET))(this, a1);
		}

		::System::Boolean IsSame(::RPG::Client::PlayingMusicItemsInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISSAME_OFFSET))(this, a1);
		}

		::System::Boolean IsBGMSame(::RPG::Client::PlayingMusicItemsInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISBGMSAME_OFFSET))(this, a1);
		}

		::System::Boolean IsWhiteNoiseSame(::RPG::Client::PlayingMusicItemsInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISWHITENOISESAME_OFFSET))(this, a1);
		}

		::System::Void SwitchBGM(::RPG::Client::MusicAlbumItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SWITCHBGM_OFFSET))(this, a1);
		}

		::System::Void SetBGMPaused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETBGMPAUSED_OFFSET))(this, a1);
		}

		::System::Void SetWhiteNoisePaused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETWHITENOISEPAUSED_OFFSET))(this, a1);
		}

		::System::Boolean IsBGMPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISBGMPAUSED_OFFSET))(this);
		}

		::System::Int32 GetWhiteNoisePlayingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETWHITENOISEPLAYINGCOUNT_OFFSET))(this);
		}

		::System::Boolean IsPlayingWhiteNoiseByEventName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISPLAYINGWHITENOISEBYEVENTNAME_OFFSET))(this, a1);
		}

		::System::Boolean IsPlayingWhiteNoise(::RPG::Client::MusicAlbumItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ISPLAYINGWHITENOISE_OFFSET))(this, a1);
		}

		::System::UInt32 GetPlayingWhiteNoiseVolume(::RPG::Client::MusicAlbumItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGWHITENOISEVOLUME_OFFSET))(this, a1);
		}

		::RPG::Client::MusicAlbumItemData* GetPlayingWhiteNoiseData(::System::Int32 a1)
		{
			return ((::RPG::Client::MusicAlbumItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGWHITENOISEDATA_OFFSET))(this, a1);
		}

		::System::Void AddPlayingWhiteNoise(::RPG::Client::MusicAlbumItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_ADDPLAYINGWHITENOISE_OFFSET))(this, a1);
		}

		::System::Void RemovePlayingWhiteNoise(::RPG::Client::MusicAlbumItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_REMOVEPLAYINGWHITENOISE_OFFSET))(this, a1);
		}

		::System::Void ClearAllPlayingWhiteNoise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_CLEARALLPLAYINGWHITENOISE_OFFSET))(this);
		}

		::System::Void SetPlayingWhiteNoiseVolume(::RPG::Client::MusicAlbumItemData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SETPLAYINGWHITENOISEVOLUME_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MusicAlbumItemData* GetPlayingBGMMusicItemData()
		{
			return ((::RPG::Client::MusicAlbumItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GETPLAYINGBGMMUSICITEMDATA_OFFSET))(this);
		}

		::OFMIJBJLFCF* get_BgmInfo()
		{
			return ((::OFMIJBJLFCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_BGMINFO_OFFSET))(this);
		}

		::System::Void set_BgmInfo(::OFMIJBJLFCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFMIJBJLFCF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_BGMINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::MIHAAHEDBDH*>* get_WhiteNoiseInfoList()
		{
			return ((::System::Collections::Generic::List_1<::MIHAAHEDBDH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_WHITENOISEINFOLIST_OFFSET))(this);
		}

		::System::Void set_WhiteNoiseInfoList(::System::Collections::Generic::List_1<::MIHAAHEDBDH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MIHAAHEDBDH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_WHITENOISEINFOLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxPlayingWhiteNoiseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_MAXPLAYINGWHITENOISECOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsWhiteNoisePaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_GET_ISWHITENOISEPAUSED_OFFSET))(this);
		}

		::System::Void set_IsWhiteNoisePaused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYINGMUSICITEMSINFO_SET_ISWHITENOISEPAUSED_OFFSET))(this, a1);
		}

	};
}
