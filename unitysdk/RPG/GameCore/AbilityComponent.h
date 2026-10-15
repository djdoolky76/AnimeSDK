#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNLBAANACKF.h"
#include "unitysdk/RPG/GameCore/AbilityInstanceState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/GameCore/ModifierStateFilter.h"
#include "unitysdk/RPG/GameCore/PauseAbilityReason.h"
#include "unitysdk/RPG/GameCore/UseAbilityOption.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PKIOGOHJILN.h"
class HIOAMIPNLIN;
class MBBEBLGELAP;
class NAOKFLDEDBJ;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class Array; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define RPG_GAMECORE_ABILITYCOMPONENT_ADDABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xE4B05C0)
#define RPG_GAMECORE_ABILITYCOMPONENT_ADDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xE4B1960)
#define RPG_GAMECORE_ABILITYCOMPONENT_CCTOR_OFFSET UNITYSDK_OFFSET(0xE4B4050)
#define RPG_GAMECORE_ABILITYCOMPONENT_CHECKTOREMOVECHILDMODIFIEROFABILITY_OFFSET UNITYSDK_OFFSET(0xE4B3B00)
#define RPG_GAMECORE_ABILITYCOMPONENT_CLEARALLMODIFIERINSTANCEWITHPREDICATE_OFFSET UNITYSDK_OFFSET(0xE4B2050)
#define RPG_GAMECORE_ABILITYCOMPONENT_CLEARALLMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xE4B1BF0)
#define RPG_GAMECORE_ABILITYCOMPONENT_CONTAINALIVEHITSHAPE_OFFSET UNITYSDK_OFFSET(0xE4B18B0)
#define RPG_GAMECORE_ABILITYCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE4AF2D0)
#define RPG_GAMECORE_ABILITYCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE4AF3F0)
#define RPG_GAMECORE_ABILITYCOMPONENT_ENDALLPROJECTILE_OFFSET UNITYSDK_OFFSET(0xE4B0FE0)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_1_OFFSET UNITYSDK_OFFSET(0xE4B08D0)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_2_OFFSET UNITYSDK_OFFSET(0xE4B0B80)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xE4B0790)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCES_1_OFFSET UNITYSDK_OFFSET(0xE4B2E40)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCES_OFFSET UNITYSDK_OFFSET(0xE4B2BA0)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xE4B2610)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDUSABLEABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xE4B36A0)
#define RPG_GAMECORE_ABILITYCOMPONENT_FOREACHMODIFIER_1_OFFSET UNITYSDK_OFFSET(0xE4B24A0)
#define RPG_GAMECORE_ABILITYCOMPONENT_FOREACHMODIFIER_OFFSET UNITYSDK_OFFSET(0xE4B23E0)
#define RPG_GAMECORE_ABILITYCOMPONENT_GETABILITYINSTANCEBYINDEX_OFFSET UNITYSDK_OFFSET(0xE4B0700)
#define RPG_GAMECORE_ABILITYCOMPONENT_GETABILITYLIST_OFFSET UNITYSDK_OFFSET(0xE4B1870)
#define RPG_GAMECORE_ABILITYCOMPONENT_GETINDEXBYMODIFIER_OFFSET UNITYSDK_OFFSET(0xE4B2340)
#define RPG_GAMECORE_ABILITYCOMPONENT_GETMODIFIERBYINDEX_OFFSET UNITYSDK_OFFSET(0xE4B22B0)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_ABILITYCOUNT_OFFSET UNITYSDK_OFFSET(0xE4B3E70)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_ABILITYLIST_OFFSET UNITYSDK_OFFSET(0xE4B3F20)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_CURRENTMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xE4B2A60)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_LASTFINISHPROJECTILEPOS_OFFSET UNITYSDK_OFFSET(0xE4B3F30)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_LASTFINISHPROJECTILEVELOCITY_OFFSET UNITYSDK_OFFSET(0xE4B3FC0)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_MODIFIERCOUNT_OFFSET UNITYSDK_OFFSET(0xE4B3EC0)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_MODIFIERLIST_OFFSET UNITYSDK_OFFSET(0xE4B3F10)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_PAUSEABILITY_OFFSET UNITYSDK_OFFSET(0xE4B0360)
#define RPG_GAMECORE_ABILITYCOMPONENT_HASMODIFIER_OFFSET UNITYSDK_OFFSET(0xE4B32C0)
#define RPG_GAMECORE_ABILITYCOMPONENT_HITTEST_OFFSET UNITYSDK_OFFSET(0xE4B3420)
#define RPG_GAMECORE_ABILITYCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xE4AF380)
#define RPG_GAMECORE_ABILITYCOMPONENT_INTERRUPTALLPROJECTILES_OFFSET UNITYSDK_OFFSET(0xE4B11B0)
#define RPG_GAMECORE_ABILITYCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xE4AFCB0)
#define RPG_GAMECORE_ABILITYCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xE4AFDD0)
#define RPG_GAMECORE_ABILITYCOMPONENT_PROCCESSPENDINGDISPOSEMODIFIERS_OFFSET UNITYSDK_OFFSET(0xE4AF740)
#define RPG_GAMECORE_ABILITYCOMPONENT_REINITALLABILITIES_OFFSET UNITYSDK_OFFSET(0xE4AF930)
#define RPG_GAMECORE_ABILITYCOMPONENT_REMOVEABILITY_1_OFFSET UNITYSDK_OFFSET(0xE4B15E0)
#define RPG_GAMECORE_ABILITYCOMPONENT_REMOVEABILITY_OFFSET UNITYSDK_OFFSET(0xE4B1380)
#define RPG_GAMECORE_ABILITYCOMPONENT_REMOVEDIRTYMODIFIERS_OFFSET UNITYSDK_OFFSET(0xE4B0370)
#define RPG_GAMECORE_ABILITYCOMPONENT_RESUMEPAUSEABILITY_OFFSET UNITYSDK_OFFSET(0xE4B3E20)
#define RPG_GAMECORE_ABILITYCOMPONENT_SETPAUSEABILITY_OFFSET UNITYSDK_OFFSET(0xE4B3DD0)
#define RPG_GAMECORE_ABILITYCOMPONENT_SET_LASTFINISHPROJECTILEPOS_OFFSET UNITYSDK_OFFSET(0xE4B3FB0)
#define RPG_GAMECORE_ABILITYCOMPONENT_SET_LASTFINISHPROJECTILEVELOCITY_OFFSET UNITYSDK_OFFSET(0xE4B4040)
#define RPG_GAMECORE_ABILITYCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xE4AFE10)
#define RPG_GAMECORE_ABILITYCOMPONENT_USEABILITYBYINSTANCE_OFFSET UNITYSDK_OFFSET(0xE4B3850)
#define RPG_GAMECORE_ABILITYCOMPONENT_USEABILITY_OFFSET UNITYSDK_OFFSET(0xE4B3A00)
#define RPG_GAMECORE_ABILITYCOMPONENT__ISMODIFIERMATCHSEARCH_OFFSET UNITYSDK_OFFSET(0xE4B27B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityComponent_TypeDefinitionIndex = 56856;

	class AbilityComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::HIOAMIPNLIN*>* _PendingDisposeMdfList; // 0x18
		::System::Collections::Generic::Stack_1<::RPG::GameCore::GameEntityList*>* CachedTargetList; // 0x20
		::NAOKFLDEDBJ* LastFinishProjectile; // 0x28
		::System::Collections::Generic::List_1<::MBBEBLGELAP*>* _AbilityList; // 0x30
		::System::Collections::Generic::List_1<::HIOAMIPNLIN*>* _ModifierList; // 0x38
		::RPG::MVector3 HitBoxCenter; // 0x40
		::UnityEngine::Vector3 _LastFinishProjectileVelocity; // 0x4C
		::UnityEngine::Vector3 _LastFinishProjectilePos; // 0x58
		::KNLBAANACKF HitBox; // 0x64
		::System::Boolean _AbilityCanInit; // 0xA4
		::System::Byte _padding0[0x3];
		::System::Int32 _PauseAbilityReason; // 0xA8
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickModifierListModifiersMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.GameCore", "AbilityComponent")->GetStaticField(0x54510);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__RemoveDirtyModifiersMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.GameCore", "AbilityComponent")->GetStaticField(0x54518);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickProjectileGroupsMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.GameCore", "AbilityComponent")->GetStaticField(0x54520);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickAbilityListMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.GameCore", "AbilityComponent")->GetStaticField(0x54528);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_CCTOR_OFFSET))();
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void ReinitAllAbilities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_REINITALLABILITIES_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void ProccessPendingDisposeModifiers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_PROCCESSPENDINGDISPOSEMODIFIERS_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void AddAbilityInstance(::MBBEBLGELAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBBEBLGELAP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_ADDABILITYINSTANCE_OFFSET))(this, a1);
		}

		::MBBEBLGELAP* GetAbilityInstanceByIndex(::System::Int32 a1)
		{
			return ((::MBBEBLGELAP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GETABILITYINSTANCEBYINDEX_OFFSET))(this, a1);
		}

		::MBBEBLGELAP* FindAbilityInstance(::System::String* a1)
		{
			return ((::MBBEBLGELAP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_OFFSET))(this, a1);
		}

		::MBBEBLGELAP* FindAbilityInstance_1(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::MBBEBLGELAP*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_1_OFFSET))(this, a1);
		}

		::MBBEBLGELAP* FindAbilityInstance_2(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::AbilityInstanceState a2)
		{
			return ((::MBBEBLGELAP*(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::AbilityInstanceState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_2_OFFSET))(this, a1, a2);
		}

		::System::Void EndAllProjectile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_ENDALLPROJECTILE_OFFSET))(this);
		}

		::System::Void InterruptAllProjectiles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_INTERRUPTALLPROJECTILES_OFFSET))(this);
		}

		::System::Boolean RemoveAbility(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_REMOVEABILITY_OFFSET))(this, a1, a2);
		}

		::System::Boolean RemoveAbility_1(::MBBEBLGELAP* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBBEBLGELAP*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_REMOVEABILITY_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::MBBEBLGELAP*>* GetAbilityList()
		{
			return ((::System::Collections::Generic::List_1<::MBBEBLGELAP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GETABILITYLIST_OFFSET))(this);
		}

		::System::Boolean ContainAliveHitShape()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_CONTAINALIVEHITSHAPE_OFFSET))(this);
		}

		::System::Void AddModifierInstance(::HIOAMIPNLIN* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOAMIPNLIN*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_ADDMODIFIERINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void ClearAllModifierInstance(::RPG::GameCore::ModifierDeathSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_CLEARALLMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Void ClearAllModifierInstanceWithPredicate(::System::Predicate_1<::HIOAMIPNLIN*>* a1, ::RPG::GameCore::ModifierDeathSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Predicate_1<::HIOAMIPNLIN*>*, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_CLEARALLMODIFIERINSTANCEWITHPREDICATE_OFFSET))(this, a1, a2);
		}

		::HIOAMIPNLIN* GetModifierByIndex(::System::Int32 a1)
		{
			return ((::HIOAMIPNLIN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GETMODIFIERBYINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetIndexByModifier(::HIOAMIPNLIN* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::HIOAMIPNLIN*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GETINDEXBYMODIFIER_OFFSET))(this, a1);
		}

		::System::Void ForeachModifier(::System::Action_1<::HIOAMIPNLIN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::HIOAMIPNLIN*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FOREACHMODIFIER_OFFSET))(this, a1);
		}

		::System::Void ForeachModifier_1(::System::String* a1, ::System::Action_1<::HIOAMIPNLIN*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::HIOAMIPNLIN*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FOREACHMODIFIER_1_OFFSET))(this, a1, a2);
		}

		::HIOAMIPNLIN* FindModifierInstance(::System::String* a1, ::System::UInt32 a2, ::RPG::GameCore::ModifierStateFilter a3, ::RPG::GameCore::ModifierStackingFlag a4, ::MBBEBLGELAP* a5)
		{
			return ((::HIOAMIPNLIN*(*)(::PVOID, ::System::String*, ::System::UInt32, ::RPG::GameCore::ModifierStateFilter, ::RPG::GameCore::ModifierStackingFlag, ::MBBEBLGELAP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 FindModifierInstances(::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::HIOAMIPNLIN*>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*, ::System::UInt32, ::System::Collections::Generic::List_1<::HIOAMIPNLIN*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCES_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 FindModifierInstances_1(::System::String* a1, ::System::UInt32 a2, ::System::Array* a3, ::RPG::GameCore::ModifierStateFilter a4, ::RPG::GameCore::ModifierStackingFlag a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Array*, ::RPG::GameCore::ModifierStateFilter, ::RPG::GameCore::ModifierStackingFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCES_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean HasModifier(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_HASMODIFIER_OFFSET))(this, a1);
		}

		::System::Void RemoveDirtyModifiers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_REMOVEDIRTYMODIFIERS_OFFSET))(this);
		}

		::System::Boolean HitTest(::PKIOGOHJILN a1, ::RPG::MVector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKIOGOHJILN, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_HITTEST_OFFSET))(this, a1, a2);
		}

		::MBBEBLGELAP* FindUsableAbilityInstance(::System::String* a1)
		{
			return ((::MBBEBLGELAP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDUSABLEABILITYINSTANCE_OFFSET))(this, a1);
		}

		::System::Void UseAbilityByInstance(::MBBEBLGELAP* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::UseAbilityOption a3)
		{
			return ((::System::Void(*)(::PVOID, ::MBBEBLGELAP*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::UseAbilityOption))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_USEABILITYBYINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::MBBEBLGELAP* UseAbility(::System::String* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::UseAbilityOption a3)
		{
			return ((::MBBEBLGELAP*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::UseAbilityOption))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_USEABILITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _IsModifierMatchSearch(::HIOAMIPNLIN* a1, ::System::String* a2, ::System::UInt32 a3, ::RPG::GameCore::ModifierStateFilter a4, ::RPG::GameCore::ModifierStackingFlag a5, ::MBBEBLGELAP* a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOAMIPNLIN*, ::System::String*, ::System::UInt32, ::RPG::GameCore::ModifierStateFilter, ::RPG::GameCore::ModifierStackingFlag, ::MBBEBLGELAP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT__ISMODIFIERMATCHSEARCH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void CheckToRemoveChildModifierOfAbility(::MBBEBLGELAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBBEBLGELAP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_CHECKTOREMOVECHILDMODIFIEROFABILITY_OFFSET))(this, a1);
		}

		::System::Void SetPauseAbility(::RPG::GameCore::PauseAbilityReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PauseAbilityReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_SETPAUSEABILITY_OFFSET))(this, a1);
		}

		::System::Void ResumePauseAbility(::RPG::GameCore::PauseAbilityReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PauseAbilityReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_RESUMEPAUSEABILITY_OFFSET))(this, a1);
		}

		::System::Int32 get_AbilityCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_ABILITYCOUNT_OFFSET))(this);
		}

		::System::Int32 get_ModifierCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_MODIFIERCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HIOAMIPNLIN*>* get_ModifierList()
		{
			return ((::System::Collections::Generic::List_1<::HIOAMIPNLIN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_MODIFIERLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MBBEBLGELAP*>* get_AbilityList()
		{
			return ((::System::Collections::Generic::List_1<::MBBEBLGELAP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_ABILITYLIST_OFFSET))(this);
		}

		::HIOAMIPNLIN* get_CurrentModifierInstance()
		{
			return ((::HIOAMIPNLIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_CURRENTMODIFIERINSTANCE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LastFinishProjectilePos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_LASTFINISHPROJECTILEPOS_OFFSET))(this);
		}

		::System::Void set_LastFinishProjectilePos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_SET_LASTFINISHPROJECTILEPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_LastFinishProjectileVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_LASTFINISHPROJECTILEVELOCITY_OFFSET))(this);
		}

		::System::Void set_LastFinishProjectileVelocity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_SET_LASTFINISHPROJECTILEVELOCITY_OFFSET))(this, a1);
		}

		::System::Boolean get_PauseAbility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_PAUSEABILITY_OFFSET))(this);
		}

	};
}
