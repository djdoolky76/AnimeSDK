#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGHIBGDMLLG.h"
#include "unitysdk/GOLNLIBBDPK.h"
#include "unitysdk/KIHLDBBKGKK.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class BFLPANDDGHG;
class ENGKPGFGGLM;
class HJDNNLKBHBA;
class JFIELJCMBBD;
class LCEPCKCGMMC;
class MDAMGPDGAFB;
class MFBKLAENAEC;
class NHJAIJHBAAO;
class NLNIIPDCABP;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDBONUSSCORE_OFFSET UNITYSDK_OFFSET(0x163DC5C0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDCOMBO_OFFSET UNITYSDK_OFFSET(0x163DC710)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDFEVER_OFFSET UNITYSDK_OFFSET(0x163E0470)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDMISSCOMBO_OFFSET UNITYSDK_OFFSET(0x163E0B70)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDSCORE_OFFSET UNITYSDK_OFFSET(0x163E02A0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKBONUSBREAK_OFFSET UNITYSDK_OFFSET(0x163DF170)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKDECREASEFEVER_OFFSET UNITYSDK_OFFSET(0x163DEE80)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKFEVERMAX_OFFSET UNITYSDK_OFFSET(0x163E0ED0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CLEARCOMBO_OFFSET UNITYSDK_OFFSET(0x163E0A40)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CLEARMISSCOMBO_OFFSET UNITYSDK_OFFSET(0x163E0BD0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DEALDISPLAYDELAYPREPLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x163E08D0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DEALDISPLAYDELAYSTOPTIMELINE_OFFSET UNITYSDK_OFFSET(0x163E09B0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DOCHECK_OFFSET UNITYSDK_OFFSET(0x163E12B0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DOPAUSE_OFFSET UNITYSDK_OFFSET(0x163DC9F0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DORESUME_OFFSET UNITYSDK_OFFSET(0x163DCBA0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_CONSTMAP_OFFSET UNITYSDK_OFFSET(0x163DBD40)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_ISINBONUS_OFFSET UNITYSDK_OFFSET(0x163DBD20)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_ISINFEVER_OFFSET UNITYSDK_OFFSET(0x163DBD00)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_INITCONDITIONDATA_OFFSET UNITYSDK_OFFSET(0x163DF320)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x163DBE80)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONAVATARHPCHANGE_OFFSET UNITYSDK_OFFSET(0x163DC870)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x163DBE10)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONBONUSTIMESTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x163E0610)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONBTNCLICK_OFFSET UNITYSDK_OFFSET(0x163DF8E0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONCOMBOCOUNTCHANGE_OFFSET UNITYSDK_OFFSET(0x163E0D90)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x163DCE80)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONENTERBONUS_OFFSET UNITYSDK_OFFSET(0x163E0840)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x163DC920)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONFEVERCOUNTCHANGE_OFFSET UNITYSDK_OFFSET(0x163E1220)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x163DC430)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONMISSCOUNTCHANGE_OFFSET UNITYSDK_OFFSET(0x163E0E30)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONPLAYOVER_OFFSET UNITYSDK_OFFSET(0x163DF890)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x163DE7B0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_PREDEALTRACKNEW_OFFSET UNITYSDK_OFFSET(0x163DD960)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTERENTITYPROPERTYCB_OFFSET UNITYSDK_OFFSET(0x163DCE10)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x163DC180)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTERTASK_OFFSET UNITYSDK_OFFSET(0x163DD1B0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SENDRESULT_OFFSET UNITYSDK_OFFSET(0x163E0050)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SET_ISINBONUS_OFFSET UNITYSDK_OFFSET(0x163DBD30)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SET_ISINFEVER_OFFSET UNITYSDK_OFFSET(0x163DBD10)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKCLOSEEVADE_OFFSET UNITYSDK_OFFSET(0x163DECB0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKHINT_OFFSET UNITYSDK_OFFSET(0x163DEB30)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKMISS_OFFSET UNITYSDK_OFFSET(0x163DED70)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKOPENEVADE_OFFSET UNITYSDK_OFFSET(0x163DEBF0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x163E15C0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x163E1440)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__ONANIMATORZONECHANGED_OFFSET UNITYSDK_OFFSET(0x163E0C30)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x163E15E0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x163E1670)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x163E1700)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x163E1790)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x163E1820)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MusicBattleSubSystem_TypeDefinitionIndex = 38888;

	class MusicBattleSubSystem
	{
	public:
		static ::System::Single* StaticGet_displayDelay()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xDAD0);
		}
		static ::System::Single* StaticGet_feverDecayPerSecond()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xDAD4);
		}
		static ::System::Single* StaticGet_tipDelayTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xDAD8);
		}
		static ::System::Single* StaticGet_missTimeDelta()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xDADC);
		}
		static ::System::Single* StaticGet_perfectTimeDelta()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xDAE0);
		}
		static ::System::Single* StaticGet_dodgeWindow()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xDAE4);
		}
		static ::System::Single* StaticGet_inputDelay()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xDAE8);
		}
		static ::System::Single* StaticGet_tempSpeedUpRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xDAEC);
		}
		::System::Collections::Generic::List_1<::System::Object*>* LevelPressInfoList; // 0x10
		::System::Action_1<::System::Single>* Tick; // 0x18
		::NLNIIPDCABP* cachedBonusLocalAvatarAnimatorComponent; // 0x20
		::BFLPANDDGHG* localAvatarFighter; // 0x28
		::NHJAIJHBAAO* curStageConfigTemplate; // 0x30
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MusicBattleMarkerNodeType, ::MoleMole::LogicButtonInputType>* markerToButtonInputDict; // 0x38
		::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::MusicBattleMarkerNodeType>* inputColorDict; // 0x40
		::LCEPCKCGMMC* musicBattleStatisticData; // 0x48
		::MFBKLAENAEC* curTask; // 0x50
		::BFLPANDDGHG* bossFighter; // 0x58
		::System::Collections::Generic::Dictionary_2<::KIHLDBBKGKK, ::System::Collections::Generic::List_1<::JFIELJCMBBD*>*>* conditionMap; // 0x60
		::AGHIBGDMLLG curStatus; // 0x68
		::System::Int32 curCheckIndex; // 0x6C
		::System::Double curTimelineTime; // 0x70
		::System::Single maxFever; // 0x78
		::System::Byte _padding0[0x4];
		::System::Double curTime; // 0x80
		::System::Int32 curHintIndex; // 0x88
		::System::Int32 curCheckOpenIndex; // 0x8C
		::System::Boolean _isInFever_k__BackingField; // 0x90
		::System::Boolean isTimelineSpeedUp; // 0x91
		::System::Byte _padding1[0x2];
		::System::Int32 curCheckCloseIndex; // 0x94
		::System::Single curFever; // 0x98
		::System::UInt32 firstLocalAvatarEntityID; // 0x9C
		::System::UInt32 curMusicPlayingID; // 0xA0
		::System::Boolean isLastPause; // 0xA4
		::System::Boolean hasAddedAnimatorCB; // 0xA5
		::System::Boolean _isInBonus_k__BackingField; // 0xA6
		::System::Byte _padding2[0x1];
		::System::UInt32 bossFightID; // 0xA8
		::System::UInt32 curMusicPendingID; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Boolean get_isInFever()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_ISINFEVER_OFFSET))(this);
		}

		::System::Void set_isInFever(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SET_ISINFEVER_OFFSET))(this, value);
		}

		::System::Boolean get_isInBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_ISINBONUS_OFFSET))(this);
		}

		::System::Void set_isInBonus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SET_ISINBONUS_OFFSET))(this, value);
		}

		::MDAMGPDGAFB* get_ConstMap()
		{
			return ((::MDAMGPDGAFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_CONSTMAP_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnFighter_PropertyValueChanged(::System::UInt32 FighterId, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, FighterId, type, customType, oldValue, newValue);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void RegisterEntityPropertyCB(::HJDNNLKBHBA* characterDataComponent)
		{
			return ((::System::Void(*)(::PVOID, ::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTERENTITYPROPERTYCB_OFFSET))(this, characterDataComponent);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterTask(::MFBKLAENAEC* task, ::System::UInt32 musicPendingID)
		{
			return ((::System::Void(*)(::PVOID, ::MFBKLAENAEC*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTERTASK_OFFSET))(this, task, musicPendingID);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_INIT_OFFSET))(this);
		}

		::System::Void OnPlayOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONPLAYOVER_OFFSET))(this);
		}

		::System::Void OnBtnClick(::MoleMole::LogicButtonInputType type, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONBTNCLICK_OFFSET))(this, type, callback);
		}

		::System::Void OnBonusTimeStatusChanged(::System::Boolean isEnter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONBONUSTIMESTATUSCHANGED_OFFSET))(this, isEnter);
		}

		::System::Void DealDisplayDelayPreplayTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DEALDISPLAYDELAYPREPLAYTIMELINE_OFFSET))(this);
		}

		::System::Void DealDisplayDelayStopTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DEALDISPLAYDELAYSTOPTIMELINE_OFFSET))(this);
		}

		::System::Void UpdateCheckHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKHINT_OFFSET))(this);
		}

		::System::Void UpdateCheckOpenEvade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKOPENEVADE_OFFSET))(this);
		}

		::System::Void UpdateCheckCloseEvade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKCLOSEEVADE_OFFSET))(this);
		}

		::System::Void UpdateCheckMiss()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKMISS_OFFSET))(this);
		}

		::System::Void SendResult(::GOLNLIBBDPK result, ::System::Single waitTime)
		{
			return ((::System::Void(*)(::PVOID, ::GOLNLIBBDPK, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SENDRESULT_OFFSET))(this, result, waitTime);
		}

		::System::Void DoPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DOPAUSE_OFFSET))(this);
		}

		::System::Void DoResume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DORESUME_OFFSET))(this);
		}

		::System::Void CheckBonusBreak()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKBONUSBREAK_OFFSET))(this);
		}

		::System::Void _OnAnimatorZoneChanged(::UnityEngine::AnimatorStateInfo from, ::UnityEngine::AnimatorStateInfo to, ::System::Int32 layerIndex, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__ONANIMATORZONECHANGED_OFFSET))(this, from, to, layerIndex, entityID);
		}

		::System::Void AddBonusScore(::System::Double deltaHp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDBONUSSCORE_OFFSET))(this, deltaHp);
		}

		::System::Void AddScore(::System::Single score, ::System::Boolean isBonus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDSCORE_OFFSET))(this, score, isBonus);
		}

		::System::Void AddCombo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDCOMBO_OFFSET))(this);
		}

		::System::Void ClearCombo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CLEARCOMBO_OFFSET))(this);
		}

		::System::Void AddMissCombo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDMISSCOMBO_OFFSET))(this);
		}

		::System::Void ClearMissCombo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CLEARMISSCOMBO_OFFSET))(this);
		}

		::System::Void AddFever(::System::Single feverScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDFEVER_OFFSET))(this, feverScore);
		}

		::System::Void CheckFeverMax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKFEVERMAX_OFFSET))(this);
		}

		::System::Void CheckDecreaseFever(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKDECREASEFEVER_OFFSET))(this, dt);
		}

		::System::Void PreDealTrackNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_PREDEALTRACKNEW_OFFSET))(this);
		}

		::System::Void InitConditionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_INITCONDITIONDATA_OFFSET))(this);
		}

		::System::Void DoCheck(::KIHLDBBKGKK type, ::System::Object* val)
		{
			return ((::System::Void(*)(::PVOID, ::KIHLDBBKGKK, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DOCHECK_OFFSET))(this, type, val);
		}

		::System::Void OnComboCountChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONCOMBOCOUNTCHANGE_OFFSET))(this);
		}

		::System::Void OnFeverCountChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONFEVERCOUNTCHANGE_OFFSET))(this);
		}

		::System::Void OnMissCountChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONMISSCOUNTCHANGE_OFFSET))(this);
		}

		::System::Void OnAvatarHpChange(::System::Double percent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONAVATARHPCHANGE_OFFSET))(this, percent);
		}

		::System::Void OnEnterBonus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONENTERBONUS_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::ENGKPGFGGLM* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
