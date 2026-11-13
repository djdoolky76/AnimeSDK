#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BackGroundMusicGroupType.h"
#include "unitysdk/RPG/GameCore/RhythmType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class AFHPMNBMPNN;
class HNJPENLPJKC;
namespace RPG::Client { class MusicAlbumItemData; }
namespace RPG::GameCore { class BackGroundMusicConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_MUSICALBUMITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A45D0)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_BGMDESC_OFFSET UNITYSDK_OFFSET(0x1C2A53C0)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_BPM_OFFSET UNITYSDK_OFFSET(0x1C2A5550)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1C2A56B0)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C2A5290)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C2A57E0)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C2A4680)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_ISPLAYED_OFFSET UNITYSDK_OFFSET(0x1C2A5250)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C2A5230)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_MUSICNAME_OFFSET UNITYSDK_OFFSET(0x1C2A52E0)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_MUSICSWITCHNAME_OFFSET UNITYSDK_OFFSET(0x1C2A5430)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_RHYTHMCOLOUR_OFFSET UNITYSDK_OFFSET(0x1C2A5600)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C2A5270)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET_UNLOCKDESC_OFFSET UNITYSDK_OFFSET(0x1C2A5350)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET__NORMALROW_OFFSET UNITYSDK_OFFSET(0x1C2A54E0)
#define RPG_CLIENT_MUSICALBUMITEMDATA_GET__WHITENOISEROW_OFFSET UNITYSDK_OFFSET(0x1C2A5770)
#define RPG_CLIENT_MUSICALBUMITEMDATA_RESETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C2A4850)
#define RPG_CLIENT_MUSICALBUMITEMDATA_SETPLAYED_OFFSET UNITYSDK_OFFSET(0x1C2A4630)
#define RPG_CLIENT_MUSICALBUMITEMDATA_SETUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C2A45E0)
#define RPG_CLIENT_MUSICALBUMITEMDATA_SET_ISPLAYED_OFFSET UNITYSDK_OFFSET(0x1C2A5260)
#define RPG_CLIENT_MUSICALBUMITEMDATA_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C2A5240)
#define RPG_CLIENT_MUSICALBUMITEMDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C2A5280)
#define RPG_CLIENT_MUSICALBUMITEMDATA_SYSTEM_ICOMPARABLE_RPG_CLIENT_MUSICALBUMITEMDATA__COMPARETO_OFFSET UNITYSDK_OFFSET(0x1C2A4F90)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicAlbumItemData_TypeDefinitionIndex = 68295;

	class MusicAlbumItemData : public ::System::Object
	{
	public:
		::RPG::GameCore::BackGroundMusicConfigRow* _Row; // 0x10
		::System::Boolean _IsUnlock_k__BackingField; // 0x18
		::System::Boolean _IsPlayed_k__BackingField; // 0x19
		::System::Byte _padding0[0x2];
		::RPG::GameCore::BackGroundMusicGroupType _Type_k__BackingField; // 0x1C
		::System::Void _ctor(::RPG::GameCore::BackGroundMusicConfigRow* a1, ::RPG::GameCore::BackGroundMusicGroupType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BackGroundMusicConfigRow*, ::RPG::GameCore::BackGroundMusicGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ResetStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_RESETSTATUS_OFFSET))(this);
		}

		::System::Void SetUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_SETUNLOCK_OFFSET))(this, a1);
		}

		::System::Void SetPlayed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_SETPLAYED_OFFSET))(this, a1);
		}

		::System::Int32 System_IComparable_RPG_Client_MusicAlbumItemData__CompareTo(::RPG::Client::MusicAlbumItemData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_SYSTEM_ICOMPARABLE_RPG_CLIENT_MUSICALBUMITEMDATA__COMPARETO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_SET_ISUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_ISPLAYED_OFFSET))(this);
		}

		::System::Void set_IsPlayed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_SET_ISPLAYED_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::BackGroundMusicGroupType get_Type()
		{
			return ((::RPG::GameCore::BackGroundMusicGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::BackGroundMusicGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BackGroundMusicGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_GROUPID_OFFSET))(this);
		}

		::RPG::Client::TextID get_MusicName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_MUSICNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_UNLOCKDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_BGMDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_BGMDESC_OFFSET))(this);
		}

		::System::String* get_MusicSwitchName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_MUSICSWITCHNAME_OFFSET))(this);
		}

		::System::UInt32 get_BPM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_BPM_OFFSET))(this);
		}

		::RPG::GameCore::RhythmType get_RhythmColour()
		{
			return ((::RPG::GameCore::RhythmType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_RHYTHMCOLOUR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_EVENTNAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET_ICONPATH_OFFSET))(this);
		}

		::AFHPMNBMPNN* get__NormalRow()
		{
			return ((::AFHPMNBMPNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET__NORMALROW_OFFSET))(this);
		}

		::HNJPENLPJKC* get__WhiteNoiseRow()
		{
			return ((::HNJPENLPJKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMITEMDATA_GET__WHITENOISEROW_OFFSET))(this);
		}

	};
}
