#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"
class LDLCMMOPKNG;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::Client { class EvolveBuildLevelFromProto; }
namespace RPG::Client { class EvolveBuildResultBarData; }
namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_CREATE_OFFSET UNITYSDK_OFFSET(0x1DB4C470)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4C9F0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETBASESCORE_OFFSET UNITYSDK_OFFSET(0x1DB4D2E0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETRESULTBARDATA_OFFSET UNITYSDK_OFFSET(0x1DB4DC90)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETTOTALAVATARDAMAGE_OFFSET UNITYSDK_OFFSET(0x1DB4CE70)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETTOTALGEARDAMAGE_OFFSET UNITYSDK_OFFSET(0x1DB4CA00)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETWAVESCORE_OFFSET UNITYSDK_OFFSET(0x1DB4D7E0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_ACCESSORYSLOTTOTALNUM_OFFSET UNITYSDK_OFFSET(0x1DB4E880)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0x1DB4EBF0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CARDLIST_OFFSET UNITYSDK_OFFSET(0x1DB4EBD0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURCOIN_OFFSET UNITYSDK_OFFSET(0x1DB4EF60)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CUREXP_OFFSET UNITYSDK_OFFSET(0x1DB4E7A0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURGAMEEXP_OFFSET UNITYSDK_OFFSET(0x1DB4EF10)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURLEVELID_OFFSET UNITYSDK_OFFSET(0x1DB4E6D0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURPERIOD_OFFSET UNITYSDK_OFFSET(0x1DB4EE50)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURWAVE_OFFSET UNITYSDK_OFFSET(0x1DB4EEB0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_HASBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x1DB4E740)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_PERIODIDLIST_OFFSET UNITYSDK_OFFSET(0x1DB4EDB0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_ROUNDCNT_OFFSET UNITYSDK_OFFSET(0x1DB4EFD0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x1DB4F020)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_SORTEDGEAREQUIPINFO_OFFSET UNITYSDK_OFFSET(0x1DB4E8F0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_WEAPONSLOTTOTALNUM_OFFSET UNITYSDK_OFFSET(0x1DB4E810)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_SET_CARDLIST_OFFSET UNITYSDK_OFFSET(0x1DB4EBE0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_SET_SEASON_OFFSET UNITYSDK_OFFSET(0x1DB4F030)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildLevelFromProto_TypeDefinitionIndex = 65239;

	class EvolveBuildLevelFromProto : public ::System::Object
	{
	public:
		::LDLCMMOPKNG* _levelInfo; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* _CardList_k__BackingField; // 0x18
		::RPG::GameCore::EvolveBuildSeason _Season_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildLevelFromProto* Create(::LDLCMMOPKNG* a1, ::RPG::GameCore::EvolveBuildSeason a2)
		{
			return ((::RPG::Client::EvolveBuildLevelFromProto*(*)(::LDLCMMOPKNG*, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_CREATE_OFFSET))(a1, a2);
		}

		::System::Double GetTotalGearDamage()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETTOTALGEARDAMAGE_OFFSET))(this);
		}

		::System::Double GetTotalAvatarDamage()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETTOTALAVATARDAMAGE_OFFSET))(this);
		}

		::System::UInt32 GetBaseScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETBASESCORE_OFFSET))(this);
		}

		::System::UInt32 GetWaveScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETWAVESCORE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildResultBarData*>* GetResultBarData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildResultBarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETRESULTBARDATA_OFFSET))(this);
		}

		::System::UInt32 get_CurLevelId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURLEVELID_OFFSET))(this);
		}

		::System::Boolean get_HasBattleInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_HASBATTLEINFO_OFFSET))(this);
		}

		::System::UInt32 get_CurExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CUREXP_OFFSET))(this);
		}

		::System::Int32 get_WeaponSlotTotalNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_WEAPONSLOTTOTALNUM_OFFSET))(this);
		}

		::System::Int32 get_AccessorySlotTotalNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_ACCESSORYSLOTTOTALNUM_OFFSET))(this);
		}

		::RPG::Client::SortedEvolveBuildGearEquipInfoLists* get_SortedGearEquipInfo()
		{
			return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_SORTEDGEAREQUIPINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* get_CardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CARDLIST_OFFSET))(this);
		}

		::System::Void set_CardList(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_SET_CARDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_AvatarList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_AVATARLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PeriodIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_PERIODIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_CurPeriod()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURPERIOD_OFFSET))(this);
		}

		::System::UInt32 get_CurWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURWAVE_OFFSET))(this);
		}

		::System::UInt32 get_CurGameExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURGAMEEXP_OFFSET))(this);
		}

		::System::UInt32 get_CurCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURCOIN_OFFSET))(this);
		}

		::System::UInt32 get_RoundCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_ROUNDCNT_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_SEASON_OFFSET))(this);
		}

		::System::Void set_Season(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_SET_SEASON_OFFSET))(this, a1);
		}

	};
}
