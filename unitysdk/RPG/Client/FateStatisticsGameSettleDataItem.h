#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro_LiteralDate.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/System/Object.h"
class HJFCEEBAGMF;
namespace RPG::Client { class FateBuffSlotData; }
namespace RPG::Client { class FateHouguDataItem; }
namespace RPG::Client { class FateReijuDataItem; }
namespace RPG::Client { class FateRoundInfoItem; }
namespace RPG::Client { class FateStatisticsAvatarDataItem; }
namespace RPG::Client { class FateStatisticsMasterInfoItem; }
namespace RPG::Client { class FateTraitData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xD955BF0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GETRANKNUMIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD958540)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_AREANAME_OFFSET UNITYSDK_OFFSET(0xD958D40)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0xD958DA0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_BUFFSLOTLIST_OFFSET UNITYSDK_OFFSET(0xD958EA0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_DATETIMESTR_OFFSET UNITYSDK_OFFSET(0xD959030)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xD958DE0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_HOUGULIST_OFFSET UNITYSDK_OFFSET(0xD958E20)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_MASTERINFOBYRANK_OFFSET UNITYSDK_OFFSET(0xD958F60)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_PHASEROUNDSTR_OFFSET UNITYSDK_OFFSET(0xD958FE0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_PLAYERRANK_OFFSET UNITYSDK_OFFSET(0xD958FA0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_REIJULIST_OFFSET UNITYSDK_OFFSET(0xD958E60)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_TEAMAVATARLIST_OFFSET UNITYSDK_OFFSET(0xD958F20)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_TRAITLIST_OFFSET UNITYSDK_OFFSET(0xD958EE0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xD955C00)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__GENERATEDEFAULTBUFFSLOTID_OFFSET UNITYSDK_OFFSET(0xD955CF0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__GETDATETIMESTR_OFFSET UNITYSDK_OFFSET(0xD958CF0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__GETPHASEROUNDSTR_OFFSET UNITYSDK_OFFSET(0xD9589C0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCAREA_OFFSET UNITYSDK_OFFSET(0xD955F70)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCBUFF_OFFSET UNITYSDK_OFFSET(0xD956B40)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCDATETIMEINFO_OFFSET UNITYSDK_OFFSET(0xD9583E0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCHOUGU_OFFSET UNITYSDK_OFFSET(0xD9560C0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCMASTERINFO_OFFSET UNITYSDK_OFFSET(0xD957CF0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCPHASEROUNDINFO_OFFSET UNITYSDK_OFFSET(0xD958380)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCREIJU_OFFSET UNITYSDK_OFFSET(0xD956600)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCTEAM_OFFSET UNITYSDK_OFFSET(0xD957850)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCTRAIT_OFFSET UNITYSDK_OFFSET(0xD957270)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM___GETPHASEROUNDSTR_B__13_0_OFFSET UNITYSDK_OFFSET(0xD9590A0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatisticsGameSettleDataItem_TypeDefinitionIndex = 65574;

	class FateStatisticsGameSettleDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsMasterInfoItem*>* _MasterInfoByRank; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::FateReijuDataItem*>* _ReijuList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* _HouguList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>* _TraitList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>* _BuffSlotList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsAvatarDataItem*>* _TeamAvatarList; // 0x38
		::System::UInt32 _PhaseID; // 0x40
		::System::UInt32 _DefaultBuffSlotID; // 0x44
		::System::UInt32 _RoundIndex; // 0x48
		::System::UInt32 _Difficulty; // 0x4C
		::System::UInt32 _PlayerRank; // 0x50
		::RPG::GameCore::FateAreaType _AreaType; // 0x54
		::RPG::Client::DateTimePro_LiteralDate _DateTime; // 0x58
		::RPG::Client::TextID _AreaName; // 0x68
		// static const ::System::Object _ServerSyncPlayerMasterAvatarID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::HJFCEEBAGMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJFCEEBAGMF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_SYNC_OFFSET))(this, a1);
		}

		::System::String* GetRankNumImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GETRANKNUMIMAGEPATH_OFFSET))(this);
		}

		::System::Void _GenerateDefaultBuffSlotID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__GENERATEDEFAULTBUFFSLOTID_OFFSET))(this);
		}

		::System::Void _SyncArea(::HJFCEEBAGMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJFCEEBAGMF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCAREA_OFFSET))(this, a1);
		}

		::System::Void _SyncHougu(::HJFCEEBAGMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJFCEEBAGMF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCHOUGU_OFFSET))(this, a1);
		}

		::System::Void _SyncReiju(::HJFCEEBAGMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJFCEEBAGMF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCREIJU_OFFSET))(this, a1);
		}

		::System::Void _SyncBuff(::HJFCEEBAGMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJFCEEBAGMF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCBUFF_OFFSET))(this, a1);
		}

		::System::Void _SyncTrait(::HJFCEEBAGMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJFCEEBAGMF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCTRAIT_OFFSET))(this, a1);
		}

		::System::Void _SyncTeam(::HJFCEEBAGMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJFCEEBAGMF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCTEAM_OFFSET))(this, a1);
		}

		::System::Void _SyncMasterInfo(::HJFCEEBAGMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJFCEEBAGMF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCMASTERINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncPhaseRoundInfo(::HJFCEEBAGMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJFCEEBAGMF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCPHASEROUNDINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncDateTimeInfo(::HJFCEEBAGMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJFCEEBAGMF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCDATETIMEINFO_OFFSET))(this, a1);
		}

		::System::String* _GetPhaseRoundStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__GETPHASEROUNDSTR_OFFSET))(this);
		}

		::System::String* _GetDateTimeStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__GETDATETIMESTR_OFFSET))(this);
		}

		::RPG::Client::TextID get_AreaName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_AREANAME_OFFSET))(this);
		}

		::RPG::GameCore::FateAreaType get_AreaType()
		{
			return ((::RPG::GameCore::FateAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_AREATYPE_OFFSET))(this);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* get_HouguList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_HOUGULIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateReijuDataItem*>* get_ReijuList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateReijuDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_REIJULIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>* get_BuffSlotList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_BUFFSLOTLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>* get_TraitList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_TRAITLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsAvatarDataItem*>* get_TeamAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsAvatarDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_TEAMAVATARLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsMasterInfoItem*>* get_MasterInfoByRank()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsMasterInfoItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_MASTERINFOBYRANK_OFFSET))(this);
		}

		::System::UInt32 get_PlayerRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_PLAYERRANK_OFFSET))(this);
		}

		::System::String* get_PhaseRoundStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_PHASEROUNDSTR_OFFSET))(this);
		}

		::System::String* get_DateTimeStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_DATETIMESTR_OFFSET))(this);
		}

		::System::Boolean __GetPhaseRoundStr_b__13_0(::RPG::Client::FateRoundInfoItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRoundInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM___GETPHASEROUNDSTR_B__13_0_OFFSET))(this, a1);
		}

	};
}
