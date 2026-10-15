#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFJJFFMMEAF.h"
#include "unitysdk/KCNLLMOFJNM.h"
#include "unitysdk/LOENGBEIDGC.h"
#include "unitysdk/NBGKOOOJADJ.h"
#include "unitysdk/RPG/GameCore/AdventureAbilityProperty.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/AdventureModifierEvent.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/ForbidSelectReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/ModifierHitEffectStacking.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/PropertyStacking.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/MVector3.h"
class AEEKMHCMBPL;
class AFMFOKIJCFE;
class BJLOENPDAHE;
class CEMCMKJJFPE;
class CFNCLABDJMB;
class EKFMIDBJDIA;
class FODPNNIJCJI;
class FOOIINCDBFA;
class GKMKOMHLGDC;
class LPNPMKNMMOK;
class NOEBJBDLNGN;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class AdventureModifierConfig; }
namespace RPG::GameCore { class AdventureModifierInitParams; }
namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameComponentBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ADDABILITY_OFFSET UNITYSDK_OFFSET(0xE546090)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ADDADDITIONALIMMUNEBEHAVIORFLAG_OFFSET UNITYSDK_OFFSET(0xE544C40)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ADDGLOBALWEAKNESS_OFFSET UNITYSDK_OFFSET(0xE547BE0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CCTOR_OFFSET UNITYSDK_OFFSET(0xE54B3C0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CHECKCANADDMODIFIER_OFFSET UNITYSDK_OFFSET(0xE545050)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CLEARADVANCEPERFORMRECORD_OFFSET UNITYSDK_OFFSET(0xE542C60)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_COMPAREFIRSTADVANCEPERFORMBUFFINFO_OFFSET UNITYSDK_OFFSET(0xE5429D0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CONFIRMFIRSTADVANCEPERFORMBUFFINFO_OFFSET UNITYSDK_OFFSET(0xE542AE0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE53FB20)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xE541F50)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_2_OFFSET UNITYSDK_OFFSET(0xE541E30)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_OFFSET UNITYSDK_OFFSET(0xE541DB0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE53FE30)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ENTERTEMPTERFACETOTARGET_OFFSET UNITYSDK_OFFSET(0xE5476B0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ENTERTEMPTER_OFFSET UNITYSDK_OFFSET(0xE547530)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_EXITTEMPTER_OFFSET UNITYSDK_OFFSET(0xE547A50)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FINDMODIFIERINSTANCES_OFFSET UNITYSDK_OFFSET(0xE541CA0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FINDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xE541BE0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FORCEUPDATEBUFFALL_OFFSET UNITYSDK_OFFSET(0xE546510)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FORCEUPDATEBUFFNEXTTICKONCE_OFFSET UNITYSDK_OFFSET(0xE5464C0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETMODIFIERBYINDEX_OFFSET UNITYSDK_OFFSET(0xE541B40)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETMODIFIERCASTERBYBEHAVIORFLAG_OFFSET UNITYSDK_OFFSET(0xE545A20)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETNEEDDISPLAYMODIFIERS_OFFSET UNITYSDK_OFFSET(0xE544C00)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETONHITEFFECTOVERRIDES_OFFSET UNITYSDK_OFFSET(0xE54A3B0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETONHITEFFECTOVERRIDE_OFFSET UNITYSDK_OFFSET(0xE54A190)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0xE541D30)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_ABILITYCOMPONENTREF_OFFSET UNITYSDK_OFFSET(0xE54B2D0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_BUFFSYNCED_OFFSET UNITYSDK_OFFSET(0xE54B340)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_CUSTOMDATAREF_OFFSET UNITYSDK_OFFSET(0xE54B2F0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_FORBIDSELECT_OFFSET UNITYSDK_OFFSET(0xE54B310)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_GLOBALWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xE54B360)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_ISSERVERTEAMABILITY_OFFSET UNITYSDK_OFFSET(0xE54B320)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_MODIFIERCOUNT_OFFSET UNITYSDK_OFFSET(0xE543940)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_NEEDDISPLAYMODIFIERCOUNT_OFFSET UNITYSDK_OFFSET(0xE54B370)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_INITCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0xE540C60)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xE540A60)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISCONTAINBUFF_OFFSET UNITYSDK_OFFSET(0xE542CE0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISCONTAINMODIFIERBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xE545970)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISSNEAKING_OFFSET UNITYSDK_OFFSET(0xE54A800)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_MODIFYPROPERTY_OFFSET UNITYSDK_OFFSET(0xE541FE0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ONBACKGROUND_OFFSET UNITYSDK_OFFSET(0xE54B270)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ONFOREGROUND_OFFSET UNITYSDK_OFFSET(0xE54B210)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ONMODIFIERINSTANCEDESTROY_OFFSET UNITYSDK_OFFSET(0xE543F70)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_OVERRIDEONHITEFFECT_OFFSET UNITYSDK_OFFSET(0xE549A90)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_POSTPROCESSAFTERMODIFIERADD_OFFSET UNITYSDK_OFFSET(0xE5456C0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_POSTPROCESSAFTERMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0xE54AE40)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_PUSHNEWADVANCEPERFORMMODIFIERINFORECORD_OFFSET UNITYSDK_OFFSET(0xE542880)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REMOVEADDITIONALIMMUNEBEHAVIORFLAG_OFFSET UNITYSDK_OFFSET(0xE544DC0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REMOVEGLOBALWEAKNESSBYMODIFIER_OFFSET UNITYSDK_OFFSET(0xE547DF0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REMOVEONHITEFFECTOVERRIDE_OFFSET UNITYSDK_OFFSET(0xE54A030)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REVERTALLADVANCEMODIFIER_OFFSET UNITYSDK_OFFSET(0xE542CA0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SETFORBIDSELECT_OFFSET UNITYSDK_OFFSET(0xE54B1A0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SETSNEAKEXPOSED_OFFSET UNITYSDK_OFFSET(0xE54A880)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_ABILITYCOMPONENTREF_OFFSET UNITYSDK_OFFSET(0xE54B2E0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_BUFFSYNCED_OFFSET UNITYSDK_OFFSET(0xE54B350)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_CUSTOMDATAREF_OFFSET UNITYSDK_OFFSET(0xE54B300)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_ISSERVERTEAMABILITY_OFFSET UNITYSDK_OFFSET(0xE54B330)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_STACKPROPERTY_OFFSET UNITYSDK_OFFSET(0xE5462D0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SYNCBUFFSFROMSERVER_OFFSET UNITYSDK_OFFSET(0xE540480)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TICKTEMPTER_OFFSET UNITYSDK_OFFSET(0xE540740)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xE540410)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERBEFOREATTACK_OFFSET UNITYSDK_OFFSET(0xE545E50)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONAFTERBATTLE_OFFSET UNITYSDK_OFFSET(0xE545FD0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONATTACK_OFFSET UNITYSDK_OFFSET(0xE545EB0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONBEATTACK_OFFSET UNITYSDK_OFFSET(0xE545F10)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONBEFOREBATTLE_OFFSET UNITYSDK_OFFSET(0xE545CF0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONOWNERBEKILLED_OFFSET UNITYSDK_OFFSET(0xE545F70)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONSKILLRESET_OFFSET UNITYSDK_OFFSET(0xE546030)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRYADDALERTVALUEWHENADDMODIFIER_OFFSET UNITYSDK_OFFSET(0xE5450F0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRYADDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xE545140)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_UNSTACKPROPERTY_OFFSET UNITYSDK_OFFSET(0xE5463E0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_USEABILITY_OFFSET UNITYSDK_OFFSET(0xE541980)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__AFTERPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xE542440)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__DOADDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xE544290)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__FINDAPPLIEDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xE542D80)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__GETSTACKINGEFFECTOVERRIDE_OFFSET UNITYSDK_OFFSET(0xE549FD0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__HANDLEMODIFIERCONFLICTPOOL_OFFSET UNITYSDK_OFFSET(0xE543600)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__HANDLEMODIFIERINSTANCESTACKING_OFFSET UNITYSDK_OFFSET(0xE542FD0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ISIMMUNEBEHAVIORFLAG_OFFSET UNITYSDK_OFFSET(0xE544F40)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__MODIFIERSEXECUTEEVENT_1_OFFSET UNITYSDK_OFFSET(0xE543E30)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__MODIFIERSEXECUTEEVENT_OFFSET UNITYSDK_OFFSET(0xE545D50)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADDNEWMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xE5439A0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADVENTUREMONEYACCEPT_OFFSET UNITYSDK_OFFSET(0xE548080)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0xE54AA70)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xE54A8D0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONAFTERBUFFFULLUPDATE_OFFSET UNITYSDK_OFFSET(0xE549A30)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONCHANGETOFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xE54AB00)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONMPCHANGE_OFFSET UNITYSDK_OFFSET(0xE548020)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONNPCMONSTERCREATE_OFFSET UNITYSDK_OFFSET(0xE547F80)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONPLAYERTRANSFERTOFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xE54A9B0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONPLAYERTRANSFERTOREALAVATAR_OFFSET UNITYSDK_OFFSET(0xE54AA10)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONSTAGEBYSTORY_OFFSET UNITYSDK_OFFSET(0xE548150)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONSTAGE_OFFSET UNITYSDK_OFFSET(0xE5481B0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONTEAMLEADERCHANGE_OFFSET UNITYSDK_OFFSET(0xE5482D0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONUNSTAGE_OFFSET UNITYSDK_OFFSET(0xE548270)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__REFRESHMAXHP_OFFSET UNITYSDK_OFFSET(0xE548380)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SETUPJSONCONFIGABILITY_OFFSET UNITYSDK_OFFSET(0xE541240)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCBUFFFROMSERVER_OFFSET UNITYSDK_OFFSET(0xE546560)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCDYNAMICVALUEFROMBUFFINFO_OFFSET UNITYSDK_OFFSET(0xE548A30)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCMODIFIERBYBUFFINFO_OFFSET UNITYSDK_OFFSET(0xE5486E0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__TICKNEEDDISPLAYMODIFIER_OFFSET UNITYSDK_OFFSET(0xE540930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAbilityComponent_TypeDefinitionIndex = 56995;

	class AdventureAbilityComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AdventureModifierInstance*>* _MazeBuffIdToModifier; // 0x18
		::System::Collections::Generic::List_1<::NBGKOOOJADJ>* _AdvanceBuffPerformQueue; // 0x20
		::System::Collections::Generic::List_1<::KCNLLMOFJNM>* _OnHitEffectMultipleOverride; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _AbilityToSkillMapping; // 0x30
		::RPG::GameCore::NPCComponent* _NpcCmpt; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::System::Int32>* _AdventureModifierBehaviorFlagDict; // 0x40
		::RPG::GameCore::AdventureCharacterConfig* _CharacterConfig; // 0x48
		::Il2CppArray<::GKMKOMHLGDC*>* _AbilityProperties; // 0x50
		::RPG::GameCore::GameComponentBase* _ServerEntityInfoProvider; // 0x58
		::NOEBJBDLNGN* _FeatureFlagCmpt; // 0x60
		::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance*>* _NeedDisplayModifier; // 0x68
		::FODPNNIJCJI* _CustomDataRef_k__BackingField; // 0x70
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::System::Int32>* _AdditionalImmuneBehaviorFlagRefCount; // 0x78
		::RPG::GameCore::CharacterVisibleComponent* _VisibleCmpt; // 0x80
		::RPG::GameCore::GameEntity* _TempteTarget; // 0x88
		::RPG::GameCore::AbilityComponent* _AbilityComponentRef_k__BackingField; // 0x90
		::System::Collections::Generic::List_1<::LOENGBEIDGC>* _GlobalWeaknessList; // 0x98
		::FOOIINCDBFA* _NavCmpt; // 0xA0
		::System::Collections::Generic::List_1<::KCNLLMOFJNM>* _OnHitEffectOverride; // 0xA8
		::System::Int32 _AdvanceBuffPerformQueueLength; // 0xB0
		::System::Int32 _SyncedBuffStampEntity; // 0xB4
		::System::Int32 _SyncedBuffStamp; // 0xB8
		::System::Int32 _HighestPriorityOnHitEffect; // 0xBC
		::System::Boolean TriggerBattleOnAttacked; // 0xC0
		::System::Boolean _IsServerTeamAbility_k__BackingField; // 0xC1
		::System::Boolean _BuffSynced_k__BackingField; // 0xC2
		::System::Boolean _TempterMoving; // 0xC3
		::System::UInt32 _ForbidSelectCount; // 0xC4
		::System::Boolean _IsInTempter; // 0xC8
		::System::Boolean IsAttackingTriggerBattle; // 0xC9
		::System::Boolean _ForceUpdateBuffOnce; // 0xCA
		::System::Boolean _IsSneakExposed; // 0xCB
		static ::Il2CppArray<::RPG::GameCore::AdventureModifierInstance*>** StaticGet_s_SearchResultList()
		{
			return (::Il2CppArray<::RPG::GameCore::AdventureModifierInstance*>**)UnitySDK::FromName("RPG.GameCore", "AdventureAbilityComponent")->GetStaticField(0x57260);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__SyncedBuffId()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "AdventureAbilityComponent")->GetStaticField(0x57268);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BJLOENPDAHE*>** StaticGet__BuffLUT()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BJLOENPDAHE*>**)UnitySDK::FromName("RPG.GameCore", "AdventureAbilityComponent")->GetStaticField(0x57270);
		}

		static ::System::Collections::Generic::List_1<::CFJJFFMMEAF>** StaticGet__DynamicFloatCache()
		{
			return (::System::Collections::Generic::List_1<::CFJJFFMMEAF>**)UnitySDK::FromName("RPG.GameCore", "AdventureAbilityComponent")->GetStaticField(0x57278);
		}

		static ::System::Single* StaticGet__TempterStopDistance()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.GameCore", "AdventureAbilityComponent")->GetStaticField(0x13430);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void InitComponent(::RPG::GameCore::AdventureCharacterDataComponent* a1, ::RPG::GameCore::AbilityComponent* a2, ::FODPNNIJCJI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterDataComponent*, ::RPG::GameCore::AbilityComponent*, ::FODPNNIJCJI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_INITCOMPONENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitComponent_1(::CEMCMKJJFPE* a1, ::RPG::GameCore::AbilityComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CEMCMKJJFPE*, ::RPG::GameCore::AbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_INITCOMPONENT_1_OFFSET))(this, a1, a2);
		}

		::AEEKMHCMBPL* UseAbility(::System::String* a1, ::CFNCLABDJMB* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::AEEKMHCMBPL*(*)(::PVOID, ::System::String*, ::CFNCLABDJMB*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_USEABILITY_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::AdventureModifierInstance* GetModifierByIndex(::System::Int32 a1)
		{
			return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETMODIFIERBYINDEX_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureModifierInstance* FindModifierInstance(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FINDMODIFIERINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Int32 FindModifierInstances(::System::String* a1, ::System::UInt32 a2, ::Il2CppArray<::RPG::GameCore::AdventureModifierInstance*>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::AdventureModifierInstance*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FINDMODIFIERINSTANCES_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint GetProperty(::RPG::GameCore::AdventureAbilityProperty a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETPROPERTY_OFFSET))(this, a1);
		}

		::System::Void DefineProperty(::RPG::GameCore::AdventureAbilityProperty a1, ::RPG::GameCore::PropertyStacking a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DefineProperty_1(::RPG::GameCore::AdventureAbilityProperty a1, ::RPG::GameCore::PropertyStacking a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DefineProperty_2(::RPG::GameCore::AdventureAbilityProperty a1, ::RPG::GameCore::PropertyStacking a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ModifyProperty(::RPG::GameCore::AdventureAbilityProperty a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_MODIFYPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PushNewAdvancePerformModifierInfoRecord(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_PUSHNEWADVANCEPERFORMMODIFIERINFORECORD_OFFSET))(this, a1, a2);
		}

		::System::Boolean CompareFirstAdvancePerformBuffInfo(::BJLOENPDAHE* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJLOENPDAHE*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_COMPAREFIRSTADVANCEPERFORMBUFFINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ConfirmFirstAdvancePerformBuffInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CONFIRMFIRSTADVANCEPERFORMBUFFINFO_OFFSET))(this);
		}

		::System::Void ClearAdvancePerformRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CLEARADVANCEPERFORMRECORD_OFFSET))(this);
		}

		::System::Void RevertAllAdvanceModifier()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REVERTALLADVANCEMODIFIER_OFFSET))(this);
		}

		::System::Boolean IsContainBuff(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISCONTAINBUFF_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureModifierInstance* _FindAppliedModifierInstance(::System::String* a1, ::RPG::GameCore::AdventureModifierConfig* a2, ::AEEKMHCMBPL* a3)
		{
			return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID, ::System::String*, ::RPG::GameCore::AdventureModifierConfig*, ::AEEKMHCMBPL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__FINDAPPLIEDMODIFIERINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _HandleModifierInstanceStacking(::RPG::GameCore::AdventureModifierInstance* a1, ::RPG::GameCore::AdventureModifierInitParams* a2, ::RPG::GameCore::AdventureModifierConfig* a3, ::AEEKMHCMBPL* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*, ::RPG::GameCore::AdventureModifierInitParams*, ::RPG::GameCore::AdventureModifierConfig*, ::AEEKMHCMBPL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__HANDLEMODIFIERINSTANCESTACKING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _HandleModifierConflictPool(::System::UInt32 a1, ::RPG::GameCore::AdventureModifierInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__HANDLEMODIFIERCONFLICTPOOL_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAddNewModifierInstance(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADDNEWMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Void OnModifierInstanceDestroy(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ONMODIFIERINSTANCEDESTROY_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureModifierInstance* _DoAddModifierInstance(::System::String* a1, ::RPG::GameCore::AdventureModifierConfig* a2, ::AEEKMHCMBPL* a3, ::System::UInt32 a4, ::RPG::GameCore::AdventureModifierInitParams* a5, ::RPG::GameCore::GameEntity* a6)
		{
			return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID, ::System::String*, ::RPG::GameCore::AdventureModifierConfig*, ::AEEKMHCMBPL*, ::System::UInt32, ::RPG::GameCore::AdventureModifierInitParams*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__DOADDMODIFIERINSTANCE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance*>* GetNeedDisplayModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETNEEDDISPLAYMODIFIERS_OFFSET))(this);
		}

		::System::Void AddAdditionalImmuneBehaviorFlag(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ADDADDITIONALIMMUNEBEHAVIORFLAG_OFFSET))(this, a1);
		}

		::System::Void RemoveAdditionalImmuneBehaviorFlag(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REMOVEADDITIONALIMMUNEBEHAVIORFLAG_OFFSET))(this, a1);
		}

		::System::Boolean _IsImmuneBehaviorFlag(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ISIMMUNEBEHAVIORFLAG_OFFSET))(this, a1);
		}

		::System::Boolean CheckCanAddModifier(::RPG::GameCore::AdventureModifierConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CHECKCANADDMODIFIER_OFFSET))(this, a1);
		}

		::System::Void TryAddAlertValueWhenAddModifier(::AEEKMHCMBPL* a1, ::RPG::GameCore::AdventureModifierConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEEKMHCMBPL*, ::RPG::GameCore::AdventureModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRYADDALERTVALUEWHENADDMODIFIER_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryAddModifierInstance(::System::String* a1, ::RPG::GameCore::AdventureModifierConfig* a2, ::System::UInt32 a3, ::AEEKMHCMBPL* a4, ::RPG::GameCore::AdventureModifierInitParams* a5, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a6, ::RPG::GameCore::GameEntity* a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::AdventureModifierConfig*, ::System::UInt32, ::AEEKMHCMBPL*, ::RPG::GameCore::AdventureModifierInitParams*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRYADDMODIFIERINSTANCE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean IsContainModifierBehavior(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISCONTAINMODIFIERBEHAVIOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetModifierCasterByBehaviorFlag(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETMODIFIERCASTERBYBEHAVIORFLAG_OFFSET))(this, a1);
		}

		::System::Void TriggerOnBeforeBattle(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONBEFOREBATTLE_OFFSET))(this, a1);
		}

		::System::Void TriggerBeforeAttack(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERBEFOREATTACK_OFFSET))(this, a1);
		}

		::System::Void TriggerOnAttack(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONATTACK_OFFSET))(this, a1);
		}

		::System::Void TriggerOnBeAttack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONBEATTACK_OFFSET))(this);
		}

		::System::Void TriggerOnOwnerBeKilled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONOWNERBEKILLED_OFFSET))(this);
		}

		::System::Void TriggerOnAfterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONAFTERBATTLE_OFFSET))(this);
		}

		::System::Void TriggerOnSkillReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONSKILLRESET_OFFSET))(this);
		}

		::AEEKMHCMBPL* AddAbility(::System::String* a1)
		{
			return ((::AEEKMHCMBPL*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ADDABILITY_OFFSET))(this, a1);
		}

		::System::Int32 StackProperty(::RPG::GameCore::AdventureAbilityProperty a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_STACKPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnStackProperty(::RPG::GameCore::AdventureAbilityProperty a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_UNSTACKPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void ForceUpdateBuffNextTickOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FORCEUPDATEBUFFNEXTTICKONCE_OFFSET))(this);
		}

		::System::Void ForceUpdateBuffAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FORCEUPDATEBUFFALL_OFFSET))(this);
		}

		::System::Void SyncBuffsFromServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SYNCBUFFSFROMSERVER_OFFSET))(this);
		}

		::System::Void EnterTempter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ENTERTEMPTER_OFFSET))(this, a1);
		}

		::System::Void ExitTempter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_EXITTEMPTER_OFFSET))(this);
		}

		::System::Void AddGlobalWeakness(::RPG::GameCore::AdventureModifierInstance* a1, ::RPG::GameCore::AttackDamageType a2, ::RPG::GameCore::MonsterRank a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*, ::RPG::GameCore::AttackDamageType, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ADDGLOBALWEAKNESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveGlobalWeaknessByModifier(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REMOVEGLOBALWEAKNESSBYMODIFIER_OFFSET))(this, a1);
		}

		::System::Void _SetupJsonConfigAbility(::CEMCMKJJFPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEMCMKJJFPE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SETUPJSONCONFIGABILITY_OFFSET))(this, a1);
		}

		::System::Void _OnNpcMonsterCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONNPCMONSTERCREATE_OFFSET))(this, a1);
		}

		::System::Void _OnMPChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONMPCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnAdventureMoneyAccept(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADVENTUREMONEYACCEPT_OFFSET))(this, a1);
		}

		::System::Void _OnStageByStory(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONSTAGEBYSTORY_OFFSET))(this, a1);
		}

		::System::Void _OnStage(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONSTAGE_OFFSET))(this, a1);
		}

		::System::Void _OnUnstage(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONUNSTAGE_OFFSET))(this, a1);
		}

		::System::Void _OnTeamLeaderChange(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONTEAMLEADERCHANGE_OFFSET))(this, a1);
		}

		::System::Void _ModifiersExecuteEvent(::RPG::GameCore::AdventureModifierEvent a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierEvent, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__MODIFIERSEXECUTEEVENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ModifiersExecuteEvent_1(::RPG::GameCore::AdventureModifierEvent a1, ::LPNPMKNMMOK* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierEvent, ::LPNPMKNMMOK*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__MODIFIERSEXECUTEEVENT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AfterPropertyChanged(::RPG::GameCore::AdventureAbilityProperty a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__AFTERPROPERTYCHANGED_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _RefreshMaxHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__REFRESHMAXHP_OFFSET))(this);
		}

		::System::Void _SyncBuffFromServer(::AFMFOKIJCFE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::AFMFOKIJCFE*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCBUFFFROMSERVER_OFFSET))(this, a1, a2);
		}

		static ::System::Void _SyncModifierByBuffInfo(::RPG::GameCore::AdventureModifierInstance* a1, ::BJLOENPDAHE* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventureModifierInstance*, ::BJLOENPDAHE*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCMODIFIERBYBUFFINFO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _SyncDynamicValueFromBuffInfo(::System::Boolean a1, ::System::Boolean a2, ::BJLOENPDAHE* a3, ::System::Collections::Generic::List_1<::CFJJFFMMEAF>* a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::BJLOENPDAHE*, ::System::Collections::Generic::List_1<::CFJJFFMMEAF>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCDYNAMICVALUEFROMBUFFINFO_OFFSET))(a1, a2, a3, a4);
		}

		::System::Int32 OverrideOnHitEffect(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3, ::RPG::MVector3 a4, ::RPG::GameCore::ModifierHitEffectStacking a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean, ::RPG::MVector3, ::RPG::GameCore::ModifierHitEffectStacking))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_OVERRIDEONHITEFFECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void RemoveOnHitEffectOverride(::System::Int32 a1, ::RPG::GameCore::ModifierHitEffectStacking a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ModifierHitEffectStacking))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REMOVEONHITEFFECTOVERRIDE_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetOnHitEffectOverride(::System::String* a1, ::System::Boolean a2, ::RPG::MVector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETONHITEFFECTOVERRIDE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetOnHitEffectOverrides(::System::Object* a1, ::System::Boolean a2, ::RPG::MVector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETONHITEFFECTOVERRIDES_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::KCNLLMOFJNM>* _GetStackingEffectOverride(::RPG::GameCore::ModifierHitEffectStacking a1)
		{
			return ((::System::Collections::Generic::List_1<::KCNLLMOFJNM>*(*)(::PVOID, ::RPG::GameCore::ModifierHitEffectStacking))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__GETSTACKINGEFFECTOVERRIDE_OFFSET))(this, a1);
		}

		::System::Void TickTempter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TICKTEMPTER_OFFSET))(this);
		}

		::System::Void _TickNeedDisplayModifier()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__TICKNEEDDISPLAYMODIFIER_OFFSET))(this);
		}

		::System::Void EnterTempterFaceToTarget(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ENTERTEMPTERFACETOTARGET_OFFSET))(this, a1);
		}

		::System::Boolean IsSneaking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISSNEAKING_OFFSET))(this);
		}

		::System::Void SetSneakExposed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SETSNEAKEXPOSED_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerTransferToFakeAvatar(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONPLAYERTRANSFERTOFAKEAVATAR_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerTransferToRealAvatar(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONPLAYERTRANSFERTOREALAVATAR_OFFSET))(this, a1);
		}

		::System::Void _OnAfterBuffFullUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONAFTERBUFFFULLUPDATE_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADVENTUREPHASEEND_OFFSET))(this, a1);
		}

		::System::Void _OnChangeToFakeAvatar(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONCHANGETOFAKEAVATAR_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureModifierInstance* PostProcessAfterModifierAdd(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_POSTPROCESSAFTERMODIFIERADD_OFFSET))(this, a1);
		}

		::System::Void PostProcessAfterModifierRemove(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_POSTPROCESSAFTERMODIFIERREMOVE_OFFSET))(this, a1);
		}

		::System::Void SetForbidSelect(::System::Boolean a1, ::RPG::GameCore::ForbidSelectReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::ForbidSelectReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SETFORBIDSELECT_OFFSET))(this, a1, a2);
		}

		::System::Void OnForeGround()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ONFOREGROUND_OFFSET))(this);
		}

		::System::Void OnBackGround()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ONBACKGROUND_OFFSET))(this);
		}

		::RPG::GameCore::AbilityComponent* get_AbilityComponentRef()
		{
			return ((::RPG::GameCore::AbilityComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_ABILITYCOMPONENTREF_OFFSET))(this);
		}

		::System::Void set_AbilityComponentRef(::RPG::GameCore::AbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_ABILITYCOMPONENTREF_OFFSET))(this, a1);
		}

		::FODPNNIJCJI* get_CustomDataRef()
		{
			return ((::FODPNNIJCJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_CUSTOMDATAREF_OFFSET))(this);
		}

		::System::Void set_CustomDataRef(::FODPNNIJCJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FODPNNIJCJI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_CUSTOMDATAREF_OFFSET))(this, a1);
		}

		::System::Int32 get_ModifierCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_MODIFIERCOUNT_OFFSET))(this);
		}

		::System::Boolean get_ForbidSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_FORBIDSELECT_OFFSET))(this);
		}

		::System::Boolean get_IsServerTeamAbility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_ISSERVERTEAMABILITY_OFFSET))(this);
		}

		::System::Void set_IsServerTeamAbility(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_ISSERVERTEAMABILITY_OFFSET))(this, a1);
		}

		::System::Boolean get_BuffSynced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_BUFFSYNCED_OFFSET))(this);
		}

		::System::Void set_BuffSynced(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_BUFFSYNCED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::LOENGBEIDGC>* get_GlobalWeaknessList()
		{
			return ((::System::Collections::Generic::List_1<::LOENGBEIDGC>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_GLOBALWEAKNESSLIST_OFFSET))(this);
		}

		::System::Int32 get_NeedDisplayModifierCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_NEEDDISPLAYMODIFIERCOUNT_OFFSET))(this);
		}

	};
}
