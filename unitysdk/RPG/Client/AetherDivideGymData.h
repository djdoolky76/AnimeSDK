#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AetherDivideGymDataItem; }
namespace RPG::Client { class MainMissionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AETHERDIVIDEGYMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2CBC80)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B2CB500)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_GETGYMDATAITEMS_OFFSET UNITYSDK_OFFSET(0x1B2CABD0)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_GETGYMDATAITEM_OFFSET UNITYSDK_OFFSET(0x1B2CAC10)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_GETRELATEDGYMDATAITEMBYMISSION_OFFSET UNITYSDK_OFFSET(0x1B2CACB0)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_GET_CURGYMDATAITEM_OFFSET UNITYSDK_OFFSET(0x1B2CBC20)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_GET_CURGYMID_OFFSET UNITYSDK_OFFSET(0x1B2CBC00)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_GET__GETCHAMPIONKEY_OFFSET UNITYSDK_OFFSET(0x1B2CB220)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_INITUNLOCKBADGE_OFFSET UNITYSDK_OFFSET(0x1B2CB5B0)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1B2CA940)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_ISBADGEALREADYUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1B2CB830)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_ISBADGEINITED_OFFSET UNITYSDK_OFFSET(0x1B2CB7E0)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_ISBADGEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B2CB900)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_ONENTERGYM_OFFSET UNITYSDK_OFFSET(0x1B2CB3E0)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_ONLEAVEGYM_OFFSET UNITYSDK_OFFSET(0x1B2CB4B0)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_RECORDGETCHAMPIONEFFECTPLAYED_OFFSET UNITYSDK_OFFSET(0x1B2CB270)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_SET_CURGYMID_OFFSET UNITYSDK_OFFSET(0x1B2CBC10)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA_SHOULDPLAYGETCHAMPIONEFFECT_OFFSET UNITYSDK_OFFSET(0x1B2CAF50)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA__INITALLGYMS_OFFSET UNITYSDK_OFFSET(0x1B2CA990)
#define RPG_CLIENT_AETHERDIVIDEGYMDATA__ISALLBADGEGOT_OFFSET UNITYSDK_OFFSET(0x1B2CBBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherDivideGymData_TypeDefinitionIndex = 63632;

	class AetherDivideGymData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _OwnedBadges; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::AetherDivideGymDataItem*>* _GymDataItems; // 0x18
		::System::UInt32 _CurGymID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_INIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AetherDivideGymDataItem*>* GetGymDataItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AetherDivideGymDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_GETGYMDATAITEMS_OFFSET))(this);
		}

		::RPG::Client::AetherDivideGymDataItem* GetGymDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::AetherDivideGymDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_GETGYMDATAITEM_OFFSET))(this, a1);
		}

		::RPG::Client::AetherDivideGymDataItem* GetRelatedGymDataItemByMission(::RPG::Client::MainMissionData* a1)
		{
			return ((::RPG::Client::AetherDivideGymDataItem*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_GETRELATEDGYMDATAITEMBYMISSION_OFFSET))(this, a1);
		}

		::System::Boolean ShouldPlayGetChampionEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_SHOULDPLAYGETCHAMPIONEFFECT_OFFSET))(this);
		}

		::System::Void RecordGetChampionEffectPlayed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_RECORDGETCHAMPIONEFFECTPLAYED_OFFSET))(this);
		}

		::System::Void OnEnterGym(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_ONENTERGYM_OFFSET))(this, a1);
		}

		::System::Void OnLeaveGym()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_ONLEAVEGYM_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void InitUnlockBadge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_INITUNLOCKBADGE_OFFSET))(this);
		}

		::System::Boolean IsBadgeInited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_ISBADGEINITED_OFFSET))(this);
		}

		::System::Boolean IsBadgeAlreadyUnlocked(::RPG::Client::AetherDivideGymDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_ISBADGEALREADYUNLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean IsBadgeUnlock(::RPG::Client::AetherDivideGymDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_ISBADGEUNLOCK_OFFSET))(this, a1);
		}

		::System::Void _InitAllGyms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA__INITALLGYMS_OFFSET))(this);
		}

		::System::Boolean _IsAllBadgeGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA__ISALLBADGEGOT_OFFSET))(this);
		}

		::System::UInt32 get_CurGymID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_GET_CURGYMID_OFFSET))(this);
		}

		::System::Void set_CurGymID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_SET_CURGYMID_OFFSET))(this, a1);
		}

		::RPG::Client::AetherDivideGymDataItem* get_CurGymDataItem()
		{
			return ((::RPG::Client::AetherDivideGymDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_GET_CURGYMDATAITEM_OFFSET))(this);
		}

		::System::UInt32 get__GetChampionKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDEGYMDATA_GET__GETCHAMPIONKEY_OFFSET))(this);
		}

	};
}
