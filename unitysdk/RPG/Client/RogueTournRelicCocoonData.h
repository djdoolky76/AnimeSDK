#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class OINLMMCBCFN;
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class RogueTournRelicCocoonData; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueTournCocoonConfigRow; }
namespace RPG::GameCore { class RogueTournMiscDisplayRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xEAA3F40)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEAA4390)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GENERATEDATA_OFFSET UNITYSDK_OFFSET(0xEAA43F0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_BOSSMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xEAA4D80)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xEAA4930)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DISPLAYID_OFFSET UNITYSDK_OFFSET(0xEAA43A0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0xEAA4BF0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xEAA4970)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DROPLIST_OFFSET UNITYSDK_OFFSET(0xEAA4C40)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xEAA4BA0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xEAA4910)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xEAA3E10)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xEAA2D60)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_MAXCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0xEAA4D30)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_MONSTERDISPLAYCONFIGARRAY_OFFSET UNITYSDK_OFFSET(0xEAA48C0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xEAA4990)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_PICPATH_OFFSET UNITYSDK_OFFSET(0xEAA4AB0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_RECOMMENDDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0xEAA4B00)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0xEAA4B50)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ROGUEKEYCOST_OFFSET UNITYSDK_OFFSET(0xEAA4CE0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xEAA4950)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_STAMINACOST_OFFSET UNITYSDK_OFFSET(0xEAA4C90)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xEAA4A10)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xEAA4A60)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_ISNEEDUNLOCK_OFFSET UNITYSDK_OFFSET(0xEAA4880)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SETSEEN_OFFSET UNITYSDK_OFFSET(0xEAA46E0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_BOSSMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xEAA4D90)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xEAA4940)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xEAA4980)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xEAA4920)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xEAA4960)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA__GETROGUEBOSSMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xEAA4440)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRelicCocoonData_TypeDefinitionIndex = 69716;

	class RogueTournRelicCocoonData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* _BossMonsterDataList_k__BackingField; // 0x10
		::RPG::GameCore::RogueTournCocoonConfigRow* _Row_k__BackingField; // 0x18
		::RPG::GameCore::RogueTournMiscDisplayRow* _DisplayRow_k__BackingField; // 0x20
		::System::UInt32 _Difficulty_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournRelicCocoonData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueTournRelicCocoonData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void GenerateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GENERATEDATA_OFFSET))(this);
		}

		::System::Void SetSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SETSEEN_OFFSET))(this);
		}

		::System::Boolean IsNeedUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_ISNEEDUNLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* _GetRogueBossMonsterDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA__GETROGUEBOSSMONSTERDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_DIFFICULTY_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournCocoonConfigRow* get_Row()
		{
			return ((::RPG::GameCore::RogueTournCocoonConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::RogueTournCocoonConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournCocoonConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_DisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DISPLAYID_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMiscDisplayRow* get_DisplayRow()
		{
			return ((::RPG::GameCore::RogueTournMiscDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DISPLAYROW_OFFSET))(this);
		}

		::System::Void set_DisplayRow(::RPG::GameCore::RogueTournMiscDisplayRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMiscDisplayRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_DISPLAYROW_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_UNLOCKID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::String* get_PicPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_PICPATH_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_RecommendDamageTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_RECOMMENDDAMAGETYPES_OFFSET))(this);
		}

		::System::UInt32 get_RecommendLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_RECOMMENDLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_WORLDLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_EVENTID_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_DisplayItemList()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DISPLAYITEMLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_DropList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DROPLIST_OFFSET))(this);
		}

		::System::Int64 get_StaminaCost()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_STAMINACOST_OFFSET))(this);
		}

		::System::Int64 get_RogueKeyCost()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ROGUEKEYCOST_OFFSET))(this);
		}

		::System::UInt32 get_MaxChallengeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_MAXCHALLENGECOUNT_OFFSET))(this);
		}

		::Il2CppArray<::OINLMMCBCFN*>* get_MonsterDisplayConfigArray()
		{
			return ((::Il2CppArray<::OINLMMCBCFN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_MONSTERDISPLAYCONFIGARRAY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* get_BossMonsterDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_BOSSMONSTERDATALIST_OFFSET))(this);
		}

		::System::Void set_BossMonsterDataList(::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_BOSSMONSTERDATALIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ISNEW_OFFSET))(this);
		}

	};
}
