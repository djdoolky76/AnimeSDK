#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class KHNBFDNKLHE;
class LFMNBJEMDIK;
class NHECDKIDHDB;
namespace Proto { class SceneEntityInfo; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class TrainVisitorInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class TrainVisitorConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINMODULE_CANVISITORONTRAIN_1_OFFSET UNITYSDK_OFFSET(0x1C611EB0)
#define RPG_CLIENT_TRAINMODULE_CANVISITORONTRAIN_OFFSET UNITYSDK_OFFSET(0x1C611E40)
#define RPG_CLIENT_TRAINMODULE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C613120)
#define RPG_CLIENT_TRAINMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C612EB0)
#define RPG_CLIENT_TRAINMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C612C80)
#define RPG_CLIENT_TRAINMODULE_FINDTRAINPASSENGER_OFFSET UNITYSDK_OFFSET(0x1C60DDE0)
#define RPG_CLIENT_TRAINMODULE_FINDTRAINVISITORBYGROUP_OFFSET UNITYSDK_OFFSET(0x1C611790)
#define RPG_CLIENT_TRAINMODULE_FINDTRAINVISITOR_OFFSET UNITYSDK_OFFSET(0x1C611930)
#define RPG_CLIENT_TRAINMODULE_GETALLTRAINVISITORINFOS_OFFSET UNITYSDK_OFFSET(0x1C612360)
#define RPG_CLIENT_TRAINMODULE_GETMISSIONUNLOCKEDVISITORAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1C611FF0)
#define RPG_CLIENT_TRAINMODULE_GETTRAINVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0x1C612200)
#define RPG_CLIENT_TRAINMODULE_GETTRAINVISITORINFO_OFFSET UNITYSDK_OFFSET(0x1C60FAB0)
#define RPG_CLIENT_TRAINMODULE_GETUNSEENVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0x1C6128B0)
#define RPG_CLIENT_TRAINMODULE_GET_NEWREDDOTVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0x1C612BC0)
#define RPG_CLIENT_TRAINMODULE_GET_NEWVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0x1C612B80)
#define RPG_CLIENT_TRAINMODULE_GET_REWARDREDDOTVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0x1C612BE0)
#define RPG_CLIENT_TRAINMODULE_GET_TRAINVISITORINFODICT_OFFSET UNITYSDK_OFFSET(0x1C612B60)
#define RPG_CLIENT_TRAINMODULE_GET_VISITORBEHAVIORCOUNT_OFFSET UNITYSDK_OFFSET(0x1C612BA0)
#define RPG_CLIENT_TRAINMODULE_GET__RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1C60E380)
#define RPG_CLIENT_TRAINMODULE_HASUNCLAIMEDCOMPENSATIONREWARD_OFFSET UNITYSDK_OFFSET(0x1C612660)
#define RPG_CLIENT_TRAINMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1C612C00)
#define RPG_CLIENT_TRAINMODULE_ISVISITORONTRAIN_OFFSET UNITYSDK_OFFSET(0x1C611B10)
#define RPG_CLIENT_TRAINMODULE_ISVISITORSEENINREGISTER_OFFSET UNITYSDK_OFFSET(0x1C6126C0)
#define RPG_CLIENT_TRAINMODULE_RECORDVISITORINREGISTERSEEN_OFFSET UNITYSDK_OFFSET(0x1C612790)
#define RPG_CLIENT_TRAINMODULE_REFRESHNEWVISITORREDDOT_OFFSET UNITYSDK_OFFSET(0x1C610C70)
#define RPG_CLIENT_TRAINMODULE_REFRESHREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1C60FB40)
#define RPG_CLIENT_TRAINMODULE_SENDGETTRAINVISITORREGISTERCSREQ_OFFSET UNITYSDK_OFFSET(0x1C611670)
#define RPG_CLIENT_TRAINMODULE_SENDNEWSUPPLEMENTVISITORCSREQ_OFFSET UNITYSDK_OFFSET(0x1C612490)
#define RPG_CLIENT_TRAINMODULE_SET_NEWREDDOTVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0x1C612BD0)
#define RPG_CLIENT_TRAINMODULE_SET_NEWVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0x1C612B90)
#define RPG_CLIENT_TRAINMODULE_SET_REWARDREDDOTVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0x1C612BF0)
#define RPG_CLIENT_TRAINMODULE_SET_TRAINVISITORINFODICT_OFFSET UNITYSDK_OFFSET(0x1C612B70)
#define RPG_CLIENT_TRAINMODULE_SET_VISITORBEHAVIORCOUNT_OFFSET UNITYSDK_OFFSET(0x1C612BB0)
#define RPG_CLIENT_TRAINMODULE_TAKETRAINVISITORREWARD_OFFSET UNITYSDK_OFFSET(0x1C612560)
#define RPG_CLIENT_TRAINMODULE_VISITORCONDITIONPREPARED_OFFSET UNITYSDK_OFFSET(0x1C611D60)
#define RPG_CLIENT_TRAINMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1C612CE0)
#define RPG_CLIENT_TRAINMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1C612D30)
#define RPG_CLIENT_TRAINMODULE__ADDTRAINVISITOR_OFFSET UNITYSDK_OFFSET(0x1C60F580)
#define RPG_CLIENT_TRAINMODULE__CHECKPASSENGER_OFFSET UNITYSDK_OFFSET(0x1C60DFE0)
#define RPG_CLIENT_TRAINMODULE__GETUNSEENVISITORIDLIST_B__36_0_OFFSET UNITYSDK_OFFSET(0x1C613330)
#define RPG_CLIENT_TRAINMODULE__INITVISITORBEHAVIORCOUNT_OFFSET UNITYSDK_OFFSET(0x1C60E480)
#define RPG_CLIENT_TRAINMODULE__ONCMDSCENEINFO_OFFSET UNITYSDK_OFFSET(0x1C60EDB0)
#define RPG_CLIENT_TRAINMODULE__ONCMDTRAINREFRESHTIMENOTIFY_OFFSET UNITYSDK_OFFSET(0x1C612E20)
#define RPG_CLIENT_TRAINMODULE__ONCMDTRAINVISITORBEHAVIORFINISHSCRSP_OFFSET UNITYSDK_OFFSET(0x1C60ED10)
#define RPG_CLIENT_TRAINMODULE__ONGETTRAINVISITORREGISTERSCRSP_OFFSET UNITYSDK_OFFSET(0x1C6101F0)
#define RPG_CLIENT_TRAINMODULE__ONMAPCREATED_OFFSET UNITYSDK_OFFSET(0x1C6113D0)
#define RPG_CLIENT_TRAINMODULE__ONNOTIFYFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0x1C611510)
#define RPG_CLIENT_TRAINMODULE__ONTAKETRAINVISITORBEHAVIORREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1C611270)
#define RPG_CLIENT_TRAINMODULE__ONTRAINVISITORREWARDSENDNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C60F910)
#define RPG_CLIENT_TRAINMODULE__PASSENGERDISPOSE_OFFSET UNITYSDK_OFFSET(0x1C60DD40)
#define RPG_CLIENT_TRAINMODULE__PASSENGERINIT_OFFSET UNITYSDK_OFFSET(0x1C60DA70)
#define RPG_CLIENT_TRAINMODULE__PASSENGERREFRESH_OFFSET UNITYSDK_OFFSET(0x1C60E280)
#define RPG_CLIENT_TRAINMODULE__PASSENGERUNINIT_OFFSET UNITYSDK_OFFSET(0x1C60DCA0)
#define RPG_CLIENT_TRAINMODULE__REFRESHNEWVISITORREDDOT_B__37_0_OFFSET UNITYSDK_OFFSET(0x1C613350)
#define RPG_CLIENT_TRAINMODULE__VISITORADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1C60EBB0)
#define RPG_CLIENT_TRAINMODULE__VISITORADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1C60E8F0)
#define RPG_CLIENT_TRAINMODULE__VISITORDISPOSE_OFFSET UNITYSDK_OFFSET(0x1C60E850)
#define RPG_CLIENT_TRAINMODULE__VISITORINIT_OFFSET UNITYSDK_OFFSET(0x1C60E430)
#define RPG_CLIENT_TRAINMODULE__VISITORUNINIT_OFFSET UNITYSDK_OFFSET(0x1C60E6B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainModule_TypeDefinitionIndex = 70099;

	class TrainModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _NewVisitorIDList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::NHECDKIDHDB*>* _TrainVisitors; // 0x18
		::System::Collections::Generic::List_1<::LFMNBJEMDIK*>* _TrainPassengers; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _VisitorBehaviorCount_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainVisitorInfo*>* _TrainVisitorInfoDict_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _RewardRedDotVisitorIDList_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _NewRedDotVisitorIDList_k__BackingField; // 0x40
		::System::Int32 _TimeStampRawSeed; // 0x48
		::System::Byte _padding0[0x4];
		::System::UInt64 _TrainRefreshTime; // 0x50
		static ::RPG::GameCore::StringHash* StaticGet_VISITOR_BUBBLE_TALKSENTENCE_ID_DS_KEY()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("RPG.Client", "TrainModule")->GetStaticField(0x8D60);
		}

		static ::RPG::GameCore::StringHash* StaticGet_VISITOR_BUBBLE_SEQ_ID_DS_KEY()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("RPG.Client", "TrainModule")->GetStaticField(0x8D64);
		}

		static ::RPG::GameCore::StringHash* StaticGet_VISITOR_PERFORMANCE_ID_DS_KEY()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("RPG.Client", "TrainModule")->GetStaticField(0x8D68);
		}

		// static const ::System::Object PASSENGER_RANDOMSEED_ADD; // 0x0
		// static const ::System::Object TRAIN_PLANE_ID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_CCTOR_OFFSET))();
		}

		::System::Void _PassengerInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__PASSENGERINIT_OFFSET))(this);
		}

		::System::Void _PassengerUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__PASSENGERUNINIT_OFFSET))(this);
		}

		::System::Void _PassengerDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__PASSENGERDISPOSE_OFFSET))(this);
		}

		::LFMNBJEMDIK* FindTrainPassenger(::RPG::Client::MapNpcDef* a1)
		{
			return ((::LFMNBJEMDIK*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_FINDTRAINPASSENGER_OFFSET))(this, a1);
		}

		::System::Void _PassengerRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__PASSENGERREFRESH_OFFSET))(this);
		}

		::System::Boolean _CheckPassenger(::LFMNBJEMDIK* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFMNBJEMDIK*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__CHECKPASSENGER_OFFSET))(this, a1, a2);
		}

		::System::Void _VisitorInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__VISITORINIT_OFFSET))(this);
		}

		::System::Void _VisitorUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__VISITORUNINIT_OFFSET))(this);
		}

		::System::Void _VisitorDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__VISITORDISPOSE_OFFSET))(this);
		}

		::System::Void _VisitorAddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__VISITORADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _VisitorAddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__VISITORADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdTrainVisitorBehaviorFinishScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONCMDTRAINVISITORBEHAVIORFINISHSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSceneInfo(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONCMDSCENEINFO_OFFSET))(this, a1);
		}

		::System::Void _OnTrainVisitorRewardSendNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONTRAINVISITORREWARDSENDNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetTrainVisitorRegisterScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONGETTRAINVISITORREGISTERSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeTrainVisitorBehaviorRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONTAKETRAINVISITORBEHAVIORREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMapCreated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONMAPCREATED_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyFinishedMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONNOTIFYFINISHEDMAINMISSION_OFFSET))(this, a1);
		}

		::NHECDKIDHDB* FindTrainVisitorByGroup(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::NHECDKIDHDB*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_FINDTRAINVISITORBYGROUP_OFFSET))(this, a1, a2);
		}

		::NHECDKIDHDB* FindTrainVisitor(::RPG::Client::MapNpcDef* a1)
		{
			return ((::NHECDKIDHDB*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_FINDTRAINVISITOR_OFFSET))(this, a1);
		}

		::System::Boolean IsVisitorOnTrain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_ISVISITORONTRAIN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* VisitorConditionPrepared()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_VISITORCONDITIONPREPARED_OFFSET))(this);
		}

		::System::Boolean CanVisitorOnTrain(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_CANVISITORONTRAIN_OFFSET))(this, a1);
		}

		::System::Boolean CanVisitorOnTrain_1(::RPG::GameCore::TrainVisitorConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainVisitorConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_CANVISITORONTRAIN_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMissionUnlockedVisitorAvatarIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GETMISSIONUNLOCKEDVISITORAVATARIDS_OFFSET))(this, a1);
		}

		::RPG::Client::TrainVisitorInfo* GetTrainVisitorInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainVisitorInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GETTRAINVISITORINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTrainVisitorIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GETTRAINVISITORIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainVisitorInfo*>* GetAllTrainVisitorInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainVisitorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GETALLTRAINVISITORINFOS_OFFSET))(this);
		}

		::System::Void SendGetTrainVisitorRegisterCsReq(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SENDGETTRAINVISITORREGISTERCSREQ_OFFSET))(this, a1);
		}

		::System::Void SendNewSupplementVisitorCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SENDNEWSUPPLEMENTVISITORCSREQ_OFFSET))(this);
		}

		::System::Void TakeTrainVisitorReward(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_TAKETRAINVISITORREWARD_OFFSET))(this, a1);
		}

		::System::Boolean HasUnclaimedCompensationReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_HASUNCLAIMEDCOMPENSATIONREWARD_OFFSET))(this);
		}

		::System::Boolean IsVisitorSeenInRegister(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_ISVISITORSEENINREGISTER_OFFSET))(this, a1);
		}

		::System::Void RecordVisitorInRegisterSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_RECORDVISITORINREGISTERSEEN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnseenVisitorIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GETUNSEENVISITORIDLIST_OFFSET))(this);
		}

		::System::Void RefreshNewVisitorRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_REFRESHNEWVISITORREDDOT_OFFSET))(this);
		}

		::System::Void RefreshRewardRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_REFRESHREWARDREDDOT_OFFSET))(this);
		}

		::System::Void _AddTrainVisitor(::Proto::SceneEntityInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ADDTRAINVISITOR_OFFSET))(this, a1);
		}

		::System::Void _InitVisitorBehaviorCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__INITVISITORBEHAVIORCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainVisitorInfo*>* get_TrainVisitorInfoDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainVisitorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET_TRAINVISITORINFODICT_OFFSET))(this);
		}

		::System::Void set_TrainVisitorInfoDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainVisitorInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainVisitorInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SET_TRAINVISITORINFODICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewVisitorIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET_NEWVISITORIDLIST_OFFSET))(this);
		}

		::System::Void set_NewVisitorIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SET_NEWVISITORIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_VisitorBehaviorCount()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET_VISITORBEHAVIORCOUNT_OFFSET))(this);
		}

		::System::Void set_VisitorBehaviorCount(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SET_VISITORBEHAVIORCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewRedDotVisitorIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET_NEWREDDOTVISITORIDLIST_OFFSET))(this);
		}

		::System::Void set_NewRedDotVisitorIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SET_NEWREDDOTVISITORIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RewardRedDotVisitorIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET_REWARDREDDOTVISITORIDLIST_OFFSET))(this);
		}

		::System::Void set_RewardRedDotVisitorIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SET_REWARDREDDOTVISITORIDLIST_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdTrainRefreshTimeNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONCMDTRAINREFRESHTIMENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Int32 get__RandomSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET__RANDOMSEED_OFFSET))(this);
		}

		::System::Boolean _GetUnseenVisitorIDList_b__36_0(::RPG::Client::TrainVisitorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainVisitorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__GETUNSEENVISITORIDLIST_B__36_0_OFFSET))(this, a1);
		}

		::System::Boolean _RefreshNewVisitorRedDot_b__37_0(::RPG::Client::TrainVisitorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainVisitorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__REFRESHNEWVISITORREDDOT_B__37_0_OFFSET))(this, a1);
		}

	};
}
