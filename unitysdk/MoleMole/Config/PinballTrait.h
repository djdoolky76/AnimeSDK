#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Battle/PinballAbilityReference.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class MGBBDIIJPFJ;
class OHDHAGLCAEB;
namespace MoleMole { class ConfigPinball_PinballEntityTemplate; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_PINBALLTRAIT_APPLYTOPINBALLCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A049A20)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A049730)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_CACHELAUNCHERPOSITION_OFFSET UNITYSDK_OFFSET(0x1A049D50)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_CANTARGETRECEIVEKNOCKBACK_OFFSET UNITYSDK_OFFSET(0x1A04AEB0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A048CC0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_COUNTABILITYCONFIGIDS_OFFSET UNITYSDK_OFFSET(0x1A04B670)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_COUNTABILITYREFERENCES_OFFSET UNITYSDK_OFFSET(0x1A04B340)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_ENTITYTYPEPROVIDESBATTLERUNTIMECOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1A04B080)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A048DC0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A048C70)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_FORMATABILITYREFERENCES_OFFSET UNITYSDK_OFFSET(0x1A04B4A0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A049310)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A048F60)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A0496E0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A048DB0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_HASABILITYREFERENCE_OFFSET UNITYSDK_OFFSET(0x1A04B140)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_HASANYABILITYCONFIGID_OFFSET UNITYSDK_OFFSET(0x1A04B220)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_HASANYABILITYREFERENCE_OFFSET UNITYSDK_OFFSET(0x1A04B1D0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_HASCONTACTABILITY_OFFSET UNITYSDK_OFFSET(0x1A04A140)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_HASFINITEMASS_OFFSET UNITYSDK_OFFSET(0x1A04B770)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A049370)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A048FE0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_NORMALIZEBYKIND_OFFSET UNITYSDK_OFFSET(0x1A04A8F0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x1A04A4D0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1A049EC0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A049550)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A0491D0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x1A049CB0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_REQUIRESABILITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A04B030)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_REQUIRESENTITYBUILD_OFFSET UNITYSDK_OFFSET(0x1A04B0C0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_REQUIRESFINALMOVE_OFFSET UNITYSDK_OFFSET(0x1A04A0C0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_SAFEBALLMASS_OFFSET UNITYSDK_OFFSET(0x1A04AF70)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_SHOULDCREATEABILITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A049BF0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_SHOULDCREATEFINALMOVECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A049B20)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_TRYRESOLVELAUNCHERCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A04A640)
#define MOLEMOLE_CONFIG_PINBALLTRAIT_TRYRESOLVETEMPLATE_OFFSET UNITYSDK_OFFSET(0x1A049840)
#define MOLEMOLE_CONFIG_PINBALLTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04B7F0)
#define MOLEMOLE_CONFIG_PINBALLTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A04B800)
#define MOLEMOLE_CONFIG_PINBALLTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A04B810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PinballTrait_TypeDefinitionIndex = 51394;

	class PinballTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* TemplateKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::PinballTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::PinballTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::PinballTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::PinballTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_POSTPROCESSENTITY_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}

		static ::System::Void CacheLauncherPosition(::MoleMole::EntityHandle entityHandle, ::System::String* readyEventName, ::System::String* launchEventName)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_CACHELAUNCHERPOSITION_OFFSET))(entityHandle, readyEventName, launchEventName);
		}

		static ::System::Boolean TryResolveLauncherContext(::MoleMole::Battle::Entity* entity, ::Foundation::ViewObject::ViewObjectHandle& launcherViewObject, ::UnityEngine::Vector3& position, ::System::String*& reason)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Foundation::ViewObject::ViewObjectHandle&, ::UnityEngine::Vector3&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_TRYRESOLVELAUNCHERCONTEXT_OFFSET))(entity, launcherViewObject, position, reason);
		}

		::System::Void ApplyToPinballComponent(::MGBBDIIJPFJ* component, ::MoleMole::ConfigPinball_PinballEntityTemplate* template_)
		{
			return ((::System::Void(*)(::PVOID, ::MGBBDIIJPFJ*, ::MoleMole::ConfigPinball_PinballEntityTemplate*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_APPLYTOPINBALLCOMPONENT_OFFSET))(this, component, template_);
		}

		::System::Boolean TryResolveTemplate(::System::Boolean logError, ::MoleMole::ConfigPinball_PinballEntityTemplate*& template_)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::MoleMole::ConfigPinball_PinballEntityTemplate*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_TRYRESOLVETEMPLATE_OFFSET))(this, logError, template_);
		}

		static ::System::Void NormalizeByKind(::MGBBDIIJPFJ* component)
		{
			return ((::System::Void(*)(::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_NORMALIZEBYKIND_OFFSET))(component);
		}

		static ::System::Boolean RequiresFinalMove(::MGBBDIIJPFJ* component)
		{
			return ((::System::Boolean(*)(::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_REQUIRESFINALMOVE_OFFSET))(component);
		}

		static ::System::Boolean RequiresAbilityComponent(::MGBBDIIJPFJ* component)
		{
			return ((::System::Boolean(*)(::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_REQUIRESABILITYCOMPONENT_OFFSET))(component);
		}

		static ::System::Boolean ShouldCreateFinalMoveComponent(::MoleMole::Config::EntityType entityType, ::MGBBDIIJPFJ* component)
		{
			return ((::System::Boolean(*)(::MoleMole::Config::EntityType, ::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_SHOULDCREATEFINALMOVECOMPONENT_OFFSET))(entityType, component);
		}

		static ::System::Boolean ShouldCreateAbilityComponent(::MoleMole::Config::EntityType entityType, ::MGBBDIIJPFJ* component)
		{
			return ((::System::Boolean(*)(::MoleMole::Config::EntityType, ::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_SHOULDCREATEABILITYCOMPONENT_OFFSET))(entityType, component);
		}

		static ::System::Boolean EntityTypeProvidesBattleRuntimeComponents(::MoleMole::Config::EntityType entityType)
		{
			return ((::System::Boolean(*)(::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_ENTITYTYPEPROVIDESBATTLERUNTIMECOMPONENTS_OFFSET))(entityType);
		}

		::System::Boolean RequiresEntityBuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_REQUIRESENTITYBUILD_OFFSET))(this);
		}

		static ::System::Boolean HasContactAbility(::MGBBDIIJPFJ* component)
		{
			return ((::System::Boolean(*)(::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_HASCONTACTABILITY_OFFSET))(component);
		}

		static ::System::Boolean HasAbilityReference(::MoleMole::Battle::PinballAbilityReference abilityReference)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::PinballAbilityReference))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_HASABILITYREFERENCE_OFFSET))(abilityReference);
		}

		static ::System::Boolean HasAnyAbilityReference(::Il2CppArray<::MoleMole::Battle::PinballAbilityReference>* abilityReferences)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::MoleMole::Battle::PinballAbilityReference>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_HASANYABILITYREFERENCE_OFFSET))(abilityReferences);
		}

		static ::System::String* FormatAbilityReferences(::MoleMole::Battle::PinballAbilityReference abilityReference, ::Il2CppArray<::MoleMole::Battle::PinballAbilityReference>* extraAbilityReferences, ::Il2CppArray<::System::Int32>* abilityConfigIDs)
		{
			return ((::System::String*(*)(::MoleMole::Battle::PinballAbilityReference, ::Il2CppArray<::MoleMole::Battle::PinballAbilityReference>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_FORMATABILITYREFERENCES_OFFSET))(abilityReference, extraAbilityReferences, abilityConfigIDs);
		}

		static ::System::Int32 CountAbilityReferences(::Il2CppArray<::MoleMole::Battle::PinballAbilityReference>* abilityReferences)
		{
			return ((::System::Int32(*)(::Il2CppArray<::MoleMole::Battle::PinballAbilityReference>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_COUNTABILITYREFERENCES_OFFSET))(abilityReferences);
		}

		static ::System::Boolean HasAnyAbilityConfigID(::Il2CppArray<::System::Int32>* abilityConfigIDs)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_HASANYABILITYCONFIGID_OFFSET))(abilityConfigIDs);
		}

		static ::System::Int32 CountAbilityConfigIDs(::Il2CppArray<::System::Int32>* abilityConfigIDs)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_COUNTABILITYCONFIGIDS_OFFSET))(abilityConfigIDs);
		}

		static ::System::Single SafeBallMass(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_SAFEBALLMASS_OFFSET))(value);
		}

		static ::System::Boolean CanTargetReceiveKnockback(::MGBBDIIJPFJ* component)
		{
			return ((::System::Boolean(*)(::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_CANTARGETRECEIVEKNOCKBACK_OFFSET))(component);
		}

		static ::System::Boolean HasFiniteMass(::System::Single mass)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT_HASFINITEMASS_OFFSET))(mass);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PINBALLTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
