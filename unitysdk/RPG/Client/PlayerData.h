#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JILIMBCCPKA.h"
#include "unitysdk/RPG/Client/PlayerStaminaData.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class HeadFrameInfo; }
namespace RPG::Client { class PlayerDefaultInfo; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client { class TeamData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B7070)
#define RPG_CLIENT_PLAYERDATA_GETCURRENTHEROGENDER_OFFSET UNITYSDK_OFFSET(0x1E2B6D20)
#define RPG_CLIENT_PLAYERDATA_GETSTORYHEROGENDER_OFFSET UNITYSDK_OFFSET(0x1E2B6DD0)
#define RPG_CLIENT_PLAYERDATA_GET_ASSISTAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1E2B6410)
#define RPG_CLIENT_PLAYERDATA_GET_BASICINFODATA_OFFSET UNITYSDK_OFFSET(0x1E2B6810)
#define RPG_CLIENT_PLAYERDATA_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1E2B6A70)
#define RPG_CLIENT_PLAYERDATA_GET_CURDAY_OFFSET UNITYSDK_OFFSET(0x1E2B69C0)
#define RPG_CLIENT_PLAYERDATA_GET_DISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1E2B63F0)
#define RPG_CLIENT_PLAYERDATA_GET_EXPUP_OFFSET UNITYSDK_OFFSET(0x1E2B6510)
#define RPG_CLIENT_PLAYERDATA_GET_HASASSIST_OFFSET UNITYSDK_OFFSET(0x1E2B6430)
#define RPG_CLIENT_PLAYERDATA_GET_HEADFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x1E2B6A60)
#define RPG_CLIENT_PLAYERDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x1E2A2420)
#define RPG_CLIENT_PLAYERDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1E2B6B90)
#define RPG_CLIENT_PLAYERDATA_GET_ISDISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1E2B63D0)
#define RPG_CLIENT_PLAYERDATA_GET_ISFEMALE_OFFSET UNITYSDK_OFFSET(0x1E2B6CB0)
#define RPG_CLIENT_PLAYERDATA_GET_ISMALE_OFFSET UNITYSDK_OFFSET(0x1E2B6D60)
#define RPG_CLIENT_PLAYERDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1E2B6370)
#define RPG_CLIENT_PLAYERDATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x1E2A2350)
#define RPG_CLIENT_PLAYERDATA_GET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0x1E2AD5D0)
#define RPG_CLIENT_PLAYERDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x1E2A2670)
#define RPG_CLIENT_PLAYERDATA_GET_REGISTERCPS_OFFSET UNITYSDK_OFFSET(0x1E2B63B0)
#define RPG_CLIENT_PLAYERDATA_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x1E2AD540)
#define RPG_CLIENT_PLAYERDATA_GET_STAMINADATA_OFFSET UNITYSDK_OFFSET(0x1E2B68F0)
#define RPG_CLIENT_PLAYERDATA_GET_STAMINA_OFFSET UNITYSDK_OFFSET(0x1E2B6720)
#define RPG_CLIENT_PLAYERDATA_GET_TEAMDATA_OFFSET UNITYSDK_OFFSET(0x1E2B6800)
#define RPG_CLIENT_PLAYERDATA_GET_USERID_OFFSET UNITYSDK_OFFSET(0x1E2B62B0)
#define RPG_CLIENT_PLAYERDATA_GET_WEEKCOCOONCOUNT_OFFSET UNITYSDK_OFFSET(0x1E2B6760)
#define RPG_CLIENT_PLAYERDATA_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1E2B6390)
#define RPG_CLIENT_PLAYERDATA_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0x1E2B66B0)
#define RPG_CLIENT_PLAYERDATA_SETCURRENTHEROGENDER_OFFSET UNITYSDK_OFFSET(0x1E2B6E30)
#define RPG_CLIENT_PLAYERDATA_SETHEROGENDERAUDIO_OFFSET UNITYSDK_OFFSET(0x1E2B6EB0)
#define RPG_CLIENT_PLAYERDATA_SET_ASSISTAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1E2B6420)
#define RPG_CLIENT_PLAYERDATA_SET_BASICINFODATA_OFFSET UNITYSDK_OFFSET(0x1E2B6880)
#define RPG_CLIENT_PLAYERDATA_SET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1E2B6A80)
#define RPG_CLIENT_PLAYERDATA_SET_CURDAY_OFFSET UNITYSDK_OFFSET(0x1E2B6A10)
#define RPG_CLIENT_PLAYERDATA_SET_DISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1E2B6400)
#define RPG_CLIENT_PLAYERDATA_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x1E2B6B10)
#define RPG_CLIENT_PLAYERDATA_SET_ISDISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1E2B63E0)
#define RPG_CLIENT_PLAYERDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1E2B6380)
#define RPG_CLIENT_PLAYERDATA_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x1E2B62D0)
#define RPG_CLIENT_PLAYERDATA_SET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0x1E2B6A90)
#define RPG_CLIENT_PLAYERDATA_SET_REGISTERCPS_OFFSET UNITYSDK_OFFSET(0x1E2B63C0)
#define RPG_CLIENT_PLAYERDATA_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x1E2B6C10)
#define RPG_CLIENT_PLAYERDATA_SET_STAMINADATA_OFFSET UNITYSDK_OFFSET(0x1E2B6950)
#define RPG_CLIENT_PLAYERDATA_SET_USERID_OFFSET UNITYSDK_OFFSET(0x1E2B62C0)
#define RPG_CLIENT_PLAYERDATA_SET_WEEKCOCOONCOUNT_OFFSET UNITYSDK_OFFSET(0x1E2B67B0)
#define RPG_CLIENT_PLAYERDATA_SET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1E2B63A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerData_TypeDefinitionIndex = 68612;

	class PlayerData : public ::System::Object
	{
	public:
		::RPG::Client::PlayerDefaultInfo* PlayerDefaultInfo; // 0x10
		::RPG::Client::HeadFrameInfo* _HeadFrameInfo_k__BackingField; // 0x18
		::System::String* _NickName; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _DisplayAvatarList_k__BackingField; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* UnGottenLevelRewards; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* GottenLevelRewards; // 0x38
		::RPG::Client::TeamData* _TeamData_k__BackingField; // 0x40
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _AssistAvatarIDs_k__BackingField; // 0x50
		::System::String* _RegisterCPS_k__BackingField; // 0x58
		::System::UInt32 _Level_k__BackingField; // 0x60
		::RPG::GameCore::GenderType _Gender; // 0x64
		::RPG::Client::PlayerStaminaData _StaminaData; // 0x68
		::JILIMBCCPKA _BasicInfoData; // 0x80
		::System::UInt32 HCoin; // 0x8C
		::System::UInt32 _UserID_k__BackingField; // 0x90
		::System::UInt32 Exp; // 0x94
		::System::UInt32 SCoin; // 0x98
		::System::Boolean IsGenderSelected; // 0x9C
		::System::Boolean _IsDisplayAvatarList_k__BackingField; // 0x9D
		::System::Byte _padding0[0x2];
		::System::UInt32 _Birthday_k__BackingField; // 0xA0
		::System::UInt32 MCoin; // 0xA4
		::System::UInt32 _WorldLevel_k__BackingField; // 0xA8
		// static const ::System::Object HERO_AVATAR_ID_BASE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_UserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_USERID_OFFSET))(this, a1);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_NickName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_NICKNAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_WORLDLEVEL_OFFSET))(this);
		}

		::System::Void set_WorldLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_WORLDLEVEL_OFFSET))(this, a1);
		}

		::System::String* get_RegisterCPS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_REGISTERCPS_OFFSET))(this);
		}

		::System::Void set_RegisterCPS(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_REGISTERCPS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisplayAvatarList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_ISDISPLAYAVATARLIST_OFFSET))(this);
		}

		::System::Void set_IsDisplayAvatarList(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_ISDISPLAYAVATARLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DisplayAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_DISPLAYAVATARLIST_OFFSET))(this);
		}

		::System::Void set_DisplayAvatarList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_DISPLAYAVATARLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AssistAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_ASSISTAVATARIDS_OFFSET))(this);
		}

		::System::Void set_AssistAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_ASSISTAVATARIDS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasAssist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_HASASSIST_OFFSET))(this);
		}

		::System::UInt32 get_ExpUp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_EXPUP_OFFSET))(this);
		}

		::System::UInt32 get_Stamina()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_STAMINA_OFFSET))(this);
		}

		::System::UInt32 get_WeekCocoonCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_WEEKCOCOONCOUNT_OFFSET))(this);
		}

		::System::Void set_WeekCocoonCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_WEEKCOCOONCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::TeamData* get_TeamData()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_TEAMDATA_OFFSET))(this);
		}

		::System::Boolean IsLevelMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_ISLEVELMAX_OFFSET))(this);
		}

		::JILIMBCCPKA get_BasicInfoData()
		{
			return ((::JILIMBCCPKA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_BASICINFODATA_OFFSET))(this);
		}

		::System::Void set_BasicInfoData(::JILIMBCCPKA a1)
		{
			return ((::System::Void(*)(::PVOID, ::JILIMBCCPKA))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_BASICINFODATA_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerStaminaData get_StaminaData()
		{
			return ((::RPG::Client::PlayerStaminaData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_STAMINADATA_OFFSET))(this);
		}

		::System::Void set_StaminaData(::RPG::Client::PlayerStaminaData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerStaminaData))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_STAMINADATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_CURDAY_OFFSET))(this);
		}

		::System::Void set_CurDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_CURDAY_OFFSET))(this, a1);
		}

		::RPG::Client::HeadFrameInfo* get_HeadFrameInfo()
		{
			return ((::RPG::Client::HeadFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_HEADFRAMEINFO_OFFSET))(this);
		}

		::System::UInt32 get_Birthday()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_BIRTHDAY_OFFSET))(this);
		}

		::System::Void set_Birthday(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_BIRTHDAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_PersonalCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_PERSONALCARDID_OFFSET))(this);
		}

		::System::Void set_PersonalCardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_PERSONALCARDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_HEADICONID_OFFSET))(this, a1);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SET_SIGNATURE_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Boolean get_IsFemale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_ISFEMALE_OFFSET))(this);
		}

		::System::Boolean get_IsMale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GET_ISMALE_OFFSET))(this);
		}

		::RPG::GameCore::GenderType GetCurrentHeroGender()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GETCURRENTHEROGENDER_OFFSET))(this);
		}

		::RPG::GameCore::GenderType GetStoryHeroGender()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_GETSTORYHEROGENDER_OFFSET))(this);
		}

		::System::Void SetCurrentHeroGender(::RPG::GameCore::GenderType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SETCURRENTHEROGENDER_OFFSET))(this, a1);
		}

		::System::Void SetHeroGenderAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDATA_SETHEROGENDERAUDIO_OFFSET))(this);
		}

	};
}
