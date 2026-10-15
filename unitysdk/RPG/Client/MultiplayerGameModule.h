#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class BFBHKJLJJBJ;
class COMJKPOMILA;
class JAHHFPMJDAB;
class LMLNNHKJEIP;
class OFFMCODMKDL;
class PLJNHHAFBMB;
namespace Google::Protobuf { class ByteString; }
namespace RPG::Client { class MultiplayerGameModule; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_CONNECTFIGHTSERVER_OFFSET UNITYSDK_OFFSET(0xD8E22D0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_CONTINUEGAMEPROMISE_OFFSET UNITYSDK_OFFSET(0xD8E65C0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xD8E8560)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD8E5E70)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GETFIGHTROOM_OFFSET UNITYSDK_OFFSET(0xD8E6C40)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_FIGHTSERVERNOWMSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD8E8440)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xD8E5820)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_RTT_OFFSET UNITYSDK_OFFSET(0xD8E8510)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GIVEUPGAMEPROMISE_OFFSET UNITYSDK_OFFSET(0xD8E69B0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xD8E58A0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_REGISTERMULTIPLAYERGAME_OFFSET UNITYSDK_OFFSET(0xD8E1AC0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_STARTPSNOTIFYPREMIUMFEATURETIMER_OFFSET UNITYSDK_OFFSET(0xD8E6C80)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_TRYCONTINUEGAME_OFFSET UNITYSDK_OFFSET(0xD8E6440)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_UNREGISTERMULTIPLAYERGAME_OFFSET UNITYSDK_OFFSET(0xD8E1FD0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD8E70D0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xD8E6EA0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CANCELPSNOTIFYPREMIUMFEATURETIMER_OFFSET UNITYSDK_OFFSET(0xD8E8320)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CONTINUEGAMEPROMISE_B__6_0_OFFSET UNITYSDK_OFFSET(0xD8E85F0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CREATEGAME_OFFSET UNITYSDK_OFFSET(0xD8E7290)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CREATEPSNOTIFYPREMIUMFEATURETIMER_OFFSET UNITYSDK_OFFSET(0xD8E6CD0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__DISPOSEFIGHTROOM_OFFSET UNITYSDK_OFFSET(0xD8E7FB0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__GETHANDLERBYMODE_OFFSET UNITYSDK_OFFSET(0xD8E7890)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__GIVEUPGAMEPROMISE_B__7_0_OFFSET UNITYSDK_OFFSET(0xD8E86B0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__HANDLESERVEREXCEPTION_OFFSET UNITYSDK_OFFSET(0xD8E7C00)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__INVOKECONTINUEGAMECALLBACK_OFFSET UNITYSDK_OFFSET(0xD8E77A0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGAMESTARTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xD8E7110)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGAMESTATESCRSP_OFFSET UNITYSDK_OFFSET(0xD8E7460)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGIVEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xD8E7820)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTHEARTBEATSCRSP_OFFSET UNITYSDK_OFFSET(0xD8E82B0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0xD8E8160)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0xD8E7970)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERCONNECTFAIL_OFFSET UNITYSDK_OFFSET(0xD8E7AB0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xD8E7CE0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERSTOPPED_OFFSET UNITYSDK_OFFSET(0xD8E7E30)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0xD8E8000)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONTICKPSNOTIFYPREMIUMFEATURE_OFFSET UNITYSDK_OFFSET(0xD8E83C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiplayerGameModule_TypeDefinitionIndex = 66314;

	class MultiplayerGameModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::Promises::Promise* _GiveUpPromise; // 0x10
		::PLJNHHAFBMB* _FightRoom; // 0x18
		::System::Action_1<::System::Boolean>* _ContinueGameCallback; // 0x20
		::System::Collections::Generic::Dictionary_2<::FJPMJPEKLJL, ::JAHHFPMJDAB*>* _HandlerByModes; // 0x28
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _ContinuePromise; // 0x30
		::System::Single _RTT; // 0x38
		::System::Byte _padding0[0x4];
		::System::UInt64 _FightServerTimeStampMs; // 0x40
		::System::Double _FightServerReceiveTimeMs; // 0x48
		::System::Boolean _WaitContinueGame; // 0x50
		::System::Byte _padding1[0x3];
		::System::Int32 _TickTimerID; // 0x54
		// static const ::System::Object TimerInterval; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MultiplayerGameModule* get_Instance()
		{
			return ((::RPG::Client::MultiplayerGameModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void ConnectFightServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_CONNECTFIGHTSERVER_OFFSET))(this);
		}

		::System::Void TryContinueGame(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_TRYCONTINUEGAME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* ContinueGamePromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_CONTINUEGAMEPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* GiveUpGamePromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_GIVEUPGAMEPROMISE_OFFSET))(this);
		}

		::System::Void RegisterMultiplayerGame(::JAHHFPMJDAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAHHFPMJDAB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_REGISTERMULTIPLAYERGAME_OFFSET))(this, a1);
		}

		::System::Void UnregisterMultiplayerGame(::JAHHFPMJDAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAHHFPMJDAB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_UNREGISTERMULTIPLAYERGAME_OFFSET))(this, a1);
		}

		::PLJNHHAFBMB* GetFightRoom()
		{
			return ((::PLJNHHAFBMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_GETFIGHTROOM_OFFSET))(this);
		}

		::System::Void StartPSNotifyPremiumFeatureTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_STARTPSNOTIFYPREMIUMFEATURETIMER_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnFightGameStartScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGAMESTARTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFightGameStateScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGAMESTATESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFightGiveUpScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGIVEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::JAHHFPMJDAB* _GetHandlerByMode(::FJPMJPEKLJL a1)
		{
			return ((::JAHHFPMJDAB*(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__GETHANDLERBYMODE_OFFSET))(this, a1);
		}

		::System::Void _CreateGame(::BFBHKJLJJBJ* a1, ::System::Collections::Generic::IList_1<::LMLNNHKJEIP*>* a2, ::OFFMCODMKDL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BFBHKJLJJBJ*, ::System::Collections::Generic::IList_1<::LMLNNHKJEIP*>*, ::OFFMCODMKDL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__CREATEGAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnMultiplayerServerConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERCONNECTED_OFFSET))(this);
		}

		::System::Void _OnMultiplayerServerConnectFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERCONNECTFAIL_OFFSET))(this);
		}

		::System::Void _OnMultiplayerServerDisconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERDISCONNECTED_OFFSET))(this);
		}

		::System::Void _OnMultiplayerServerStopped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERSTOPPED_OFFSET))(this);
		}

		::System::Void _HandleServerException()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__HANDLESERVEREXCEPTION_OFFSET))(this);
		}

		::System::Void _OnOnGeneralRsp(::System::UInt32 a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONONGENERALRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGeneralNotify(::COMJKPOMILA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COMJKPOMILA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONGENERALNOTIFY_OFFSET))(this, a1);
		}

		::System::Void _OnFightHeartBeatScRsp(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTHEARTBEATSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _DisposeFightRoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__DISPOSEFIGHTROOM_OFFSET))(this);
		}

		::System::Void _CreatePSNotifyPremiumFeatureTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__CREATEPSNOTIFYPREMIUMFEATURETIMER_OFFSET))(this);
		}

		::System::Void _CancelPSNotifyPremiumFeatureTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__CANCELPSNOTIFYPREMIUMFEATURETIMER_OFFSET))(this);
		}

		::System::Void _OnTickPSNotifyPremiumFeature()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONTICKPSNOTIFYPREMIUMFEATURE_OFFSET))(this);
		}

		::System::Void _InvokeContinueGameCallback(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__INVOKECONTINUEGAMECALLBACK_OFFSET))(this, a1);
		}

		::System::UInt64 get_FightServerNowMsTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_FIGHTSERVERNOWMSTIMESTAMP_OFFSET))(this);
		}

		::System::Single get_RTT()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_RTT_OFFSET))(this);
		}

		::System::Void _ContinueGamePromise_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__CONTINUEGAMEPROMISE_B__6_0_OFFSET))(this);
		}

		::System::Void _GiveUpGamePromise_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__GIVEUPGAMEPROMISE_B__7_0_OFFSET))(this);
		}

	};
}
