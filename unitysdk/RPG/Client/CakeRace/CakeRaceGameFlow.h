#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceGameFlow_InitParameters.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceUIType.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/Client/CakeRaceGameFlowMessage.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
class BCNLMOHFCGH;
class BJIAFAFAFNE;
class COLPFPLJGEB;
class DACLGPPLFMO;
class DJNGLNNIAFL;
class KEIEKPLHGMM;
class MIBPJLAGBLD;
namespace RPG::Client { class BaseGameFlowContext; }
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class CakeRaceFieldData; }
namespace RPG::Client { class CakeRaceLobby; }
namespace RPG::Client { class CakeRaceStartGameData; }
namespace RPG::Client::CakeRace { class CakeRaceCatUI3DPerformancePrepareData; }
namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace RPG::Client::CakeRace { class CakeRaceGameplayContext; }
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_CREATE_OFFSET UNITYSDK_OFFSET(0x1BD89990)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD89AA0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GETGAMEFLOW_OFFSET UNITYSDK_OFFSET(0x1BD8A9F0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0x1BD89970)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_COMMANDBUILDER_OFFSET UNITYSDK_OFFSET(0x1BD898B0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_GAMEPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0x1BD89910)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_GAMEPLAYMANAGER_OFFSET UNITYSDK_OFFSET(0x1BD898F0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_ISFORCEPVP_OFFSET UNITYSDK_OFFSET(0x1BD8E910)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BD89860)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_UIMANAGER_OFFSET UNITYSDK_OFFSET(0x1BD898D0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0x1BD8ACA0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0x1BD89F00)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0x1BD89980)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_COMMANDBUILDER_OFFSET UNITYSDK_OFFSET(0x1BD898C0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_GAMEPLAYMANAGER_OFFSET UNITYSDK_OFFSET(0x1BD89900)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_ISFORCEPVP_OFFSET UNITYSDK_OFFSET(0x1BD8E920)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_UIMANAGER_OFFSET UNITYSDK_OFFSET(0x1BD898E0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_TRYGETGAMEFLOWANDSENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BD8AA70)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_TRYGETGAMEFLOW_OFFSET UNITYSDK_OFFSET(0x1BD8A8F0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__CREATELOANCONFIRMCONTEXT_OFFSET UNITYSDK_OFFSET(0x1BD8E7F0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__DESTROYLOANCONFIRMCONTEXT_OFFSET UNITYSDK_OFFSET(0x1BD8DF40)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEEXITGAME_OFFSET UNITYSDK_OFFSET(0x1BD8CFE0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEGUESSFOCUSCAT_OFFSET UNITYSDK_OFFSET(0x1BD8D700)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1BD8B300)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEJOINLOBBY_OFFSET UNITYSDK_OFFSET(0x1BD8CAB0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEPAUSEGAME_OFFSET UNITYSDK_OFFSET(0x1BD8EC70)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWCATHANDBOOK_OFFSET UNITYSDK_OFFSET(0x1BD8BFC0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWCHAMPIONCATPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1BD8EF10)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0x1BD8BA70)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFIELDINFO_OFFSET UNITYSDK_OFFSET(0x1BD8C150)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFIELDSELECT_OFFSET UNITYSDK_OFFSET(0x1BD8BC50)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFRIENDRANK_OFFSET UNITYSDK_OFFSET(0x1BD8BD90)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWGUESSTICKETSHOP_OFFSET UNITYSDK_OFFSET(0x1BD8BCF0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWINVITEFRIEND_OFFSET UNITYSDK_OFFSET(0x1BD8C8A0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWLOANCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1BD8C270)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWMATCH_OFFSET UNITYSDK_OFFSET(0x1BD8C530)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0x1BD8BF20)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWTITLECATPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1BD8DAF0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWUI_OFFSET UNITYSDK_OFFSET(0x1BD8B910)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESTARTGAME_OFFSET UNITYSDK_OFFSET(0x1BD8CCD0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONCAKERACEGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1BD8B1E0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x1BD8E290)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONENTERED_B__32_0_OFFSET UNITYSDK_OFFSET(0x1BD8F360)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONEXITED_OFFSET UNITYSDK_OFFSET(0x1BD8DFA0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONEXITGAME_OFFSET UNITYSDK_OFFSET(0x1BD8EAA0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONGUESSFOCUSCAT_OFFSET UNITYSDK_OFFSET(0x1BD8EE70)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONJOINLOBBY_OFFSET UNITYSDK_OFFSET(0x1BD8E9F0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0x1BD8DE80)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONPAUSEGAME_OFFSET UNITYSDK_OFFSET(0x1BD8EC20)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWCATHANDBOOK_OFFSET UNITYSDK_OFFSET(0x1BD8E6F0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWCHAMPIONCATPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1BD8EEC0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0x1BD8E3E0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFIELDINFO_OFFSET UNITYSDK_OFFSET(0x1BD8E740)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFIELDSELECT_OFFSET UNITYSDK_OFFSET(0x1BD8E430)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFRIENDRANK_OFFSET UNITYSDK_OFFSET(0x1BD8E5D0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWGUESSTICKETSHOP_OFFSET UNITYSDK_OFFSET(0x1BD8E500)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWINVITEFRIEND_OFFSET UNITYSDK_OFFSET(0x1BD8E990)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWLOANCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1BD8E790)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWMATCH_OFFSET UNITYSDK_OFFSET(0x1BD8E930)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0x1BD8E620)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWTITLECATPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1BD8F310)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWUI_OFFSET UNITYSDK_OFFSET(0x1BD8E390)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSTARTGAME_OFFSET UNITYSDK_OFFSET(0x1BD8EA40)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__PARSEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BD89B60)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__REGISTERCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1BD8A770)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__TRYQUITLOBBY_OFFSET UNITYSDK_OFFSET(0x1BD8EB80)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__TRYREQUESTCAKERACEDATA_OFFSET UNITYSDK_OFFSET(0x1BD8AEC0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLEJOINLOBBY_B__68_0_OFFSET UNITYSDK_OFFSET(0x1BD8F790)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWCATHANDBOOK_B__52_0_OFFSET UNITYSDK_OFFSET(0x1BD8F720)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWENTRANCE_B__42_0_OFFSET UNITYSDK_OFFSET(0x1BD8F5C0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWENTRANCE_B__42_1_OFFSET UNITYSDK_OFFSET(0x1BD8F630)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWFRIENDRANK_B__48_0_OFFSET UNITYSDK_OFFSET(0x1BD8F6B0)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceGameFlow_TypeDefinitionIndex = 78773;

	class CakeRaceGameFlow : public ::RPG::Client::BaseGameFlow
	{
	public:
		::RPG::Client::CakeRace::CakeRaceGameFlow_InitParameters _InitParams; // 0x40
		::RPG::Client::Promises::Promise* _RequestCakeRaceDataPromise; // 0x50
		::BJIAFAFAFNE* _UIManager_k__BackingField; // 0x58
		::DACLGPPLFMO* _GameplayManager_k__BackingField; // 0x60
		::BCNLMOHFCGH* _BubbleGuessPerformance; // 0x68
		::KEIEKPLHGMM* _BGMState_k__BackingField; // 0x70
		::MIBPJLAGBLD* _LoanConfirmContext; // 0x78
		::COLPFPLJGEB* _CommandBuilder_k__BackingField; // 0x80
		::System::Boolean _IsForcePvp_k__BackingField; // 0x88
		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameFlowType get_Type()
		{
			return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_TYPE_OFFSET))(this);
		}

		::COLPFPLJGEB* get_CommandBuilder()
		{
			return ((::COLPFPLJGEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_COMMANDBUILDER_OFFSET))(this);
		}

		::System::Void set_CommandBuilder(::COLPFPLJGEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COLPFPLJGEB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_COMMANDBUILDER_OFFSET))(this, a1);
		}

		::BJIAFAFAFNE* get_UIManager()
		{
			return ((::BJIAFAFAFNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_UIMANAGER_OFFSET))(this);
		}

		::System::Void set_UIManager(::BJIAFAFAFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJIAFAFAFNE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_UIMANAGER_OFFSET))(this, a1);
		}

		::DACLGPPLFMO* get_GameplayManager()
		{
			return ((::DACLGPPLFMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_GAMEPLAYMANAGER_OFFSET))(this);
		}

		::System::Void set_GameplayManager(::DACLGPPLFMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DACLGPPLFMO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_GAMEPLAYMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRace::CakeRaceGameplayContext* get_GameplayContext()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameplayContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_GAMEPLAYCONTEXT_OFFSET))(this);
		}

		::KEIEKPLHGMM* get_BGMState()
		{
			return ((::KEIEKPLHGMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_BGMSTATE_OFFSET))(this);
		}

		::System::Void set_BGMState(::KEIEKPLHGMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEIEKPLHGMM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_BGMSTATE_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRace::CakeRaceGameFlow* Create(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_CREATE_OFFSET))(a1);
		}

		::RPG::Client::CakeRace::CakeRaceGameFlow_InitParameters _ParseParameters()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow_InitParameters(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__PARSEPARAMETERS_OFFSET))(this);
		}

		::System::Void OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_ONINITED_OFFSET))(this);
		}

		::System::Void _RegisterContexts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__REGISTERCONTEXTS_OFFSET))(this);
		}

		static ::RPG::Client::CakeRace::CakeRaceGameFlow* TryGetGameFlow()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_TRYGETGAMEFLOW_OFFSET))();
		}

		static ::RPG::Client::CakeRace::CakeRaceGameFlow* GetGameFlow()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GETGAMEFLOW_OFFSET))();
		}

		static ::System::Void TryGetGameFlowAndSendMessage(::RPG::Client::CakeRaceGameFlowMessage a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::RPG::Client::CakeRaceGameFlowMessage, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_TRYGETGAMEFLOWANDSENDMESSAGE_OFFSET))(a1, a2);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_ONENTERED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryRequestCakeRaceData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__TRYREQUESTCAKERACEDATA_OFFSET))(this);
		}

		::System::Void _OnCakeRaceGetDataScRsp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONCAKERACEGETDATASCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleInitParams()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEINITPARAMS_OFFSET))(this);
		}

		::System::Void _OnNetworkReconnected(::DJNGLNNIAFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJNGLNNIAFL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONNETWORKRECONNECTED_OFFSET))(this, a1);
		}

		::System::Void _OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONEXITED_OFFSET))(this);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, a1);
		}

		::System::Void _OnShowUI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWUI_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleShowUI(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWUI_OFFSET))(this, a1);
		}

		::System::Void _OnShowEntrance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWENTRANCE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowEntrance()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWENTRANCE_OFFSET))(this);
		}

		::System::Void _OnShowFieldSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFIELDSELECT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowFieldSelect()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFIELDSELECT_OFFSET))(this);
		}

		::System::Void _OnShowGuessTicketShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWGUESSTICKETSHOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowGuessTicketShop()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWGUESSTICKETSHOP_OFFSET))(this);
		}

		::System::Void _OnShowFriendRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFRIENDRANK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowFriendRank()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFRIENDRANK_OFFSET))(this);
		}

		::System::Void _OnShowResidentReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWRESIDENTREWARD_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowResidentReward()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWRESIDENTREWARD_OFFSET))(this);
		}

		::System::Void _OnShowCatHandbook()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWCATHANDBOOK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowCatHandbook()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWCATHANDBOOK_OFFSET))(this);
		}

		::System::Void _OnShowFieldInfo(::RPG::Client::CakeRaceFieldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWFIELDINFO_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleShowFieldInfo(::RPG::Client::CakeRaceFieldData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWFIELDINFO_OFFSET))(this, a1);
		}

		::System::Void _OnShowLoanConfirmDialog(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWLOANCONFIRMDIALOG_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleShowLoanConfirmDialog(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWLOANCONFIRMDIALOG_OFFSET))(this, a1);
		}

		::System::Void _CreateLoanConfirmContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__CREATELOANCONFIRMCONTEXT_OFFSET))(this);
		}

		::System::Void _DestroyLoanConfirmContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__DESTROYLOANCONFIRMCONTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsForcePvp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_GET_ISFORCEPVP_OFFSET))(this);
		}

		::System::Void set_IsForcePvp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW_SET_ISFORCEPVP_OFFSET))(this, a1);
		}

		::System::Void _OnShowMatch(::RPG::Client::CakeRaceFieldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWMATCH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleShowMatch(::RPG::Client::CakeRaceFieldData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWMATCH_OFFSET))(this, a1);
		}

		::System::Void _OnShowInviteFriend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWINVITEFRIEND_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HandleShowInviteFriend()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWINVITEFRIEND_OFFSET))(this);
		}

		::System::Void _OnJoinLobby(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONJOINLOBBY_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleJoinLobby(::System::UInt64 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEJOINLOBBY_OFFSET))(this, a1);
		}

		::System::Void _OnStartGame(::RPG::Client::CakeRaceStartGameData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceStartGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSTARTGAME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleStartGame(::RPG::Client::CakeRaceStartGameData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceStartGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESTARTGAME_OFFSET))(this, a1);
		}

		::System::Void _OnExitGame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONEXITGAME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleExitGame(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEEXITGAME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _TryQuitLobby(::RPG::Client::CakeRaceLobby* a1, ::RPG::Client::CakeRace::CakeRaceUIType a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceLobby*, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__TRYQUITLOBBY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPauseGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONPAUSEGAME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandlePauseGame(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEPAUSEGAME_OFFSET))(this, a1);
		}

		::System::Void _OnGuessFocusCat(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONGUESSFOCUSCAT_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleGuessFocusCat(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLEGUESSFOCUSCAT_OFFSET))(this, a1);
		}

		::System::Void _OnShowChampionCatPerformance(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWCHAMPIONCATPERFORMANCE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleShowChampionCatPerformance(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWCHAMPIONCATPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void _OnShowTitleCatPerformance(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONSHOWTITLECATPERFORMANCE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _HandleShowTitleCatPerformance(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__HANDLESHOWTITLECATPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void _OnEntered_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW__ONENTERED_B__32_0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __HandleShowEntrance_b__42_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWENTRANCE_B__42_0_OFFSET))(this);
		}

		::System::Void __HandleShowEntrance_b__42_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWENTRANCE_B__42_1_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __HandleShowFriendRank_b__48_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWFRIENDRANK_B__48_0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __HandleShowCatHandbook_b__52_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLESHOWCATHANDBOOK_B__52_0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __HandleJoinLobby_b__68_0(::RPG::Client::BaseLobby* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___HANDLEJOINLOBBY_B__68_0_OFFSET))(this, a1);
		}

	};
}
