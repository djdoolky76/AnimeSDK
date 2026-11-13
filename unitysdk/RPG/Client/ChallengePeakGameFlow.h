#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
class ENAEEMJLELJ;
class OOHFBGJHCMB;
namespace RPG::Client { class BaseGameFlowContext; }
namespace RPG::Client { class ChallengePeakBGMUIState; }
namespace RPG::Client { class ChallengePeakGameContext; }
namespace RPG::Client { class ChallengePeakGameFlow; }
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class ChallengePeakTeamContext; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0x1C0405B0)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_CREATE_OFFSET UNITYSDK_OFFSET(0x1C03F4E0)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C03F560)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GETORCREATEGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x1C03FAC0)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_BGMUISTATE_OFFSET UNITYSDK_OFFSET(0x1C03F440)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x1C03F420)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_HASSHOWNSHOPGOODSHINT_OFFSET UNITYSDK_OFFSET(0x1C03F4C0)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_ISGAMING_OFFSET UNITYSDK_OFFSET(0x1C03F460)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_PEAKGROUP_OFFSET UNITYSDK_OFFSET(0x1C03F400)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_TEAMCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C03F410)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C03F3B0)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0x1C040600)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0x1C03FB90)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_RECOVER_OFFSET UNITYSDK_OFFSET(0x1C03F9E0)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_SET_BGMUISTATE_OFFSET UNITYSDK_OFFSET(0x1C03F450)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_SET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x1C03F430)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_SET_HASSHOWNSHOPGOODSHINT_OFFSET UNITYSDK_OFFSET(0x1C03F4D0)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW__ONCHALLENGEPEAKGROUPDATACHANGED_OFFSET UNITYSDK_OFFSET(0x1C040760)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW__ONCONTEXTATTACHED_OFFSET UNITYSDK_OFFSET(0x1C040650)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x1C040700)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakGameFlow_TypeDefinitionIndex = 64611;

	class ChallengePeakGameFlow : public ::RPG::Client::BaseGameFlow
	{
	public:
		::RPG::Client::ChallengePeakGameContext* _GameContext_k__BackingField; // 0x40
		::RPG::Client::ChallengePeakTeamContext* _TeamContext_k__BackingField; // 0x48
		::RPG::Client::ChallengePeakBGMUIState* _BGMUIState_k__BackingField; // 0x50
		::RPG::Client::ChallengePeakGroup* _PeakGroup_k__BackingField; // 0x58
		::OOHFBGJHCMB* _Director; // 0x60
		::System::Boolean _HasShownShopGoodsHint_k__BackingField; // 0x68
		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameFlowType get_Type()
		{
			return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakGroup* get_PeakGroup()
		{
			return ((::RPG::Client::ChallengePeakGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_PEAKGROUP_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakTeamContext* get_TeamContext()
		{
			return ((::RPG::Client::ChallengePeakTeamContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_TEAMCONTEXT_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakGameContext* get_GameContext()
		{
			return ((::RPG::Client::ChallengePeakGameContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_GAMECONTEXT_OFFSET))(this);
		}

		::System::Void set_GameContext(::RPG::Client::ChallengePeakGameContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGameContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_SET_GAMECONTEXT_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakBGMUIState* get_BGMUIState()
		{
			return ((::RPG::Client::ChallengePeakBGMUIState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_BGMUISTATE_OFFSET))(this);
		}

		::System::Void set_BGMUIState(::RPG::Client::ChallengePeakBGMUIState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBGMUIState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_SET_BGMUISTATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_ISGAMING_OFFSET))(this);
		}

		::System::Boolean get_HasShownShopGoodsHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_HASSHOWNSHOPGOODSHINT_OFFSET))(this);
		}

		::System::Void set_HasShownShopGoodsHint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_SET_HASSHOWNSHOPGOODSHINT_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChallengePeakGameFlow* Create(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::RPG::Client::ChallengePeakGameFlow*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_CREATE_OFFSET))(a1);
		}

		::System::Void Recover(::ENAEEMJLELJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENAEEMJLELJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_RECOVER_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakGameContext* GetOrCreateGameContext()
		{
			return ((::RPG::Client::ChallengePeakGameContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GETORCREATEGAMECONTEXT_OFFSET))(this);
		}

		::System::Void OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_ONINITED_OFFSET))(this);
		}

		::System::Boolean CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_CHECKCANENTER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_ONENTERED_OFFSET))(this);
		}

		::System::Void _OnContextAttached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW__ONCONTEXTATTACHED_OFFSET))(this, a1);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, a1);
		}

		::System::Void _OnChallengePeakGroupDataChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW__ONCHALLENGEPEAKGROUPDATACHANGED_OFFSET))(this, a1);
		}

	};
}
