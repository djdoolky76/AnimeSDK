#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Battle/HoverBrainStates/FateRinHoverPointerEventKind.h"
#include "unitysdk/RPG/Client/FateRin/Battle/HoverBrainStates/FateRinHoverPointerStateKind.h"
#include "unitysdk/RPG/Client/FateRin/Battle/CardInteractionPhase.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleHudInputBrainBase.h"
#include "unitysdk/JMCEHJCEHEB.h"
#include "unitysdk/UnityEngine/Vector2.h"
class ALIACDLNBJB;
class OMCMJNICFCH;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudInputSource; }
namespace RPG::Client::FateRin::Battle { class IFateRinCardHitTestService; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_CANCELCLICKFINDINGTARGET_OFFSET UNITYSDK_OFFSET(0xD89B2C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_CANCELDRAGFINDINGTARGET_OFFSET UNITYSDK_OFFSET(0xD89B3C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_CANCEL_OFFSET UNITYSDK_OFFSET(0xD89B0A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_CTOR_OFFSET UNITYSDK_OFFSET(0xD899EC0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_DRAGTOTARGET_OFFSET UNITYSDK_OFFSET(0xD89B030)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_GET_CURRENTPHASE_OFFSET UNITYSDK_OFFSET(0xD89AC50)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_GET_SELECTEDHANDCARDVM_OFFSET UNITYSDK_OFFSET(0xD89ACA0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_HITTESTCARDS_OFFSET UNITYSDK_OFFSET(0xD89AD10)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_ISCARDALLOWEDBYTUTORIAL_OFFSET UNITYSDK_OFFSET(0xD89AD80)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_ISINCANCELAREA_OFFSET UNITYSDK_OFFSET(0xD89AED0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_ISINSELECTAREA_OFFSET UNITYSDK_OFFSET(0xD89ADD0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_RESETIFSELECTING_OFFSET UNITYSDK_OFFSET(0xD89B260)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_RESETINTERACTION_OFFSET UNITYSDK_OFFSET(0xD89B0F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_RESETPOINTERSTATE_OFFSET UNITYSDK_OFFSET(0xD89A8C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_SELECTCARD_OFFSET UNITYSDK_OFFSET(0xD89AFD0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_TRANSITIONTOANDHANDLE_OFFSET UNITYSDK_OFFSET(0xD89B1E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_TRANSITIONTO_OFFSET UNITYSDK_OFFSET(0xD899FF0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_TRYPLAYANDRESETINTERACTION_OFFSET UNITYSDK_OFFSET(0xD89B490)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_TRYPLAYSELECTEDCARD_OFFSET UNITYSDK_OFFSET(0xD89B580)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__GETPOINTERSTATE_OFFSET UNITYSDK_OFFSET(0xD89B140)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERCANCEL_OFFSET UNITYSDK_OFFSET(0xD89AC00)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERDRAG_OFFSET UNITYSDK_OFFSET(0xD89AB40)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTEREVENT_OFFSET UNITYSDK_OFFSET(0xD89A9D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERHOVEREXIT_OFFSET UNITYSDK_OFFSET(0xD89AA90)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERHOVER_OFFSET UNITYSDK_OFFSET(0xD89A970)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0xD89AAE0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERRELEASE_OFFSET UNITYSDK_OFFSET(0xD89ABA0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__ONINPUTINTERRUPTED_OFFSET UNITYSDK_OFFSET(0xD89A7E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__SUBSCRIBEEVENTS_OFFSET UNITYSDK_OFFSET(0xD89A0C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__UNSUBSCRIBEEVENTS_OFFSET UNITYSDK_OFFSET(0xD89A450)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudHoverBrain_TypeDefinitionIndex = 83737;

	class FateRinBattleHudHoverBrain : public ::RPG::Client::FateRin::Battle::FateRinBattleHudInputBrainBase
	{
	public:
		::OMCMJNICFCH* _PointerState; // 0x40
		::OMCMJNICFCH* _IdleState; // 0x48
		::OMCMJNICFCH* _CancelledAwaitingReleaseState; // 0x50
		::OMCMJNICFCH* _DraggingInsideSelectAreaState; // 0x58
		::OMCMJNICFCH* _ClickWaitingInitialReleaseState; // 0x60
		::OMCMJNICFCH* _ClickConfirmPressingState; // 0x68
		::OMCMJNICFCH* _ClickWaitingConfirmPressState; // 0x70
		::OMCMJNICFCH* _DraggingReadyToReleaseState; // 0x78
		::System::Void _ctor(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* a2, ::ALIACDLNBJB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService*, ::ALIACDLNBJB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SubscribeEvents(::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__SUBSCRIBEEVENTS_OFFSET))(this, a1);
		}

		::System::Void _UnsubscribeEvents(::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__UNSUBSCRIBEEVENTS_OFFSET))(this, a1);
		}

		::System::Void _OnInputInterrupted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__ONINPUTINTERRUPTED_OFFSET))(this);
		}

		::System::Void _HandlePointerHover(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERHOVER_OFFSET))(this, a1);
		}

		::System::Void _HandlePointerHoverExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERHOVEREXIT_OFFSET))(this);
		}

		::System::Void _HandlePointerPress(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERPRESS_OFFSET))(this, a1);
		}

		::System::Void _HandlePointerDrag(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERDRAG_OFFSET))(this, a1);
		}

		::System::Void _HandlePointerRelease(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERRELEASE_OFFSET))(this, a1);
		}

		::System::Void _HandlePointerCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERCANCEL_OFFSET))(this);
		}

		::System::Void _HandlePointerEvent(::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerEventKind a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerEventKind, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTEREVENT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::Battle::CardInteractionPhase get_CurrentPhase()
		{
			return ((::RPG::Client::FateRin::Battle::CardInteractionPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_GET_CURRENTPHASE_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* get_SelectedHandCardVM()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_GET_SELECTEDHANDCARDVM_OFFSET))(this);
		}

		::JMCEHJCEHEB HitTestCards(::UnityEngine::Vector2 a1)
		{
			return ((::JMCEHJCEHEB(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_HITTESTCARDS_OFFSET))(this, a1);
		}

		::System::Boolean IsCardAllowedByTutorial(::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_ISCARDALLOWEDBYTUTORIAL_OFFSET))(this, a1);
		}

		::System::Boolean IsInSelectArea(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_ISINSELECTAREA_OFFSET))(this, a1);
		}

		::System::Boolean IsInCancelArea(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_ISINCANCELAREA_OFFSET))(this, a1);
		}

		::System::Void SelectCard(::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_SELECTCARD_OFFSET))(this, a1);
		}

		::System::Void DragToTarget(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_DRAGTOTARGET_OFFSET))(this, a1);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_CANCEL_OFFSET))(this);
		}

		::System::Void ResetInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_RESETINTERACTION_OFFSET))(this);
		}

		::System::Void TransitionTo(::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerStateKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerStateKind))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_TRANSITIONTO_OFFSET))(this, a1);
		}

		::System::Void TransitionToAndHandle(::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerStateKind a1, ::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerEventKind a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerStateKind, ::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerEventKind, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_TRANSITIONTOANDHANDLE_OFFSET))(this, a1, a2, a3);
		}

		::OMCMJNICFCH* _GetPointerState(::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerStateKind a1)
		{
			return ((::OMCMJNICFCH*(*)(::PVOID, ::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerStateKind))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__GETPOINTERSTATE_OFFSET))(this, a1);
		}

		::System::Void ResetPointerState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_RESETPOINTERSTATE_OFFSET))(this);
		}

		::System::Void ResetIfSelecting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_RESETIFSELECTING_OFFSET))(this);
		}

		::System::Void CancelClickFindingTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_CANCELCLICKFINDINGTARGET_OFFSET))(this);
		}

		::System::Void CancelDragFindingTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_CANCELDRAGFINDINGTARGET_OFFSET))(this);
		}

		::System::Void TryPlayAndResetInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_TRYPLAYANDRESETINTERACTION_OFFSET))(this);
		}

		::System::Void TryPlaySelectedCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_TRYPLAYSELECTEDCARD_OFFSET))(this);
		}

	};
}
