#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCECAGOELDP;
class PNJAABBGEII;
namespace RPG::Client { class FateExpRewardLevelDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEEXPREWARDINFO_AREALLREWARDSCLAIMED_OFFSET UNITYSDK_OFFSET(0x1DB72360)
#define RPG_CLIENT_FATEEXPREWARDINFO_CALCLEVELANDREMAINDEREXPBYTOTALEXP_OFFSET UNITYSDK_OFFSET(0x1DB71000)
#define RPG_CLIENT_FATEEXPREWARDINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB70270)
#define RPG_CLIENT_FATEEXPREWARDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DB71B50)
#define RPG_CLIENT_FATEEXPREWARDINFO_GETEXPRATIO_OFFSET UNITYSDK_OFFSET(0x1DB71EF0)
#define RPG_CLIENT_FATEEXPREWARDINFO_GETNEXTLEVELREQUIREDEXP_OFFSET UNITYSDK_OFFSET(0x1DB71C90)
#define RPG_CLIENT_FATEEXPREWARDINFO_GETREQUIREDEXPOFLEVEL_OFFSET UNITYSDK_OFFSET(0x1DB71DF0)
#define RPG_CLIENT_FATEEXPREWARDINFO_GET_EXPREMAINDER_OFFSET UNITYSDK_OFFSET(0x1DB72AC0)
#define RPG_CLIENT_FATEEXPREWARDINFO_GET_EXPTOTAL_OFFSET UNITYSDK_OFFSET(0x1DB72A80)
#define RPG_CLIENT_FATEEXPREWARDINFO_GET_LEVELDATALIST_OFFSET UNITYSDK_OFFSET(0x1DB72B00)
#define RPG_CLIENT_FATEEXPREWARDINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1DB71C50)
#define RPG_CLIENT_FATEEXPREWARDINFO_GET_MAXLEVELPOSSIBLE_OFFSET UNITYSDK_OFFSET(0x1DB72B40)
#define RPG_CLIENT_FATEEXPREWARDINFO_HASCLAIMABLEREWARD_OFFSET UNITYSDK_OFFSET(0x1DB71F70)
#define RPG_CLIENT_FATEEXPREWARDINFO_HASPERMANENTCLAIMABLEREWARD_OFFSET UNITYSDK_OFFSET(0x1DB721E0)
#define RPG_CLIENT_FATEEXPREWARDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1DB70280)
#define RPG_CLIENT_FATEEXPREWARDINFO_ISCLAIMABLELIMITEDTIME_OFFSET UNITYSDK_OFFSET(0x1DB72620)
#define RPG_CLIENT_FATEEXPREWARDINFO_ISCLAIMABLEPERMANENT_OFFSET UNITYSDK_OFFSET(0x1DB72520)
#define RPG_CLIENT_FATEEXPREWARDINFO_ISLEVELMAXED_OFFSET UNITYSDK_OFFSET(0x1DB71BE0)
#define RPG_CLIENT_FATEEXPREWARDINFO_SET_MAXLEVELPOSSIBLE_OFFSET UNITYSDK_OFFSET(0x1DB72B50)
#define RPG_CLIENT_FATEEXPREWARDINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x1DB71230)
#define RPG_CLIENT_FATEEXPREWARDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1DB706D0)
#define RPG_CLIENT_FATEEXPREWARDINFO__CHECKDATAITEMS_OFFSET UNITYSDK_OFFSET(0x1DB727D0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateExpRewardInfo_TypeDefinitionIndex = 65459;

	class FateExpRewardInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateExpRewardLevelDataItem*>* _LevelDataList; // 0x10
		::System::UInt32 _MaxLevelPossible_k__BackingField; // 0x18
		::System::UInt32 _Level; // 0x1C
		::System::UInt32 _ExpTotal; // 0x20
		::System::UInt32 _ExpRemainder; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_INIT_OFFSET))(this);
		}

		::System::Void Sync(::GCECAGOELDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCECAGOELDP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate(::PNJAABBGEII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNJAABBGEII*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_SYNCUPDATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsLevelMaxed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_ISLEVELMAXED_OFFSET))(this);
		}

		::System::UInt32 GetNextLevelRequiredExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GETNEXTLEVELREQUIREDEXP_OFFSET))(this);
		}

		::System::UInt32 GetRequiredExpOfLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GETREQUIREDEXPOFLEVEL_OFFSET))(this, a1);
		}

		::System::Single GetExpRatio(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GETEXPRATIO_OFFSET))(this, a1, a2);
		}

		::System::Void CalcLevelAndRemainderExpByTotalExp(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_CALCLEVELANDREMAINDEREXPBYTOTALEXP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HasClaimableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_HASCLAIMABLEREWARD_OFFSET))(this);
		}

		::System::Boolean HasPermanentClaimableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_HASPERMANENTCLAIMABLEREWARD_OFFSET))(this);
		}

		::System::Boolean AreAllRewardsClaimed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_AREALLREWARDSCLAIMED_OFFSET))(this);
		}

		::System::Boolean IsClaimablePermanent(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_ISCLAIMABLEPERMANENT_OFFSET))(this, a1);
		}

		::System::Boolean IsClaimableLimitedTime(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_ISCLAIMABLELIMITEDTIME_OFFSET))(this, a1);
		}

		::System::Boolean _CheckDataItems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO__CHECKDATAITEMS_OFFSET))(this);
		}

		::System::UInt32 get_ExpTotal()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GET_EXPTOTAL_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_ExpRemainder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GET_EXPREMAINDER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateExpRewardLevelDataItem*>* get_LevelDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateExpRewardLevelDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GET_LEVELDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevelPossible()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_GET_MAXLEVELPOSSIBLE_OFFSET))(this);
		}

		::System::Void set_MaxLevelPossible(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO_SET_MAXLEVELPOSSIBLE_OFFSET))(this, a1);
		}

	};
}
