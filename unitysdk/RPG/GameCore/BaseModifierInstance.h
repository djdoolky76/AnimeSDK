#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFJJFFMMEAF.h"
#include "unitysdk/GODJKFFNCNI.h"
#include "unitysdk/RPG/GameCore/ModifierAddReason.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/GameCore/ModifierState.h"
#include "unitysdk/RPG/GameCore/ModifierValueBindType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
class ENEIHJJPNPI;
class HPICNGFLLCA;
class KFELGAIGHAP;
class LPNPMKNMMOK;
class MBBEBLGELAP;
class PGJINBJDAHN;
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifierConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BASEMODIFIERINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1AE5BAF0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_DESTROY_OFFSET UNITYSDK_OFFSET(0x1AE5C7F0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_DETACHALLEFFECTS_OFFSET UNITYSDK_OFFSET(0x1AE5B050)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE5C520)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GETTASKLISTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1AE5CBC0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_BASECONFIG_OFFSET UNITYSDK_OFFSET(0x1AE5D5F0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_CASTERENTITY_OFFSET UNITYSDK_OFFSET(0x1AE5D630)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AE5D750)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0x1AE5D730)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DELAYREPLACECASTER_OFFSET UNITYSDK_OFFSET(0x1AE5D7A0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0x1AE5D780)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0x1AE5D760)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISACTIVATING_OFFSET UNITYSDK_OFFSET(0x1AE5D6A0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISEXECUTINGIGNORETICKING_OFFSET UNITYSDK_OFFSET(0x1AE5D6D0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISEXECUTING_OFFSET UNITYSDK_OFFSET(0x1AE5D6C0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISPENDINGDISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE5D720)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_KEYFORSTATUSCONFIG_OFFSET UNITYSDK_OFFSET(0x1AE5D5A0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AE5D580)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_STACKINGFLAG_OFFSET UNITYSDK_OFFSET(0x1AE5D5D0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1AE5D5B0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x1AE5D610)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_ONREPLACE_OFFSET UNITYSDK_OFFSET(0x1AE5C9A0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SETUPDYNAMICFLOATINJECTION_OFFSET UNITYSDK_OFFSET(0x1AE5C190)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SETUPDYNAMICSTRINGINJECTION_OFFSET UNITYSDK_OFFSET(0x1AE5C2D0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_BASECONFIG_OFFSET UNITYSDK_OFFSET(0x1AE5D600)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AE5C450)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0x1AE5D740)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0x1AE5D790)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0x1AE5D770)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_ISACTIVATING_OFFSET UNITYSDK_OFFSET(0x1AE5D6B0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1AE5D590)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_STACKINGFLAG_OFFSET UNITYSDK_OFFSET(0x1AE5D5E0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1AE5D5C0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x1AE5D620)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE_TICK_OFFSET UNITYSDK_OFFSET(0x1AE5C790)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__EXECUTEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1AE5CD50)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__ONATTACHEFFECTFADEOUTFINISH_OFFSET UNITYSDK_OFFSET(0x1AE5B680)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__ONMODIFIERVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1AE5D530)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__ONOTHERMODIFIERATTACHEFFECTFADEOUTFINISH_OFFSET UNITYSDK_OFFSET(0x1AE5B9E0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__ONOTHERMODIFIERDESTROY_OFFSET UNITYSDK_OFFSET(0x1AE5B8D0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__SEQUENCEENDANDFLUSH_OFFSET UNITYSDK_OFFSET(0x1AE5D3D0)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__STARTTICKEDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1AE5D160)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__TICKSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1AE5D220)
#define RPG_GAMECORE_BASEMODIFIERINSTANCE__TRYDESTORYMODIFIEREFFECT_OFFSET UNITYSDK_OFFSET(0x1AE5B160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseModifierInstance_TypeDefinitionIndex = 55594;

	class BaseModifierInstance : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _EffectList; // 0x10
		::ENEIHJJPNPI* _DynamicValues_k__BackingField; // 0x18
		::System::String* _Name_k__BackingField; // 0x20
		::RPG::GameCore::TurnBasedModifierInstance* InfectSource; // 0x28
		::System::Collections::Generic::List_1<::GODJKFFNCNI>* InitDynamicStringsInjections; // 0x30
		::RPG::GameCore::ModifierConfig* _BaseConfig_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::CFJJFFMMEAF>* InitDynamicFloatInjections; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* _MutexEffectList; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* _DynamicStrings_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::System::Object*>* _TmpEffectList; // 0x58
		::MBBEBLGELAP* _DelayReplaceAbility; // 0x60
		::RPG::GameCore::GameEntity* _CasterEntity; // 0x68
		::RPG::GameCore::TaskContext* _TaskContext_k__BackingField; // 0x70
		::System::Int32 _ExecutingSequenceCount; // 0x78
		::System::Boolean _IsPendingDispose; // 0x7C
		::System::Boolean SilenceAdd; // 0x7D
		::System::Boolean _IsActivating_k__BackingField; // 0x7E
		::System::Byte _padding0[0x1];
		::RPG::GameCore::ModifierState _State_k__BackingField; // 0x80
		::RPG::GameCore::ModifierAddReason AddReason; // 0x84
		::System::Int32 InitCount; // 0x88
		::System::Int32 _Count; // 0x8C
		::RPG::GameCore::ModifierDeathSource _DeathSource_k__BackingField; // 0x90
		::System::Int32 _TickingSequenceCount; // 0x94
		::RPG::GameCore::ModifierStackingFlag _StackingFlag_k__BackingField; // 0x98
		::System::Void _ctor(::System::String* a1, ::RPG::GameCore::ModifierConfig* a2, ::RPG::GameCore::GameEntity* a3, ::HPICNGFLLCA* a4, ::PGJINBJDAHN* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::ModifierConfig*, ::RPG::GameCore::GameEntity*, ::HPICNGFLLCA*, ::PGJINBJDAHN*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DetachAllEffects(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_DETACHALLEFFECTS_OFFSET))(this, a1);
		}

		::System::Void _TryDestoryModifierEffect(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__TRYDESTORYMODIFIEREFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAttachEffectFadeOutFinish(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__ONATTACHEFFECTFADEOUTFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnOtherModifierDestroy(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__ONOTHERMODIFIERDESTROY_OFFSET))(this, a1);
		}

		::System::Void _OnOtherModifierAttachEffectFadeOutFinish(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__ONOTHERMODIFIERATTACHEFFECTFADEOUTFINISH_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_TICK_OFFSET))(this, a1);
		}

		::System::Void Destroy(::RPG::GameCore::ModifierDeathSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_DESTROY_OFFSET))(this, a1);
		}

		::System::Void OnReplace(::MBBEBLGELAP* a1, ::PGJINBJDAHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MBBEBLGELAP*, ::PGJINBJDAHN*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_ONREPLACE_OFFSET))(this, a1, a2);
		}

		::System::Void SetupDynamicFloatInjection(::System::Collections::Generic::List_1<::CFJJFFMMEAF>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CFJJFFMMEAF>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SETUPDYNAMICFLOATINJECTION_OFFSET))(this, a1);
		}

		::System::Void SetupDynamicStringInjection(::System::Collections::Generic::List_1<::GODJKFFNCNI>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GODJKFFNCNI>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SETUPDYNAMICSTRINGINJECTION_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskListTemplate* GetTaskListTemplate(::System::String* a1)
		{
			return ((::RPG::GameCore::TaskListTemplate*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GETTASKLISTTEMPLATE_OFFSET))(this, a1);
		}

		::System::Void _ExecuteImmediately(::KFELGAIGHAP* a1, ::LPNPMKNMMOK* a2, ::System::Boolean a3, ::RPG::GameCore::TurnBasedModifierEvent a4)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*, ::LPNPMKNMMOK*, ::System::Boolean, ::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__EXECUTEIMMEDIATELY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _StartTickedSequence(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__STARTTICKEDSEQUENCE_OFFSET))(this, a1);
		}

		::System::Void _TickSequence(::KFELGAIGHAP* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__TICKSEQUENCE_OFFSET))(this, a1, a2);
		}

		::System::Void _SequenceEndAndFlush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__SEQUENCEENDANDFLUSH_OFFSET))(this);
		}

		::System::Void _OnModifierValueChanged(::RPG::GameCore::ModifierValueBindType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierValueBindType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE__ONMODIFIERVALUECHANGED_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_KeyForStatusConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_KEYFORSTATUSCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::ModifierState get_State()
		{
			return ((::RPG::GameCore::ModifierState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::GameCore::ModifierState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ModifierStackingFlag get_StackingFlag()
		{
			return ((::RPG::GameCore::ModifierStackingFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_STACKINGFLAG_OFFSET))(this);
		}

		::System::Void set_StackingFlag(::RPG::GameCore::ModifierStackingFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierStackingFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_STACKINGFLAG_OFFSET))(this, a1);
		}

		::RPG::GameCore::ModifierConfig* get_BaseConfig()
		{
			return ((::RPG::GameCore::ModifierConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_BASECONFIG_OFFSET))(this);
		}

		::System::Void set_BaseConfig(::RPG::GameCore::ModifierConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_BASECONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskContext* get_TaskContext()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_TASKCONTEXT_OFFSET))(this);
		}

		::System::Void set_TaskContext(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_TASKCONTEXT_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_CasterEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_CASTERENTITY_OFFSET))(this);
		}

		::System::Boolean get_IsActivating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISACTIVATING_OFFSET))(this);
		}

		::System::Void set_IsActivating(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_ISACTIVATING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExecuting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISEXECUTING_OFFSET))(this);
		}

		::System::Boolean get_IsExecutingIgnoreTicking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISEXECUTINGIGNORETICKING_OFFSET))(this);
		}

		::System::Boolean get_IsPendingDispose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_ISPENDINGDISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::ModifierDeathSource get_DeathSource()
		{
			return ((::RPG::GameCore::ModifierDeathSource(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DEATHSOURCE_OFFSET))(this);
		}

		::System::Void set_DeathSource(::RPG::GameCore::ModifierDeathSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DEATHSOURCE_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_COUNT_OFFSET))(this, a1);
		}

		::ENEIHJJPNPI* get_DynamicValues()
		{
			return ((::ENEIHJJPNPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DYNAMICVALUES_OFFSET))(this);
		}

		::System::Void set_DynamicValues(::ENEIHJJPNPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENEIHJJPNPI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DYNAMICVALUES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* get_DynamicStrings()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DYNAMICSTRINGS_OFFSET))(this);
		}

		::System::Void set_DynamicStrings(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_SET_DYNAMICSTRINGS_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_DelayReplaceCaster()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_GET_DELAYREPLACECASTER_OFFSET))(this);
		}

	};
}
