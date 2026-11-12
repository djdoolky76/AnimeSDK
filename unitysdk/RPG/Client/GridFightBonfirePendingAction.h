#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMJMHDPPAKH.h"
#include "unitysdk/RPG/Client/GridFightProtoPendingAction.h"
class BCCONKJHDJL;
class CHCHAJIANIM;
class CJLEJIGIKOF;
class MHCOIBONODA;
class NCEPOLNLNKH;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class GridFightBonfireEvent; }
namespace RPG::Client { class GridFightBonfireEventDialog; }
namespace RPG::Client { class GridFightBonfireEventOption; }
namespace RPG::Client { class GridFightBonusDropData; }
namespace RPG::Client { class GridFightOrbData; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDA82120)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GETACTIONID_OFFSET UNITYSDK_OFFSET(0xDA83350)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GETBACKTIPS_OFFSET UNITYSDK_OFFSET(0xDA83DD0)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xDA81FD0)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_COINBASIC_OFFSET UNITYSDK_OFFSET(0xDA82040)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_COININTEREST_OFFSET UNITYSDK_OFFSET(0xDA82080)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_COINKEEPWIN_OFFSET UNITYSDK_OFFSET(0xDA82060)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_FINALREWARDS_OFFSET UNITYSDK_OFFSET(0xDA820A0)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_HASSELECTED_OFFSET UNITYSDK_OFFSET(0xDA81FF0)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_NONRESTEVENTS_OFFSET UNITYSDK_OFFSET(0xDA82010)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_ORBREWARDS_OFFSET UNITYSDK_OFFSET(0xDA820E0)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_RESTEVENT_OFFSET UNITYSDK_OFFSET(0xDA82020)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_HEALHP_OFFSET UNITYSDK_OFFSET(0xDA835A0)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_ONPAUSE_OFFSET UNITYSDK_OFFSET(0xDA83EA0)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_ONRESUME_OFFSET UNITYSDK_OFFSET(0xDA83F40)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_SELECTOPTION_OFFSET UNITYSDK_OFFSET(0xDA80470)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xDA81FE0)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_SET_COINBASIC_OFFSET UNITYSDK_OFFSET(0xDA82050)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_SET_COININTEREST_OFFSET UNITYSDK_OFFSET(0xDA82090)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_SET_COINKEEPWIN_OFFSET UNITYSDK_OFFSET(0xDA82070)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_SET_HASSELECTED_OFFSET UNITYSDK_OFFSET(0xDA82000)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_SET_RESTEVENT_OFFSET UNITYSDK_OFFSET(0xDA82030)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xDA836A0)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_TAKEDROP_OFFSET UNITYSDK_OFFSET(0xDA834D0)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xDA83390)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__BUILDEVENTS_OFFSET UNITYSDK_OFFSET(0xDA823F0)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__BUILDFINALREWARDS_OFFSET UNITYSDK_OFFSET(0xDA82B30)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__BUILDRESTEVENT_OFFSET UNITYSDK_OFFSET(0xDA83240)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__CLOSEBONFIREMAINUI_OFFSET UNITYSDK_OFFSET(0xDA83D70)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__GETSTAGENODEBONFIREEVENTIDS_OFFSET UNITYSDK_OFFSET(0xDA830B0)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__INITCOIN_OFFSET UNITYSDK_OFFSET(0xDA82330)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__ONFINISH_OFFSET UNITYSDK_OFFSET(0xDA83C90)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__ONSTART_OFFSET UNITYSDK_OFFSET(0xDA839F0)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__SHOWBONFIREMAINUI_OFFSET UNITYSDK_OFFSET(0xDA83A40)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__TRYREJECTPENDINGPROMISES_OFFSET UNITYSDK_OFFSET(0xDA83810)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__TRYRESOLVEPENDINGPROMISES_OFFSET UNITYSDK_OFFSET(0xDA838E0)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__UPDATEDATABYPROTO_OFFSET UNITYSDK_OFFSET(0xDA82230)
#define RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__UPDATEHASSELECTED_OFFSET UNITYSDK_OFFSET(0xDA823A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonfirePendingAction_TypeDefinitionIndex = 65875;

	class GridFightBonfirePendingAction : public ::RPG::Client::GridFightProtoPendingAction
	{
	public:
		::RPG::Client::Promises::Promise_1<::RPG::Client::GridFightBonfireEventDialog*>* _SelectOptionPromise; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonfireEvent*>* _NonRestEvents_k__BackingField; // 0x28
		::RPG::Client::LuaUIController* _BonfireMainUI; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>* _OrbRewards; // 0x38
		::RPG::Client::Promises::Promise_1<::RPG::Client::GridFightBonfireEventDialog*>* _HealHpPromise; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* _FinalRewards; // 0x48
		::RPG::Client::Promises::Promise* _TakeDropPromise; // 0x50
		::RPG::Client::LuaUIController* _PreparationPage; // 0x58
		::RPG::Client::GridFightBonfireEvent* _RestEvent_k__BackingField; // 0x60
		::System::UInt32 _CoinKeepWin_k__BackingField; // 0x68
		::System::Boolean _HasSelected_k__BackingField; // 0x6C
		::System::Byte _padding0[0x3];
		::System::UInt32 _PendingEndingDialogID; // 0x70
		::System::UInt32 _ActionID_k__BackingField; // 0x74
		::System::UInt32 _CoinInterest_k__BackingField; // 0x78
		::System::UInt32 _CoinBasic_k__BackingField; // 0x7C
		::System::Void _ctor(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_SET_ACTIONID_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_HASSELECTED_OFFSET))(this);
		}

		::System::Void set_HasSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_SET_HASSELECTED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonfireEvent*>* get_NonRestEvents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBonfireEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_NONRESTEVENTS_OFFSET))(this);
		}

		::RPG::Client::GridFightBonfireEvent* get_RestEvent()
		{
			return ((::RPG::Client::GridFightBonfireEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_RESTEVENT_OFFSET))(this);
		}

		::System::Void set_RestEvent(::RPG::Client::GridFightBonfireEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonfireEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_SET_RESTEVENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CoinBasic()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_COINBASIC_OFFSET))(this);
		}

		::System::Void set_CoinBasic(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_SET_COINBASIC_OFFSET))(this, a1);
		}

		::System::UInt32 get_CoinKeepWin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_COINKEEPWIN_OFFSET))(this);
		}

		::System::Void set_CoinKeepWin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_SET_COINKEEPWIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_CoinInterest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_COININTEREST_OFFSET))(this);
		}

		::System::Void set_CoinInterest(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_SET_COININTEREST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* get_FinalRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_FINALREWARDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>* get_OrbRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GET_ORBREWARDS_OFFSET))(this);
		}

		::System::Void _UpdateDataByProto(::NCEPOLNLNKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCEPOLNLNKH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__UPDATEDATABYPROTO_OFFSET))(this, a1);
		}

		::System::Void _InitCoin(::NCEPOLNLNKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCEPOLNLNKH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__INITCOIN_OFFSET))(this, a1);
		}

		::System::Void _UpdateHasSelected(::KMJMHDPPAKH a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMJMHDPPAKH))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__UPDATEHASSELECTED_OFFSET))(this, a1);
		}

		::System::Void _BuildEvents(::Google::Protobuf::Collections::RepeatedField_1<::MHCOIBONODA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::MHCOIBONODA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__BUILDEVENTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetStageNodeBonfireEventIds()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__GETSTAGENODEBONFIREEVENTIDS_OFFSET))(this);
		}

		::System::Void _BuildRestEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__BUILDRESTEVENT_OFFSET))(this);
		}

		::System::Void _BuildFinalRewards(::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__BUILDFINALREWARDS_OFFSET))(this, a1);
		}

		::System::UInt32 GetActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GETACTIONID_OFFSET))(this);
		}

		::System::Void Update(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_UPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::GridFightBonfireEventDialog*>* SelectOption(::RPG::Client::GridFightBonfireEventOption* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::GridFightBonfireEventDialog*>*(*)(::PVOID, ::RPG::Client::GridFightBonfireEventOption*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_SELECTOPTION_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* TakeDrop()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_TAKEDROP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::GridFightBonfireEventDialog*>* HealHp()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::GridFightBonfireEventDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_HEALHP_OFFSET))(this);
		}

		::System::Void SyncHandleRsp(::CJLEJIGIKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLEJIGIKOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::System::Void _TryRejectPendingPromises(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__TRYREJECTPENDINGPROMISES_OFFSET))(this, a1);
		}

		::System::Void _TryResolvePendingPromises()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__TRYRESOLVEPENDINGPROMISES_OFFSET))(this);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__ONSTART_OFFSET))(this);
		}

		::System::Void _ShowBonfireMainUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__SHOWBONFIREMAINUI_OFFSET))(this);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__ONFINISH_OFFSET))(this);
		}

		::System::Void _CloseBonfireMainUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION__CLOSEBONFIREMAINUI_OFFSET))(this);
		}

		::System::String* GetBackTips()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_GETBACKTIPS_OFFSET))(this);
		}

		::System::Void OnPause(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_ONPAUSE_OFFSET))(this, a1);
		}

		::System::Void OnResume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREPENDINGACTION_ONRESUME_OFFSET))(this);
		}

	};
}
