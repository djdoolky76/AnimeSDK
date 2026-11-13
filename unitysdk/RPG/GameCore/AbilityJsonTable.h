#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIFEEJPHMJC.h"
#include "unitysdk/System/Object.h"
class ALEPDLNOEHE;
class GIIBEHJLDDD;
class HBBDMIIALAI;
class OEKLIOCCJNB;
class OLCNEENDGFM;
class OLKKPBLPIDJ;
namespace RPG::GameCore { class FormationData; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace RPG::GameCore { class TurnBasedAbilityConfig; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ABILITYJSONTABLE_ADDEXTRATASKLISTTEMPLATELOOKUP_OFFSET UNITYSDK_OFFSET(0x18273E40)
#define RPG_GAMECORE_ABILITYJSONTABLE_ADDMODIFIERALIAS_OFFSET UNITYSDK_OFFSET(0x18274370)
#define RPG_GAMECORE_ABILITYJSONTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x182744C0)
#define RPG_GAMECORE_ABILITYJSONTABLE_GETABILITYCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x182741B0)
#define RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALFORMATION_OFFSET UNITYSDK_OFFSET(0x18273FF0)
#define RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALMODIFIERCONFIG_OFFSET UNITYSDK_OFFSET(0x182736D0)
#define RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALTASKLISTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x18273B50)
#define RPG_GAMECORE_ABILITYJSONTABLE_GETTURNBASEDABILITY_OFFSET UNITYSDK_OFFSET(0x182734B0)
#define RPG_GAMECORE_ABILITYJSONTABLE_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x18274440)
#define RPG_GAMECORE_ABILITYJSONTABLE_LAZYLOADRELEASE_OFFSET UNITYSDK_OFFSET(0x18270240)
#define RPG_GAMECORE_ABILITYJSONTABLE_LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x1826FBF0)
#define RPG_GAMECORE_ABILITYJSONTABLE_LOADGLOBALFORMATIONDATA_OFFSET UNITYSDK_OFFSET(0x18272870)
#define RPG_GAMECORE_ABILITYJSONTABLE_LOADGLOBALMODIFIERCONFIG_OFFSET UNITYSDK_OFFSET(0x1826FD30)
#define RPG_GAMECORE_ABILITYJSONTABLE_LOADGLOBALTASKLISTTEMPLATECONFIG_OFFSET UNITYSDK_OFFSET(0x1826FE00)
#define RPG_GAMECORE_ABILITYJSONTABLE_PARSETURNBASEDABILITY_OFFSET UNITYSDK_OFFSET(0x18270C40)
#define RPG_GAMECORE_ABILITYJSONTABLE_REMOVEEXTRATASKLISTTEMPLATELOOKUP_OFFSET UNITYSDK_OFFSET(0x18273F60)
#define RPG_GAMECORE_ABILITYJSONTABLE_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x1826FF30)
#define RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALCAMERACONFIGS_OFFSET UNITYSDK_OFFSET(0x182732B0)
#define RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALFORMATIONDATALISTCONFIG_OFFSET UNITYSDK_OFFSET(0x18273130)
#define RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALMODIFIERS_OFFSET UNITYSDK_OFFSET(0x18272B40)
#define RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALTARGETALIASLIST_OFFSET UNITYSDK_OFFSET(0x18272EE0)
#define RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALTEMPLATETASKLIST_OFFSET UNITYSDK_OFFSET(0x18272D50)
#define RPG_GAMECORE_ABILITYJSONTABLE__GETMODIFIERALIASMAPPEDNAME_OFFSET UNITYSDK_OFFSET(0x18273A20)
#define RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALFORMATIONASSET_OFFSET UNITYSDK_OFFSET(0x18272940)
#define RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALMODIFIER_OFFSET UNITYSDK_OFFSET(0x18272460)
#define RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALTASKLISTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x18272670)
#define RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADTURNBASEDABILITYLIST_OFFSET UNITYSDK_OFFSET(0x18271E40)
#define RPG_GAMECORE_ABILITYJSONTABLE__LOADTURNBASEDABILITY_OFFSET UNITYSDK_OFFSET(0x1826FED0)
#define RPG_GAMECORE_ABILITYJSONTABLE__READDGLOBALCAMERACONFIGSLIST_OFFSET UNITYSDK_OFFSET(0x18271B80)
#define RPG_GAMECORE_ABILITYJSONTABLE__READDGLOBALFORMATIONDATALIST_OFFSET UNITYSDK_OFFSET(0x18271930)
#define RPG_GAMECORE_ABILITYJSONTABLE__READDGLOBALMODIFIERS_OFFSET UNITYSDK_OFFSET(0x182710E0)
#define RPG_GAMECORE_ABILITYJSONTABLE__READDGLOBALTEMPLATETASKLIST_OFFSET UNITYSDK_OFFSET(0x182713C0)
#define RPG_GAMECORE_ABILITYJSONTABLE__READDTARGETEVALUATORLIST_OFFSET UNITYSDK_OFFSET(0x18271610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityJsonTable_TypeDefinitionIndex = 57705;

	class AbilityJsonTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::GIIBEHJLDDD*>** StaticGet_GlobalTaskListTemplateMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::GIIBEHJLDDD*>**)UnitySDK::FromName("RPG.GameCore", "AbilityJsonTable")->GetStaticField(0x61A20);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::HBBDMIIALAI*>** StaticGet_GlobalFormationDataMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::HBBDMIIALAI*>**)UnitySDK::FromName("RPG.GameCore", "AbilityJsonTable")->GetStaticField(0x61A28);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_GlobalModifierAlias()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AbilityJsonTable")->GetStaticField(0x61A30);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>*>** StaticGet__ExtraTaskListTemplateLookup()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>*>**)UnitySDK::FromName("RPG.GameCore", "AbilityJsonTable")->GetStaticField(0x61A38);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::OEKLIOCCJNB*>** StaticGet_GlobalModifierConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::OEKLIOCCJNB*>**)UnitySDK::FromName("RPG.GameCore", "AbilityJsonTable")->GetStaticField(0x61A40);
		}

		static ::System::Collections::Generic::Dictionary_2<::DIFEEJPHMJC, ::OLKKPBLPIDJ*>** StaticGet_GlobalTargetEvaluatorMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::DIFEEJPHMJC, ::OLKKPBLPIDJ*>**)UnitySDK::FromName("RPG.GameCore", "AbilityJsonTable")->GetStaticField(0x61A48);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::ALEPDLNOEHE*>** StaticGet_AbilityCameraConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::ALEPDLNOEHE*>**)UnitySDK::FromName("RPG.GameCore", "AbilityJsonTable")->GetStaticField(0x61A50);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::OLCNEENDGFM*>** StaticGet_TBAbilityMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::OLCNEENDGFM*>**)UnitySDK::FromName("RPG.GameCore", "AbilityJsonTable")->GetStaticField(0x61A58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_CCTOR_OFFSET))();
		}

		static ::System::Void LoadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_LOADALLCONFIG_OFFSET))();
		}

		static ::System::Void UnloadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_UNLOADALLCONFIG_OFFSET))();
		}

		static ::System::Void ParseTurnBasedAbility(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_PARSETURNBASEDABILITY_OFFSET))(a1);
		}

		static ::System::Void _LoadTurnBasedAbility(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__LOADTURNBASEDABILITY_OFFSET))(a1);
		}

		static ::System::Void _ReaddGlobalModifiers(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TurnBasedModifierConfig*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TurnBasedModifierConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__READDGLOBALMODIFIERS_OFFSET))(a1, a2);
		}

		static ::System::Void _ReaddGlobalTemplateTaskList(::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::TaskListTemplate*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__READDGLOBALTEMPLATETASKLIST_OFFSET))(a1, a2);
		}

		static ::System::Void _ReaddTargetEvaluatorList(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__READDTARGETEVALUATORLIST_OFFSET))(a1, a2);
		}

		static ::System::Void _ReaddGlobalFormationDataList(::Il2CppArray<::RPG::GameCore::FormationData*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::FormationData*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__READDGLOBALFORMATIONDATALIST_OFFSET))(a1, a2);
		}

		static ::System::Void _ReaddGlobalCameraConfigsList(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::VCameraConfig*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::VCameraConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__READDGLOBALCAMERACONFIGSLIST_OFFSET))(a1, a2);
		}

		static ::System::Void LoadGlobalModifierConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_LOADGLOBALMODIFIERCONFIG_OFFSET))();
		}

		static ::System::Void LoadGlobalTaskListTemplateConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_LOADGLOBALTASKLISTTEMPLATECONFIG_OFFSET))();
		}

		static ::System::Void LoadGlobalFormationData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_LOADGLOBALFORMATIONDATA_OFFSET))();
		}

		static ::System::Void _AddGlobalModifiers(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TurnBasedModifierConfig*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TurnBasedModifierConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALMODIFIERS_OFFSET))(a1, a2);
		}

		static ::System::Void _AddGlobalTemplateTaskList(::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::TaskListTemplate*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALTEMPLATETASKLIST_OFFSET))(a1, a2);
		}

		static ::System::Void _AddGlobalTargetAliasList(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALTARGETALIASLIST_OFFSET))(a1, a2);
		}

		static ::System::Void _AddGlobalFormationDataListConfig(::Il2CppArray<::RPG::GameCore::FormationData*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::FormationData*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALFORMATIONDATALISTCONFIG_OFFSET))(a1, a2);
		}

		static ::System::Void _AddGlobalCameraConfigs(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::VCameraConfig*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::VCameraConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__ADDGLOBALCAMERACONFIGS_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::TurnBasedAbilityConfig* GetTurnBasedAbility(::System::String* a1)
		{
			return ((::RPG::GameCore::TurnBasedAbilityConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GETTURNBASEDABILITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::TurnBasedModifierConfig* GetGlobalModifierConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::TurnBasedModifierConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALMODIFIERCONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::TaskListTemplate* GetGlobalTaskListTemplate(::System::String* a1)
		{
			return ((::RPG::GameCore::TaskListTemplate*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALTASKLISTTEMPLATE_OFFSET))(a1);
		}

		static ::System::Void AddExtraTaskListTemplateLookup(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_ADDEXTRATASKLISTTEMPLATELOOKUP_OFFSET))(a1);
		}

		static ::System::Void RemoveExtraTaskListTemplateLookup(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_REMOVEEXTRATASKLISTTEMPLATELOOKUP_OFFSET))(a1);
		}

		static ::RPG::GameCore::FormationData* GetGlobalFormation(::System::String* a1)
		{
			return ((::RPG::GameCore::FormationData*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GETGLOBALFORMATION_OFFSET))(a1);
		}

		static ::RPG::GameCore::VCameraConfig* GetAbilityCameraConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::VCameraConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GETABILITYCAMERACONFIG_OFFSET))(a1);
		}

		static ::System::Void AddModifierAlias(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_ADDMODIFIERALIAS_OFFSET))(a1, a2);
		}

		static ::System::Void LazyLoadRelease()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_LAZYLOADRELEASE_OFFSET))();
		}

		static ::System::Void _LazyLoadGlobalTaskListTemplate(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALTASKLISTTEMPLATE_OFFSET))(a1);
		}

		static ::System::Void _LazyLoadGlobalModifier(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALMODIFIER_OFFSET))(a1);
		}

		static ::System::Void _LazyLoadTurnBasedAbilityList(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADTURNBASEDABILITYLIST_OFFSET))(a1);
		}

		static ::System::Void _LazyLoadGlobalFormationAsset(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__LAZYLOADGLOBALFORMATIONASSET_OFFSET))(a1);
		}

		static ::System::String* _GetModifierAliasMappedName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE__GETMODIFIERALIASMAPPEDNAME_OFFSET))(a1);
		}

		static ::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYJSONTABLE_GET_ISLOADED_OFFSET))();
		}

	};
}
