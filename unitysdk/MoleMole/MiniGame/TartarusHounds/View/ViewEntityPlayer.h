#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCAPBNKINLK.h"
#include "unitysdk/EKJABGHAIHE.h"
#include "unitysdk/EPGGHCKINEH.h"
#include "unitysdk/IOEBDPNHJJC.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/View/ViewEntityPlayer_BlinkControlIndex.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/Direction.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/HoundPlayerMainStatus.h"
#include "unitysdk/ONAKMNOIOEA.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

class BCIFJKNGJEA;
class GDBLOLGLAJN;
class GGNKHJHIHGD;
class GOIKJCHFIIO;
class LEDAGIMFEJD;
class MIKBKMMKEML;
class MOCLOILKFBD;
namespace MoleMole { class TextureSheetData; }
namespace MoleMole::MiniGame::TartarusHounds::View { class PLayerSheetConfig; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewPlayerShadowManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SpriteRenderer; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ATTACHCOMP_OFFSET UNITYSDK_OFFSET(0x1042B8F0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ATTACH_OFFSET UNITYSDK_OFFSET(0x1042B850)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_BASETICK_OFFSET UNITYSDK_OFFSET(0x1042E2F0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_BLINKADDLIFE_OFFSET UNITYSDK_OFFSET(0x1042FA40)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CHANGETOLIST_OFFSET UNITYSDK_OFFSET(0x1042C890)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CHECKBUFFCHANGE_OFFSET UNITYSDK_OFFSET(0x1042DDC0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CHECKPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x1042D820)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CLEARPLAYERBLINK_OFFSET UNITYSDK_OFFSET(0x1042B6D0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x1042C9A0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CLOSESHADOW_OFFSET UNITYSDK_OFFSET(0x1042C250)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CLOSEWOOLBLINK_OFFSET UNITYSDK_OFFSET(0x1042F7F0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_DEALAFTERATTACK_OFFSET UNITYSDK_OFFSET(0x1042EDA0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_DOINIT_OFFSET UNITYSDK_OFFSET(0x1042ACB0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_GET_ISPLAYATTACKING_OFFSET UNITYSDK_OFFSET(0x1042C840)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_HANDLERLOWHPANIMATION_OFFSET UNITYSDK_OFFSET(0x1042F9E0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_INITSHEETANIM_OFFSET UNITYSDK_OFFSET(0x1042B980)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONATTACKFINISHED_OFFSET UNITYSDK_OFFSET(0x1042F190)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONCHANGE_OFFSET UNITYSDK_OFFSET(0x1042F3A0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONFAKEJUMPFINISHED_OFFSET UNITYSDK_OFFSET(0x1042F210)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONFALLLANDINGFINISHED_OFFSET UNITYSDK_OFFSET(0x1042F320)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONFALLSLIPFINISHED_OFFSET UNITYSDK_OFFSET(0x1042F290)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1042B680)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONTEXSHEETANIMEND_OFFSET UNITYSDK_OFFSET(0x1042C2B0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONTIMESCALECHANGE_OFFSET UNITYSDK_OFFSET(0x1042FB00)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1042CCC0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_OPENSHADOW_OFFSET UNITYSDK_OFFSET(0x1042C1E0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYANIMSTATE_1_OFFSET UNITYSDK_OFFSET(0x1042BE40)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYANIMSTATE_OFFSET UNITYSDK_OFFSET(0x1042C450)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x1042C4C0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYBASICMOVE_OFFSET UNITYSDK_OFFSET(0x1042E070)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYCURRENTSHEET_OFFSET UNITYSDK_OFFSET(0x1042C340)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYPLAYERBLINK_OFFSET UNITYSDK_OFFSET(0x1042E760)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYSOUND_OFFSET UNITYSDK_OFFSET(0x1042C6F0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SETBLINKPARAMBYINDEX_OFFSET UNITYSDK_OFFSET(0x1042F840)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SETVIEWENTITYGAME_OFFSET UNITYSDK_OFFSET(0x1042B7D0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SHOULDPLAYFALL_OFFSET UNITYSDK_OFFSET(0x1042F0F0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SIMULATEPVPSWITCHPOS_OFFSET UNITYSDK_OFFSET(0x1042C9F0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_STOPPLAYERBLINK_OFFSET UNITYSDK_OFFSET(0x1042E9C0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SYNCTIMESCALEWITHSPEED_OFFSET UNITYSDK_OFFSET(0x1042B500)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_TICKTIMESCALECHANGE_OFFSET UNITYSDK_OFFSET(0x1042D7A0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_TRIGGERSTRUGGLE_OFFSET UNITYSDK_OFFSET(0x1042FAA0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_TRYPLAYREADYSTOPINVINCIBLE_OFFSET UNITYSDK_OFFSET(0x1042F740)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_UPDATECLIMBSTATUS_OFFSET UNITYSDK_OFFSET(0x1042EEF0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_UPDATEDIVINGSHADOWSTATUS_OFFSET UNITYSDK_OFFSET(0x1042EC80)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_UPDATEDYINGANIM_OFFSET UNITYSDK_OFFSET(0x1042DFE0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_UPDATEINJUREDSTATUS_OFFSET UNITYSDK_OFFSET(0x1042E490)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1042FB90)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER__ONCHANGE_B__93_0_OFFSET UNITYSDK_OFFSET(0x1042FCC0)

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int ViewEntityPlayer_TypeDefinitionIndex = 54165;

	class ViewEntityPlayer : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::MoleMole::MiniGame::TartarusHounds::View::PLayerSheetConfig* settingConfigRef; // 0x58
		::System::Boolean isSelf; // 0x60
		::System::Byte _padding0[0x7];
		::UnityEngine::Animator* _animator; // 0x68
		::BCIFJKNGJEA* _logicPlayer; // 0x70
		::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* _viewEntityGame; // 0x78
		::MOCLOILKFBD* gameParam; // 0x80
		::System::Single deltaX; // 0x88
		::System::Byte _padding1[0x4];
		::MIKBKMMKEML* textSheetUpdater; // 0x90
		::UnityEngine::SpriteRenderer* spriteRenderer; // 0x98
		::MoleMole::MiniGame::TartarusHounds::View::ViewPlayerShadowManager* shadowManager; // 0xA0
		::UnityEngine::Animation* woolAnimationComp; // 0xA8
		::System::Int32 curSheetListIndex; // 0xB0
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::System::String*>* curSheetStatusList; // 0xB8
		::MoleMole::MiniGame::TartarusHounds::HoundPlayerMainStatus curSheetStatus; // 0xC0
		::MoleMole::MiniGame::TartarusHounds::HoundPlayerMainStatus nextStatus; // 0xC4
		::GGNKHJHIHGD* playerBlinkControlStack; // 0xC8
		::System::Single timeScale; // 0xD0
		::System::Byte _padding3[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* shadowGos; // 0xD8
		::UnityEngine::GameObject* playerFollowAnimationNode; // 0xE0
		::UnityEngine::GameObject* playerBgAnimationNode; // 0xE8
		::UnityEngine::SpriteRenderer* playerFollowAnimSpriteRender; // 0xF0
		::UnityEngine::SpriteRenderer* playerBgAnimSpriteRender; // 0xF8
		::MoleMole::TextureSheetData* curTextureSheetData; // 0x100
		::UnityEngine::GameObject* playerRespawnAnimationNode; // 0x108
		::UnityEngine::SpriteRenderer* playerRespawnAnimSpriteRender; // 0x110
		::System::Single invicibleOutAnimTime; // 0x118
		::System::Byte _padding4[0x4];
		::UnityEngine::GameObject* invincibleNode; // 0x120
		::GDBLOLGLAJN* aiDataComp; // 0x128
		::GDBLOLGLAJN* dataComp; // 0x130
		::LEDAGIMFEJD* playerFollowAnimCtr; // 0x138
		::LEDAGIMFEJD* playerRespawnAnimCtr; // 0x140
		::LEDAGIMFEJD* playerBgAnimCtr; // 0x148
		::System::Boolean isValid; // 0x150
		::System::Byte _padding5[0x7];
		::System::Action* TexSheetAnimEndAction; // 0x158
		::System::UInt32 movingSoundPendingID; // 0x160
		::MoleMole::MiniGame::TartarusHounds::Direction lastFacing; // 0x164
		::System::Boolean lastMoving; // 0x168
		::System::Byte _padding6[0x3];
		::EKJABGHAIHE lastLifeStatus; // 0x16C
		::EPGGHCKINEH lastInjuredStatus; // 0x170
		::ONAKMNOIOEA divingStatus; // 0x174
		::System::Boolean lastShowDivingShadow; // 0x178
		::System::Byte _padding7[0x3];
		::IOEBDPNHJJC lastClimbStatus; // 0x17C
		::System::Single deathWaitTime; // 0x180
		::System::Single deathWaitMaxTime; // 0x184
		::System::Int32 lastHp; // 0x188
		::System::Int32 lastLife; // 0x18C
		::System::Int64 lastScore; // 0x190
		::System::Int32 lastDepth; // 0x198
		::System::Boolean lastIsFalling; // 0x19C
		::System::Boolean lastIsPlayFall; // 0x19D
		::System::Boolean lastInSquashOut; // 0x19E
		::System::Boolean lastIsSwitchFall; // 0x19F
		::System::Boolean lastIsDisplayInvincible; // 0x1A0
		::System::Byte _padding8[0x7];
		::System::Collections::Generic::Dictionary_2<::CCAPBNKINLK, ::System::Boolean>* lastBuffDict; // 0x1A8
		::System::Boolean hasPVPSimulateReachBottom; // 0x1B0
		::System::Byte _padding9[0x3];
		::System::Single playingDyingAnimCD; // 0x1B4
		::System::Boolean isPlayingInvincible; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void DoInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_DOINIT_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONRESET_OFFSET))(this);
		}

		::System::Void SetViewEntityGame(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* viewEntityGame)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SETVIEWENTITYGAME_OFFSET))(this, viewEntityGame);
		}

		::System::Void Attach(::BCIFJKNGJEA* logicPlayer)
		{
			return ((::System::Void(*)(::PVOID, ::BCIFJKNGJEA*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ATTACH_OFFSET))(this, logicPlayer);
		}

		::System::Void AttachComp(::GDBLOLGLAJN* myComp)
		{
			return ((::System::Void(*)(::PVOID, ::GDBLOLGLAJN*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ATTACHCOMP_OFFSET))(this, myComp);
		}

		::System::Void InitSheetAnim(::GOIKJCHFIIO* resourceProxy)
		{
			return ((::System::Void(*)(::PVOID, ::GOIKJCHFIIO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_INITSHEETANIM_OFFSET))(this, resourceProxy);
		}

		::System::Void OpenShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_OPENSHADOW_OFFSET))(this);
		}

		::System::Void CloseShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CLOSESHADOW_OFFSET))(this);
		}

		::System::Void OnTexSheetAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONTEXSHEETANIMEND_OFFSET))(this);
		}

		::System::Void PlayCurrentSheet(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYCURRENTSHEET_OFFSET))(this, force);
		}

		::System::Void PlayAnimState(::System::String* animStateName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYANIMSTATE_OFFSET))(this, animStateName);
		}

		::System::Void PlayAnim(::MoleMole::TextureSheetData* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYANIM_OFFSET))(this, data);
		}

		::System::UInt32 PlaySound(::System::Int32 id)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYSOUND_OFFSET))(this, id);
		}

		::System::Boolean get_IsPlayAttacking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_GET_ISPLAYATTACKING_OFFSET))(this);
		}

		::System::Boolean PlayAnimState_1(::MoleMole::MiniGame::TartarusHounds::HoundPlayerMainStatus status)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::HoundPlayerMainStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYANIMSTATE_1_OFFSET))(this, status);
		}

		::System::Void ChangeToList(::System::Collections::Generic::List_1<::System::String*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CHANGETOLIST_OFFSET))(this, list);
		}

		::System::Void ClearState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CLEARSTATE_OFFSET))(this);
		}

		::System::Void SimulatePVPSwitchPos(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SIMULATEPVPSWITCHPOS_OFFSET))(this, dt);
		}

		::System::Void OnUpdate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONUPDATE_OFFSET))(this, dt);
		}

		::System::Void DealAfterAttack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_DEALAFTERATTACK_OFFSET))(this);
		}

		::System::Void OnAttackFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONATTACKFINISHED_OFFSET))(this);
		}

		::System::Void BaseTick(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_BASETICK_OFFSET))(this, dt);
		}

		::System::Void UpdateDivingShadowStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_UPDATEDIVINGSHADOWSTATUS_OFFSET))(this);
		}

		::System::Void UpdateDyingAnim(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_UPDATEDYINGANIM_OFFSET))(this, dt);
		}

		::System::Boolean UpdateInjuredStatus(::System::Boolean result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_UPDATEINJUREDSTATUS_OFFSET))(this, result);
		}

		::System::Boolean ShouldPlayFall()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SHOULDPLAYFALL_OFFSET))(this);
		}

		::System::Void OnFakeJumpFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONFAKEJUMPFINISHED_OFFSET))(this);
		}

		::System::Void OnFallSlipFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONFALLSLIPFINISHED_OFFSET))(this);
		}

		::System::Void OnFallLandingFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONFALLLANDINGFINISHED_OFFSET))(this);
		}

		::System::Boolean UpdateClimbStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_UPDATECLIMBSTATUS_OFFSET))(this);
		}

		::System::Boolean PlayBasicMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYBASICMOVE_OFFSET))(this);
		}

		::System::Void CheckPropertyChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CHECKPROPERTYCHANGE_OFFSET))(this);
		}

		::System::Void CheckBuffChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CHECKBUFFCHANGE_OFFSET))(this);
		}

		::System::Void CloseWoolBlink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CLOSEWOOLBLINK_OFFSET))(this);
		}

		::System::Void OnChange(::CCAPBNKINLK buffType, ::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::CCAPBNKINLK, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONCHANGE_OFFSET))(this, buffType, val);
		}

		::System::Void TryPlayReadyStopInvincible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_TRYPLAYREADYSTOPINVINCIBLE_OFFSET))(this);
		}

		::System::Void PlayPlayerBlink(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer_BlinkControlIndex controlIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer_BlinkControlIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYPLAYERBLINK_OFFSET))(this, controlIndex);
		}

		::System::Void StopPlayerBlink(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer_BlinkControlIndex controlIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer_BlinkControlIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_STOPPLAYERBLINK_OFFSET))(this, controlIndex);
		}

		::System::Void ClearPlayerBlink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CLEARPLAYERBLINK_OFFSET))(this);
		}

		::System::Void HandlerLowHpAnimation(::System::Boolean isPlay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_HANDLERLOWHPANIMATION_OFFSET))(this, isPlay);
		}

		::System::Void BlinkAddLife(::System::Boolean isPlay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_BLINKADDLIFE_OFFSET))(this, isPlay);
		}

		::System::Void SetBlinkParamByIndex(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer_BlinkControlIndex index)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer_BlinkControlIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SETBLINKPARAMBYINDEX_OFFSET))(this, index);
		}

		::System::Void TriggerStruggle(::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_TRIGGERSTRUGGLE_OFFSET))(this, stop);
		}

		::System::Void SyncTimeScaleWithSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SYNCTIMESCALEWITHSPEED_OFFSET))(this);
		}

		::System::Void TickTimeScaleChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_TICKTIMESCALECHANGE_OFFSET))(this);
		}

		::System::Void OnTimeScaleChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONTIMESCALECHANGE_OFFSET))(this);
		}

		::System::Void _OnChange_b__93_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER__ONCHANGE_B__93_0_OFFSET))(this);
		}
	};
}
