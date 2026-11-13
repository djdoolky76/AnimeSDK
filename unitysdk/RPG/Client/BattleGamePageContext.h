#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/HEIGOBOHIMI.h"
class ABACJHJPDJK;
class AFOPMEOBPCM;
class AILMGJDHBHC;
class BFINAHGOMOO;
class BKPEADLKFGJ;
class DEJKENAIEIL;
class DFOJADNIOGD;
class EBEMIKFPOPC;
class EKFMIDBJDIA;
class GDJDKGHHHMP;
class GEDMHFPPBHN;
class GIPOOAFFGMM;
class GJFKCILFLKP;
class GKDGKLIGBEJ;
class GKJLNAFFAKO;
class HNDLHMEPDMG;
class IODICMALJOL;
class JELCCCLNABK;
class KBGHNFJMHHO;
class KOAOAKKCCPK;
class MMHPBKNKBGP;
class NDNEGPMIMBH;
class OBGPJKCJIEC;
class OIDEBLCILOL;
class OMEOAONBDBP;
class PIPJHDOKNEE;
namespace RPG::Client { class ShowBossInfoParam; }
namespace RPG::Client { class UIMeta; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterCreate; }
namespace RPG::GameCore { class LevelEntityStageStateChange; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class ShowBonusUIEffect; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B1C0CC0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B1C11C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B9CF0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_ACTIONBARPANEL_OFFSET UNITYSDK_OFFSET(0x1B1C0490)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_BATTLESHOWUIPAGEMANAGER_OFFSET UNITYSDK_OFFSET(0x1B1BA2C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_ISULTRATRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x1B1C04E0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_NAVIGATIONZONEMANAGER_OFFSET UNITYSDK_OFFSET(0x1B1BA310)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_SKILLPANEL_OFFSET UNITYSDK_OFFSET(0x1B1C0440)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET__ISINDELAYINTERACTION_OFFSET UNITYSDK_OFFSET(0x1B1BDFF0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET__ISINTIMELINEDISABLEINTERACTION_OFFSET UNITYSDK_OFFSET(0x1B1BE040)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONGOTFOCUS_OFFSET UNITYSDK_OFFSET(0x1B1BC330)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x1B1BC390)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0x1B1BC2D0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_REVERTBATTLEPANELACTIVEREASON_OFFSET UNITYSDK_OFFSET(0x1B1BA080)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETBATTLEPANELLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1B1BA000)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETBOSSINFOPANEL_OFFSET UNITYSDK_OFFSET(0x1B1BA1E0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETTIMELINEDISABLEINTERACTIONTIME_OFFSET UNITYSDK_OFFSET(0x1B1BA0E0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B1B9FB0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B1BAE90)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CALCULATEHUDVIEWRECT_OFFSET UNITYSDK_OFFSET(0x1B1BB860)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CHECKNEEDPAUSEBYTIMELINEDETAILINFOPANEL_OFFSET UNITYSDK_OFFSET(0x1B1BF350)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CHECKNEEDPAUSEBYULTRATRIGGER_OFFSET UNITYSDK_OFFSET(0x1B1BC180)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1B1BA360)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__INITAFTERLEVELSETUP_OFFSET UNITYSDK_OFFSET(0x1B1BD890)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__INITBEFORELEVELSETUP_OFFSET UNITYSDK_OFFSET(0x1B1BD3E0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0x1B1BBD00)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLECLOSETIMELINEDETAILINFOPANEL_OFFSET UNITYSDK_OFFSET(0x1B1BF830)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLECLOSETIMELINEDETAILINFOPANEL_WRAP_OFFSET UNITYSDK_OFFSET(0x1B1C0C30)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEFINISH_OFFSET UNITYSDK_OFFSET(0x1B1BCB90)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEEXIT_OFFSET UNITYSDK_OFFSET(0x1B1BD180)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEINITAFTERLEVELSETUP_OFFSET UNITYSDK_OFFSET(0x1B1BD7B0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEINITBEFORELEVELSETUP_OFFSET UNITYSDK_OFFSET(0x1B1BD350)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGESHOWWHITEBOXCONTENT_OFFSET UNITYSDK_OFFSET(0x1B1BD930)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGESILENTEXIT_OFFSET UNITYSDK_OFFSET(0x1B1BD200)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPHASELEAVE_OFFSET UNITYSDK_OFFSET(0x1B1BE300)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEONABILITYDYING_GAMEENTITY_WRAP_OFFSET UNITYSDK_OFFSET(0x1B1C09C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEONABILITYDYING_OFFSET UNITYSDK_OFFSET(0x1B1BCFF0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEOPENTIMELINEDETAILINFOPANEL_ACTIONBARITEM_WRAP_OFFSET UNITYSDK_OFFSET(0x1B1C0B60)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEOPENTIMELINEDETAILINFOPANEL_OFFSET UNITYSDK_OFFSET(0x1B1BF410)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWBATTLEBROKENDIALOG_OFFSET UNITYSDK_OFFSET(0x1B1BE8C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWBATTLESTARTDIALOG_OFFSET UNITYSDK_OFFSET(0x1B1BE860)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWNEXTWAVEDIALOG_OFFSET UNITYSDK_OFFSET(0x1B1BE940)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETIMELINESKILLCLOSEUI_OFFSET UNITYSDK_OFFSET(0x1B1BE710)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETIMELINESKILLSHOWUI_OFFSET UNITYSDK_OFFSET(0x1B1BE4A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETRIGGERONEMORE_OFFSET UNITYSDK_OFFSET(0x1B1BE800)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEULTRATRIGGERBUTTONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1B1BEA80)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBTNSCREENMASK_OFFSET UNITYSDK_OFFSET(0x1B1BE9A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERCREATE_LEVELCHARACTERCREATE_WRAP_OFFSET UNITYSDK_OFFSET(0x1B1C0530)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERCREATE_OFFSET UNITYSDK_OFFSET(0x1B1BCEF0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERSTAGESTATECHANGE_LEVELENTITYSTAGESTATECHANGE_WRAP_OFFSET UNITYSDK_OFFSET(0x1B1C0650)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERSTAGESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1B1BCF70)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCREATEPLAYERTEAMFINISH_OFFSET UNITYSDK_OFFSET(0x1B1BCE50)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONLEVELGAMEMODESTATECHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x1B1BC500)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONLOCKBATTLEOPERATION_OFFSET UNITYSDK_OFFSET(0x1B1BEE50)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONMAZETOBATTLETRANSITFADEOUTEND_OFFSET UNITYSDK_OFFSET(0x1B1BC3F0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONMAZETOBATTLETRANSITFADEOUTEND_WRAP_OFFSET UNITYSDK_OFFSET(0x1B1C0790)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONPLAYROLETRIALZOOMINFADEOUT_OFFSET UNITYSDK_OFFSET(0x1B1BF170)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONREFRESHBATTLEAVATARPANEL_OFFSET UNITYSDK_OFFSET(0x1B1BCEA0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONREFRESHBATTLEAVATARPANEL_WRAP_OFFSET UNITYSDK_OFFSET(0x1B1C0900)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSETUPFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0x1B1BF000)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSHOWBOSSINFOBAR_OFFSET UNITYSDK_OFFSET(0x1B1BCD20)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSHOWBOSSINFOBAR_SHOWBOSSINFOPARAM_WRAP_OFFSET UNITYSDK_OFFSET(0x1B1C0820)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONTEAMFORMATIONLISTCHANGE_OFFSET UNITYSDK_OFFSET(0x1B1BD0D0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONTICK_OFFSET UNITYSDK_OFFSET(0x1B1BBD80)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBATTLEANYKEYDOWNNTF_OFFSET UNITYSDK_OFFSET(0x1B1BDF00)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBONUSEFFECT_OFFSET UNITYSDK_OFFSET(0x1B1BE230)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBONUSEFFECT_SHOWBONUSUIEFFECT_WRAP_OFFSET UNITYSDK_OFFSET(0x1B1C0A90)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYALLUIFADEANIM_OFFSET UNITYSDK_OFFSET(0x1B1BE510)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYAVATARPANELFADEANIM_OFFSET UNITYSDK_OFFSET(0x1B1BFF40)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYULTRAFADE_OFFSET UNITYSDK_OFFSET(0x1B1BECC0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__RESETUISTATE_OFFSET UNITYSDK_OFFSET(0x1B1BB5D0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETACTIVEBYPOSITION_OFFSET UNITYSDK_OFFSET(0x1B1BCC10)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETLIGHTENTITIES_OFFSET UNITYSDK_OFFSET(0x1B1BFED0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETPAUSEBYULTRASKILLTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B1BBB30)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPACTIONBARSAFEZONE_OFFSET UNITYSDK_OFFSET(0x1B1BB9A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPLIGHTTEAMMEMBER_OFFSET UNITYSDK_OFFSET(0x1B1BC090)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPLIGHTTEAMUI_OFFSET UNITYSDK_OFFSET(0x1B1BFB40)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPREPLAYMODE_OFFSET UNITYSDK_OFFSET(0x1B1BC8D0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPTRIALOBJETIVE_OFFSET UNITYSDK_OFFSET(0x1B1BFC70)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B1BB510)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETVIGNETTE_OFFSET UNITYSDK_OFFSET(0x1B1BC7B0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SHOWBEGINBATTLEBLOCK_OFFSET UNITYSDK_OFFSET(0x1B1BB660)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TICKDELAYINTERACTION_OFFSET UNITYSDK_OFFSET(0x1B1BBF50)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TICKTIMELINEDISABLEINTERACTION_OFFSET UNITYSDK_OFFSET(0x1B1BBFF0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TOGGLEAVATARPANELBLACKMASK_OFFSET UNITYSDK_OFFSET(0x1B1BF3A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TOGGLEAVATARPANEL_OFFSET UNITYSDK_OFFSET(0x1B1BE090)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TRYRESETULTRATRIGGERFADEANIM_OFFSET UNITYSDK_OFFSET(0x1B1C03B0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1B1BBA10)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1B1C1620)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___ONLEVELGAMEMODESTATECHANGEDEVENT_B__20_0_OFFSET UNITYSDK_OFFSET(0x1B1C1630)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePageContext_TypeDefinitionIndex = 73639;

	class BattleGamePageContext : public ::RPG::Client::UIController
	{
	public:
		::BFINAHGOMOO* _ActionBarPanel; // 0x190
		::DEJKENAIEIL* _BattleRightInfoPanel; // 0x198
		::OIDEBLCILOL* _BossInfoPanel; // 0x1A0
		::UnityEngine::Transform* _WhiteboxWidget; // 0x1A8
		::BKPEADLKFGJ* _PCShortCutPanel; // 0x1B0
		::KOAOAKKCCPK* _PCShortCutPanelProxy; // 0x1B8
		::UnityEngine::Animation* _RootAnim; // 0x1C0
		::GKJLNAFFAKO* _BattleMaskPage; // 0x1C8
		::PIPJHDOKNEE* _BattleScreenEffectPanelContainer; // 0x1D0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _LightTeamEntities; // 0x1D8
		::GDJDKGHHHMP* _BattleShowUIPageManager; // 0x1E0
		::DFOJADNIOGD* _BattleFunctionBarPanel; // 0x1E8
		::RPG::GameCore::LevelUIComponent* _LevelUICmpt; // 0x1F0
		::GJFKCILFLKP* _BattleTeamDetailButtonPanel; // 0x1F8
		::HNDLHMEPDMG* _BattleBPTopPanel; // 0x200
		::System::Collections::Generic::List_1<::System::String*>* _WhiteboxImgPaths; // 0x208
		::NDNEGPMIMBH* _Follow3dContext; // 0x210
		::UnityEngine::Transform* _AvatarPanelBlackMask; // 0x218
		::KBGHNFJMHHO* _BattleEventSkillPanel; // 0x220
		::MMHPBKNKBGP* _SkillPanel; // 0x228
		::UnityEngine::RectTransform* _HudSafeZone; // 0x230
		::OBGPJKCJIEC* _BattleChangeAvatarPanel; // 0x238
		::JELCCCLNABK* _BattleEventButtonSpecialPanel; // 0x240
		::Il2CppArray<::System::String*>* _ReplayModeWhiteList; // 0x248
		::UnityEngine::Transform* _TeamRoot; // 0x250
		::ABACJHJPDJK* _RightDownPointPanel; // 0x258
		::Il2CppArray<::System::String*>* _UltraTriggerWhiteList; // 0x260
		::EBEMIKFPOPC* _BattleBottomInfoPanel; // 0x268
		::IODICMALJOL* _BattleToastPanel; // 0x270
		::UnityEngine::RectTransform* _ActionBarSafeZone; // 0x278
		::RPG::GameCore::EntityManager* _EntityManager; // 0x280
		::RPG::Client::UIMeta* _UIMeta; // 0x288
		::RPG::UINavigation::UINavigationZoneManager* _UINavigationZoneManager; // 0x290
		::AILMGJDHBHC* _BattleRoleTrialPanel; // 0x298
		::AFOPMEOBPCM* _BattleGamePanelsActiveManager; // 0x2A0
		::RPG::GameCore::BattleInstance* _BattleInstanceRef; // 0x2A8
		::OMEOAONBDBP* _TurnHintPanel; // 0x2B0
		::GIPOOAFFGMM* _BattleTopPanel; // 0x2B8
		::UnityEngine::UI::Button* _BtnScreenMask; // 0x2C0
		::UnityEngine::Transform* _ActionBarMask; // 0x2C8
		::GKDGKLIGBEJ* _TeamInfoPanel; // 0x2D0
		::System::Int32 _IsPausedByTimeLineDetailInfoPanelTimeScaleIndex; // 0x2D8
		::System::Byte _padding0[0x4];
		::System::UInt64 _VignetteChangeBeginTime; // 0x2E0
		::System::Single _VignetteTarget; // 0x2E8
		::System::UInt32 _BeginBattleBlockID; // 0x2EC
		::System::Int32 _IsPausedByUltraSkillTriggerTimeScaleIndex; // 0x2F0
		::System::Boolean _ShouldResumeBeginBattleBlock; // 0x2F4
		::System::Boolean _VignetteFadeIn; // 0x2F5
		::System::Boolean _IsUltraTriggerPressed; // 0x2F6
		::System::Boolean _NeedResetUltraTriggerFadeAnim; // 0x2F7
		::System::Single _DelayInteractionTimeStamp; // 0x2F8
		::System::Single _VignetteBegin; // 0x2FC
		::System::Boolean _IsPausedByUltraSkillTrigger; // 0x300
		::System::Boolean _LightTeamEntitiesDirty; // 0x301
		::System::Boolean _IsBattleTimelinePlaying; // 0x302
		::System::Boolean _InVignetteChange; // 0x303
		::System::Single _TimeLineDisableInteractionTimeStamp; // 0x304
		// static const ::System::String* _RESET_ANIM_NAME; // 0x0
		// static const ::System::String* _AVATAR_PANEL_FADE_OUT_ANIM_NAME; // 0x0
		// static const ::System::String* _ULTRA_TRIGGER_FADE_IN; // 0x0
		// static const ::System::String* _ULTRA_TRIGGER_FADE_OUT; // 0x0
		// static const ::System::String* _LUA_ONE_MORE_EFFECT; // 0x0
		// static const ::System::String* _LUA_BATTLE_BROKEN_DIALOG; // 0x0
		// static const ::System::String* _LUA_BONUS_ACTION_DIALOG; // 0x0
		// static const ::System::String* _LUA_NEXT_WAVE_DIALOG; // 0x0
		// static const ::System::String* _ANIM_VIGNETTE_FADE_IN; // 0x0
		// static const ::System::String* _ANIM_VIGNETTE_FADE_OUT; // 0x0
		// static const ::System::Object _WAIT_FOR_FADE_IN; // 0x0
		// static const ::System::Object _FADE_OUT_VIGNETTE_INTENSITY; // 0x0
		// static const ::System::Object _VIGNETTE_CHANGE_TIME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_CTOR_OFFSET))(this);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void SetBattlePanelLightWeightActive(::RPG::GameCore::BattleUIPanelType a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETBATTLEPANELLIGHTWEIGHTACTIVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RevertBattlePanelActiveReason(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_REVERTBATTLEPANELACTIVEREASON_OFFSET))(this, a1);
		}

		::System::Void SetTimeLineDisableInteractionTime(::HEIGOBOHIMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEIGOBOHIMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETTIMELINEDISABLEINTERACTIONTIME_OFFSET))(this, a1);
		}

		::System::Void SetBossInfoPanel(::OIDEBLCILOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIDEBLCILOL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETBOSSINFOPANEL_OFFSET))(this, a1);
		}

		::GDJDKGHHHMP* get_BattleShowUIPageManager()
		{
			return ((::GDJDKGHHHMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_BATTLESHOWUIPAGEMANAGER_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZoneManager* get_NavigationZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_NAVIGATIONZONEMANAGER_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void _OnActiveChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONACTIVECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONTICK_OFFSET))(this, a1);
		}

		::System::Void OnReturnToTop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONRETURNTOTOP_OFFSET))(this);
		}

		::System::Void OnGotFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONGOTFOCUS_OFFSET))(this);
		}

		::System::Void OnLostFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONLOSTFOCUS_OFFSET))(this);
		}

		::System::Void _OnMazeToBattleTransitFadeOutEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONMAZETOBATTLETRANSITFADEOUTEND_OFFSET))(this);
		}

		::System::Void _OnLevelGameModeStateChangedEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONLEVELGAMEMODESTATECHANGEDEVENT_OFFSET))(this, a1);
		}

		::System::Void _SetActiveByPosition(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETACTIVEBYPOSITION_OFFSET))(this, a1);
		}

		::System::Void _CalculateHUDViewRect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CALCULATEHUDVIEWRECT_OFFSET))(this);
		}

		::System::Void _SetupActionBarSafeZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPACTIONBARSAFEZONE_OFFSET))(this);
		}

		::System::Void _OnShowBossInfoBar(::RPG::Client::ShowBossInfoParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowBossInfoParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSHOWBOSSINFOBAR_OFFSET))(this, a1);
		}

		::System::Void _OnCreatePlayerTeamFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCREATEPLAYERTEAMFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshBattleAvatarPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONREFRESHBATTLEAVATARPANEL_OFFSET))(this);
		}

		::System::Void _OnCharacterCreate(::RPG::GameCore::LevelCharacterCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterCreate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERCREATE_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterStageStateChange(::RPG::GameCore::LevelEntityStageStateChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityStageStateChange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERSTAGESTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleOnAbilityDying(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEONABILITYDYING_OFFSET))(this, a1);
		}

		::System::Void _OnTeamFormationListChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONTEAMFORMATIONLISTCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleGamePageExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEEXIT_OFFSET))(this, a1);
		}

		::System::Void _OnBattleGamePageSilentExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGESILENTEXIT_OFFSET))(this, a1);
		}

		::System::Void _OnBattleGamePageInitBeforeLevelSetup(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEINITBEFORELEVELSETUP_OFFSET))(this, a1);
		}

		::System::Void _OnBattleGamePageInitAfterLevelSetup(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEINITAFTERLEVELSETUP_OFFSET))(this, a1);
		}

		::System::Void _OnBattleGamePageShowWhiteboxContent(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGESHOWWHITEBOXCONTENT_OFFSET))(this, a1);
		}

		::System::Void _OnUIBattleAnyKeyDownNtf(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBATTLEANYKEYDOWNNTF_OFFSET))(this, a1);
		}

		::System::Void _OnUIBonusEffect(::RPG::GameCore::ShowBonusUIEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ShowBonusUIEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBONUSEFFECT_OFFSET))(this, a1);
		}

		::System::Void _OnBattleGamePhaseLeave(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPHASELEAVE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleTimeLineSkillShowUI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETIMELINESKILLSHOWUI_OFFSET))(this, a1);
		}

		::System::Void _OnBattleTimeLineSkillCloseUI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETIMELINESKILLCLOSEUI_OFFSET))(this, a1);
		}

		::System::Void _OnBattleTriggerOneMore(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETRIGGERONEMORE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleShowBattleStartDialog(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWBATTLESTARTDIALOG_OFFSET))(this, a1);
		}

		::System::Void _OnBattleShowBattleBrokenDialog(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWBATTLEBROKENDIALOG_OFFSET))(this, a1);
		}

		::System::Void _OnBattleShowNextWaveDialog(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWNEXTWAVEDIALOG_OFFSET))(this, a1);
		}

		::System::Void _OnBtnScreenMask(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBTNSCREENMASK_OFFSET))(this, a1);
		}

		::System::Void _OnBattleUltraTriggerButtonStateChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEULTRATRIGGERBUTTONSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnLockBattleOperation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONLOCKBATTLEOPERATION_OFFSET))(this, a1);
		}

		::System::Void _OnSetupFullScreenBlock(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSETUPFULLSCREENBLOCK_OFFSET))(this, a1);
		}

		::System::Void _OnPlayRoleTrialZoomInFadeOut(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONPLAYROLETRIALZOOMINFADEOUT_OFFSET))(this, a1);
		}

		::System::Boolean _CheckNeedPauseByUltraTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CHECKNEEDPAUSEBYULTRATRIGGER_OFFSET))(this);
		}

		::System::Boolean _CheckNeedPauseByTimeLineDetailInfoPanel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CHECKNEEDPAUSEBYTIMELINEDETAILINFOPANEL_OFFSET))(this);
		}

		::System::Void _ResetUIState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__RESETUISTATE_OFFSET))(this);
		}

		::System::Void _SetPauseByUltraSkillTrigger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETPAUSEBYULTRASKILLTRIGGER_OFFSET))(this, a1);
		}

		::System::Void _OnBattleOpenTimeLineDetailInfoPanel(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEOPENTIMELINEDETAILINFOPANEL_OFFSET))(this, a1);
		}

		::System::Void _OnBattleCloseTimeLineDetailInfoPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLECLOSETIMELINEDETAILINFOPANEL_OFFSET))(this);
		}

		::System::Void _TickDelayInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TICKDELAYINTERACTION_OFFSET))(this);
		}

		::System::Void _TickTimeLineDisableInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TICKTIMELINEDISABLEINTERACTION_OFFSET))(this);
		}

		::System::Void _InitBeforeLevelSetup(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__INITBEFORELEVELSETUP_OFFSET))(this, a1);
		}

		::System::Void _InitAfterLevelSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__INITAFTERLEVELSETUP_OFFSET))(this);
		}

		::System::Void _SetupLightTeamMember()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPLIGHTTEAMMEMBER_OFFSET))(this);
		}

		::System::Void _SetupLightTeamUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPLIGHTTEAMUI_OFFSET))(this);
		}

		::System::Void _SetupTrialObjetive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPTRIALOBJETIVE_OFFSET))(this);
		}

		::System::Void _SetLightEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETLIGHTENTITIES_OFFSET))(this);
		}

		::System::Void _ToggleAvatarPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TOGGLEAVATARPANEL_OFFSET))(this);
		}

		::System::Void _ToggleAvatarPanelBlackMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TOGGLEAVATARPANELBLACKMASK_OFFSET))(this);
		}

		::System::Void _OnBattleFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEFINISH_OFFSET))(this);
		}

		::System::Void _PlayAllUIFadeAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYALLUIFADEANIM_OFFSET))(this, a1);
		}

		::System::Void _PlayAvatarPanelFadeAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYAVATARPANELFADEANIM_OFFSET))(this, a1);
		}

		::System::Void _TryResetUltraTriggerFadeAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TRYRESETULTRATRIGGERFADEANIM_OFFSET))(this);
		}

		::System::Void _SetVignette(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETVIGNETTE_OFFSET))(this, a1);
		}

		::System::Void _PlayUltraFade(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYULTRAFADE_OFFSET))(this, a1);
		}

		::System::Void _ShowBeginBattleBlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SHOWBEGINBATTLEBLOCK_OFFSET))(this, a1);
		}

		::System::Void _SetupReplayMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPREPLAYMODE_OFFSET))(this);
		}

		::MMHPBKNKBGP* get_SkillPanel()
		{
			return ((::MMHPBKNKBGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_SKILLPANEL_OFFSET))(this);
		}

		::BFINAHGOMOO* get_ActionBarPanel()
		{
			return ((::BFINAHGOMOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_ACTIONBARPANEL_OFFSET))(this);
		}

		::System::Boolean get_IsUltraTriggerPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_ISULTRATRIGGERPRESSED_OFFSET))(this);
		}

		::System::Boolean get__IsInDelayInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET__ISINDELAYINTERACTION_OFFSET))(this);
		}

		::System::Boolean get__IsInTimeLineDisableInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET__ISINTIMELINEDISABLEINTERACTION_OFFSET))(this);
		}

		::System::Void _OnCharacterCreate_LevelCharacterCreate_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERCREATE_LEVELCHARACTERCREATE_WRAP_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterStageStateChange_LevelEntityStageStateChange_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERSTAGESTATECHANGE_LEVELENTITYSTAGESTATECHANGE_WRAP_OFFSET))(this, a1);
		}

		::System::Void _OnMazeToBattleTransitFadeOutEnd_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONMAZETOBATTLETRANSITFADEOUTEND_WRAP_OFFSET))(this, a1);
		}

		::System::Void _OnShowBossInfoBar_ShowBossInfoParam_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSHOWBOSSINFOBAR_SHOWBOSSINFOPARAM_WRAP_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshBattleAvatarPanel_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONREFRESHBATTLEAVATARPANEL_WRAP_OFFSET))(this, a1);
		}

		::System::Void _OnBattleOnAbilityDying_GameEntity_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEONABILITYDYING_GAMEENTITY_WRAP_OFFSET))(this, a1);
		}

		::System::Void _OnUIBonusEffect_ShowBonusUIEffect_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBONUSEFFECT_SHOWBONUSUIEFFECT_WRAP_OFFSET))(this, a1);
		}

		::System::Void _OnBattleOpenTimeLineDetailInfoPanel_ActionBarItem_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEOPENTIMELINEDETAILINFOPANEL_ACTIONBARITEM_WRAP_OFFSET))(this, a1);
		}

		::System::Void _OnBattleCloseTimeLineDetailInfoPanel_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLECLOSETIMELINEDETAILINFOPANEL_WRAP_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::BKPEADLKFGJ* __ctor_b__0_0()
		{
			return ((::BKPEADLKFGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___CTOR_B__0_0_OFFSET))(this);
		}

		::System::Void __OnLevelGameModeStateChangedEvent_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___ONLEVELGAMEMODESTATECHANGEDEVENT_B__20_0_OFFSET))(this);
		}

	};
}
