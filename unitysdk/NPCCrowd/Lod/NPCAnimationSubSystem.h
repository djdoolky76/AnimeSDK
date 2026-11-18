#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BABFBCHGIHG.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"

class COCJHGGDBCA;
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd { class CrowdTickControlInstance; }
namespace NPCCrowd::Animation { class NPCCPUAnimator; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15FA1590)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x15FA1460)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_POPLOOKIKTYPE_OFFSET UNITYSDK_OFFSET(0x15FA2620)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_PUSHLOOKIKTYPE_OFFSET UNITYSDK_OFFSET(0x15FA2560)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_RESOLVEENTITYTARGET_OFFSET UNITYSDK_OFFSET(0x15FA2220)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_RESOLVELOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x15FA1DA0)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_RUNLEGACYUPDATE_OFFSET UNITYSDK_OFFSET(0x15FA1890)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_UPDATEFILTERFUNC_OFFSET UNITYSDK_OFFSET(0x15FA1970)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_UPDATELOOKATIK_OFFSET UNITYSDK_OFFSET(0x15FA1A80)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x15FA16A0)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FA2780)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA2770)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15FA2840)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x15FA2850)
#define NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x15FA2890)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCAnimationSubSystem_TypeDefinitionIndex = 39525;

	class NPCAnimationSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_LODTickScaleList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationSubSystem_TypeDefinitionIndex)->GetStaticField(0x4EE90);
		}
		::NPCCrowd::CrowdTickControlInstance* UpdateControl; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_INIT_OFFSET))(this);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void RunLegacyUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_RUNLEGACYUPDATE_OFFSET))(this);
		}

		static ::System::Void UpdateFilterFunc(::COCJHGGDBCA* npcComp, ::NPCCrowd::Lod::NPCAnimationSubSystem* system)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*, ::NPCCrowd::Lod::NPCAnimationSubSystem*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_UPDATEFILTERFUNC_OFFSET))(npcComp, system);
		}

		static ::System::Void UpdateLookAtIK(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_UPDATELOOKATIK_OFFSET))(npcComp);
		}

		static ::UnityEngine::Transform* ResolveLookAtTarget(::NPCCrowd::Animation::NPCCPUAnimator* animator, ::System::Int32 ikType, ::System::Int32 ikParam)
		{
			return ((::UnityEngine::Transform*(*)(::NPCCrowd::Animation::NPCCPUAnimator*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_RESOLVELOOKATTARGET_OFFSET))(animator, ikType, ikParam);
		}

		static ::UnityEngine::Transform* ResolveEntityTarget(::NPCCrowd::Animation::NPCCPUAnimator* animator, ::MoleMole::Battle::Entity* entity)
		{
			return ((::UnityEngine::Transform*(*)(::NPCCrowd::Animation::NPCCPUAnimator*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_RESOLVEENTITYTARGET_OFFSET))(animator, entity);
		}

		static ::System::Void PushLookIKType(::COCJHGGDBCA* component, ::BABFBCHGIHG ikType, ::System::Int32 ikParam)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*, ::BABFBCHGIHG, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_PUSHLOOKIKTYPE_OFFSET))(component, ikType, ikParam);
		}

		static ::System::Boolean PopLookIKType(::COCJHGGDBCA* component, ::BABFBCHGIHG ikType)
		{
			return ((::System::Boolean(*)(::COCJHGGDBCA*, ::BABFBCHGIHG))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM_POPLOOKIKTYPE_OFFSET))(component, ikType);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCANIMATIONSUBSYSTEM___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
