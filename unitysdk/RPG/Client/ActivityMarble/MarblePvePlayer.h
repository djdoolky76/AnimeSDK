#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityMarble { class MarblePvePlayer; }
namespace RPG::Client::ActivityMarble { class MarbleTeamSelection; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_CREATEPVEHEROPLAYER_OFFSET UNITYSDK_OFFSET(0xCE7DA90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_CREATEPVEPLAYER_OFFSET UNITYSDK_OFFSET(0xCE8D2B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0xCE8F910)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GETMARBLETEAM_OFFSET UNITYSDK_OFFSET(0xCE8FB50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xCE8FF20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCE8FEC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_HIGHNEGATIVEEMOJILIST_OFFSET UNITYSDK_OFFSET(0xCE8FFC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_HIGHPOSITIVEEMOJILIST_OFFSET UNITYSDK_OFFSET(0xCE8FFA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCE8FE80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xCE8FEA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_ISME_OFFSET UNITYSDK_OFFSET(0xCE8FC10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_LOWNEGATIVEEMOJILIST_OFFSET UNITYSDK_OFFSET(0xCE8FF80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_LOWPOSITIVEEMOJILIST_OFFSET UNITYSDK_OFFSET(0xCE8FF60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERACTIONEMOJILIST_OFFSET UNITYSDK_OFFSET(0xCE8FF40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0xCE8FDC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERNAMESTR_OFFSET UNITYSDK_OFFSET(0xCE8FE00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0xCE8FDE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xCE8FEE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_GET_SEALGROUPID_OFFSET UNITYSDK_OFFSET(0xCE8FF00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_LOADFROMMARBLESEALEXCEL_OFFSET UNITYSDK_OFFSET(0xCE8F960)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xCE8FF30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_DESC_OFFSET UNITYSDK_OFFSET(0xCE8FED0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_HIGHNEGATIVEEMOJILIST_OFFSET UNITYSDK_OFFSET(0xCE8FFD0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_HIGHPOSITIVEEMOJILIST_OFFSET UNITYSDK_OFFSET(0xCE8FFB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCE8FE90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xCE8FEB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_LOWNEGATIVEEMOJILIST_OFFSET UNITYSDK_OFFSET(0xCE8FF90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_LOWPOSITIVEEMOJILIST_OFFSET UNITYSDK_OFFSET(0xCE8FF70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_PLAYERACTIONEMOJILIST_OFFSET UNITYSDK_OFFSET(0xCE8FF50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_PLAYERID_OFFSET UNITYSDK_OFFSET(0xCE8FDD0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0xCE8FDF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xCE8FEF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER_SET_SEALGROUPID_OFFSET UNITYSDK_OFFSET(0xCE8FF10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEPLAYER__RESETDATA_OFFSET UNITYSDK_OFFSET(0xCE8FD30)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePvePlayer_TypeDefinitionIndex = 78318;

	class MarblePvePlayer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _PlayerActionEmojiList_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _LowNegativeEmojiList_k__BackingField; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::System::String* _PrefabPath_k__BackingField; // 0x28
		::Il2CppArray<::System::UInt32>* _HighNegativeEmojiList_k__BackingField; // 0x30
		::RPG::Client::ActivityMarble::MarbleTeamSelection* _TeamSelection; // 0x38
		::Il2CppArray<::System::UInt32>* _HighPositiveEmojiList_k__BackingField; // 0x40
		::System::String* _ImagePath_k__BackingField; // 0x48
		::Il2CppArray<::System::UInt32>* _LowPositiveEmojiList_k__BackingField; // 0x50
		::RPG::Client::TextID _Desc_k__BackingField; // 0x58
		::System::UInt32 _PlayerID_k__BackingField; // 0x68
		::System::UInt32 _ActivityID_k__BackingField; // 0x6C
		::RPG::Client::TextID _PlayerName_k__BackingField; // 0x70
		::System::UInt32 _SealGroupID_k__BackingField; // 0x80
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
