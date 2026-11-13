#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonEnumCategory.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class JsonEnumDefineConfig; }
namespace System { class String; }

#define RPG_GAMECORE_JSONENUMSTATIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D926E50)
#define RPG_GAMECORE_JSONENUMSTATIC_CONTAINSALL_OFFSET UNITYSDK_OFFSET(0x1D9268D0)
#define RPG_GAMECORE_JSONENUMSTATIC_CONTAINSANY_OFFSET UNITYSDK_OFFSET(0x1D926820)
#define RPG_GAMECORE_JSONENUMSTATIC_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D9267C0)
#define RPG_GAMECORE_JSONENUMSTATIC_GETJSONENUMSTR_OFFSET UNITYSDK_OFFSET(0x1D926B20)
#define RPG_GAMECORE_JSONENUMSTATIC_GETJSONENUMVALUE_OFFSET UNITYSDK_OFFSET(0x1D926C70)
#define RPG_GAMECORE_JSONENUMSTATIC_GET_S_DEFINECONFIG_OFFSET UNITYSDK_OFFSET(0x1D925310)
#define RPG_GAMECORE_JSONENUMSTATIC_ISJSONENUMVALID_OFFSET UNITYSDK_OFFSET(0x1D926970)
#define RPG_GAMECORE_JSONENUMSTATIC_RELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x1D926730)
#define RPG_GAMECORE_JSONENUMSTATIC_SET_S_DEFINECONFIG_OFFSET UNITYSDK_OFFSET(0x1D9266F0)
#define RPG_GAMECORE_JSONENUMSTATIC_VALUEOREMPTYCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1D9266A0)
#define RPG_GAMECORE_JSONENUMSTATIC__REGISTERCONST_OFFSET UNITYSDK_OFFSET(0x1D9266E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonEnumStatic_TypeDefinitionIndex = 10886;

	class JsonEnumStatic : public ::System::Object
	{
	public:
		static ::RPG::GameCore::JsonEnumDefineConfig** StaticGet_s_DefineConfig()
		{
			return (::RPG::GameCore::JsonEnumDefineConfig**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x15940);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_CorrectIcon()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x15948);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_None()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x15950);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_HeartDialRaid()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x15958);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatBackIcon()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x15960);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_InsertAbility_HideEffectMarkAutoHideInSkill()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x15968);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_ModifierCustomEventEmptyEnum()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x15970);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_DreamlandIcon()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x15978);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatLoopIcon()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x15980);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_ModifierCustomEvent_TargetStancePreshow()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x15988);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_DamageTagEmptyEnum()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x15990);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_DiceCombatIcon()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x15998);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_AdvModifierCustomEvent_Adventure_BeHitByVehicle()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x159A0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatIcon()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x159A8);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_BattleIcon()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x159B0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_TriggerProp()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x159B8);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_AbilityTagDefault()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x159C0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatMissionIcon()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x159C8);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatContinueIcon()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x159D0);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_ChatOutIcon()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x159D8);
		}

		static ::RPG::GameCore::JsonEnum** StaticGet_DialogueIconType_Default()
		{
			return (::RPG::GameCore::JsonEnum**)UnitySDK::FromName("RPG.GameCore", "JsonEnumStatic")->GetStaticField(0x159E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::JsonEnum* ValueOrEmptyCustomEvent(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_VALUEOREMPTYCUSTOMEVENT_OFFSET))(a1);
		}

		static ::RPG::GameCore::JsonEnumDefineConfig* get_S_DefineConfig()
		{
			return ((::RPG::GameCore::JsonEnumDefineConfig*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_GET_S_DEFINECONFIG_OFFSET))();
		}

		static ::System::Void set_S_DefineConfig(::RPG::GameCore::JsonEnumDefineConfig* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::JsonEnumDefineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_SET_S_DEFINECONFIG_OFFSET))(a1);
		}

		static ::System::Void ReloadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_RELOADCONFIG_OFFSET))();
		}

		static ::System::Boolean Contains(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1, ::RPG::GameCore::JsonEnum* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_CONTAINS_OFFSET))(a1, a2);
		}

		static ::System::Boolean ContainsAny(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_CONTAINSANY_OFFSET))(a1, a2);
		}

		static ::System::Boolean ContainsAll(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_CONTAINSALL_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsJsonEnumValid(::RPG::GameCore::JsonEnumCategory a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::JsonEnumCategory, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_ISJSONENUMVALID_OFFSET))(a1, a2);
		}

		static ::System::String* GetJsonEnumStr(::RPG::GameCore::JsonEnumCategory a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::JsonEnumCategory, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_GETJSONENUMSTR_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetJsonEnumValue(::RPG::GameCore::JsonEnumCategory a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::JsonEnumCategory, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC_GETJSONENUMVALUE_OFFSET))(a1, a2);
		}

		static ::System::Void _RegisterConst()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMSTATIC__REGISTERCONST_OFFSET))();
		}

	};
}
