#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPEICFCFGEM.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/GDEKBFGOGKH.h"
#include "unitysdk/GKAMNEHCNLP.h"
#include "unitysdk/GKJHGODMNHE.h"

class FHEKHPNMCKF;
class FIHCLCMNKNN;
class LPHFMEGOJDA;
class MDCFNJGJNLO;
class OAEFGCLEHHO;
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_LINKZONESUBSYSTEM_CLEARLONGPRESSDATA_OFFSET UNITYSDK_OFFSET(0x1192C910)
#define MOLEMOLE_LINKZONESUBSYSTEM_CLOSEMESSAGELINKZONE_OFFSET UNITYSDK_OFFSET(0x1192B300)
#define MOLEMOLE_LINKZONESUBSYSTEM_CREATEMESSAGELINKZONE_OFFSET UNITYSDK_OFFSET(0x1192B1B0)
#define MOLEMOLE_LINKZONESUBSYSTEM_DESTROYLINKZONEULTINFO_OFFSET UNITYSDK_OFFSET(0x119298B0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERLINKZONESTATE_OFFSET UNITYSDK_OFFSET(0x11927DC0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONEPERFORM_OFFSET UNITYSDK_OFFSET(0x1192AB30)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONETEAMULTPENDING_OFFSET UNITYSDK_OFFSET(0x1192AD90)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONETEAMULT_OFFSET UNITYSDK_OFFSET(0x1192ADD0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONEWAITING_OFFSET UNITYSDK_OFFSET(0x1192ABA0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEOUTZONEENERGYREADY_OFFSET UNITYSDK_OFFSET(0x1192AAA0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEOUTZONENOTENOUGHENERGY_OFFSET UNITYSDK_OFFSET(0x1192AA10)
#define MOLEMOLE_LINKZONESUBSYSTEM_EXITSTATEINZONEWAITING_OFFSET UNITYSDK_OFFSET(0x1192A8A0)
#define MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONEAVATARULTATTACK_OFFSET UNITYSDK_OFFSET(0x11929040)
#define MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONEAVATARULTPERFORM_OFFSET UNITYSDK_OFFSET(0x11928EB0)
#define MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONECOMBOULT_OFFSET UNITYSDK_OFFSET(0x119290D0)
#define MOLEMOLE_LINKZONESUBSYSTEM_FIRELINKZONEAVATARULTEVENT_OFFSET UNITYSDK_OFFSET(0x1192A250)
#define MOLEMOLE_LINKZONESUBSYSTEM_FIRELINKZONESTATECHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x119282A0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETAVATARENTITYBYPEERID_OFFSET UNITYSDK_OFFSET(0x1192B5D0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETAVATARSHOWINFOBYPEERID_OFFSET UNITYSDK_OFFSET(0x1192B360)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETLINKZONEENERGYRATIO_OFFSET UNITYSDK_OFFSET(0x11927C30)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETLINKZONESTATEDECAYTIME_OFFSET UNITYSDK_OFFSET(0x11927910)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETTEAMINDEXBYPEERID_OFFSET UNITYSDK_OFFSET(0x1192B540)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_CURLINKZONEENERGY_OFFSET UNITYSDK_OFFSET(0x119278C0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_CURLINKZONESTATE_OFFSET UNITYSDK_OFFSET(0x11927890)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_ISCOUNTDOWNTIMERBARUISHOW_OFFSET UNITYSDK_OFFSET(0x119278F0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_ISLINKZONEINFOAREAUISHOW_OFFSET UNITYSDK_OFFSET(0x11927900)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_MAXLINKZONEENERGY_OFFSET UNITYSDK_OFFSET(0x119278D0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTELASTPERFORMPEERID_OFFSET UNITYSDK_OFFSET(0x119278A0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTEPERFORMEDPEERIDLIST_OFFSET UNITYSDK_OFFSET(0x119278B0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTESHOWINFOLIST_OFFSET UNITYSDK_OFFSET(0x119278E0)
#define MOLEMOLE_LINKZONESUBSYSTEM_INITLINKZONEULTINFO_OFFSET UNITYSDK_OFFSET(0x119295C0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISINLINKZONEPERFORMSTATE_OFFSET UNITYSDK_OFFSET(0x119277A0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONESHOWQTEHINT_OFFSET UNITYSDK_OFFSET(0x1192C750)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONESKILLBUTTONVALID_OFFSET UNITYSDK_OFFSET(0x1192C6F0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONEULTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x11927320)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISRELAYATTACKAVAILABLE_OFFSET UNITYSDK_OFFSET(0x11926D40)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISSHOWLINKZONEULTQTEHINT_OFFSET UNITYSDK_OFFSET(0x11929AF0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISSHOWRELAYATTACKQTEHINT_OFFSET UNITYSDK_OFFSET(0x11926C20)
#define MOLEMOLE_LINKZONESUBSYSTEM_LOADTEAMEXQTEAVATARTEXTURE_OFFSET UNITYSDK_OFFSET(0x119293A0)
#define MOLEMOLE_LINKZONESUBSYSTEM_MODIFYLINKZONEENERGY_OFFSET UNITYSDK_OFFSET(0x11928840)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1192BC20)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONCOOPREGIONPLAYCHANGE_OFFSET UNITYSDK_OFFSET(0x1192BBD0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONCOOPSETTLEMENTEND_OFFSET UNITYSDK_OFFSET(0x1192C960)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1192C160)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONMPLINKZONEPERFORMEDPLAYERSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x119286C0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONMPLINKZONESTATEENERGYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x11927CA0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONREALSTARTLINKZONEAVATARULT_OFFSET UNITYSDK_OFFSET(0x11929DF0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONSINGLECHARACTEREXITULTPERFORM_OFFSET UNITYSDK_OFFSET(0x1192B8A0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1192C7B0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1192C850)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1192C8B0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1192C4F0)
#define MOLEMOLE_LINKZONESUBSYSTEM_PARSECHANGEENERGYPARAM_OFFSET UNITYSDK_OFFSET(0x11928090)
#define MOLEMOLE_LINKZONESUBSYSTEM_REFRESHINFOAREAUISHOW_OFFSET UNITYSDK_OFFSET(0x1192A670)
#define MOLEMOLE_LINKZONESUBSYSTEM_SETFORCEDISABLELINKZONEULT_OFFSET UNITYSDK_OFFSET(0x11929570)
#define MOLEMOLE_LINKZONESUBSYSTEM_SHOWCOMMONSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x1192BFC0)
#define MOLEMOLE_LINKZONESUBSYSTEM_STARTLINKZONEAVATARULT_OFFSET UNITYSDK_OFFSET(0x11928B30)
#define MOLEMOLE_LINKZONESUBSYSTEM_TICKLINKZONESTATE_OFFSET UNITYSDK_OFFSET(0x1192A610)
#define MOLEMOLE_LINKZONESUBSYSTEM_TICKLONGPRESS_OFFSET UNITYSDK_OFFSET(0x1192C5A0)
#define MOLEMOLE_LINKZONESUBSYSTEM_TICKQTESHOW_OFFSET UNITYSDK_OFFSET(0x1192C650)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYCACHESWITCHAVATARCOMPONENT_OFFSET UNITYSDK_OFFSET(0x119271E0)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYSHOWLINKZONEULTQTEHINT_OFFSET UNITYSDK_OFFSET(0x11929C40)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYSHOWRELAYATTACKQTEHINT_OFFSET UNITYSDK_OFFSET(0x11927090)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYTRIGGERLINKZONEULT_OFFSET UNITYSDK_OFFSET(0x11929D90)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYTRIGGERRELAYATTACK_OFFSET UNITYSDK_OFFSET(0x119277F0)
#define MOLEMOLE_LINKZONESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1192C9C0)
#define MOLEMOLE_LINKZONESUBSYSTEM__STARTLINKZONEAVATARULT_B__45_0_OFFSET UNITYSDK_OFFSET(0x1192C9F0)
#define MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1192CB10)
#define MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1192CBA0)
#define MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1192CC30)

namespace MoleMole
{
	inline static constexpr unsigned int LinkZoneSubSystem_TypeDefinitionIndex = 63317;

	class LinkZoneSubSystem
	{
	public:
		::System::Collections::Generic::List_1<::GKAMNEHCNLP>* _teamExQTEShowInfoList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* _texturePathDict; // 0x18
		::FIHCLCMNKNN* _switchAvatarComponent; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* _cachedTeamExQTEPerformedPeerIDList; // 0x28
		::FHEKHPNMCKF* MessageLinkZone; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _linkZonePerformedPeerIDList; // 0x38
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _assetRequestHandles; // 0x40
		::System::Int32 _cachedTeamExQTELastPerformPeerID; // 0x48
		::System::UInt32 _linkZoneEnergyDecayTime; // 0x4C
		::System::UInt32 _curStateStartTime; // 0x50
		::System::Int32 _cachedTeamExQTECasterPeerID; // 0x54
		::System::Boolean _lastShowLinkZoneUltQTEHint; // 0x58
		::System::Boolean _isForceDisableLinkZoneUlt; // 0x59
		::System::Boolean _isLinkZoneInfoAreaUIShow; // 0x5A
		::System::Boolean _isLocalStartLinkZoneAvatarUlt; // 0x5B
		::System::Int32 _curLinkZoneEnergy; // 0x5C
		::GKJHGODMNHE _cachedTeamExQTEType; // 0x60
		::System::Single _longPressTimer; // 0x64
		::System::Int32 _maxLinkZoneEnergy; // 0x68
		::System::Boolean _isCoopSettlementEnd; // 0x6C
		::System::Boolean _lastShowRelayAttackQTEHint; // 0x6D
		::System::Boolean _isShowCommonSkillButton; // 0x6E
		::System::Boolean _isCountDownTimerBarUIShow; // 0x6F
		::GDEKBFGOGKH _curLinkZoneState; // 0x70
		::System::Int32 _cachedTeamExQTEPosIndex; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowRelayAttackQTEHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISSHOWRELAYATTACKQTEHINT_OFFSET))(this);
		}

		::System::Void TryShowRelayAttackQTEHint(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TRYSHOWRELAYATTACKQTEHINT_OFFSET))(this, show);
		}

		::System::Boolean IsRelayAttackAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISRELAYATTACKAVAILABLE_OFFSET))(this);
		}

		::System::Void TryTriggerRelayAttack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TRYTRIGGERRELAYATTACK_OFFSET))(this);
		}

		::GDEKBFGOGKH get_CurLinkZoneState()
		{
			return ((::GDEKBFGOGKH(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_CURLINKZONESTATE_OFFSET))(this);
		}

		::System::Int32 get_TeamExQTELastPerformPeerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTELASTPERFORMPEERID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_TeamExQTEPerformedPeerIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTEPERFORMEDPEERIDLIST_OFFSET))(this);
		}

		::System::Int32 get_CurLinkZoneEnergy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_CURLINKZONEENERGY_OFFSET))(this);
		}

		::System::Int32 get_MaxLinkZoneEnergy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_MAXLINKZONEENERGY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::GKAMNEHCNLP>* get_TeamExQTEShowInfoList()
		{
			return ((::System::Collections::Generic::List_1<::GKAMNEHCNLP>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTESHOWINFOLIST_OFFSET))(this);
		}

		::System::Boolean get_IsCountDownTimerBarUIShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_ISCOUNTDOWNTIMERBARUISHOW_OFFSET))(this);
		}

		::System::Boolean get_IsLinkZoneInfoAreaUIShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_ISLINKZONEINFOAREAUISHOW_OFFSET))(this);
		}

		::System::Boolean GetLinkZoneStateDecayTime(::System::UInt32& remainingTime, ::System::UInt32& totalTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GETLINKZONESTATEDECAYTIME_OFFSET))(this, remainingTime, totalTime);
		}

		::System::Single GetLinkZoneEnergyRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GETLINKZONEENERGYRATIO_OFFSET))(this);
		}

		::System::Void OnMpLinkZoneStateEnergyScNotify(::MDCFNJGJNLO* notify)
		{
			return ((::System::Void(*)(::PVOID, ::MDCFNJGJNLO*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONMPLINKZONESTATEENERGYSCNOTIFY_OFFSET))(this, notify);
		}

		::System::Void OnMpLinkZonePerformedPlayerScNotify(::LPHFMEGOJDA* notify)
		{
			return ((::System::Void(*)(::PVOID, ::LPHFMEGOJDA*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONMPLINKZONEPERFORMEDPLAYERSCNOTIFY_OFFSET))(this, notify);
		}

		::System::Void ModifyLinkZoneEnergy(::MoleMole::Battle::Entity* entity, ::System::Int32 deltaEnergy, ::System::Int32 operateType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_MODIFYLINKZONEENERGY_OFFSET))(this, entity, deltaEnergy, operateType);
		}

		::System::Void StartLinkZoneAvatarUlt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_STARTLINKZONEAVATARULT_OFFSET))(this);
		}

		::System::Void FinishLinkZoneAvatarUltPerform(::MoleMole::Battle::Entity* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONEAVATARULTPERFORM_OFFSET))(this, avatar);
		}

		::System::Void FinishLinkZoneAvatarUltAttack(::MoleMole::Battle::Entity* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONEAVATARULTATTACK_OFFSET))(this, avatar);
		}

		::System::Void FinishLinkZoneComboUlt(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONECOMBOULT_OFFSET))(this, entity);
		}

		::UnityEngine::Texture2D* LoadTeamExQTEAvatarTexture(::System::String* texturePath)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_LOADTEAMEXQTEAVATARTEXTURE_OFFSET))(this, texturePath);
		}

		::System::Void SetForceDisableLinkZoneUlt(::System::Boolean isForceDisable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_SETFORCEDISABLELINKZONEULT_OFFSET))(this, isForceDisable);
		}

		::System::Void InitLinkZoneUltInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_INITLINKZONEULTINFO_OFFSET))(this);
		}

		::System::Void DestroyLinkZoneUltInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_DESTROYLINKZONEULTINFO_OFFSET))(this);
		}

		::System::Boolean IsShowLinkZoneUltQTEHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISSHOWLINKZONEULTQTEHINT_OFFSET))(this);
		}

		::System::Void TryShowLinkZoneUltQTEHint(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TRYSHOWLINKZONEULTQTEHINT_OFFSET))(this, show);
		}

		::System::Boolean IsInLinkZonePerformState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISINLINKZONEPERFORMSTATE_OFFSET))(this);
		}

		::System::Boolean IsLinkZoneUltAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONEULTAVAILABLE_OFFSET))(this);
		}

		::System::Void TryTriggerLinkZoneUlt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TRYTRIGGERLINKZONEULT_OFFSET))(this);
		}

		::System::Void OnRealStartLinkZoneAvatarUlt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONREALSTARTLINKZONEAVATARULT_OFFSET))(this);
		}

		::System::Void TickLinkZoneState(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TICKLINKZONESTATE_OFFSET))(this, deltaTime);
		}

		::System::Void EnterLinkZoneState(::GDEKBFGOGKH linkZoneState, ::MDCFNJGJNLO* notify)
		{
			return ((::System::Void(*)(::PVOID, ::GDEKBFGOGKH, ::MDCFNJGJNLO*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERLINKZONESTATE_OFFSET))(this, linkZoneState, notify);
		}

		::System::Void EnterStateOutZoneNotEnoughEnergy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEOUTZONENOTENOUGHENERGY_OFFSET))(this);
		}

		::System::Void EnterStateOutZoneEnergyReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEOUTZONEENERGYREADY_OFFSET))(this);
		}

		::System::Void ParseChangeEnergyParam(::MDCFNJGJNLO* notify)
		{
			return ((::System::Void(*)(::PVOID, ::MDCFNJGJNLO*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_PARSECHANGEENERGYPARAM_OFFSET))(this, notify);
		}

		::System::Void EnterStateInZonePerform(::MDCFNJGJNLO* notify)
		{
			return ((::System::Void(*)(::PVOID, ::MDCFNJGJNLO*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONEPERFORM_OFFSET))(this, notify);
		}

		::System::Void CreateMessageLinkZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_CREATEMESSAGELINKZONE_OFFSET))(this);
		}

		::System::Void CloseMessageLinkZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_CLOSEMESSAGELINKZONE_OFFSET))(this);
		}

		::System::Void EnterStateInZoneWaiting(::MDCFNJGJNLO* notify)
		{
			return ((::System::Void(*)(::PVOID, ::MDCFNJGJNLO*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONEWAITING_OFFSET))(this, notify);
		}

		::System::Void ExitStateInZoneWaiting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_EXITSTATEINZONEWAITING_OFFSET))(this);
		}

		::System::Void EnterStateInZoneTeamUltPending()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONETEAMULTPENDING_OFFSET))(this);
		}

		::System::Void EnterStateInZoneTeamUlt(::MDCFNJGJNLO* notify)
		{
			return ((::System::Void(*)(::PVOID, ::MDCFNJGJNLO*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONETEAMULT_OFFSET))(this, notify);
		}

		static ::System::UInt32 GetTeamIndexByPeerID(::System::Int32 peerID)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GETTEAMINDEXBYPEERID_OFFSET))(peerID);
		}

		static ::MoleMole::Battle::Entity* GetAvatarEntityByPeerID(::System::Int32 peerID)
		{
			return ((::MoleMole::Battle::Entity*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GETAVATARENTITYBYPEERID_OFFSET))(peerID);
		}

		::GKAMNEHCNLP GetAvatarShowInfoByPeerID(::System::Int32 peerID)
		{
			return ((::GKAMNEHCNLP(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GETAVATARSHOWINFOBYPEERID_OFFSET))(this, peerID);
		}

		::System::Void FireLinkZoneStateChangedEvent(::GDEKBFGOGKH state, ::GKJHGODMNHE teamExQTEType, ::System::Int32 casterPeerID, ::BPEICFCFGEM subState, ::System::Int32 teamExQTEPosIndex)
		{
			return ((::System::Void(*)(::PVOID, ::GDEKBFGOGKH, ::GKJHGODMNHE, ::System::Int32, ::BPEICFCFGEM, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_FIRELINKZONESTATECHANGEDEVENT_OFFSET))(this, state, teamExQTEType, casterPeerID, subState, teamExQTEPosIndex);
		}

		::System::Void FireLinkZoneAvatarUltEvent(::System::Boolean isStart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_FIRELINKZONEAVATARULTEVENT_OFFSET))(this, isStart);
		}

		::System::Void OnSingleCharacterExitUltPerform(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONSINGLECHARACTEREXITULTPERFORM_OFFSET))(this, obj);
		}

		::System::Void OnCoopRegionPlayChange(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONCOOPREGIONPLAYCHANGE_OFFSET))(this, obj);
		}

		::System::Void RefreshInfoAreaUIShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_REFRESHINFOAREAUISHOW_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean IsLinkZoneSkillButtonValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONESKILLBUTTONVALID_OFFSET))(this);
		}

		::System::Boolean IsLinkZoneShowQTEHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONESHOWQTEHINT_OFFSET))(this);
		}

		::System::Void OnSkillButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONCLICK_OFFSET))(this);
		}

		::System::Void OnSkillButtonDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONDOWN_OFFSET))(this);
		}

		::System::Void OnSkillButtonUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONUP_OFFSET))(this);
		}

		::System::Void TryCacheSwitchAvatarComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TRYCACHESWITCHAVATARCOMPONENT_OFFSET))(this);
		}

		::System::Void ShowCommonSkillButton(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_SHOWCOMMONSKILLBUTTON_OFFSET))(this, isShow);
		}

		::System::Void ClearLongPressData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_CLEARLONGPRESSDATA_OFFSET))(this);
		}

		::System::Void TickLongPress(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TICKLONGPRESS_OFFSET))(this, deltaTime);
		}

		::System::Void TickQTEShow(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TICKQTESHOW_OFFSET))(this, deltaTime);
		}

		::System::Void OnCoopSettlementEnd(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONCOOPSETTLEMENTEND_OFFSET))(this, obj);
		}

		::System::Void _StartLinkZoneAvatarUlt_b__45_0(::OAEFGCLEHHO* msg)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM__STARTLINKZONEAVATARULT_B__45_0_OFFSET))(this, msg);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
