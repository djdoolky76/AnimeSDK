#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLLLACFEBJF.h"
#include "unitysdk/FNLJPBBJIKB.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/GCOAPBFEBJG.h"
#include "unitysdk/HLHMPCIPHJK.h"
#include "unitysdk/MCKCKBEGCCM.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/BigSceneMiscLogicSubSystem_StoryModeMonsterAdjustmentFlags.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/MoleMole/BigSceneCommonSkillConfig.h"

class ELCCFMJIIPD;
class ENGKPGFGGLM;
class FGECBJCAGBC;
class FHKFHJFLFDC;
class GINHAMIGDNA;
class IFLPGOKHDJI;
class JELKKOLENHM;
class KCMDAAABPJC;
namespace MoleMole { class BigSceneMiscLogicSubSystem_BigSceneCommonSkill; }
namespace MoleMole { class BigSceneMiscLogicSubSystem_DebugView; }
namespace MoleMole { class BigSceneMiscLogicSubSystem_HiddenRenderLayer; }
namespace MoleMole { class BigSceneMiscLogicSubSystem_TwoGroupsVisibility; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class CNKGGMABMGE_2;

#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ADDCOMMONSKILLRUNTIMETAG_OFFSET UNITYSDK_OFFSET(0x131C1B30)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ADDSKILL_OFFSET UNITYSDK_OFFSET(0x131C1770)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENETELEPORTFADEOUTBEGIN_OFFSET UNITYSDK_OFFSET(0x131BC0C0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENETELEPORTFADEOUTEND_OFFSET UNITYSDK_OFFSET(0x131BC2A0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CALLSIMPLEMOVETASKCALLBACK_OFFSET UNITYSDK_OFFSET(0x131C0D90)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CHECKISCURRTRACKEDQUESTSTORYMODELOCKED_OFFSET UNITYSDK_OFFSET(0x131BC920)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CLEARHIDDENRENDERLAYERON_OFFSET UNITYSDK_OFFSET(0x131BB710)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CLEARTWOGROUPSVISIBILITY_OFFSET UNITYSDK_OFFSET(0x131BB760)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_COMMONSKILLONAWAKE_OFFSET UNITYSDK_OFFSET(0x131BB190)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_COMMONSKILLONDESTROY_OFFSET UNITYSDK_OFFSET(0x131BB7B0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DISPATCHABILITYEVENT_OFFSET UNITYSDK_OFFSET(0x131BD0E0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DISPATCHGROUPABILITYEVENT_OFFSET UNITYSDK_OFFSET(0x131BD2E0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ENTERBATTLESTATISTICS_OFFSET UNITYSDK_OFFSET(0x131BE1E0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_EXITBATTLESTATISTICS_OFFSET UNITYSDK_OFFSET(0x131BE780)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_FLIPBATTLESTATISTICSWHENTEAMRELOAD_OFFSET UNITYSDK_OFFSET(0x131C0370)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETACTIVATEDCOMMONSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x131C1D50)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETLOADINGPAGETIPSTITLEBYTRANSITIONID_OFFSET UNITYSDK_OFFSET(0x131BC4A0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETMAXACCUMULATIONADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x131BCC00)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETPROPERTYADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x131BC6C0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETSTORYMODEMONSTERADJUSTMENTFLAGS_OFFSET UNITYSDK_OFFSET(0x131BC660)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GET_LASTTELEPORTEVENT_OFFSET UNITYSDK_OFFSET(0x131BC480)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_HASINBATTLEENEMYMONSTERALIVE_OFFSET UNITYSDK_OFFSET(0x131BFEB0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONANYSIMPLEMOVETASKFINISHED_OFFSET UNITYSDK_OFFSET(0x131BEB20)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x131BB0E0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x131BB470)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONDYNAMICEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x131BEBC0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONENTITYENTERBATTLESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x131BE900)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x131BDB60)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONTELEPORTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x131BB850)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPHIDDENRENDERLAYERON_OFFSET UNITYSDK_OFFSET(0x131C0F70)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPSCENEGAMEOBJECTSSWITCHER_OFFSET UNITYSDK_OFFSET(0x131C14A0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPTWOGROUPSVISIBILITY_OFFSET UNITYSDK_OFFSET(0x131C1050)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_PUSHHIDDENRENDERLAYERON_OFFSET UNITYSDK_OFFSET(0x131C0F00)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_PUSHSCENEGAMEOBJECTSSWITCHER_OFFSET UNITYSDK_OFFSET(0x131C10C0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_PUSHTWOGROUPSVISIBILITY_OFFSET UNITYSDK_OFFSET(0x131C0FE0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REFRESHACTIVATEDSKILL_OFFSET UNITYSDK_OFFSET(0x131C1A70)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTERABILITYEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x131BCEE0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTERBASEEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x131BEF60)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x131BD530)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REMOVECOMMONSKILLRUNTIMETAG_OFFSET UNITYSDK_OFFSET(0x131C1CD0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REMOVESIMPLEMOVETASKGRAPHCALLBACK_OFFSET UNITYSDK_OFFSET(0x131C0A60)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REMOVESKILL_OFFSET UNITYSDK_OFFSET(0x131C18E0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SENDTELEPORTEVENT_OFFSET UNITYSDK_OFFSET(0x131BBAA0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SETSIMPLEMOVETASKGRAPHCALLBACK_OFFSET UNITYSDK_OFFSET(0x131C08B0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SET_LASTTELEPORTEVENT_OFFSET UNITYSDK_OFFSET(0x131BC490)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SHOWTELEPORTPOINTNAMETIP_OFFSET UNITYSDK_OFFSET(0x131BC560)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SPECIALCOOPUPLOADSTATISTICS_OFFSET UNITYSDK_OFFSET(0x131C0120)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_TRYSHOWTELEPORTPOINTNAMETIP_OFFSET UNITYSDK_OFFSET(0x131BB930)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_UNREGISTERABILITYEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x131BD050)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_UNREGISTERBASEEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x131BF6B0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x131BD8C0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x131C1DB0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__GENUPLOAD_OFFSET UNITYSDK_OFFSET(0x131BFDB0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__SENDAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0x131BCDA0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x131C21A0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x131C2230)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x131C22C0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x131C2350)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x131C23E0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneMiscLogicSubSystem_TypeDefinitionIndex = 39720;

	class BigSceneMiscLogicSubSystem
	{
	public:
		// static const ::System::String* PassTimeRecordReasonEnterBattleStatistics; // 0x0
		::MoleMole::BigSceneMiscLogicSubSystem_DebugView* _debugView; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::ValueTuple_3<::Foundation::ViewObject::ViewObjectHandle, ::System::Int32, ::System::Action*>>* _simpleMoveTaskGraphCallbacks; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _inBattleMonsters; // 0x20
		::MoleMole::BigSceneMiscLogicSubSystem_TwoGroupsVisibility* _twoGroupsVisibility; // 0x28
		::MoleMole::BigSceneMiscLogicSubSystem_BigSceneCommonSkill* _activatedSkill; // 0x30
		::MoleMole::BigSceneMiscLogicSubSystem_HiddenRenderLayer* _hiddenRenderLayer; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::KCMDAAABPJC*>* SceneGameObjectsSwitchers; // 0x40
		::MoleMole::EntityHandle _localAvatar; // 0x48
		::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* _runtimeTags; // 0x58
		::System::Collections::Generic::List_1<::System::Object*>* _skills; // 0x60
		::CNKGGMABMGE_2<::System::UInt16, ::HLHMPCIPHJK>* _dynamicEventListenerMap; // 0x68
		::System::Action_1<::ENGKPGFGGLM*>* _dynamicEventDelegate; // 0x70
		::System::Collections::Generic::List_1<::IFLPGOKHDJI*>* _abilityEventListenerMap; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* SceneGameObjectsSwitcherStack; // 0x80
		::System::Boolean _isInBattle; // 0x88
		::MoleMole::BigSceneMiscLogicSubSystem_StoryModeMonsterAdjustmentFlags _storyModeMonsterAdjustmentFlags; // 0x89
		::System::Byte _padding0[0x5];
		::MCKCKBEGCCM _cachedEventMask; // 0x90
		::System::Int32 _teleportNewsBubbleTipID; // 0xD0
		::System::ValueTuple_2<::DLLLACFEBJF, ::System::Int32> _LastTeleportEvent_k__BackingField; // 0xD4
		::System::Byte _padding1[0x4];
		::MCKCKBEGCCM _dynamicEventMask; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTeleportCompleted(::FGECBJCAGBC* teleportInstance)
		{
			return ((::System::Void(*)(::PVOID, ::FGECBJCAGBC*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONTELEPORTCOMPLETED_OFFSET))(this, teleportInstance);
		}

		::System::Void BigSceneTeleportFadeOutBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENETELEPORTFADEOUTBEGIN_OFFSET))(this);
		}

		::System::Void BigSceneTeleportFadeOutEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_BIGSCENETELEPORTFADEOUTEND_OFFSET))(this);
		}

		::System::ValueTuple_2<::DLLLACFEBJF, ::System::Int32> get_LastTeleportEvent()
		{
			return ((::System::ValueTuple_2<::DLLLACFEBJF, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GET_LASTTELEPORTEVENT_OFFSET))(this);
		}

		::System::Void set_LastTeleportEvent(::System::ValueTuple_2<::DLLLACFEBJF, ::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::DLLLACFEBJF, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SET_LASTTELEPORTEVENT_OFFSET))(this, value);
		}

		::System::Void SendTeleportEvent(::DLLLACFEBJF graphEvent, ::System::Int32 teleportID)
		{
			return ((::System::Void(*)(::PVOID, ::DLLLACFEBJF, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SENDTELEPORTEVENT_OFFSET))(this, graphEvent, teleportID);
		}

		::System::Void TryShowTeleportPointNameTip(::FGECBJCAGBC* teleportInstance)
		{
			return ((::System::Void(*)(::PVOID, ::FGECBJCAGBC*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_TRYSHOWTELEPORTPOINTNAMETIP_OFFSET))(this, teleportInstance);
		}

		static ::System::String* GetLoadingPageTipsTitleByTransitionID(::System::Int32 transitionID)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETLOADINGPAGETIPSTITLEBYTRANSITIONID_OFFSET))(transitionID);
		}

		static ::System::Void ShowTeleportPointNameTip(::System::Int32 tipID, ::System::String* teleportPointName)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SHOWTELEPORTPOINTNAMETIP_OFFSET))(tipID, teleportPointName);
		}

		::MoleMole::BigSceneMiscLogicSubSystem_StoryModeMonsterAdjustmentFlags GetStoryModeMonsterAdjustmentFlags(::System::Boolean reset)
		{
			return ((::MoleMole::BigSceneMiscLogicSubSystem_StoryModeMonsterAdjustmentFlags(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETSTORYMODEMONSTERADJUSTMENTFLAGS_OFFSET))(this, reset);
		}

		::System::Single GetPropertyAdjustment(::MoleMole::Config::BaseProperty property)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETPROPERTYADJUSTMENT_OFFSET))(this, property);
		}

		::System::Single GetMaxAccumulationAdjustment()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETMAXACCUMULATIONADJUSTMENT_OFFSET))(this);
		}

		static ::System::Boolean CheckIsCurrTrackedQuestStoryModeLocked(::FHKFHJFLFDC*& curPresetRule, ::System::Boolean isStrict)
		{
			return ((::System::Boolean(*)(::FHKFHJFLFDC*&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CHECKISCURRTRACKEDQUESTSTORYMODELOCKED_OFFSET))(curPresetRule, isStrict);
		}

		::System::Void _SendAvatarChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__SENDAVATARCHANGE_OFFSET))(this);
		}

		::System::Void RegisterAbilityEventListener(::IFLPGOKHDJI* listener)
		{
			return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTERABILITYEVENTLISTENER_OFFSET))(this, listener);
		}

		::System::Void UnregisterAbilityEventListener(::IFLPGOKHDJI* listener)
		{
			return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_UNREGISTERABILITYEVENTLISTENER_OFFSET))(this, listener);
		}

		::System::Void DispatchAbilityEvent(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DISPATCHABILITYEVENT_OFFSET))(this, eventName);
		}

		::System::Void DispatchGroupAbilityEvent(::MoleMole::EntityHandle entity, ::Foundation::ViewObject::ViewObjectHandle viewObject, ::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DISPATCHGROUPABILITYEVENT_OFFSET))(this, entity, viewObject, eventName);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnDynamicEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONDYNAMICEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void RegisterBaseEventListener(::HLHMPCIPHJK listener)
		{
			return ((::System::Void(*)(::PVOID, ::HLHMPCIPHJK))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REGISTERBASEEVENTLISTENER_OFFSET))(this, listener);
		}

		::System::Void UnregisterBaseEventListener(::HLHMPCIPHJK listener)
		{
			return ((::System::Void(*)(::PVOID, ::HLHMPCIPHJK))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_UNREGISTERBASEEVENTLISTENER_OFFSET))(this, listener);
		}

		::System::Void EnterBattleStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ENTERBATTLESTATISTICS_OFFSET))(this);
		}

		::System::Void ExitBattleStatistics(::System::Boolean avatarAllKilled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_EXITBATTLESTATISTICS_OFFSET))(this, avatarAllKilled);
		}

		::System::ValueTuple_2<::GINHAMIGDNA*, ::GCOAPBFEBJG> _GenUpload(::System::Boolean avatarAllKilled)
		{
			return ((::System::ValueTuple_2<::GINHAMIGDNA*, ::GCOAPBFEBJG>(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM__GENUPLOAD_OFFSET))(this, avatarAllKilled);
		}

		::System::Void SpecialCoopUploadStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SPECIALCOOPUPLOADSTATISTICS_OFFSET))(this);
		}

		::System::Void FlipBattleStatisticsWhenTeamReload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_FLIPBATTLESTATISTICSWHENTEAMRELOAD_OFFSET))(this);
		}

		::System::Void OnEntityEnterBattleStateChanged(::ELCCFMJIIPD* evtEnterBattleStateChange)
		{
			return ((::System::Void(*)(::PVOID, ::ELCCFMJIIPD*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONENTITYENTERBATTLESTATECHANGED_OFFSET))(this, evtEnterBattleStateChange);
		}

		::System::Boolean HasInBattleEnemyMonsterAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_HASINBATTLEENEMYMONSTERALIVE_OFFSET))(this);
		}

		::System::Void SetSimpleMoveTaskGraphCallback(::Foundation::ViewObject::ViewObjectHandle graphVo, ::System::Int32 graphID, ::System::Object* task, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Int32, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SETSIMPLEMOVETASKGRAPHCALLBACK_OFFSET))(this, graphVo, graphID, task, callback);
		}

		::System::Void RemoveSimpleMoveTaskGraphCallback(::System::Int32 graphID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REMOVESIMPLEMOVETASKGRAPHCALLBACK_OFFSET))(this, graphID);
		}

		::System::Void CallSimpleMoveTaskCallback(::System::Object* task, ::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CALLSIMPLEMOVETASKCALLBACK_OFFSET))(this, task, success);
		}

		::System::Void OnAnySimpleMoveTaskFinished(::JELKKOLENHM* simpleMoveFinished)
		{
			return ((::System::Void(*)(::PVOID, ::JELKKOLENHM*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ONANYSIMPLEMOVETASKFINISHED_OFFSET))(this, simpleMoveFinished);
		}

		::System::Void PushHiddenRenderLayerOn(::System::UInt32 groupID, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_PUSHHIDDENRENDERLAYERON_OFFSET))(this, groupID, tag);
		}

		::System::Void PopHiddenRenderLayerOn(::System::UInt32 groupID, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPHIDDENRENDERLAYERON_OFFSET))(this, groupID, tag);
		}

		::System::Void ClearHiddenRenderLayerOn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CLEARHIDDENRENDERLAYERON_OFFSET))(this);
		}

		::System::Void PushTwoGroupsVisibility(::System::UInt32 groupID, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_PUSHTWOGROUPSVISIBILITY_OFFSET))(this, groupID, tag);
		}

		::System::Void PopTwoGroupsVisibility(::System::UInt32 groupID, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPTWOGROUPSVISIBILITY_OFFSET))(this, groupID, tag);
		}

		::System::Void ClearTwoGroupsVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_CLEARTWOGROUPSVISIBILITY_OFFSET))(this);
		}

		::System::UInt32 PushSceneGameObjectsSwitcher(::System::String* key, ::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_PUSHSCENEGAMEOBJECTSSWITCHER_OFFSET))(this, key, index);
		}

		::System::Void PopSceneGameObjectsSwitcher(::System::UInt32 pushIdx, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_POPSCENEGAMEOBJECTSSWITCHER_OFFSET))(this, pushIdx, key);
		}

		::System::Void AddSkill(::Foundation::Unreal::FGameplayTag tag, ::MoleMole::BigSceneCommonSkillConfig skill)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::MoleMole::BigSceneCommonSkillConfig))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ADDSKILL_OFFSET))(this, tag, skill);
		}

		::System::Void RemoveSkill(::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REMOVESKILL_OFFSET))(this, tag);
		}

		::System::Void RefreshActivatedSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REFRESHACTIVATEDSKILL_OFFSET))(this);
		}

		::System::Void CommonSkillOnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_COMMONSKILLONAWAKE_OFFSET))(this);
		}

		::System::Void CommonSkillOnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_COMMONSKILLONDESTROY_OFFSET))(this);
		}

		::System::Void AddCommonSkillRuntimeTag(::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_ADDCOMMONSKILLRUNTIMETAG_OFFSET))(this, tag);
		}

		::System::Void RemoveCommonSkillRuntimeTag(::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_REMOVECOMMONSKILLRUNTIMETAG_OFFSET))(this, tag);
		}

		::FNLJPBBJIKB GetActivatedCommonSkillType()
		{
			return ((::FNLJPBBJIKB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_GETACTIVATEDCOMMONSKILLTYPE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::ENGKPGFGGLM* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
