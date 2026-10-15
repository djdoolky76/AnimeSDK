#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class ALIACDLNBJB;
class BJMHJJIELLH;
class CBJILMHOMGP;
class CEEGMMCFCBG;
class CNDMEOIOFML;
class DEGELHCLDJB;
class EAHCLJPMCIG;
class EANKKLCLOMC;
class ELDKPCBCIIO;
class EOKOEJKEFMN;
class FCFNFMPIEFJ;
class FEIPLKMMIOI;
class GBIOCNNCLOC;
class GHMLAFDAJPJ;
class HOLKNOOAPIE;
class HPOCHBIJIHH;
class IDKMPJCBMFH;
class JNBPOOEIKAP;
class JOCGLOLCKBD;
class LDEKKFJLNGH;
class LPDLKOJEJCP;
class MDBOGJINCFP;
class NKHHEFJBOFN;
class NLJLFIEPHEL;
class OBJANKHLNGO;
class PFALBCGPCFF;
class PGKHIKFLKLM;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin { template <typename T> class ViewModelEventHandler_1; }
namespace RPG::Client::FateRin::Battle { class FateRinBattleEnemyHudBossViewModel; }
namespace RPG::Client::FateRin::Battle { class FateRinBattleEnemyHudViewModel; }
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudActiveSkillButtonViewModel; }
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudTargetViewModel; }
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudTurnDamageViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleFunctionAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudDeckTipViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudEndActionButtonViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudFriendAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudUltraTipViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleWaveInfoViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinCardHitTestService; }
namespace RPG::Client::FateRin::Tutorial { class IFateRinBattleTutorialViewModel; }
namespace System { class Object; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONANYKEYDOWN_OFFSET UNITYSDK_OFFSET(0xCED0A00)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONISSHOWALLUICHANGE_OFFSET UNITYSDK_OFFSET(0xCED07A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONNOTIFYEXIT_OFFSET UNITYSDK_OFFSET(0xCED0600)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONNOTIFYSILENTEXIT_OFFSET UNITYSDK_OFFSET(0xCED06E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONSHOWALLEXCEPTBOSSBARUICHANGE_OFFSET UNITYSDK_OFFSET(0xCED0860)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONULTRATRIGGERPRESSSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xCED0920)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCECE9E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCECF2F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ACTIVESKILLBUTTONAREA_OFFSET UNITYSDK_OFFSET(0xCED0520)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_BOSSAREA_OFFSET UNITYSDK_OFFSET(0xCED0500)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_CARDAREA_OFFSET UNITYSDK_OFFSET(0xCED04E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_DECKTIPAREA_OFFSET UNITYSDK_OFFSET(0xCED0590)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ENDACTIONBUTTON_OFFSET UNITYSDK_OFFSET(0xCED0540)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ENEMYAREA_OFFSET UNITYSDK_OFFSET(0xCED04F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_FRIENDAREA_OFFSET UNITYSDK_OFFSET(0xCED04D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_FUNCTIONAREA_OFFSET UNITYSDK_OFFSET(0xCED0550)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ISSHOWALLUI_OFFSET UNITYSDK_OFFSET(0xCED05A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ISULTRATRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0xCED05C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_NAVIGATETOTEAMDETAIL_OFFSET UNITYSDK_OFFSET(0xCED05E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_TARGETAREA_OFFSET UNITYSDK_OFFSET(0xCED0530)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_TOGGLEISSHOWALLUI_OFFSET UNITYSDK_OFFSET(0xCED05F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_TURNDAMAGEAREA_OFFSET UNITYSDK_OFFSET(0xCED0510)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_TUTORIALAREA_OFFSET UNITYSDK_OFFSET(0xCED0580)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ULTRATIPAREA_OFFSET UNITYSDK_OFFSET(0xCED0570)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_WAVEINFOAREA_OFFSET UNITYSDK_OFFSET(0xCED0560)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONANYKEYDOWN_OFFSET UNITYSDK_OFFSET(0xCED0A70)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONISSHOWALLUICHANGE_OFFSET UNITYSDK_OFFSET(0xCED0800)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONNOTIFYEXIT_OFFSET UNITYSDK_OFFSET(0xCED0670)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONNOTIFYSILENTEXIT_OFFSET UNITYSDK_OFFSET(0xCED0740)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONSHOWALLEXCEPTBOSSBARUICHANGE_OFFSET UNITYSDK_OFFSET(0xCED08C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONULTRATRIGGERPRESSSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xCED0990)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_SET_ISSHOWALLUI_OFFSET UNITYSDK_OFFSET(0xCED05B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_SET_ISULTRATRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0xCED05D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__NAVIGATETOTEAMDETAIL_OFFSET UNITYSDK_OFFSET(0xCED0320)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEANYKEYDOWNMESSAGE_OFFSET UNITYSDK_OFFSET(0xCED02B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEAVATARULTRATRIGGERBTNSTATECHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCED0220)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLECARDGAMESTATEMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCECFC60)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEENEMYISHUDSHOWALLUICHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCECFDC0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEEXITHUDMESSAGE_OFFSET UNITYSDK_OFFSET(0xCECFCE0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEGAMESTATEMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCECFBF0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEHUDTASKSETVISIBLEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCECFF80)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEINITIALIZEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCED0090)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEPLAYERACTIONSTARTMESSAGE_OFFSET UNITYSDK_OFFSET(0xCED0150)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLESILENTEXITHUDMESSAGE_OFFSET UNITYSDK_OFFSET(0xCECFD50)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONTOGGLEISSHOWALLUI_OFFSET UNITYSDK_OFFSET(0xCED03F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__SETISSHOWALLUI_OFFSET UNITYSDK_OFFSET(0xCECFEE0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudViewModel_TypeDefinitionIndex = 80943;

	class FateRinBattleHudViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>* OnIsShowAllUIChange; // 0x20
		::RPG::Client::FateRin::ViewModelEventHandler* OnNotifySilentExit; // 0x28
		::RPG::Client::FateRin::Battle::IFateRinBattleFunctionAreaViewModel* _FunctionArea_k__BackingField; // 0x30
		::RPG::Client::FateRin::Battle::IFateRinBattleHudUltraTipViewModel* _UltraTipArea_k__BackingField; // 0x38
		::RPG::Client::FateRin::Battle::FateRinBattleHudTargetViewModel* _TargetArea_k__BackingField; // 0x40
		::RPG::Client::FateRin::Tutorial::IFateRinBattleTutorialViewModel* _TutorialArea_k__BackingField; // 0x48
		::RPG::Client::FateRin::Battle::IFateRinBattleHudFriendAreaViewModel* _FriendArea_k__BackingField; // 0x50
		::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudViewModel* _EnemyArea_k__BackingField; // 0x58
		::RPG::Client::FateRin::Battle::FateRinBattleHudTurnDamageViewModel* _TurnDamageArea_k__BackingField; // 0x60
		::RPG::Client::FateRin::Battle::IFateRinBattleWaveInfoViewModel* _WaveInfoArea_k__BackingField; // 0x68
		::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>* OnShowAllExceptBossBarUIChange; // 0x70
		::CEEGMMCFCBG* _NavigateToTeamDetail_k__BackingField; // 0x78
		::CBJILMHOMGP* _ToggleIsShowAllUI_k__BackingField; // 0x80
		::ELDKPCBCIIO* _UIPresentService; // 0x88
		::OBJANKHLNGO* _Messenger; // 0x90
		::RPG::Client::FateRin::Battle::IFateRinBattleHudEndActionButtonViewModel* _EndActionButton_k__BackingField; // 0x98
		::RPG::Client::FateRin::Battle::IFateRinBattleHudDeckTipViewModel* _DeckTipArea_k__BackingField; // 0xA0
		::RPG::Client::FateRin::ViewModelEventHandler* OnNotifyExit; // 0xA8
		::RPG::Client::FateRin::ViewModelEventHandler* OnAnyKeyDown; // 0xB0
		::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* _CardArea_k__BackingField; // 0xB8
		::RPG::Client::FateRin::Battle::FateRinBattleHudActiveSkillButtonViewModel* _ActiveSkillButtonArea_k__BackingField; // 0xC0
		::EAHCLJPMCIG* _Model; // 0xC8
		::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudBossViewModel* _BossArea_k__BackingField; // 0xD0
		::RPG::Client::FateRin::ViewModelEventHandler* OnUltraTriggerPressStateChange; // 0xD8
		::System::Boolean _IsHudHiddenByTask; // 0xE0
		::System::Boolean _IsBattleTimelinePlaying; // 0xE1
		::System::Boolean _IsUltraTriggerPressed_k__BackingField; // 0xE2
		::System::Boolean _IsShowAllUI_k__BackingField; // 0xE3
		::System::Boolean _HasPlayerActionStarted; // 0xE4
		::System::Boolean _IsDisposed; // 0xE5
		::System::Void _ctor(::EAHCLJPMCIG* a1, ::NLJLFIEPHEL* a2, ::BJMHJJIELLH* a3, ::NKHHEFJBOFN* a4, ::GHMLAFDAJPJ* a5, ::FEIPLKMMIOI* a6, ::ELDKPCBCIIO* a7, ::HOLKNOOAPIE* a8, ::OBJANKHLNGO* a9, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* a10, ::DEGELHCLDJB* a11, ::JOCGLOLCKBD* a12, ::EOKOEJKEFMN* a13, ::RPG::Client::FateRin::Tutorial::IFateRinBattleTutorialViewModel* a14, ::ALIACDLNBJB* a15, ::HPOCHBIJIHH* a16, ::PFALBCGPCFF* a17, ::MDBOGJINCFP* a18)
		{
			return ((::System::Void(*)(::PVOID, ::EAHCLJPMCIG*, ::NLJLFIEPHEL*, ::BJMHJJIELLH*, ::NKHHEFJBOFN*, ::GHMLAFDAJPJ*, ::FEIPLKMMIOI*, ::ELDKPCBCIIO*, ::HOLKNOOAPIE*, ::OBJANKHLNGO*, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService*, ::DEGELHCLDJB*, ::JOCGLOLCKBD*, ::EOKOEJKEFMN*, ::RPG::Client::FateRin::Tutorial::IFateRinBattleTutorialViewModel*, ::ALIACDLNBJB*, ::HPOCHBIJIHH*, ::PFALBCGPCFF*, ::MDBOGJINCFP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnBattleGameStateModelChangeMessage(::JNBPOOEIKAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNBPOOEIKAP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEGAMESTATEMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleCardGameStateModelChangeMessage(::PGKHIKFLKLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGKHIKFLKLM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLECARDGAMESTATEMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleExitHudMessage(::LPDLKOJEJCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPDLKOJEJCP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEEXITHUDMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleSilentExitHudMessage(::CNDMEOIOFML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNDMEOIOFML*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLESILENTEXITHUDMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleEnemyIsHudShowAllUIChangeMessage(::IDKMPJCBMFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDKMPJCBMFH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEENEMYISHUDSHOWALLUICHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleHudTaskSetVisibleMessage(::LDEKKFJLNGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDEKKFJLNGH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEHUDTASKSETVISIBLEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleInitializeMessage(::FCFNFMPIEFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCFNFMPIEFJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEINITIALIZEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattlePlayerActionStartMessage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEPLAYERACTIONSTARTMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleAvatarUltraTriggerBtnStateChangeMessage(::EANKKLCLOMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EANKKLCLOMC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEAVATARULTRATRIGGERBTNSTATECHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleAnyKeyDownMessage(::GBIOCNNCLOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBIOCNNCLOC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONBATTLEANYKEYDOWNMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _SetIsShowAllUI(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__SETISSHOWALLUI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _NavigateToTeamDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__NAVIGATETOTEAMDETAIL_OFFSET))(this);
		}

		::System::Void _OnToggleIsShowAllUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL__ONTOGGLEISSHOWALLUI_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudFriendAreaViewModel* get_FriendArea()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudFriendAreaViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_FRIENDAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* get_CardArea()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_CARDAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudViewModel* get_EnemyArea()
		{
			return ((::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ENEMYAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudBossViewModel* get_BossArea()
		{
			return ((::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudBossViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_BOSSAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::FateRinBattleHudTurnDamageViewModel* get_TurnDamageArea()
		{
			return ((::RPG::Client::FateRin::Battle::FateRinBattleHudTurnDamageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_TURNDAMAGEAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::FateRinBattleHudActiveSkillButtonViewModel* get_ActiveSkillButtonArea()
		{
			return ((::RPG::Client::FateRin::Battle::FateRinBattleHudActiveSkillButtonViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ACTIVESKILLBUTTONAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::FateRinBattleHudTargetViewModel* get_TargetArea()
		{
			return ((::RPG::Client::FateRin::Battle::FateRinBattleHudTargetViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_TARGETAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudEndActionButtonViewModel* get_EndActionButton()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudEndActionButtonViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ENDACTIONBUTTON_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleFunctionAreaViewModel* get_FunctionArea()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleFunctionAreaViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_FUNCTIONAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleWaveInfoViewModel* get_WaveInfoArea()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleWaveInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_WAVEINFOAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudUltraTipViewModel* get_UltraTipArea()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudUltraTipViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ULTRATIPAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Tutorial::IFateRinBattleTutorialViewModel* get_TutorialArea()
		{
			return ((::RPG::Client::FateRin::Tutorial::IFateRinBattleTutorialViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_TUTORIALAREA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudDeckTipViewModel* get_DeckTipArea()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudDeckTipViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_DECKTIPAREA_OFFSET))(this);
		}

		::System::Boolean get_IsShowAllUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ISSHOWALLUI_OFFSET))(this);
		}

		::System::Void set_IsShowAllUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_SET_ISSHOWALLUI_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUltraTriggerPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_ISULTRATRIGGERPRESSED_OFFSET))(this);
		}

		::System::Void set_IsUltraTriggerPressed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_SET_ISULTRATRIGGERPRESSED_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* get_NavigateToTeamDetail()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_NAVIGATETOTEAMDETAIL_OFFSET))(this);
		}

		::CBJILMHOMGP* get_ToggleIsShowAllUI()
		{
			return ((::CBJILMHOMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_GET_TOGGLEISSHOWALLUI_OFFSET))(this);
		}

		::System::Void add_OnNotifyExit(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONNOTIFYEXIT_OFFSET))(this, a1);
		}

		::System::Void remove_OnNotifyExit(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONNOTIFYEXIT_OFFSET))(this, a1);
		}

		::System::Void add_OnNotifySilentExit(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONNOTIFYSILENTEXIT_OFFSET))(this, a1);
		}

		::System::Void remove_OnNotifySilentExit(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONNOTIFYSILENTEXIT_OFFSET))(this, a1);
		}

		::System::Void add_OnIsShowAllUIChange(::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONISSHOWALLUICHANGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnIsShowAllUIChange(::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONISSHOWALLUICHANGE_OFFSET))(this, a1);
		}

		::System::Void add_OnShowAllExceptBossBarUIChange(::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONSHOWALLEXCEPTBOSSBARUICHANGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnShowAllExceptBossBarUIChange(::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONSHOWALLEXCEPTBOSSBARUICHANGE_OFFSET))(this, a1);
		}

		::System::Void add_OnUltraTriggerPressStateChange(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONULTRATRIGGERPRESSSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnUltraTriggerPressStateChange(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONULTRATRIGGERPRESSSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void add_OnAnyKeyDown(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_ADD_ONANYKEYDOWN_OFFSET))(this, a1);
		}

		::System::Void remove_OnAnyKeyDown(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDVIEWMODEL_REMOVE_ONANYKEYDOWN_OFFSET))(this, a1);
		}

	};
}
