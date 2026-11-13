#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/GachaItemType.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/Nullable_1.h"
class NEIMLKNMDBM;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class BaseGachaDecideData; }
namespace RPG::Client { class BaseGachaGroupData; }
namespace RPG::Client { class BaseGachaPoolData; }
namespace RPG::Client { class GachaCeilingData; }
namespace RPG::Client { class GachaDrawData; }
namespace RPG::Client { class GachaItemData; }
namespace RPG::Client { class GachaModule_DrawInfoCache; }
namespace RPG::Client { class GachaTimeData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GACHAMODULE_ADDLOSTGACHAVIDEOTOBADLIST_OFFSET UNITYSDK_OFFSET(0x1A7FC1B0)
#define RPG_CLIENT_GACHAMODULE_CANAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1A7F8BC0)
#define RPG_CLIENT_GACHAMODULE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7FF430)
#define RPG_CLIENT_GACHAMODULE_CLEARNEWGOTUPAVATARS_OFFSET UNITYSDK_OFFSET(0x1A7FC4B0)
#define RPG_CLIENT_GACHAMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F8080)
#define RPG_CLIENT_GACHAMODULE_DOGACHA_OFFSET UNITYSDK_OFFSET(0x1A7FA310)
#define RPG_CLIENT_GACHAMODULE_EXCHANGEGACHACEILING_OFFSET UNITYSDK_OFFSET(0x1A7FA0C0)
#define RPG_CLIENT_GACHAMODULE_FETCHGACHATIME_1_OFFSET UNITYSDK_OFFSET(0x1A7F7050)
#define RPG_CLIENT_GACHAMODULE_FETCHGACHATIME_OFFSET UNITYSDK_OFFSET(0x1A7F6C10)
#define RPG_CLIENT_GACHAMODULE_GETAVATARDETAILLIST_OFFSET UNITYSDK_OFFSET(0x1A7FC250)
#define RPG_CLIENT_GACHAMODULE_GETFIRSTINTIMEGACHA_OFFSET UNITYSDK_OFFSET(0x1A7F7490)
#define RPG_CLIENT_GACHAMODULE_GETGACHACEILINGDATA_OFFSET UNITYSDK_OFFSET(0x1A7F5BC0)
#define RPG_CLIENT_GACHAMODULE_GETGACHACEILING_OFFSET UNITYSDK_OFFSET(0x1A7F9E80)
#define RPG_CLIENT_GACHAMODULE_GETGACHAPOOLDATA_OFFSET UNITYSDK_OFFSET(0x1A7FAEE0)
#define RPG_CLIENT_GACHAMODULE_GETGACHAREWARDITEMDATAS_OFFSET UNITYSDK_OFFSET(0x1A7F9CE0)
#define RPG_CLIENT_GACHAMODULE_GETNEWGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1A7FAFB0)
#define RPG_CLIENT_GACHAMODULE_GETNEXTBEGINTIMEGACHA_OFFSET UNITYSDK_OFFSET(0x1A7F76F0)
#define RPG_CLIENT_GACHAMODULE_GETREWARDEDGACHAIDS_OFFSET UNITYSDK_OFFSET(0x1A7FBC60)
#define RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAGROUPDATAS_OFFSET UNITYSDK_OFFSET(0x1A7F9780)
#define RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAITEMDATAS_OFFSET UNITYSDK_OFFSET(0x1A7F9D20)
#define RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAPOOLDATAS_OFFSET UNITYSDK_OFFSET(0x1A7F8720)
#define RPG_CLIENT_GACHAMODULE_GETSRGACHAPOOLID_OFFSET UNITYSDK_OFFSET(0x1A7F85D0)
#define RPG_CLIENT_GACHAMODULE_GETSSRGACHAPOOLID_OFFSET UNITYSDK_OFFSET(0x1A7F8490)
#define RPG_CLIENT_GACHAMODULE_GETTOASTGACHAID_OFFSET UNITYSDK_OFFSET(0x1A7F9360)
#define RPG_CLIENT_GACHAMODULE_GET_CURRENTDRAWINFO_OFFSET UNITYSDK_OFFSET(0x1A7FF0B0)
#define RPG_CLIENT_GACHAMODULE_GET_DEFAULTGACHAID_OFFSET UNITYSDK_OFFSET(0x1A7FEF80)
#define RPG_CLIENT_GACHAMODULE_GET_ENABLEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1A7FF200)
#define RPG_CLIENT_GACHAMODULE_GET_GACHANORMALPOOLID_OFFSET UNITYSDK_OFFSET(0x1A7FF280)
#define RPG_CLIENT_GACHAMODULE_GET_GACHANORMALTRIALSTAGEIDLIST_OFFSET UNITYSDK_OFFSET(0x1A7FF220)
#define RPG_CLIENT_GACHAMODULE_GET_GACHAPOOLDATACACHE_OFFSET UNITYSDK_OFFSET(0x1A7FF090)
#define RPG_CLIENT_GACHAMODULE_GET_GETGACHAINFORSPCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A7FEF00)
#define RPG_CLIENT_GACHAMODULE_GET_HAVEPOOLGACHALIMIT_OFFSET UNITYSDK_OFFSET(0x1A7FF040)
#define RPG_CLIENT_GACHAMODULE_GET_HAVETOTALGACHALIMIT_OFFSET UNITYSDK_OFFSET(0x1A7FEFF0)
#define RPG_CLIENT_GACHAMODULE_GET_POOLGACHALIMIT_OFFSET UNITYSDK_OFFSET(0x1A7FEF40)
#define RPG_CLIENT_GACHAMODULE_GET_SHAREID_OFFSET UNITYSDK_OFFSET(0x1A7FEFA0)
#define RPG_CLIENT_GACHAMODULE_GET_SHAREREWARDNUM_OFFSET UNITYSDK_OFFSET(0x1A7FF0F0)
#define RPG_CLIENT_GACHAMODULE_GET_TOTALGACHALIMIT_OFFSET UNITYSDK_OFFSET(0x1A7FEF20)
#define RPG_CLIENT_GACHAMODULE_GET_TOTALGACHATIME_OFFSET UNITYSDK_OFFSET(0x1A7FEF60)
#define RPG_CLIENT_GACHAMODULE_HASAVATARTOASTTOSHOW_OFFSET UNITYSDK_OFFSET(0x1A7F96D0)
#define RPG_CLIENT_GACHAMODULE_HASAVATARTOASTVIDEO_OFFSET UNITYSDK_OFFSET(0x1A7F9620)
#define RPG_CLIENT_GACHAMODULE_HASAVATARTOAST_OFFSET UNITYSDK_OFFSET(0x1A7FC150)
#define RPG_CLIENT_GACHAMODULE_HASNEWGOTUPAVATARS_OFFSET UNITYSDK_OFFSET(0x1A7FC450)
#define RPG_CLIENT_GACHAMODULE_HASOPENEDGACHA_OFFSET UNITYSDK_OFFSET(0x1A7F69C0)
#define RPG_CLIENT_GACHAMODULE_INGACHATIMEWITHOFFSETDAY_OFFSET UNITYSDK_OFFSET(0x1A7F7350)
#define RPG_CLIENT_GACHAMODULE_INGACHATIME_OFFSET UNITYSDK_OFFSET(0x1A7F71F0)
#define RPG_CLIENT_GACHAMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1A7FC660)
#define RPG_CLIENT_GACHAMODULE_ISAVATARINPOOL_OFFSET UNITYSDK_OFFSET(0x1A7F8820)
#define RPG_CLIENT_GACHAMODULE_ISAVATARTOASTUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A7F9100)
#define RPG_CLIENT_GACHAMODULE_NEEDSHOWGACHAAVATARTOAST_OFFSET UNITYSDK_OFFSET(0x1A7F8FB0)
#define RPG_CLIENT_GACHAMODULE_REFRESHGACHAPOOLSDATA_OFFSET UNITYSDK_OFFSET(0x1A7FA600)
#define RPG_CLIENT_GACHAMODULE_REQUESTUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0x1A7F8880)
#define RPG_CLIENT_GACHAMODULE_SET_DEFAULTGACHAID_OFFSET UNITYSDK_OFFSET(0x1A7FEF90)
#define RPG_CLIENT_GACHAMODULE_SET_ENABLEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1A7FF210)
#define RPG_CLIENT_GACHAMODULE_SET_GACHAPOOLDATACACHE_OFFSET UNITYSDK_OFFSET(0x1A7FF0A0)
#define RPG_CLIENT_GACHAMODULE_SET_GETGACHAINFORSPCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A7FEF10)
#define RPG_CLIENT_GACHAMODULE_SET_POOLGACHALIMIT_OFFSET UNITYSDK_OFFSET(0x1A7FEF50)
#define RPG_CLIENT_GACHAMODULE_SET_TOTALGACHALIMIT_OFFSET UNITYSDK_OFFSET(0x1A7FEF30)
#define RPG_CLIENT_GACHAMODULE_SET_TOTALGACHATIME_OFFSET UNITYSDK_OFFSET(0x1A7FEF70)
#define RPG_CLIENT_GACHAMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1A7F8A70)
#define RPG_CLIENT_GACHAMODULE_TRYGETGACHADECIDEDATA_OFFSET UNITYSDK_OFFSET(0x1A7FC510)
#define RPG_CLIENT_GACHAMODULE_TRYSHOWAVATARTOAST_OFFSET UNITYSDK_OFFSET(0x1A7F8DF0)
#define RPG_CLIENT_GACHAMODULE__ADDGACHAPOOLDATATOGROUPDICT_OFFSET UNITYSDK_OFFSET(0x1A7FACF0)
#define RPG_CLIENT_GACHAMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A7FC910)
#define RPG_CLIENT_GACHAMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A7FC9E0)
#define RPG_CLIENT_GACHAMODULE__AUTOSHOWGACHAAVATARTOAST_OFFSET UNITYSDK_OFFSET(0x1A7F8E40)
#define RPG_CLIENT_GACHAMODULE__CLEAROUTDATESEENGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1A7FB3F0)
#define RPG_CLIENT_GACHAMODULE__CLEARSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1A7FE060)
#define RPG_CLIENT_GACHAMODULE__CMDDOGACHASCRSP_OFFSET UNITYSDK_OFFSET(0x1A7FCD40)
#define RPG_CLIENT_GACHAMODULE__CMDEXCHANGEGACHACEILINGSCRSP_OFFSET UNITYSDK_OFFSET(0x1A7FE990)
#define RPG_CLIENT_GACHAMODULE__CMDGETGACHACEILINGSCRSP_OFFSET UNITYSDK_OFFSET(0x1A7FE710)
#define RPG_CLIENT_GACHAMODULE__CMDGETGACHAINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1A7FD690)
#define RPG_CLIENT_GACHAMODULE__GETLINKEDGACHAGROUPORDER_OFFSET UNITYSDK_OFFSET(0x1A7FEC20)
#define RPG_CLIENT_GACHAMODULE__ISANYGACHAPOOLREWARDACTIVITYSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x1A7FBFB0)
#define RPG_CLIENT_GACHAMODULE__ISANYGACHAPOOLREWARDTAKEABLE_OFFSET UNITYSDK_OFFSET(0x1A7FBE30)
#define RPG_CLIENT_GACHAMODULE__MOVELINKEDGACHAGROUPAFTERPRIORGROUP_OFFSET UNITYSDK_OFFSET(0x1A7F9AA0)
#define RPG_CLIENT_GACHAMODULE__ONDEFAULTGACHAIDCHANGE_OFFSET UNITYSDK_OFFSET(0x1A7FEDF0)
#define RPG_CLIENT_GACHAMODULE__ONGETFARMSTAGEGACHAINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1A7F7A80)
#define RPG_CLIENT_GACHAMODULE__ONSETGACHADECIDEITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x1A7FEB60)
#define RPG_CLIENT_GACHAMODULE__SAFEGETGACHATIMEFETCHINGPROMISE_OFFSET UNITYSDK_OFFSET(0x1A7F6EE0)
#define RPG_CLIENT_GACHAMODULE__SYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0x1A7FE220)
#define RPG_CLIENT_GACHAMODULE__TIMEADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A7F79A0)
#define RPG_CLIENT_GACHAMODULE__TIMEUNINIT_OFFSET UNITYSDK_OFFSET(0x1A7F68D0)
#define RPG_CLIENT_GACHAMODULE__TRYADDNEWGOTUPAVATAR_OFFSET UNITYSDK_OFFSET(0x1A7FD470)
#define RPG_CLIENT_GACHAMODULE__TRYMARKUNLOCKIDNOTOPEN_OFFSET UNITYSDK_OFFSET(0x1A7F8B10)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaModule_TypeDefinitionIndex = 65747;

	class GachaModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GachaItemData*>* _GachaRewardItems; // 0x10
		::RPG::Client::BaseGachaPoolData* _GachaPoolDataCache_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* _GachaPoolDatasLaterVersion; // 0x20
		::Il2CppArray<::System::UInt32>* _LinkedGachaGroupOrder; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* _GachaPoolDatasThisVersion; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _GachaNormalTrialStageIDList; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::BaseGachaDecideData*>* _DecideDatas; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BaseGachaGroupData*>* _GachaGroupDataDict; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GachaType, ::RPG::Client::GachaCeilingData*>* _GachaCeilingDict; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise*>* _GachaTimeFetchingPromises; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* _WaitForPoolEndTimerID; // 0x60
		::RPG::Client::GachaModule_DrawInfoCache* _CurrentDrawInfo; // 0x68
		::System::Action_1<::System::Boolean>* _GetGachaInfoRspCallback_k__BackingField; // 0x70
		::System::Collections::Generic::List_1<::System::Int32>* _WaitForPoolOpenTimerID; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GachaTimeData*>* _GachaTimeDatas; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaGroupData*>* _GachaGroupDatasThisVersion; // 0x88
		::System::Collections::Generic::List_1<::System::UInt32>* _NewGotUpAvatarIDs; // 0x90
		::System::Boolean _EnablePerformance_k__BackingField; // 0x98
		::System::Boolean _ShouldTryShowAvatarToast; // 0x99
		::System::Boolean _ShowGachaAvatarToast; // 0x9A
		::System::Byte _padding0[0x1];
		::System::Single _WaitingWheelAppearTime; // 0x9C
		::System::UInt32 _TotalGachaTime_k__BackingField; // 0xA0
		::System::UInt32 _TotalGachaLimit_k__BackingField; // 0xA4
		::System::UInt32 _PoolGachaLimit_k__BackingField; // 0xA8
		::System::UInt32 _GachaRandomNum; // 0xAC
		::System::UInt32 _DefaultGachaID_k__BackingField; // 0xB0
		static ::System::Comparison_1<::RPG::Client::BaseGachaPoolData*>** StaticGet_GachaPoolDataComparison()
		{
			return (::System::Comparison_1<::RPG::Client::BaseGachaPoolData*>**)UnitySDK::FromName("RPG.Client", "GachaModule")->GetStaticField(0x6AB50);
		}

		static ::System::Comparison_1<::RPG::Client::BaseGachaGroupData*>** StaticGet_GachaGroupDataComparison()
		{
			return (::System::Comparison_1<::RPG::Client::BaseGachaGroupData*>**)UnitySDK::FromName("RPG.Client", "GachaModule")->GetStaticField(0x6AB58);
		}

		// static const ::System::Object _MAX_WAITING_TIME; // 0x0
		// static const ::System::String* _WAITING_WHEEL_APPEAR_TIME_KEY; // 0x0
		// static const ::System::String* _ENABLE_GACHA_PERFORM_KEY; // 0x0
		// static const ::System::Object _RET_GACHA_REQ_DUPLICATED; // 0x0
		// static const ::System::String* _GACHA_NOTIFY_PREFIX; // 0x0
		// static const ::System::Object _GACHA_UNLOCK_ID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_CCTOR_OFFSET))();
		}

		::System::Void _TimeUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__TIMEUNINIT_OFFSET))(this);
		}

		::System::Boolean HasOpenedGacha(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_HASOPENEDGACHA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* FetchGachaTime(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_FETCHGACHATIME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* FetchGachaTime_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_FETCHGACHATIME_1_OFFSET))(this, a1);
		}

		::System::Boolean InGachaTime(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_INGACHATIME_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean InGachaTimeWithOffsetDay(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_INGACHATIMEWITHOFFSETDAY_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::GachaTimeData* GetFirstInTimeGacha(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::GachaTimeData*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETFIRSTINTIMEGACHA_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::GachaTimeData* GetNextBeginTimeGacha(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::GachaTimeData*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETNEXTBEGINTIMEGACHA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* _SafeGetGachaTimeFetchingPromise(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__SAFEGETGACHATIMEFETCHINGPROMISE_OFFSET))(this, a1);
		}

		::System::Void _TimeAddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__TIMEADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetFarmStageGachaInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__ONGETFARMSTAGEGACHAINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSSRGachaPoolID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETSSRGACHAPOOLID_OFFSET))(this, a1);
		}

		::System::UInt32 GetSRGachaPoolID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETSRGACHAPOOLID_OFFSET))(this, a1);
		}

		::System::Boolean IsAvatarInPool(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_ISAVATARINPOOL_OFFSET))(this, a1);
		}

		::System::Void RequestUnlockData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_REQUESTUNLOCKDATA_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void TryShowAvatarToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_TRYSHOWAVATARTOAST_OFFSET))(this);
		}

		::System::Boolean NeedShowGachaAvatarToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_NEEDSHOWGACHAAVATARTOAST_OFFSET))(this);
		}

		::System::Boolean HasAvatarToastToShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_HASAVATARTOASTTOSHOW_OFFSET))(this);
		}

		static ::System::Boolean CanAutoShow()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_CANAUTOSHOW_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* GetSortedGachaPoolDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAPOOLDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaGroupData*>* GetSortedGachaGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseGachaGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAGROUPDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GachaItemData*>* GetGachaRewardItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GachaItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETGACHAREWARDITEMDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GachaItemData*>* GetSortedGachaItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GachaItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAITEMDATAS_OFFSET))(this);
		}

		::RPG::Client::GachaCeilingData* GetGachaCeilingData(::RPG::GameCore::GachaType a1)
		{
			return ((::RPG::Client::GachaCeilingData*(*)(::PVOID, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETGACHACEILINGDATA_OFFSET))(this, a1);
		}

		::System::Void GetGachaCeiling(::RPG::GameCore::GachaType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETGACHACEILING_OFFSET))(this, a1);
		}

		::System::Void ExchangeGachaCeiling(::RPG::GameCore::GachaType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_EXCHANGEGACHACEILING_OFFSET))(this, a1, a2);
		}

		::System::Void DoGacha(::RPG::Client::BaseGachaPoolData* a1, ::RPG::Client::GachaDrawData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*, ::RPG::Client::GachaDrawData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_DOGACHA_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshGachaPoolsData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_REFRESHGACHAPOOLSDATA_OFFSET))(this);
		}

		::RPG::Client::BaseGachaPoolData* GetGachaPoolData(::System::UInt32 a1)
		{
			return ((::RPG::Client::BaseGachaPoolData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETGACHAPOOLDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewGroupIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETNEWGROUPIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRewardedGachaIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETREWARDEDGACHAIDS_OFFSET))(this);
		}

		static ::System::Boolean _IsAnyGachaPoolRewardTakeable(::RPG::Client::BaseGachaGroupData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__ISANYGACHAPOOLREWARDTAKEABLE_OFFSET))(a1);
		}

		static ::System::Boolean _IsAnyGachaPoolRewardActivityShowNewRedDot(::RPG::Client::BaseGachaGroupData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__ISANYGACHAPOOLREWARDACTIVITYSHOWNEWREDDOT_OFFSET))(a1);
		}

		::System::Nullable_1<::System::UInt32> GetToastGachaID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETTOASTGACHAID_OFFSET))(this);
		}

		static ::System::Boolean HasAvatarToast(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_HASAVATARTOAST_OFFSET))(a1);
		}

		static ::System::Boolean IsAvatarToastUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_ISAVATARTOASTUNLOCK_OFFSET))();
		}

		static ::System::Boolean HasAvatarToastVideo(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_HASAVATARTOASTVIDEO_OFFSET))(a1, a2);
		}

		static ::System::Void AddLostGachaVideoToBadList(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_ADDLOSTGACHAVIDEOTOBADLIST_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAvatarDetailList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GETAVATARDETAILLIST_OFFSET))(this);
		}

		::System::Boolean HasNewGotUpAvatars()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_HASNEWGOTUPAVATARS_OFFSET))(this);
		}

		::System::Void ClearNewGotUpAvatars()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_CLEARNEWGOTUPAVATARS_OFFSET))(this);
		}

		::RPG::Client::BaseGachaDecideData* TryGetGachaDecideData(::System::UInt32 a1, ::RPG::GameCore::GachaItemType a2)
		{
			return ((::RPG::Client::BaseGachaDecideData*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GachaItemType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_TRYGETGACHADECIDEDATA_OFFSET))(this, a1, a2);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdDoGachaScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__CMDDOGACHASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _TryAddNewGotUpAvatar(::RPG::Client::BaseGachaPoolData* a1, ::RPG::Client::GachaItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__TRYADDNEWGOTUPAVATAR_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdGetGachaInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__CMDGETGACHAINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncDecideData(::Google::Protobuf::Collections::RepeatedField_1<::NEIMLKNMDBM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::NEIMLKNMDBM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__SYNCDECIDEDATA_OFFSET))(this, a1);
		}

		::System::Void _CmdGetGachaCeilingScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__CMDGETGACHACEILINGSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdExchangeGachaCeilingScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__CMDEXCHANGEGACHACEILINGSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSetGachaDecideItemScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__ONSETGACHADECIDEITEMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _AutoShowGachaAvatarToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__AUTOSHOWGACHAAVATARTOAST_OFFSET))(this);
		}

		::System::Void _TryMarkUnlockIDNotOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__TRYMARKUNLOCKIDNOTOPEN_OFFSET))(this);
		}

		::System::Void _AddGachaPoolDataToGroupDict(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__ADDGACHAPOOLDATATOGROUPDICT_OFFSET))(this, a1);
		}

		::System::Void _ClearOutDateSeenGachaGroupID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__CLEAROUTDATESEENGACHAGROUPID_OFFSET))(this);
		}

		::System::Void _MoveLinkedGachaGroupAfterPriorGroup(::System::Collections::Generic::List_1<::RPG::Client::BaseGachaGroupData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BaseGachaGroupData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__MOVELINKEDGACHAGROUPAFTERPRIORGROUP_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetLinkedGachaGroupOrder()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__GETLINKEDGACHAGROUPORDER_OFFSET))(this);
		}

		::System::Void _ClearScheduleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__CLEARSCHEDULEDATA_OFFSET))(this);
		}

		::System::Void _OnDefaultGachaIDChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE__ONDEFAULTGACHAIDCHANGE_OFFSET))(this, a1);
		}

		::System::Action_1<::System::Boolean>* get_GetGachaInfoRspCallback()
		{
			return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_GETGACHAINFORSPCALLBACK_OFFSET))(this);
		}

		::System::Void set_GetGachaInfoRspCallback(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_SET_GETGACHAINFORSPCALLBACK_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalGachaLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_TOTALGACHALIMIT_OFFSET))(this);
		}

		::System::Void set_TotalGachaLimit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_SET_TOTALGACHALIMIT_OFFSET))(this, a1);
		}

		::System::UInt32 get_PoolGachaLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_POOLGACHALIMIT_OFFSET))(this);
		}

		::System::Void set_PoolGachaLimit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_SET_POOLGACHALIMIT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalGachaTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_TOTALGACHATIME_OFFSET))(this);
		}

		::System::Void set_TotalGachaTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_SET_TOTALGACHATIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_DefaultGachaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_DEFAULTGACHAID_OFFSET))(this);
		}

		::System::Void set_DefaultGachaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_SET_DEFAULTGACHAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ShareID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_SHAREID_OFFSET))(this);
		}

		::System::Boolean get_HaveTotalGachaLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_HAVETOTALGACHALIMIT_OFFSET))(this);
		}

		::System::Boolean get_HavePoolGachaLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_HAVEPOOLGACHALIMIT_OFFSET))(this);
		}

		::RPG::Client::BaseGachaPoolData* get_GachaPoolDataCache()
		{
			return ((::RPG::Client::BaseGachaPoolData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_GACHAPOOLDATACACHE_OFFSET))(this);
		}

		::System::Void set_GachaPoolDataCache(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_SET_GACHAPOOLDATACACHE_OFFSET))(this, a1);
		}

		::RPG::Client::GachaModule_DrawInfoCache* get_CurrentDrawInfo()
		{
			return ((::RPG::Client::GachaModule_DrawInfoCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_CURRENTDRAWINFO_OFFSET))(this);
		}

		::System::UInt32 get_ShareRewardNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_SHAREREWARDNUM_OFFSET))(this);
		}

		::System::Boolean get_EnablePerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_ENABLEPERFORMANCE_OFFSET))(this);
		}

		::System::Void set_EnablePerformance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_SET_ENABLEPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_GachaNormalTrialStageIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_GACHANORMALTRIALSTAGEIDLIST_OFFSET))(this);
		}

		::System::Nullable_1<::System::UInt32> get_GachaNormalPoolID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_GET_GACHANORMALPOOLID_OFFSET))(this);
		}

	};
}
