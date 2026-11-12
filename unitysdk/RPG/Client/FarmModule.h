#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class NAJKNJLJPEP;
namespace RPG::Client { class FarmBattleResultInfo; }
namespace RPG::Client { class FarmData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class MappingInfoRow; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_FARMMODULE_CCTOR_OFFSET UNITYSDK_OFFSET(0xD83FA00)
#define RPG_CLIENT_FARMMODULE_CHECKFARMBANWITHHINT_OFFSET UNITYSDK_OFFSET(0xD83E5A0)
#define RPG_CLIENT_FARMMODULE_CLEARAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xD83C580)
#define RPG_CLIENT_FARMMODULE_CLEARWEEKFARMBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xD83EE60)
#define RPG_CLIENT_FARMMODULE_CREATEFARMBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xD83E850)
#define RPG_CLIENT_FARMMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xD83F930)
#define RPG_CLIENT_FARMMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD83C1C0)
#define RPG_CLIENT_FARMMODULE_GETFARMLOCKHINTBYFARMSTAGEADVANCELIMIT_OFFSET UNITYSDK_OFFSET(0xD83E7B0)
#define RPG_CLIENT_FARMMODULE_GETFARMMAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0xD83D4B0)
#define RPG_CLIENT_FARMMODULE_GETFARMMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xD83CE80)
#define RPG_CLIENT_FARMMODULE_GETQUICKFARMENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD83D180)
#define RPG_CLIENT_FARMMODULE_GETQUICKFARMNEXTBEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD83D390)
#define RPG_CLIENT_FARMMODULE_GETWEEKFARMBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xD83EC90)
#define RPG_CLIENT_FARMMODULE_GET_FARMDATA_OFFSET UNITYSDK_OFFSET(0xD83F8B0)
#define RPG_CLIENT_FARMMODULE_GET_NEEDCHECKWEEKFARMBATTLERSP_OFFSET UNITYSDK_OFFSET(0xD83F910)
#define RPG_CLIENT_FARMMODULE_GET_WEEKFARMBATTLECURCOUNT_OFFSET UNITYSDK_OFFSET(0xD83F8F0)
#define RPG_CLIENT_FARMMODULE_GET_WEEKFARMLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0xD83F8D0)
#define RPG_CLIENT_FARMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xD83C0F0)
#define RPG_CLIENT_FARMMODULE_ISFARMAVAILABLE_OFFSET UNITYSDK_OFFSET(0xD83CAF0)
#define RPG_CLIENT_FARMMODULE_ISFARMBANNED_OFFSET UNITYSDK_OFFSET(0xD83E400)
#define RPG_CLIENT_FARMMODULE_ISFARMDAILY_OFFSET UNITYSDK_OFFSET(0xD83CD90)
#define RPG_CLIENT_FARMMODULE_ISFARMOPEN_OFFSET UNITYSDK_OFFSET(0xD83CD00)
#define RPG_CLIENT_FARMMODULE_ISFARMWEEKLY_OFFSET UNITYSDK_OFFSET(0xD83CC70)
#define RPG_CLIENT_FARMMODULE_ISLOCKEDBYFARMSTAGEADVANCELIMIT_OFFSET UNITYSDK_OFFSET(0xD83E6C0)
#define RPG_CLIENT_FARMMODULE_ISQUICKFARMOPEN_OFFSET UNITYSDK_OFFSET(0xD83CF70)
#define RPG_CLIENT_FARMMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xD83C210)
#define RPG_CLIENT_FARMMODULE_RECORDWEEKFARMRESULTBYBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xD83ECF0)
#define RPG_CLIENT_FARMMODULE_REENTERFARMWITHSTATINFO_OFFSET UNITYSDK_OFFSET(0xD83DD10)
#define RPG_CLIENT_FARMMODULE_REENTERFARM_OFFSET UNITYSDK_OFFSET(0xD83DCB0)
#define RPG_CLIENT_FARMMODULE_RESETWEEKFARMBATTLECURCOUNT_OFFSET UNITYSDK_OFFSET(0xD83EF60)
#define RPG_CLIENT_FARMMODULE_SENDSTARTCOCOONSTAGEREQ_OFFSET UNITYSDK_OFFSET(0xD83E160)
#define RPG_CLIENT_FARMMODULE_SENDSTARTQUICKCOCOONSTAGEREQ_OFFSET UNITYSDK_OFFSET(0xD83E2C0)
#define RPG_CLIENT_FARMMODULE_SET_FARMDATA_OFFSET UNITYSDK_OFFSET(0xD83F8C0)
#define RPG_CLIENT_FARMMODULE_SET_NEEDCHECKWEEKFARMBATTLERSP_OFFSET UNITYSDK_OFFSET(0xD83F920)
#define RPG_CLIENT_FARMMODULE_SET_WEEKFARMBATTLECURCOUNT_OFFSET UNITYSDK_OFFSET(0xD83F900)
#define RPG_CLIENT_FARMMODULE_SET_WEEKFARMLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0xD83F8E0)
#define RPG_CLIENT_FARMMODULE_STARTCOCOONBYHANDBOOK_OFFSET UNITYSDK_OFFSET(0xD83D820)
#define RPG_CLIENT_FARMMODULE_STARTCOCOONBYPROPINTERACT_OFFSET UNITYSDK_OFFSET(0xD83D5C0)
#define RPG_CLIENT_FARMMODULE_STARTELEMENTBYHANDBOOK_OFFSET UNITYSDK_OFFSET(0xD83DC30)
#define RPG_CLIENT_FARMMODULE_STARTELEMENTBYPROPINTERACT_OFFSET UNITYSDK_OFFSET(0xD83DA20)
#define RPG_CLIENT_FARMMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xD83C290)
#define RPG_CLIENT_FARMMODULE_TRYENTERNEXTWEEKFARMBATTLE_OFFSET UNITYSDK_OFFSET(0xD83EEB0)
#define RPG_CLIENT_FARMMODULE_TRYSHOWCURWEEKFARMBATTLERESULTPAGE_OFFSET UNITYSDK_OFFSET(0xD83C9E0)
#define RPG_CLIENT_FARMMODULE__ADDFARMBATTLERESULTINFO_OFFSET UNITYSDK_OFFSET(0xD83E9C0)
#define RPG_CLIENT_FARMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xD83C5D0)
#define RPG_CLIENT_FARMMODULE__ISFREQUENTCLICKINTIMEWINDOW_OFFSET UNITYSDK_OFFSET(0xD83F750)
#define RPG_CLIENT_FARMMODULE__ONACTIVEFARMELEMENTSCRSP_OFFSET UNITYSDK_OFFSET(0xD83C800)
#define RPG_CLIENT_FARMMODULE__ONSTARTCOCOONSTAGERSP_OFFSET UNITYSDK_OFFSET(0xD83C960)
#define RPG_CLIENT_FARMMODULE__ONSTARTQUICKCOCOONSTAGERSP_OFFSET UNITYSDK_OFFSET(0xD83CA70)
#define RPG_CLIENT_FARMMODULE__SENDFARMDATAREQ_OFFSET UNITYSDK_OFFSET(0xD83F250)
#define RPG_CLIENT_FARMMODULE__STARTFARMCOCOONBATTLE_OFFSET UNITYSDK_OFFSET(0xD83D670)
#define RPG_CLIENT_FARMMODULE__STARTFARMELEMENTBATTLE_OFFSET UNITYSDK_OFFSET(0xD83DAB0)
#define RPG_CLIENT_FARMMODULE__STARTQUICKFARMBATTLE_OFFSET UNITYSDK_OFFSET(0xD83D8A0)
#define RPG_CLIENT_FARMMODULE__UPDATEFARMBASICDATA_OFFSET UNITYSDK_OFFSET(0xD83EFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int FarmModule_TypeDefinitionIndex = 65426;

	class FarmModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::Promises::Promise* _FarmElementStarted; // 0x10
		::RPG::Client::FarmBattleResultInfo* _WeekFarmBattleResult; // 0x18
		::RPG::Client::FarmData* _FarmData_k__BackingField; // 0x20
		::System::UInt32 _AfterBattleQuickFarmID; // 0x28
		::System::UInt32 _WeekFarmLimitCount_k__BackingField; // 0x2C
		::System::UInt32 _SentStartElementTime; // 0x30
		::System::UInt32 _WeekFarmBattleCurCount_k__BackingField; // 0x34
		::System::Boolean _NeedCheckWeekFarmBattleRsp_k__BackingField; // 0x38
		static ::System::UInt32* StaticGet_SEND_START_ELEMENT_INTERVAL()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "FarmModule")->GetStaticField(0x10640);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void ClearAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_CLEARAUTOSHOW_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnActiveFarmElementScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__ONACTIVEFARMELEMENTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnStartCocoonStageRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__ONSTARTCOCOONSTAGERSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnStartQuickCocoonStageRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__ONSTARTQUICKCOCOONSTAGERSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsFarmAvailable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISFARMAVAILABLE_OFFSET))(this, a1);
		}

		::System::Boolean IsFarmOpen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISFARMOPEN_OFFSET))(this, a1);
		}

		::System::Boolean IsFarmWeekly(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISFARMWEEKLY_OFFSET))(this, a1);
		}

		::System::Boolean IsFarmDaily(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISFARMDAILY_OFFSET))(this, a1);
		}

		::System::UInt32 GetFarmMaxLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETFARMMAXLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean IsQuickFarmOpen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISQUICKFARMOPEN_OFFSET))(this, a1);
		}

		::System::UInt32 GetQuickFarmEndTimeStamp(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETQUICKFARMENDTIMESTAMP_OFFSET))(this, a1);
		}

		::System::UInt32 GetQuickFarmNextBeginTimeStamp(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETQUICKFARMNEXTBEGINTIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::GameCore::MappingInfoRow* GetFarmMappingInfoRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETFARMMAPPINGINFOROW_OFFSET))(this, a1);
		}

		::System::Void StartCocoonByPropInteract(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::UInt32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_STARTCOCOONBYPROPINTERACT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void StartCocoonByHandbook(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_STARTCOCOONBYHANDBOOK_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* StartElementByPropInteract(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::UInt32 a5)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_STARTELEMENTBYPROPINTERACT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void StartElementByHandbook(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_STARTELEMENTBYHANDBOOK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ReEnterFarm(::RPG::Client::FarmData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FarmData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_REENTERFARM_OFFSET))(this, a1);
		}

		::System::Void ReEnterFarmWithStatInfo(::RPG::Client::FarmData* a1, ::NAJKNJLJPEP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FarmData*, ::NAJKNJLJPEP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_REENTERFARMWITHSTATINFO_OFFSET))(this, a1, a2);
		}

		::System::Void SendStartCocoonStageReq(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::NAJKNJLJPEP* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::NAJKNJLJPEP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SENDSTARTCOCOONSTAGEREQ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SendStartQuickCocoonStageReq(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::NAJKNJLJPEP* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::NAJKNJLJPEP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SENDSTARTQUICKCOCOONSTAGEREQ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsFarmBanned(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISFARMBANNED_OFFSET))(this, a1);
		}

		::System::Boolean CheckFarmBanWithHint(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_CHECKFARMBANWITHHINT_OFFSET))(this, a1);
		}

		::System::Boolean IsLockedByFarmStageAdvanceLimit(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_ISLOCKEDBYFARMSTAGEADVANCELIMIT_OFFSET))(this, a1);
		}

		::System::String* GetFarmLockHintByFarmStageAdvanceLimit(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETFARMLOCKHINTBYFARMSTAGEADVANCELIMIT_OFFSET))(this, a1);
		}

		::RPG::Client::FarmBattleResultInfo* CreateFarmBattleResult()
		{
			return ((::RPG::Client::FarmBattleResultInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_CREATEFARMBATTLERESULT_OFFSET))(this);
		}

		::RPG::Client::FarmBattleResultInfo* GetWeekFarmBattleResult()
		{
			return ((::RPG::Client::FarmBattleResultInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GETWEEKFARMBATTLERESULT_OFFSET))(this);
		}

		::System::Void RecordWeekFarmResultByBattleResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_RECORDWEEKFARMRESULTBYBATTLERESULT_OFFSET))(this);
		}

		::System::Void _AddFarmBattleResultInfo(::RPG::Client::FarmBattleResultInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FarmBattleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__ADDFARMBATTLERESULTINFO_OFFSET))(this, a1);
		}

		::System::Void ClearWeekFarmBattleResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_CLEARWEEKFARMBATTLERESULT_OFFSET))(this);
		}

		::System::Void TryEnterNextWeekFarmBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_TRYENTERNEXTWEEKFARMBATTLE_OFFSET))(this);
		}

		::System::Void ResetWeekFarmBattleCurCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_RESETWEEKFARMBATTLECURCOUNT_OFFSET))(this);
		}

		::System::Void TryShowCurWeekFarmBattleResultPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_TRYSHOWCURWEEKFARMBATTLERESULTPAGE_OFFSET))(this);
		}

		::System::Void _StartQuickFarmBattle(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__STARTQUICKFARMBATTLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _UpdateFarmBasicData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__UPDATEFARMBASICDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SendFarmDataReq(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__SENDFARMDATAREQ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean _IsFrequentClickInTimeWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__ISFREQUENTCLICKINTIMEWINDOW_OFFSET))(this);
		}

		::System::Void _StartFarmCocoonBattle(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::UInt32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__STARTFARMCOCOONBATTLE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::Promises::IPromise* _StartFarmElementBattle(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE__STARTFARMELEMENTBATTLE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::FarmData* get_FarmData()
		{
			return ((::RPG::Client::FarmData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GET_FARMDATA_OFFSET))(this);
		}

		::System::Void set_FarmData(::RPG::Client::FarmData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FarmData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SET_FARMDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_WeekFarmLimitCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GET_WEEKFARMLIMITCOUNT_OFFSET))(this);
		}

		::System::Void set_WeekFarmLimitCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SET_WEEKFARMLIMITCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_WeekFarmBattleCurCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GET_WEEKFARMBATTLECURCOUNT_OFFSET))(this);
		}

		::System::Void set_WeekFarmBattleCurCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SET_WEEKFARMBATTLECURCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedCheckWeekFarmBattleRsp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_GET_NEEDCHECKWEEKFARMBATTLERSP_OFFSET))(this);
		}

		::System::Void set_NeedCheckWeekFarmBattleRsp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMMODULE_SET_NEEDCHECKWEEKFARMBATTLERSP_OFFSET))(this, a1);
		}

	};
}
