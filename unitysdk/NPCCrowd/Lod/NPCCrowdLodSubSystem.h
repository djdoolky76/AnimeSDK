#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/NPCCrowd/Lod/FNPCCrowdLodDecisionFragment.h"

class COCJHGGDBCA;
class NapRenderEntity;
namespace NPCCrowd { class CrowdTickControlInstance; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace NPCCrowd::Lod { class NPCCrowdNativeLodData; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_APPLYLODDECISION_OFFSET UNITYSDK_OFFSET(0x13651B70)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_APPLYNPCLODDATAORIENTED_OFFSET UNITYSDK_OFFSET(0x13650470)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_CHECKLOD_OFFSET UNITYSDK_OFFSET(0x136513B0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_COLLECTRENDERERVISIBILITYFROMLODRENDERERS_OFFSET UNITYSDK_OFFSET(0x13652B80)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_COLLECTRENDERERVISIBILITYFROMRENDERENTITY_OFFSET UNITYSDK_OFFSET(0x13652870)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_COLLECTRENDERERVISIBILITY_OFFSET UNITYSDK_OFFSET(0x13652760)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1364EF30)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ENSURELODREGISTERED_OFFSET UNITYSDK_OFFSET(0x1364F3B0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ENSUREVISIBILITYQUERYRESULT_OFFSET UNITYSDK_OFFSET(0x13652580)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_GET_NATIVEDATASTORE_OFFSET UNITYSDK_OFFSET(0x1364EEA0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_GET_OFFSET UNITYSDK_OFFSET(0x1364EE20)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x1364FDE0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1364FF40)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYADD_OFFSET UNITYSDK_OFFSET(0x1364F260)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1364F810)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x1364FA70)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x136524D0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x13651E80)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x136508A0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_REALPOSTLATEUPDATELEGACY_OFFSET UNITYSDK_OFFSET(0x13652220)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_REALPOSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13651F70)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_REGISTERTICKCONTROLINSTANCE_OFFSET UNITYSDK_OFFSET(0x1364FD10)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_SETNPCLOD_OFFSET UNITYSDK_OFFSET(0x13651490)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UNREGISTERLOD_OFFSET UNITYSDK_OFFSET(0x1364FBE0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATENPCLODLEGACY_OFFSET UNITYSDK_OFFSET(0x13650730)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATENPCLOD_OFFSET UNITYSDK_OFFSET(0x13650E30)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATERENDERERVISIBILITYBATCH_OFFSET UNITYSDK_OFFSET(0x136509A0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x13650150)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x13652EB0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1364ECC0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13652FF0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x13653000)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13653090)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13653120)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x136531C0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x13653260)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x13653300)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodSubSystem_TypeDefinitionIndex = 84519;

	class NPCCrowdLodSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::NPCCrowd::Lod::NPCCrowdLodSubSystem** StaticGet__instance()
		{
			return (::NPCCrowd::Lod::NPCCrowdLodSubSystem**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x35F10);
		}
		static ::System::Action_2<::COCJHGGDBCA*, ::NPCCrowd::Lod::NPCCrowdLodSubSystem*>** StaticGet__collectRendererVisibilityCallback()
		{
			return (::System::Action_2<::COCJHGGDBCA*, ::NPCCrowd::Lod::NPCCrowdLodSubSystem*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x35F18);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_LODTickScaleList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x35F20);
		}
		static ::NPCCrowd::CrowdTickControlInstance** StaticGet_LODTickControlInstance()
		{
			return (::NPCCrowd::CrowdTickControlInstance**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x35F28);
		}
		static ::System::Collections::Generic::List_1<::NPCCrowd::CrowdTickControlInstance*>** StaticGet_AllTickControlInstances()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::CrowdTickControlInstance*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x35F30);
		}
		static ::System::Single* StaticGet_lastUpdateDirectionalMeshTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0xC000);
		}
		static ::System::Single* StaticGet_UpdateDirectionalMeshIntervalTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0xC004);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* visibilityQueryData; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* visibilityQueryRanges; // 0x28
		::Nap::NapECS::EcsFilter* hasMatCmpFilter; // 0x30
		::Unity::Collections::NativeList_1<::System::Boolean> visibilityQueryResult; // 0x38
		::System::Byte _padding0[0x8];
		::System::Boolean previousFrameVisibilityControlEnabled; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Lod::NPCCrowdLodSubSystem* Get()
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodSubSystem*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_GET_OFFSET))();
		}

		::NPCCrowd::Lod::NPCCrowdNativeLodData* get_NativeDataStore()
		{
			return ((::NPCCrowd::Lod::NPCCrowdNativeLodData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_GET_NATIVEDATASTORE_OFFSET))(this);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		static ::System::Void OnEntityAdd(::Nap::NapECS::EcsEntity* ecsEntity)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYADD_OFFSET))(ecsEntity);
		}

		static ::System::Void OnEntityReady(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYREADY_OFFSET))(entityId);
		}

		static ::System::Void OnEntityRemove(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYREMOVE_OFFSET))(entity);
		}

		static ::System::Boolean EnsureLodRegistered(::COCJHGGDBCA* npcComp, ::System::Boolean resetForceLod)
		{
			return ((::System::Boolean(*)(::COCJHGGDBCA*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ENSURELODREGISTERED_OFFSET))(npcComp, resetForceLod);
		}

		static ::System::Void UnregisterLod(::COCJHGGDBCA* npcComp, ::System::Boolean forceHide)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UNREGISTERLOD_OFFSET))(npcComp, forceHide);
		}

		static ::System::Int32 RegisterTickControlInstance(::NPCCrowd::CrowdTickControlInstance* instance)
		{
			return ((::System::Int32(*)(::NPCCrowd::CrowdTickControlInstance*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_REGISTERTICKCONTROLINSTANCE_OFFSET))(instance);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_INIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_PREUPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Void UpdateNPCLOD(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATENPCLOD_OFFSET))(npcComp);
		}

		::System::Void UpdateNPCLODLegacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATENPCLODLEGACY_OFFSET))(this);
		}

		::System::Void ApplyNPCLODDataOriented(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_APPLYNPCLODDATAORIENTED_OFFSET))(this, count);
		}

		static ::System::Void ApplyLodDecision(::COCJHGGDBCA* npcComp, ::NPCCrowd::Lod::FNPCCrowdLodDecisionFragment decision)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*, ::NPCCrowd::Lod::FNPCCrowdLodDecisionFragment))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_APPLYLODDECISION_OFFSET))(npcComp, decision);
		}

		::System::Void PostSimulationUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_POSTSIMULATIONUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_POSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void RealPostLateUpdateLegacy(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_REALPOSTLATEUPDATELEGACY_OFFSET))(this, deltaTime);
		}

		::System::Void RealPostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_REALPOSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateRendererVisibilityBatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATERENDERERVISIBILITYBATCH_OFFSET))(this);
		}

		::System::Void EnsureVisibilityQueryResult(::System::Int32 queryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ENSUREVISIBILITYQUERYRESULT_OFFSET))(this, queryCount);
		}

		static ::System::Void CollectRendererVisibility(::COCJHGGDBCA* npcComp, ::NPCCrowd::Lod::NPCCrowdLodSubSystem* self)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*, ::NPCCrowd::Lod::NPCCrowdLodSubSystem*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_COLLECTRENDERERVISIBILITY_OFFSET))(npcComp, self);
		}

		static ::System::Void CollectRendererVisibilityFromRenderEntity(::NPCCrowd::Animation::NPCUnionAnimator* animator, ::NapRenderEntity* renderEntity, ::NPCCrowd::Lod::NPCCrowdLodSubSystem* self)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::NPCUnionAnimator*, ::NapRenderEntity*, ::NPCCrowd::Lod::NPCCrowdLodSubSystem*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_COLLECTRENDERERVISIBILITYFROMRENDERENTITY_OFFSET))(animator, renderEntity, self);
		}

		static ::System::Void CollectRendererVisibilityFromLODRenderers(::COCJHGGDBCA* npcComp, ::NPCCrowd::Animation::NPCUnionAnimator* animator, ::NPCCrowd::Lod::NPCCrowdLodSubSystem* self)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*, ::NPCCrowd::Animation::NPCUnionAnimator*, ::NPCCrowd::Lod::NPCCrowdLodSubSystem*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_COLLECTRENDERERVISIBILITYFROMLODRENDERERS_OFFSET))(npcComp, animator, self);
		}

		static ::System::Void SetNPCLOD(::COCJHGGDBCA* npcComp, ::NPCCrowd::Lod::ELODLevel oldLOD, ::NPCCrowd::Lod::ELODLevel newLOD, ::System::Boolean forceNoFade)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_SETNPCLOD_OFFSET))(npcComp, oldLOD, newLOD, forceNoFade);
		}

		static ::System::Void CheckLOD(::COCJHGGDBCA* npcComp, ::System::Boolean forceNoFade)
		{
			return ((::System::Void(*)(::COCJHGGDBCA*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_CHECKLOD_OFFSET))(npcComp, forceNoFade);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PostLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_POSTLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_PostSimulationUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_POSTSIMULATIONUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_PREUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
