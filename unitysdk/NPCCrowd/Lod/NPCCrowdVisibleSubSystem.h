#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

class COCJHGGDBCA;
class NapRenderEntity;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ADDPENDINGRENDERERVISIBILITY_OFFSET UNITYSDK_OFFSET(0xEEAD9B0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_APPLYRENDERERVISIBILITYRESULT_OFFSET UNITYSDK_OFFSET(0xEEAD240)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_CLEARSTATICSTATEONSUBSYSTEMREGISTRATION_OFFSET UNITYSDK_OFFSET(0xEEAB9E0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_COLLECTRENDERERVISIBILITYFROMLODRENDERERS_OFFSET UNITYSDK_OFFSET(0xEEADB40)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_COLLECTRENDERERVISIBILITYFROMRENDERENTITY_OFFSET UNITYSDK_OFFSET(0xEEAE220)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xEEABCE0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ENSUREVISIBILITYQUERYRESULT_OFFSET UNITYSDK_OFFSET(0xEEAD060)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_GETLASTVISIBILITYRANGEINDEXBYCOUNT_OFFSET UNITYSDK_OFFSET(0xEEAE5E0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_GETVISIBILITYENTITYID_OFFSET UNITYSDK_OFFSET(0xEEAD7C0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_GET_OFFSET UNITYSDK_OFFSET(0xEEABC90)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ISVALIDVISIBILITYDATARANGE_OFFSET UNITYSDK_OFFSET(0xEEAEE80)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ISVALIDVISIBILITYRANGEINDEX_OFFSET UNITYSDK_OFFSET(0xEEAE440)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONCROWDENTITYVISIBILITYADD_OFFSET UNITYSDK_OFFSET(0xEEAC190)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONCROWDENTITYVISIBILITYREMOVE_OFFSET UNITYSDK_OFFSET(0xEEAC4A0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEEAC600)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0xEEABF00)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0xEEAC320)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_PREPARERENDERERVISIBILITYQUERY_OFFSET UNITYSDK_OFFSET(0xEEACE80)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xEEAC7F0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_PROCESSPENDINGRENDERERVISIBILITY_OFFSET UNITYSDK_OFFSET(0xEEAD3B0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REBUILDVISIBILITYINDICES_OFFSET UNITYSDK_OFFSET(0xEEAE4C0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVEPENDINGRENDERERVISIBILITY_OFFSET UNITYSDK_OFFSET(0xEEACA90)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVERENDERERVISIBILITYDATARANGE_OFFSET UNITYSDK_OFFSET(0xEEAECC0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVERENDERERVISIBILITYRANGEANDSHIFTFOLLOWING_OFFSET UNITYSDK_OFFSET(0xEEAE8C0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVERENDERERVISIBILITYRANGE_OFFSET UNITYSDK_OFFSET(0xEEACAF0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVEVISIBILITYRANGEATSWAPBACK_OFFSET UNITYSDK_OFFSET(0xEEAEBB0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_SAMECOUNTSWAP_OFFSET UNITYSDK_OFFSET(0xEEAE670)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_SHIFTVISIBILITYRANGESTARTINDEXAFTERDATAREMOVE_OFFSET UNITYSDK_OFFSET(0xEEAED90)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_SWAPRENDERERVISIBILITYDATARANGE_OFFSET UNITYSDK_OFFSET(0xEEAE960)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_TRYADDRENDERERVISIBILITYRANGE_OFFSET UNITYSDK_OFFSET(0xEEAD810)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_UPDATERENDERERVISIBILITYBATCH_OFFSET UNITYSDK_OFFSET(0xEEACDF0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xEEABA80)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xEEAEEF0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEEAEF00)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xEEAEF90)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdVisibleSubSystem_TypeDefinitionIndex = 92534;

	class NPCCrowdVisibleSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::NPCCrowd::Lod::NPCCrowdVisibleSubSystem** StaticGet__instance()
		{
			return (::NPCCrowd::Lod::NPCCrowdVisibleSubSystem**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdVisibleSubSystem_TypeDefinitionIndex)->GetStaticField(0x45780);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* visibilityRangeIndexByEntityId; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* tmpSet; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* delayRemovedEntityIDs; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* visibilityQueryData; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* visibilityQueryRanges; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::COCJHGGDBCA*>* pendingVisibilityCollectIndexByEntityId; // 0x48
		::Unity::Collections::NativeList_1<::System::Boolean> visibilityQueryResult; // 0x50
		::System::Byte _padding0[0x8];
		::System::Boolean previousFrameVisibilityControlEnabled; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void ClearStaticStateOnSubsystemRegistration()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_CLEARSTATICSTATEONSUBSYSTEMREGISTRATION_OFFSET))();
		}

		static ::NPCCrowd::Lod::NPCCrowdVisibleSubSystem* Get()
		{
			return ((::NPCCrowd::Lod::NPCCrowdVisibleSubSystem*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_GET_OFFSET))();
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		static ::System::Void OnEntityReady(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONENTITYREADY_OFFSET))(entityId);
		}

		static ::System::Void OnEntityRemove(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONENTITYREMOVE_OFFSET))(entity);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateRendererVisibilityBatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_UPDATERENDERERVISIBILITYBATCH_OFFSET))(this);
		}

		::System::Boolean PrepareRendererVisibilityQuery(::System::Int32& queryCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_PREPARERENDERERVISIBILITYQUERY_OFFSET))(this, queryCount);
		}

		::System::Void ApplyRendererVisibilityResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_APPLYRENDERERVISIBILITYRESULT_OFFSET))(this);
		}

		::System::Void OnCrowdEntityVisibilityAdd(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONCROWDENTITYVISIBILITYADD_OFFSET))(this, npcComp);
		}

		::System::Void OnCrowdEntityVisibilityRemove(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ONCROWDENTITYVISIBILITYREMOVE_OFFSET))(this, npcComp);
		}

		::System::Void ProcessPendingRendererVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_PROCESSPENDINGRENDERERVISIBILITY_OFFSET))(this);
		}

		::System::Boolean TryAddRendererVisibilityRange(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Boolean(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_TRYADDRENDERERVISIBILITYRANGE_OFFSET))(this, npcComp);
		}

		::System::Void CollectRendererVisibilityFromRenderEntity(::NapRenderEntity* renderEntity)
		{
			return ((::System::Void(*)(::PVOID, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_COLLECTRENDERERVISIBILITYFROMRENDERENTITY_OFFSET))(this, renderEntity);
		}

		::System::Void CollectRendererVisibilityFromLODRenderers(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_COLLECTRENDERERVISIBILITYFROMLODRENDERERS_OFFSET))(this, npcComp);
		}

		::System::Void RemoveRendererVisibilityRange(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVERENDERERVISIBILITYRANGE_OFFSET))(this, entityId);
		}

		::System::Void SameCountSwap(::System::Int32 rangeIndex, ::System::Int32 sameCountLastRangeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_SAMECOUNTSWAP_OFFSET))(this, rangeIndex, sameCountLastRangeIndex);
		}

		::System::Void RemoveRendererVisibilityRangeAndShiftFollowing(::System::Int32 rangeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVERENDERERVISIBILITYRANGEANDSHIFTFOLLOWING_OFFSET))(this, rangeIndex);
		}

		::System::Boolean SwapRendererVisibilityDataRange(::System::Int32 firstStartIndex, ::System::Int32 secondStartIndex, ::System::Int32 count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_SWAPRENDERERVISIBILITYDATARANGE_OFFSET))(this, firstStartIndex, secondStartIndex, count);
		}

		::System::Void RemoveVisibilityRangeAtSwapBack(::System::Int32 rangeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVEVISIBILITYRANGEATSWAPBACK_OFFSET))(this, rangeIndex);
		}

		::System::Void RemoveRendererVisibilityDataRange(::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVERENDERERVISIBILITYDATARANGE_OFFSET))(this, startIndex, count);
		}

		::System::Void ShiftVisibilityRangeStartIndexAfterDataRemove(::System::Int32 removedStartIndex, ::System::Int32 removedCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_SHIFTVISIBILITYRANGESTARTINDEXAFTERDATAREMOVE_OFFSET))(this, removedStartIndex, removedCount);
		}

		::System::Int32 GetLastVisibilityRangeIndexByCount(::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_GETLASTVISIBILITYRANGEINDEXBYCOUNT_OFFSET))(this, count);
		}

		::System::Boolean IsValidVisibilityRangeIndex(::System::UInt32 entityId, ::System::Int32 rangeIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ISVALIDVISIBILITYRANGEINDEX_OFFSET))(this, entityId, rangeIndex);
		}

		::System::Void RebuildVisibilityIndices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REBUILDVISIBILITYINDICES_OFFSET))(this);
		}

		::System::Boolean IsValidVisibilityDataRange(::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ISVALIDVISIBILITYDATARANGE_OFFSET))(this, startIndex, count);
		}

		::System::Void AddPendingRendererVisibility(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ADDPENDINGRENDERERVISIBILITY_OFFSET))(this, npcComp);
		}

		::System::Void RemovePendingRendererVisibility(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_REMOVEPENDINGRENDERERVISIBILITY_OFFSET))(this, entityId);
		}

		static ::System::UInt32 GetVisibilityEntityId(::COCJHGGDBCA* npcComp)
		{
			return ((::System::UInt32(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_GETVISIBILITYENTITYID_OFFSET))(npcComp);
		}

		::System::Void EnsureVisibilityQueryResult(::System::Int32 queryCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM_ENSUREVISIBILITYQUERYRESULT_OFFSET))(this, queryCount);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___BASE_PREUPDATE_OFFSET))(this, P0);
		}
	};
}
