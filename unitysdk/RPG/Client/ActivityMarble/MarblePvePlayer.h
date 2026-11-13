#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityMarble { class MarblePvePlayer; }
namespace RPG::Client::ActivityMarble { class MarbleTeamSelection; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_CREATEPVEHEROPLAYER_OFFSET UNITYSDK_OFFSET(0x1C7E9450)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_CREATEPVEPLAYER_OFFSET UNITYSDK_OFFSET(0x1C7F8EE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7FB540)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GETMARBLETEAM_OFFSET UNITYSDK_OFFSET(0x1C7FB780)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1C7FBB60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C7FBB00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_HIGHNEGATIVEEMOJILIST_OFFSET UNITYSDK_OFFSET(0x1C7FBC00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_HIGHPOSITIVEEMOJILIST_OFFSET UNITYSDK_OFFSET(0x1C7FBBE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C7FBAC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C7FBAE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_ISME_OFFSET UNITYSDK_OFFSET(0x1C7FB840)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_LOWNEGATIVEEMOJILIST_OFFSET UNITYSDK_OFFSET(0x1C7FBBC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_LOWPOSITIVEEMOJILIST_OFFSET UNITYSDK_OFFSET(0x1C7FBBA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERACTIONEMOJILIST_OFFSET UNITYSDK_OFFSET(0x1C7FBB80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1C7FBA00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERNAMESTR_OFFSET UNITYSDK_OFFSET(0x1C7FBA40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0x1C7FBA20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1C7FBB20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_SEALGROUPID_OFFSET UNITYSDK_OFFSET(0x1C7FBB40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_LOADFROMMARBLESEALEXCEL_OFFSET UNITYSDK_OFFSET(0x1C7FB590)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1C7FBB70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1C7FBB10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_HIGHNEGATIVEEMOJILIST_OFFSET UNITYSDK_OFFSET(0x1C7FBC10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_HIGHPOSITIVEEMOJILIST_OFFSET UNITYSDK_OFFSET(0x1C7FBBF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C7FBAD0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C7FBAF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_LOWNEGATIVEEMOJILIST_OFFSET UNITYSDK_OFFSET(0x1C7FBBD0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_LOWPOSITIVEEMOJILIST_OFFSET UNITYSDK_OFFSET(0x1C7FBBB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_PLAYERACTIONEMOJILIST_OFFSET UNITYSDK_OFFSET(0x1C7FBB90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1C7FBA10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0x1C7FBA30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1C7FBB30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_SEALGROUPID_OFFSET UNITYSDK_OFFSET(0x1C7FBB50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER__RESETDATA_OFFSET UNITYSDK_OFFSET(0x1C7FB970)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePvePlayer_TypeDefinitionIndex = 78317;

	class MarblePvePlayer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _LowPositiveEmojiList_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _LowNegativeEmojiList_k__BackingField; // 0x20
		::System::String* _PrefabPath_k__BackingField; // 0x28
		::Il2CppArray<::System::UInt32>* _PlayerActionEmojiList_k__BackingField; // 0x30
		::System::String* _ImagePath_k__BackingField; // 0x38
		::RPG::Client::ActivityMarble::MarbleTeamSelection* _TeamSelection; // 0x40
		::Il2CppArray<::System::UInt32>* _HighNegativeEmojiList_k__BackingField; // 0x48
		::Il2CppArray<::System::UInt32>* _HighPositiveEmojiList_k__BackingField; // 0x50
		::System::UInt32 _ActivityID_k__BackingField; // 0x58
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Desc_k__BackingField; // 0x60
		::RPG::Client::TextID _PlayerName_k__BackingField; // 0x70
		::System::UInt32 _SealGroupID_k__BackingField; // 0x80
		::System::UInt32 _PlayerID_k__BackingField; // 0x84
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ActivityMarble::MarblePvePlayer* CreatePvePlayer(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityMarble::MarblePvePlayer*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_CREATEPVEPLAYER_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityMarble::MarblePvePlayer* CreatePveHeroPlayer()
		{
			return ((::RPG::Client::ActivityMarble::MarblePvePlayer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_CREATEPVEHEROPLAYER_OFFSET))();
		}

		::RPG::Client::ActivityMarble::MarbleTeamSelection* GetMarbleTeam()
		{
			return ((::RPG::Client::ActivityMarble::MarbleTeamSelection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GETMARBLETEAM_OFFSET))(this);
		}

		::System::Void LoadFromMarbleSealExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_LOADFROMMARBLESEALEXCEL_OFFSET))(this);
		}

		::System::Void _ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER__RESETDATA_OFFSET))(this);
		}

		::System::UInt32 get_PlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERID_OFFSET))(this);
		}

		::System::Void set_PlayerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_PLAYERID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PlayerName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERNAME_OFFSET))(this);
		}

		::System::Void set_PlayerName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_PLAYERNAME_OFFSET))(this, a1);
		}

		::System::String* get_PlayerNameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERNAMESTR_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_IMAGEPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_DESC_OFFSET))(this, a1);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Void set_PrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_PREFABPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_SealGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_SEALGROUPID_OFFSET))(this);
		}

		::System::Void set_SealGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_SEALGROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Void set_ActivityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_ACTIVITYID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_PlayerActionEmojiList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERACTIONEMOJILIST_OFFSET))(this);
		}

		::System::Void set_PlayerActionEmojiList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_PLAYERACTIONEMOJILIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_LowPositiveEmojiList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_LOWPOSITIVEEMOJILIST_OFFSET))(this);
		}

		::System::Void set_LowPositiveEmojiList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_LOWPOSITIVEEMOJILIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_LowNegativeEmojiList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_LOWNEGATIVEEMOJILIST_OFFSET))(this);
		}

		::System::Void set_LowNegativeEmojiList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_LOWNEGATIVEEMOJILIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_HighPositiveEmojiList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_HIGHPOSITIVEEMOJILIST_OFFSET))(this);
		}

		::System::Void set_HighPositiveEmojiList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_HIGHPOSITIVEEMOJILIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_HighNegativeEmojiList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_HIGHNEGATIVEEMOJILIST_OFFSET))(this);
		}

		::System::Void set_HighNegativeEmojiList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_HIGHNEGATIVEEMOJILIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_ISME_OFFSET))(this);
		}

	};
}
