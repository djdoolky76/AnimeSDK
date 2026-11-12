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

#define RPG_CLIENT_GACHAMODULE_ADDLOSTGACHAVIDEOTOBADLIST_OFFSET UNITYSDK_OFFSET(0xDA219D0)
#define RPG_CLIENT_GACHAMODULE_CANAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xDA1E3F0)
#define RPG_CLIENT_GACHAMODULE_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA24C70)
#define RPG_CLIENT_GACHAMODULE_CLEARNEWGOTUPAVATARS_OFFSET UNITYSDK_OFFSET(0xDA21CD0)
#define RPG_CLIENT_GACHAMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xDA1D8D0)
#define RPG_CLIENT_GACHAMODULE_DOGACHA_OFFSET UNITYSDK_OFFSET(0xDA1FB30)
#define RPG_CLIENT_GACHAMODULE_EXCHANGEGACHACEILING_OFFSET UNITYSDK_OFFSET(0xDA1F8E0)
#define RPG_CLIENT_GACHAMODULE_FETCHGACHATIME_1_OFFSET UNITYSDK_OFFSET(0xDA1C8B0)
#define RPG_CLIENT_GACHAMODULE_FETCHGACHATIME_OFFSET UNITYSDK_OFFSET(0xDA1C470)
#define RPG_CLIENT_GACHAMODULE_GETAVATARDETAILLIST_OFFSET UNITYSDK_OFFSET(0xDA21A70)
#define RPG_CLIENT_GACHAMODULE_GETFIRSTINTIMEGACHA_OFFSET UNITYSDK_OFFSET(0xDA1CCF0)
#define RPG_CLIENT_GACHAMODULE_GETGACHACEILINGDATA_OFFSET UNITYSDK_OFFSET(0xDA1B430)
#define RPG_CLIENT_GACHAMODULE_GETGACHACEILING_OFFSET UNITYSDK_OFFSET(0xDA1F6A0)
#define RPG_CLIENT_GACHAMODULE_GETGACHAPOOLDATA_OFFSET UNITYSDK_OFFSET(0xDA20700)
#define RPG_CLIENT_GACHAMODULE_GETGACHAREWARDITEMDATAS_OFFSET UNITYSDK_OFFSET(0xDA1F500)
#define RPG_CLIENT_GACHAMODULE_GETNEWGROUPIDS_OFFSET UNITYSDK_OFFSET(0xDA207D0)
#define RPG_CLIENT_GACHAMODULE_GETNEXTBEGINTIMEGACHA_OFFSET UNITYSDK_OFFSET(0xDA1CF50)
#define RPG_CLIENT_GACHAMODULE_GETREWARDEDGACHAIDS_OFFSET UNITYSDK_OFFSET(0xDA21480)
#define RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAGROUPDATAS_OFFSET UNITYSDK_OFFSET(0xDA1EFA0)
#define RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAITEMDATAS_OFFSET UNITYSDK_OFFSET(0xDA1F540)
#define RPG_CLIENT_GACHAMODULE_GETSORTEDGACHAPOOLDATAS_OFFSET UNITYSDK_OFFSET(0xDA1DF70)
#define RPG_CLIENT_GACHAMODULE_GETSRGACHAPOOLID_OFFSET UNITYSDK_OFFSET(0xDA1DE20)
#define RPG_CLIENT_GACHAMODULE_GETSSRGACHAPOOLID_OFFSET UNITYSDK_OFFSET(0xDA1DCE0)
#define RPG_CLIENT_GACHAMODULE_GETTOASTGACHAID_OFFSET UNITYSDK_OFFSET(0xDA1EB80)
#define RPG_CLIENT_GACHAMODULE_GET_CURRENTDRAWINFO_OFFSET UNITYSDK_OFFSET(0xDA248E0)
#define RPG_CLIENT_GACHAMODULE_GET_DEFAULTGACHAID_OFFSET UNITYSDK_OFFSET(0xDA247B0)
#define RPG_CLIENT_GACHAMODULE_GET_ENABLEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xDA24A30)
#define RPG_CLIENT_GACHAMODULE_GET_GACHANORMALPOOLID_OFFSET UNITYSDK_OFFSET(0xDA24AB0)
#define RPG_CLIENT_GACHAMODULE_GET_GACHANORMALTRIALSTAGEIDLIST_OFFSET UNITYSDK_OFFSET(0xDA24A50)
#define RPG_CLIENT_GACHAMODULE_GET_GACHAPOOLDATACACHE_OFFSET UNITYSDK_OFFSET(0xDA248C0)
#define RPG_CLIENT_GACHAMODULE_GET_GETGACHAINFORSPCALLBACK_OFFSET UNITYSDK_OFFSET(0xDA24730)
#define RPG_CLIENT_GACHAMODULE_GET_HAVEPOOLGACHALIMIT_OFFSET UNITYSDK_OFFSET(0xDA24870)
#define RPG_CLIENT_GACHAMODULE_GET_HAVETOTALGACHALIMIT_OFFSET UNITYSDK_OFFSET(0xDA24820)
#define RPG_CLIENT_GACHAMODULE_GET_POOLGACHALIMIT_OFFSET UNITYSDK_OFFSET(0xDA24770)
#define RPG_CLIENT_GACHAMODULE_GET_SHAREID_OFFSET UNITYSDK_OFFSET(0xDA247D0)
#define RPG_CLIENT_GACHAMODULE_GET_SHAREREWARDNUM_OFFSET UNITYSDK_OFFSET(0xDA24920)
#define RPG_CLIENT_GACHAMODULE_GET_TOTALGACHALIMIT_OFFSET UNITYSDK_OFFSET(0xDA24750)
#define RPG_CLIENT_GACHAMODULE_GET_TOTALGACHATIME_OFFSET UNITYSDK_OFFSET(0xDA24790)
#define RPG_CLIENT_GACHAMODULE_HASAVATARTOASTTOSHOW_OFFSET UNITYSDK_OFFSET(0xDA1EEF0)
#define RPG_CLIENT_GACHAMODULE_HASAVATARTOASTVIDEO_OFFSET UNITYSDK_OFFSET(0xDA1EE40)
#define RPG_CLIENT_GACHAMODULE_HASAVATARTOAST_OFFSET UNITYSDK_OFFSET(0xDA21970)
#define RPG_CLIENT_GACHAMODULE_HASNEWGOTUPAVATARS_OFFSET UNITYSDK_OFFSET(0xDA21C70)
#define RPG_CLIENT_GACHAMODULE_HASOPENEDGACHA_OFFSET UNITYSDK_OFFSET(0xDA1C220)
#define RPG_CLIENT_GACHAMODULE_INGACHATIMEWITHOFFSETDAY_OFFSET UNITYSDK_OFFSET(0xDA1CBB0)
#define RPG_CLIENT_GACHAMODULE_INGACHATIME_OFFSET UNITYSDK_OFFSET(0xDA1CA50)
#define RPG_CLIENT_GACHAMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xDA21E80)
#define RPG_CLIENT_GACHAMODULE_ISAVATARINPOOL_OFFSET UNITYSDK_OFFSET(0xDA1E070)
#define RPG_CLIENT_GACHAMODULE_ISAVATARTOASTUNLOCK_OFFSET UNITYSDK_OFFSET(0xDA1E930)
#define RPG_CLIENT_GACHAMODULE_NEEDSHOWGACHAAVATARTOAST_OFFSET UNITYSDK_OFFSET(0xDA1E7E0)
#define RPG_CLIENT_GACHAMODULE_REFRESHGACHAPOOLSDATA_OFFSET UNITYSDK_OFFSET(0xDA1FE20)
#define RPG_CLIENT_GACHAMODULE_REQUESTUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xDA1E0D0)
#define RPG_CLIENT_GACHAMODULE_SET_DEFAULTGACHAID_OFFSET UNITYSDK_OFFSET(0xDA247C0)
#define RPG_CLIENT_GACHAMODULE_SET_ENABLEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xDA24A40)
#define RPG_CLIENT_GACHAMODULE_SET_GACHAPOOLDATACACHE_OFFSET UNITYSDK_OFFSET(0xDA248D0)
#define RPG_CLIENT_GACHAMODULE_SET_GETGACHAINFORSPCALLBACK_OFFSET UNITYSDK_OFFSET(0xDA24740)
#define RPG_CLIENT_GACHAMODULE_SET_POOLGACHALIMIT_OFFSET UNITYSDK_OFFSET(0xDA24780)
#define RPG_CLIENT_GACHAMODULE_SET_TOTALGACHALIMIT_OFFSET UNITYSDK_OFFSET(0xDA24760)
#define RPG_CLIENT_GACHAMODULE_SET_TOTALGACHATIME_OFFSET UNITYSDK_OFFSET(0xDA247A0)
#define RPG_CLIENT_GACHAMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xDA1E2B0)
#define RPG_CLIENT_GACHAMODULE_TRYGETGACHADECIDEDATA_OFFSET UNITYSDK_OFFSET(0xDA21D30)
#define RPG_CLIENT_GACHAMODULE_TRYSHOWAVATARTOAST_OFFSET UNITYSDK_OFFSET(0xDA1E620)
#define RPG_CLIENT_GACHAMODULE__ADDGACHAPOOLDATATOGROUPDICT_OFFSET UNITYSDK_OFFSET(0xDA20510)
#define RPG_CLIENT_GACHAMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xDA22120)
#define RPG_CLIENT_GACHAMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xDA221F0)
#define RPG_CLIENT_GACHAMODULE__AUTOSHOWGACHAAVATARTOAST_OFFSET UNITYSDK_OFFSET(0xDA1E670)
#define RPG_CLIENT_GACHAMODULE__CLEAROUTDATESEENGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0xDA20C10)
#define RPG_CLIENT_GACHAMODULE__CLEARSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xDA23880)
#define RPG_CLIENT_GACHAMODULE__CMDDOGACHASCRSP_OFFSET UNITYSDK_OFFSET(0xDA22550)
#define RPG_CLIENT_GACHAMODULE__CMDEXCHANGEGACHACEILINGSCRSP_OFFSET UNITYSDK_OFFSET(0xDA241C0)
#define RPG_CLIENT_GACHAMODULE__CMDGETGACHACEILINGSCRSP_OFFSET UNITYSDK_OFFSET(0xDA23F40)
#define RPG_CLIENT_GACHAMODULE__CMDGETGACHAINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xDA22EB0)
#define RPG_CLIENT_GACHAMODULE__GETLINKEDGACHAGROUPORDER_OFFSET UNITYSDK_OFFSET(0xDA24450)
#define RPG_CLIENT_GACHAMODULE__ISANYGACHAPOOLREWARDACTIVITYSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xDA217D0)
#define RPG_CLIENT_GACHAMODULE__ISANYGACHAPOOLREWARDTAKEABLE_OFFSET UNITYSDK_OFFSET(0xDA21650)
#define RPG_CLIENT_GACHAMODULE__MOVELINKEDGACHAGROUPAFTERPRIORGROUP_OFFSET UNITYSDK_OFFSET(0xDA1F2C0)
#define RPG_CLIENT_GACHAMODULE__ONDEFAULTGACHAIDCHANGE_OFFSET UNITYSDK_OFFSET(0xDA24620)
#define RPG_CLIENT_GACHAMODULE__ONGETFARMSTAGEGACHAINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xDA1D2D0)
#define RPG_CLIENT_GACHAMODULE__ONSETGACHADECIDEITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xDA24390)
#define RPG_CLIENT_GACHAMODULE__SAFEGETGACHATIMEFETCHINGPROMISE_OFFSET UNITYSDK_OFFSET(0xDA1C740)
#define RPG_CLIENT_GACHAMODULE__SYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0xDA23A40)
#define RPG_CLIENT_GACHAMODULE__TIMEADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xDA1D1F0)
#define RPG_CLIENT_GACHAMODULE__TIMEUNINIT_OFFSET UNITYSDK_OFFSET(0xDA1C130)
#define RPG_CLIENT_GACHAMODULE__TRYADDNEWGOTUPAVATAR_OFFSET UNITYSDK_OFFSET(0xDA22CA0)
#define RPG_CLIENT_GACHAMODULE__TRYMARKUNLOCKIDNOTOPEN_OFFSET UNITYSDK_OFFSET(0xDA1E350)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaModule_TypeDefinitionIndex = 65747;

	class GachaModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Action_1<::System::Boolean>* _GetGachaInfoRspCallback_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BaseGachaGroupData*>* _GachaGroupDataDict; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* _GachaPoolDatasLaterVersion; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::BaseGachaDecideData*>* _DecideDatas; // 0x28
		::RPG::Client::GachaModule_DrawInfoCache* _CurrentDrawInfo; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise*>* _GachaTimeFetchingPromises; // 0x38
		::Il2CppArray<::System::UInt32>* _LinkedGachaGroupOrder; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GachaTimeData*>* _GachaTimeDatas; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GachaType, ::RPG::Client::GachaCeilingData*>* _GachaCeilingDict; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::GachaItemData*>* _GachaRewardItems; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* _WaitForPoolOpenTimerID; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* _NewGotUpAvatarIDs; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* _GachaNormalTrialStageIDList; // 0x70
		::System::Collections::Generic::List_1<::System::Int32>* _WaitForPoolEndTimerID; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* _GachaPoolDatasThisVersion; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaGroupData*>* _GachaGroupDatasThisVersion; // 0x88
		::RPG::Client::BaseGachaPoolData* _GachaPoolDataCache_k__BackingField; // 0x90
		::System::Single _WaitingWheelAppearTime; // 0x98
		::System::UInt32 _DefaultGachaID_k__BackingField; // 0x9C
		::System::Boolean _ShouldTryShowAvatarToast; // 0xA0
		::System::Boolean _ShowGachaAvatarToast; // 0xA1
		::System::Boolean _EnablePerformance_k__BackingField; // 0xA2
		::System::Byte _padding0[0x1];
		::System::UInt32 _TotalGachaTime_k__BackingField; // 0xA4
		::System::UInt32 _GachaRandomNum; // 0xA8
		::System::UInt32 _PoolGachaLimit_k__BackingField; // 0xAC
		::System::UInt32 _TotalGachaLimit_k__BackingField; // 0xB0
		static ::System::Comparison_1<::RPG::Client::BaseGachaPoolData*>** StaticGet_GachaPoolDataComparison()
		{
			return (::System::Comparison_1<::RPG::Client::BaseGachaPoolData*>**)UnitySDK::FromName("RPG.Client", "GachaModule")->GetStaticField(0x6A130);
		}

		static ::System::Comparison_1<::RPG::Client::BaseGachaGroupData*>** StaticGet_GachaGroupDataComparison()
		{
			return (::System::Comparison_1<::RPG::Client::BaseGachaGroupData*>**)UnitySDK::FromName("RPG.Client", "GachaModule")->GetStaticField(0x6A138);
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
