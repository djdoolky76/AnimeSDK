#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/PerformanceSettingProfile_ENPCOmitLevel.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CALIGLPABNP;
class EGOJNNIFDJJ;
class EKHEOJOFLLA;
class EOLDCFLNKHC;
class FKNIEPCILLG;
class OHDHAGLCAEB;
class OJGOIAPCKBN;
namespace MoleMole::Config { class NpcAccessoryVoConfig; }
namespace MoleMole::Config { class NpcMontageConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xFFDC870)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xFFD96B0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_CREATECROWDNPC_OFFSET UNITYSDK_OFFSET(0xFFDF010)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_CREATENORMALNPC_OFFSET UNITYSDK_OFFSET(0xFFDEBD0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFD97B0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFD9620)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFDBCE0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFFDA570)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xFFDC790)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_GETANIMATIONRANDOMSTARTTIMERANGE_OFFSET UNITYSDK_OFFSET(0xFFDF960)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFFD97A0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_GETOMITLEVEL_OFFSET UNITYSDK_OFFSET(0xFFDE760)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INITCROWDNPCANIMATION_OFFSET UNITYSDK_OFFSET(0xFFDFA10)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INITCROWDNPCCOLLIDER_OFFSET UNITYSDK_OFFSET(0xFFE0530)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INITNORMALNPCANIMATION_OFFSET UNITYSDK_OFFSET(0xFFE11E0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INITNPCNAME_OFFSET UNITYSDK_OFFSET(0xFFE0260)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFDBD40)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFFDA5F0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_ONCUSTOMSETENABLE_OFFSET UNITYSDK_OFFSET(0xFFE1050)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0xFFE1920)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xFFE0B30)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFDC600)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFFDBBA0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0xFFDF650)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_RANDOMLOOPSTATENORMALIZEDTIMEASYNC_OFFSET UNITYSDK_OFFSET(0xFFE18B0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_REGISTERNORMALNPCPERCEPTIONTARGET_OFFSET UNITYSDK_OFFSET(0xFFE0DE0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_SETPARAMETER_OFFSET UNITYSDK_OFFSET(0xFFE1670)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_TRYGETNPCPERFTAG_OFFSET UNITYSDK_OFFSET(0xFFDE890)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_TRYRENAMESERVERNPCROOTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xFFE05E0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT__CCTOR_OFFSET UNITYSDK_OFFSET(0xFFE19F0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE19E0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT__INITNPCONENABLE_OFFSET UNITYSDK_OFFSET(0xFFE0C30)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFE1A10)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xFFE1A20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigNpcSubTrait_TypeDefinitionIndex = 62237;

	class ConfigNpcSubTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		static ::MoleMole::PerformanceSettingProfile_ENPCOmitLevel* StaticGet_debugSimulateOmitLevel()
		{
			return (::MoleMole::PerformanceSettingProfile_ENPCOmitLevel*)Il2CppClass::FromTypeDefinitionIndex(ConfigNpcSubTrait_TypeDefinitionIndex)->GetStaticField(0x12900);
		}
		static ::System::Boolean* StaticGet_debugCullAll()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigNpcSubTrait_TypeDefinitionIndex)->GetStaticField(0x12904);
		}
		static ::System::Boolean* StaticGet_debugPrintCullVo()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigNpcSubTrait_TypeDefinitionIndex)->GetStaticField(0x12905);
		}
		static ::System::Boolean* StaticGet_debugUseDynamicUnloadPriority()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigNpcSubTrait_TypeDefinitionIndex)->GetStaticField(0x12906);
		}
		static ::System::Boolean* StaticGet_debugOverrideOmitLevel()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigNpcSubTrait_TypeDefinitionIndex)->GetStaticField(0x12907);
		}
		static ::System::Boolean* StaticGet_enablePlatformCull()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigNpcSubTrait_TypeDefinitionIndex)->GetStaticField(0x12908);
		}
		::System::Collections::Generic::List_1<::MoleMole::Config::NpcAccessoryVoConfig*>* AccessoryList; // 0x18
		::System::String* Name; // 0x20
		::System::String* ColliderKey; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Config::NpcMontageConfig*>* MontageConfigs; // 0x30
		::System::Single RandomStartTimeRangeMax; // 0x38
		::System::Boolean CustomRandomStartTimeRange; // 0x3C
		::System::Boolean DisableFadeInOut; // 0x3D
		::System::Byte _padding0[0x2];
		::System::Int32 NpcID; // 0x40
		::System::Single RandomStartTimeRangeMin; // 0x44
		::System::Boolean IsUsePlayerSkin; // 0x48
		::System::Boolean InitEntityDisable; // 0x49
		::System::Boolean EnableAnimationStateMachine; // 0x4A
		::System::Boolean ActionRandomStartTime; // 0x4B
		::System::Int32 DynamicUnloadPriority; // 0x4C
		::System::Int32 ActionID; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT__CCTOR_OFFSET))();
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigNpcSubTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigNpcSubTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigNpcSubTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigNpcSubTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		static ::MoleMole::PerformanceSettingProfile_ENPCOmitLevel GetOmitLevel()
		{
			return ((::MoleMole::PerformanceSettingProfile_ENPCOmitLevel(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_GETOMITLEVEL_OFFSET))();
		}

		static ::System::Boolean CreateCrowdNpc(::Foundation::ViewObject::EntityBuildContext& buildContext, ::System::Int32 npcID, ::OJGOIAPCKBN* npcTemplate, ::CALIGLPABNP* monsterTemplate, ::UnityEngine::Vector3 bornPosition, ::UnityEngine::Quaternion bornQuaternion, ::System::Boolean disableFadeInOut, ::System::Collections::Generic::List_1<::MoleMole::Config::NpcAccessoryVoConfig*>* accessoryVoConfigList)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::EntityBuildContext&, ::System::Int32, ::OJGOIAPCKBN*, ::CALIGLPABNP*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::System::Collections::Generic::List_1<::MoleMole::Config::NpcAccessoryVoConfig*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_CREATECROWDNPC_OFFSET))(buildContext, npcID, npcTemplate, monsterTemplate, bornPosition, bornQuaternion, disableFadeInOut, accessoryVoConfigList);
		}

		static ::System::Boolean CreateNormalNpc(::Foundation::ViewObject::EntityBuildContext& buildContext, ::System::Int32 npcID, ::CALIGLPABNP* monsterTemplate, ::UnityEngine::Vector3 bornPosition, ::UnityEngine::Quaternion bornQuaternion, ::System::Boolean disableFadeInOut)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::EntityBuildContext&, ::System::Int32, ::CALIGLPABNP*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_CREATENORMALNPC_OFFSET))(buildContext, npcID, monsterTemplate, bornPosition, bornQuaternion, disableFadeInOut);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_POSTPROCESSENTITY_OFFSET))(this, entityHandle);
		}

		static ::System::Void InitCrowdNpcAnimation(::MoleMole::EntityHandle entityHandle, ::System::Boolean enableStateMachine, ::System::Int32 actionID, ::System::ValueTuple_2<::System::Single, ::System::Single> randomRange, ::System::Collections::Generic::List_1<::MoleMole::Config::NpcMontageConfig*>* montageConfigs, ::System::UInt32 debugGroupID, ::System::UInt32 debugMemberID)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>, ::System::Collections::Generic::List_1<::MoleMole::Config::NpcMontageConfig*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INITCROWDNPCANIMATION_OFFSET))(entityHandle, enableStateMachine, actionID, randomRange, montageConfigs, debugGroupID, debugMemberID);
		}

		static ::System::Void InitNpcName(::MoleMole::EntityHandle entityHandle, ::System::String* nameKey)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INITNPCNAME_OFFSET))(entityHandle, nameKey);
		}

		static ::System::Void InitCrowdNpcCollider(::MoleMole::EntityHandle entityHandle, ::System::String* colliderKey)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INITCROWDNPCCOLLIDER_OFFSET))(entityHandle, colliderKey);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void OnCustomSetEnable(::MoleMole::EntityHandle entityHandle, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_ONCUSTOMSETENABLE_OFFSET))(this, entityHandle, enable);
		}

		static ::System::Void RegisterNormalNpcPerceptionTarget(::MoleMole::EntityHandle entityHandle, ::System::Boolean register_)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_REGISTERNORMALNPCPERCEPTIONTARGET_OFFSET))(entityHandle, register_);
		}

		::System::Void _InitNpcOnEnable(::MoleMole::EntityHandle entityHandle, ::System::Boolean isCustomEnable)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT__INITNPCONENABLE_OFFSET))(this, entityHandle, isCustomEnable);
		}

		static ::System::Void TryRenameServerNpcRootGameObject(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_TRYRENAMESERVERNPCROOTGAMEOBJECT_OFFSET))(entityHandle);
		}

		static ::System::Void InitNormalNpcAnimation(::MoleMole::EntityHandle entityHandle, ::System::Int32 actionID, ::System::ValueTuple_2<::System::Single, ::System::Single> randomRange, ::System::Boolean isCustomEnable)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INITNORMALNPCANIMATION_OFFSET))(entityHandle, actionID, randomRange, isCustomEnable);
		}

		static ::System::Void SetParameter(::UnityEngine::Animator* animator, ::System::String* paramType, ::System::String* paramName, ::System::String* paramValue)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_SETPARAMETER_OFFSET))(animator, paramType, paramName, paramValue);
		}

		static ::Cysharp::Threading::Tasks::UniTaskVoid RandomLoopStateNormalizedTimeAsync(::UnityEngine::Animator* animator, ::System::ValueTuple_2<::System::Single, ::System::Single> randomRange)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::UnityEngine::Animator*, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_RANDOMLOOPSTATENORMALIZEDTIMEASYNC_OFFSET))(animator, randomRange);
		}

		static ::System::ValueTuple_2<::System::Single, ::System::Single> GetAnimationRandomStartTimeRange(::System::Boolean randomStart, ::System::Boolean customRange, ::System::Single rangeMin, ::System::Single rangeMax)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_GETANIMATIONRANDOMSTARTTIMERANGE_OFFSET))(randomStart, customRange, rangeMin, rangeMax);
		}

		static ::EOLDCFLNKHC* TryGetNpcPerfTag(::Foundation::ViewObject::ViewObjectHandle memberHandle, ::EGOJNNIFDJJ* memberComp)
		{
			return ((::EOLDCFLNKHC*(*)(::Foundation::ViewObject::ViewObjectHandle, ::EGOJNNIFDJJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_TRYGETNPCPERFTAG_OFFSET))(memberHandle, memberComp);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
