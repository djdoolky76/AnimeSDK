#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"
class BMGHLHHJEGE;
class KCMJJLJCHHP;
class KNKPLOGICFO;
class MOFKNBAKKDI;
class NCFKHDIKCNI;
class OHABCOEGDEH;
class OJHHACMHFKA;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace RPG::Client { class PlanetFesBusinessDayData; }
namespace RPG::Client { class PlanetFesBusinessDayHistoryData; }
namespace RPG::Client { class PlanetFesEventDataBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CLEAREVENTREFRESHTIMERS_OFFSET UNITYSDK_OFFSET(0x1D84A230)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CLEARTIMERBYTYPE_OFFSET UNITYSDK_OFFSET(0x1D849980)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0x1D84B2E0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84B490)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D84B5F0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GETEVENTBYTYPE_OFFSET UNITYSDK_OFFSET(0x1D848630)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_BUSINESSDAYHISTORYDATADICT_OFFSET UNITYSDK_OFFSET(0x1D84B2C0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_BUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x1D84BF20)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_CUREVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D849D50)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_EVENTDATADICT_OFFSET UNITYSDK_OFFSET(0x1D84A120)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_EVENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D84A050)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFILLEDDATA_OFFSET UNITYSDK_OFFSET(0x1D84BF40)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFINISHEDALLEVENT_OFFSET UNITYSDK_OFFSET(0x1D84A0C0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1D84BF60)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISINFINITE_OFFSET UNITYSDK_OFFSET(0x1D84BF80)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISTUTORIALBUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x1D84BFE0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ONSTARTGUARD_OFFSET UNITYSDK_OFFSET(0x1D84C040)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1D84BFC0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0x1D84BFA0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_TOTALEVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D849ED0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1D84B8A0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_ONSTART_OFFSET UNITYSDK_OFFSET(0x1D84B7A0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SETONSTARTGUARD_OFFSET UNITYSDK_OFFSET(0x1D84B750)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_BUSINESSDAYHISTORYDATADICT_OFFSET UNITYSDK_OFFSET(0x1D84B2D0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_BUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x1D84BF30)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_EVENTDATADICT_OFFSET UNITYSDK_OFFSET(0x1D84A130)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISFILLEDDATA_OFFSET UNITYSDK_OFFSET(0x1D84BF50)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1D84BF70)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISINFINITE_OFFSET UNITYSDK_OFFSET(0x1D84BF90)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ONSTARTGUARD_OFFSET UNITYSDK_OFFSET(0x1D84C050)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1D84BFD0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0x1D84BFB0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCEVENTHISTORY_OFFSET UNITYSDK_OFFSET(0x1D848130)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCEVENTINFO_OFFSET UNITYSDK_OFFSET(0x1D847FD0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCHISTORYSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1D84AB60)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCOUTERINFO_OFFSET UNITYSDK_OFFSET(0x1D84BDE0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCTOTALCOINCHANGE_OFFSET UNITYSDK_OFFSET(0x1D84BE50)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1D84BCB0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TICKGAMEPLAYEVENTREFRESH_OFFSET UNITYSDK_OFFSET(0x1D84A2C0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYADDTIMERBYTYPE_OFFSET UNITYSDK_OFFSET(0x1D849A10)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYAPPEAREVENT_OFFSET UNITYSDK_OFFSET(0x1D848710)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYDISAPPEAREVENT_OFFSET UNITYSDK_OFFSET(0x1D848810)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYENTERNEXTDAY_OFFSET UNITYSDK_OFFSET(0x1D84B9A0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CHECKANDDISPATCHREFRESH_OFFSET UNITYSDK_OFFSET(0x1D84A550)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CLEAREVENTDATA_OFFSET UNITYSDK_OFFSET(0x1D848C60)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CREATETIMER_OFFSET UNITYSDK_OFFSET(0x1D84A140)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__DISPOSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1D849CB0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__DISPOSEHISTORYINFO_OFFSET UNITYSDK_OFFSET(0x1D84B220)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__FINDEVENTINFO_OFFSET UNITYSDK_OFFSET(0x1D849430)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__INITEVENTS_OFFSET UNITYSDK_OFFSET(0x1D848910)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__SYNCALLEVENTINFO_OFFSET UNITYSDK_OFFSET(0x1D848DA0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__SYNCSINGLEEVENTINFO_OFFSET UNITYSDK_OFFSET(0x1D848030)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TICKEVENTREFRESHTIMERS_OFFSET UNITYSDK_OFFSET(0x1D84A3E0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TRYAUTOADDEVENTREFRESHTIMERS_OFFSET UNITYSDK_OFFSET(0x1D84A350)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TRYREFRESHEVENT_OFFSET UNITYSDK_OFFSET(0x1D84A9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesBusinessDayData_TypeDefinitionIndex = 68498;

	class PlanetFesBusinessDayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>* _EventDataDict_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesBusinessDayHistoryData*>* _BusinessDayHistoryDataDict_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::KNKPLOGICFO*>* _EventRefreshTimer; // 0x20
		::System::Numerics::BigInteger _TotalCoin_k__BackingField; // 0x28
		::System::Int64 _StartTimeStamp_k__BackingField; // 0x38
		::System::UInt32 _BusinessDay_k__BackingField; // 0x40
		::System::Boolean _OnStartGuard_k__BackingField; // 0x44
		::System::Boolean _IsInfinite_k__BackingField; // 0x45
		::System::Boolean _IsFinished_k__BackingField; // 0x46
		::System::Boolean _IsFilledData_k__BackingField; // 0x47
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CTOR_OFFSET))(this);
		}

		::System::Void SyncEventInfo(::OJHHACMHFKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJHHACMHFKA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCEVENTINFO_OFFSET))(this, a1);
		}

		::System::Void SyncEventHistory(::System::Collections::Generic::IEnumerable_1<::BMGHLHHJEGE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::BMGHLHHJEGE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCEVENTHISTORY_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesEventDataBase* GetEventByType(::RPG::GameCore::PlanetFesEventType a1)
		{
			return ((::RPG::Client::PlanetFesEventDataBase*(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GETEVENTBYTYPE_OFFSET))(this, a1);
		}

		::System::Void TryAppearEvent(::RPG::GameCore::PlanetFesEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYAPPEAREVENT_OFFSET))(this, a1);
		}

		::System::Void TryDisappearEvent(::RPG::GameCore::PlanetFesEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYDISAPPEAREVENT_OFFSET))(this, a1);
		}

		::System::Void _InitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__INITEVENTS_OFFSET))(this);
		}

		::System::Void _ClearEventData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CLEAREVENTDATA_OFFSET))(this);
		}

		::System::Void _SyncAllEventInfo(::System::Collections::Generic::IList_1<::OJHHACMHFKA*>* a1, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::OJHHACMHFKA*>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__SYNCALLEVENTINFO_OFFSET))(this, a1, a2);
		}

		::OJHHACMHFKA* _FindEventInfo(::System::Collections::Generic::IEnumerable_1<::OJHHACMHFKA*>* a1, ::System::Int32 a2)
		{
			return ((::OJHHACMHFKA*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::OJHHACMHFKA*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__FINDEVENTINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncSingleEventInfo(::OJHHACMHFKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJHHACMHFKA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__SYNCSINGLEEVENTINFO_OFFSET))(this, a1);
		}

		::System::Void _DisposeEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__DISPOSEEVENTS_OFFSET))(this);
		}

		::System::UInt32 get_CurEventCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_CUREVENTCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_TotalEventCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_TOTALEVENTCOUNT_OFFSET))(this);
		}

		::System::Single get_EventProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_EVENTPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsFinishedAllEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFINISHEDALLEVENT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>* get_EventDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_EVENTDATADICT_OFFSET))(this);
		}

		::System::Void set_EventDataDict(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_EVENTDATADICT_OFFSET))(this, a1);
		}

		::System::Void TryAddTimerByType(::RPG::GameCore::PlanetFesEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYADDTIMERBYTYPE_OFFSET))(this, a1);
		}

		::System::Void ClearTimerByType(::RPG::GameCore::PlanetFesEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CLEARTIMERBYTYPE_OFFSET))(this, a1);
		}

		::System::Void ClearEventRefreshTimers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CLEAREVENTREFRESHTIMERS_OFFSET))(this);
		}

		::System::Void TickGamePlayEventRefresh(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TICKGAMEPLAYEVENTREFRESH_OFFSET))(this, a1);
		}

		::System::Void _TryAutoAddEventRefreshTimers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TRYAUTOADDEVENTREFRESHTIMERS_OFFSET))(this);
		}

		::KNKPLOGICFO* _CreateTimer(::System::Single a1)
		{
			return ((::KNKPLOGICFO*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CREATETIMER_OFFSET))(this, a1);
		}

		::System::Void _TickEventRefreshTimers(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TICKEVENTREFRESHTIMERS_OFFSET))(this, a1);
		}

		::System::Void _CheckAndDispatchRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CHECKANDDISPATCHREFRESH_OFFSET))(this);
		}

		::System::Boolean _TryRefreshEvent(::RPG::Client::PlanetFesEventDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesEventDataBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TRYREFRESHEVENT_OFFSET))(this, a1);
		}

		::System::Void SyncHistoryStatistics(::System::Collections::Generic::IEnumerable_1<::OHABCOEGDEH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::OHABCOEGDEH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCHISTORYSTATISTICS_OFFSET))(this, a1);
		}

		::System::Void _DisposeHistoryInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__DISPOSEHISTORYINFO_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesBusinessDayHistoryData*>* get_BusinessDayHistoryDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesBusinessDayHistoryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_BUSINESSDAYHISTORYDATADICT_OFFSET))(this);
		}

		::System::Void set_BusinessDayHistoryDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesBusinessDayHistoryData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesBusinessDayHistoryData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_BUSINESSDAYHISTORYDATADICT_OFFSET))(this, a1);
		}

		static ::RPG::Client::PlanetFesBusinessDayData* CreateEmpty()
		{
			return ((::RPG::Client::PlanetFesBusinessDayData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CREATEEMPTY_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SetOnStartGuard(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SETONSTARTGUARD_OFFSET))(this, a1);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_ONSTART_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_ONFINISH_OFFSET))(this);
		}

		::System::Void TryEnterNextDay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYENTERNEXTDAY_OFFSET))(this);
		}

		::System::Void Sync(::MOFKNBAKKDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOFKNBAKKDI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncOuterInfo(::KCMJJLJCHHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMJJLJCHHP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCOUTERINFO_OFFSET))(this, a1);
		}

		::System::Void SyncTotalCoinChange(::NCFKHDIKCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCTOTALCOINCHANGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_BusinessDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_BUSINESSDAY_OFFSET))(this);
		}

		::System::Void set_BusinessDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_BUSINESSDAY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFilledData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFILLEDDATA_OFFSET))(this);
		}

		::System::Void set_IsFilledData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISFILLEDDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISINFINITE_OFFSET))(this);
		}

		::System::Void set_IsInfinite(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISINFINITE_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger get_TotalCoin()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_TOTALCOIN_OFFSET))(this);
		}

		::System::Void set_TotalCoin(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_TOTALCOIN_OFFSET))(this, a1);
		}

		::System::Int64 get_StartTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_STARTTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_StartTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_STARTTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTutorialBusinessDay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISTUTORIALBUSINESSDAY_OFFSET))(this);
		}

		::System::Boolean get_OnStartGuard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ONSTARTGUARD_OFFSET))(this);
		}

		::System::Void set_OnStartGuard(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ONSTARTGUARD_OFFSET))(this, a1);
		}

	};
}
