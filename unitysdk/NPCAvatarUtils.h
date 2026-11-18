#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_FNPCAvatarCapsuleCollider.h"
#include "unitysdk/NPCCrowd/Lod/NPCLODRendererItem.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class COCJHGGDBCA;
class GEIHCPAOKKK;
class GIGFDLPMNND;
class NPCAvatarMeshAssetsSO;
class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
class NPCAvatarRuntimeData;
class NPCCrowdMaterialOverrideParamsInfo;
namespace NPCCrowd { template <typename T> class NPCSoftAssetPath_1; }
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Accessories { class NPCAccessoryLodMeshAssets; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationData; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationInstancerRuntimeData; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }
namespace NPCCrowd::CrowdPhysics { class NPCPhysicsRuntimeData; }
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MdbComponent; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define NPCAVATARUTILS_CHECKORSETUPNPCCOLLIDERSIZE_OFFSET UNITYSDK_OFFSET(0x1377D5D0)
#define NPCAVATARUTILS_COLLECTALLRENDERERITEMS_OFFSET UNITYSDK_OFFSET(0x1377E820)
#define NPCAVATARUTILS_CREATELODRENDERERITEM_OFFSET UNITYSDK_OFFSET(0x1377E120)
#define NPCAVATARUTILS_DISABLEAVATARCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1377D420)
#define NPCAVATARUTILS_ENABLEAVATARCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1377D270)
#define NPCAVATARUTILS_ENABLEGPULOD_OFFSET UNITYSDK_OFFSET(0x13778540)
#define NPCAVATARUTILS_FINDBODYPARTMESHASSETBYID_OFFSET UNITYSDK_OFFSET(0x1377BAC0)
#define NPCAVATARUTILS_GETFADETAG_OFFSET UNITYSDK_OFFSET(0x13777D80)
#define NPCAVATARUTILS_GETHIDELODINDEXWITHRESOURCEFALLBACK_OFFSET UNITYSDK_OFFSET(0x1377A6C0)
#define NPCAVATARUTILS_GETLODMATERIALS_OFFSET UNITYSDK_OFFSET(0x1377DF50)
#define NPCAVATARUTILS_GETPARTCPUMESHASYNC_OFFSET UNITYSDK_OFFSET(0x1377C770)
#define NPCAVATARUTILS_GETPARTGPUMESHASYNC_OFFSET UNITYSDK_OFFSET(0x1377C880)
#define NPCAVATARUTILS_GETPARTRENDERER_OFFSET UNITYSDK_OFFSET(0x1377E680)
#define NPCAVATARUTILS_GETREALVALIDLODLEVEL_OFFSET UNITYSDK_OFFSET(0x13779F10)
#define NPCAVATARUTILS_HASANYBODYPARTRESVALID_OFFSET UNITYSDK_OFFSET(0x1377B350)
#define NPCAVATARUTILS_ISACCESSORYCOLORMESHVALID_OFFSET UNITYSDK_OFFSET(0x1377BB70)
#define NPCAVATARUTILS_ISANYACCESSORYCOLORRESVALID_OFFSET UNITYSDK_OFFSET(0x1377B4B0)
#define NPCAVATARUTILS_ISANYACCESSORYSIMPLERESVALID_OFFSET UNITYSDK_OFFSET(0x1377AF90)
#define NPCAVATARUTILS_ISBODYPARTIDRESVALID_OFFSET UNITYSDK_OFFSET(0x1377B780)
#define NPCAVATARUTILS_ISCPULODRESVALID_OFFSET UNITYSDK_OFFSET(0x1377AE00)
#define NPCAVATARUTILS_ISGPULODRESVALID_OFFSET UNITYSDK_OFFSET(0x1377AC70)
#define NPCAVATARUTILS_ISLODRESVALID_OFFSET UNITYSDK_OFFSET(0x1377A020)
#define NPCAVATARUTILS_ISLODSWITCHTPOSEFIXENABLED_OFFSET UNITYSDK_OFFSET(0x137763C0)
#define NPCAVATARUTILS_ISSIMPLEMODELLODRESVALID_OFFSET UNITYSDK_OFFSET(0x1377AA20)
#define NPCAVATARUTILS_LOADMESHCPULODASYNC_OFFSET UNITYSDK_OFFSET(0x13778330)
#define NPCAVATARUTILS_LOADMESHGPULODASYNC_OFFSET UNITYSDK_OFFSET(0x13778420)
#define NPCAVATARUTILS_LOADNEWLODASSET_OFFSET UNITYSDK_OFFSET(0x1377F2F0)
#define NPCAVATARUTILS_OVERRIDEPARTRENDERERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1377C370)
#define NPCAVATARUTILS_POSTFADE_OFFSET UNITYSDK_OFFSET(0x1377F550)
#define NPCAVATARUTILS_POSTREFRESHPARTVISIBILITYBYRUNTIMEFLAG_1_OFFSET UNITYSDK_OFFSET(0x13779D80)
#define NPCAVATARUTILS_POSTREFRESHPARTVISIBILITYBYRUNTIMEFLAG_OFFSET UNITYSDK_OFFSET(0x13779A60)
#define NPCAVATARUTILS_POSTSETLODMESH_OFFSET UNITYSDK_OFFSET(0x13779820)
#define NPCAVATARUTILS_REFRESHDITHERTASK_OFFSET UNITYSDK_OFFSET(0x13777DD0)
#define NPCAVATARUTILS_REMOVETASK_OFFSET UNITYSDK_OFFSET(0x13778250)
#define NPCAVATARUTILS_RENDERERFADEOPERATIONASYNC_OFFSET UNITYSDK_OFFSET(0x13777F40)
#define NPCAVATARUTILS_SETAUDIOEMITTER_OFFSET UNITYSDK_OFFSET(0x13776E10)
#define NPCAVATARUTILS_SETAUDIOLOD_OFFSET UNITYSDK_OFFSET(0x13776940)
#define NPCAVATARUTILS_SETAVATARPARTMDBENABLEDAFTERLODTRANSITION_OFFSET UNITYSDK_OFFSET(0x1377F220)
#define NPCAVATARUTILS_SETAVATARPARTMDBLOD_OFFSET UNITYSDK_OFFSET(0x1377EED0)
#define NPCAVATARUTILS_SETCPUPARTENABLE_OFFSET UNITYSDK_OFFSET(0x13779030)
#define NPCAVATARUTILS_SETGPUPARTENABLE_OFFSET UNITYSDK_OFFSET(0x13778A30)
#define NPCAVATARUTILS_SETLODCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x1377E090)
#define NPCAVATARUTILS_SETLODMESH_OFFSET UNITYSDK_OFFSET(0x13778820)
#define NPCAVATARUTILS_SETMESHGPULODANIM_OFFSET UNITYSDK_OFFSET(0x1377BCF0)
#define NPCAVATARUTILS_SETPARENT_OFFSET UNITYSDK_OFFSET(0x137764E0)
#define NPCAVATARUTILS_SETPHYSICLOD_OFFSET UNITYSDK_OFFSET(0x13776610)
#define NPCAVATARUTILS_SETRENDERERLODENABLE_OFFSET UNITYSDK_OFFSET(0x13779E80)
#define NPCAVATARUTILS_SETUPAVATARCOLLIDER_1_OFFSET UNITYSDK_OFFSET(0x1377CDA0)
#define NPCAVATARUTILS_SETUPAVATARCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1377C9D0)
#define NPCAVATARUTILS_SETUPNPCAVATARANIMATORSLOTTRANSFORMEXPOSE_OFFSET UNITYSDK_OFFSET(0x1377D8F0)
#define NPCAVATARUTILS_STARTCHANGEMESHLOD_OFFSET UNITYSDK_OFFSET(0x1377DFA0)
#define NPCAVATARUTILS_UPDATEGPULODSIMPLEMODELMESH_OFFSET UNITYSDK_OFFSET(0x13777B80)
#define NPCAVATARUTILS_UPDATERENDERENTITYFLAG_OFFSET UNITYSDK_OFFSET(0x1377F480)
#define NPCAVATARUTILS_UPDATESHADOWPROXYLODCOMMON_OFFSET UNITYSDK_OFFSET(0x13777AA0)
#define NPCAVATARUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1377FCE0)
#define NPCAVATARUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1377FCD0)

inline static constexpr unsigned int NPCAvatarUtils_TypeDefinitionIndex = 47740;

class NPCAvatarUtils : public ::System::Object
{
public:
	static ::System::String** StaticGet_Avatar_Crowd_GPU_SimpleModel_Name()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x48F60);
	}
	static ::System::String** StaticGet_Avatar_Galgame_Name()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x48F68);
	}
	static ::System::String** StaticGet_Avatar_InLevel_Name()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x48F70);
	}
	static ::System::String** StaticGet_Avatar_Crowd_Name()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x48F78);
	}
	static ::System::String** StaticGet_Avatar_Crowd_Static_ShadowProxy_Name()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x48F80);
	}
	static ::System::String** StaticGet_Avatar_Crowd_Skinned_ShadowProxy_Name()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x48F88);
	}
	static ::System::String** StaticGet_Avatar_Name()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x48F90);
	}
	static ::System::Int32* StaticGet__lodSwitchTposeFixCvarId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x10FF0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCAVATARUTILS__CCTOR_OFFSET))();
	}

	static ::System::Boolean IsLodSwitchTposeFixEnabled()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCAVATARUTILS_ISLODSWITCHTPOSEFIXENABLED_OFFSET))();
	}

	static ::System::Void SetParent(::UnityEngine::GameObject* child, ::UnityEngine::Transform* parent)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETPARENT_OFFSET))(child, parent);
	}

	static ::System::Void SetPhysicLOD(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::CrowdPhysics::NPCPhysicsRuntimeData* physicsRuntimeData, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel newLod)
	{
		return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::CrowdPhysics::NPCPhysicsRuntimeData*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETPHYSICLOD_OFFSET))(goInfo, assetSo, physicsRuntimeData, oldLod, newLod);
	}

	static ::System::Void SetAudioLOD(::COCJHGGDBCA* npcComp, ::System::UInt32 entityID, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel newLod, ::System::Boolean isPathNPC)
	{
		return ((::System::Void(*)(::COCJHGGDBCA*, ::System::UInt32, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETAUDIOLOD_OFFSET))(npcComp, entityID, oldLod, newLod, isPathNPC);
	}

	static ::System::Void SetAudioEmitter(::COCJHGGDBCA* npcComp, ::System::Boolean enabled)
	{
		return ((::System::Void(*)(::COCJHGGDBCA*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETAUDIOEMITTER_OFFSET))(npcComp, enabled);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid UpdateShadowProxyLodCommon(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::System::Threading::CancellationToken cancellationToken, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Threading::CancellationToken, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_UPDATESHADOWPROXYLODCOMMON_OFFSET))(goInfo, assetSo, oldLod, lod, cancellationToken, lodRuntimeData);
	}

	static ::System::Void UpdateGPULodSimpleModelMesh(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Lod::ELODLevel lod)
	{
		return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_UPDATEGPULODSIMPLEMODELMESH_OFFSET))(goInfo, assetSo, lod);
	}

	static ::System::Int32 GetFadeTag(::System::Int32 entityID, ::NPCCrowd::Lod::ELODLevel lod)
	{
		return ((::System::Int32(*)(::System::Int32, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_GETFADETAG_OFFSET))(entityID, lod);
	}

	static ::System::Void RefreshDitherTask(::System::UInt32 entityID, ::NPCCrowd::Lod::ELODLevel lod, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* renderers, ::GIGFDLPMNND* materialComponent, ::System::Boolean fadein, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator)
	{
		return ((::System::Void(*)(::System::UInt32, ::NPCCrowd::Lod::ELODLevel, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>*, ::GIGFDLPMNND*, ::System::Boolean, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_REFRESHDITHERTASK_OFFSET))(entityID, lod, renderers, materialComponent, fadein, unionAnimator);
	}

	static ::Cysharp::Threading::Tasks::UniTask RendererFadeOperationAsync(::System::Int32 entityID, ::NPCCrowd::Lod::ELODLevel lod, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* renderers, ::System::Single fadeTime, ::System::Boolean bFadeIn, ::System::Threading::CancellationToken token, ::GIGFDLPMNND* materialComponent, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::NPCCrowd::Lod::ELODLevel, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>*, ::System::Single, ::System::Boolean, ::System::Threading::CancellationToken, ::GIGFDLPMNND*, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_RENDERERFADEOPERATIONASYNC_OFFSET))(entityID, lod, renderers, fadeTime, bFadeIn, token, materialComponent, unionAnimator);
	}

	static ::System::Void RemoveTask(::System::Int32 entityID, ::NPCCrowd::Lod::ELODLevel lod)
	{
		return ((::System::Void(*)(::System::Int32, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_REMOVETASK_OFFSET))(entityID, lod);
	}

	static ::Cysharp::Threading::Tasks::UniTask LoadMeshCPULODAsync(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_LOADMESHCPULODASYNC_OFFSET))(goInfo, assetSo, oldLod, lod, cancellationToken);
	}

	static ::Cysharp::Threading::Tasks::UniTask LoadMeshGPULODAsync(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::System::Boolean useSimpleModelMode, ::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_LOADMESHGPULODASYNC_OFFSET))(goInfo, assetSo, oldLod, lod, useSimpleModelMode, cancellationToken);
	}

	static ::System::Boolean EnableGpuLod(::NPCAvatarMeshAssetsSO* assetSo)
	{
		return ((::System::Boolean(*)(::NPCAvatarMeshAssetsSO*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_ENABLEGPULOD_OFFSET))(assetSo);
	}

	static ::System::Void SetLODMesh(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
	{
		return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETLODMESH_OFFSET))(goInfo, assetSo, oldLod, lod, lodRuntimeData);
	}

	static ::System::Void PostSetLODMesh(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
	{
		return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_POSTSETLODMESH_OFFSET))(goInfo, assetSo, oldLod, lod, lodRuntimeData);
	}

	static ::System::Void PostRefreshPartVisibilityByRuntimeFlag(::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo* partInfo, ::System::Boolean refreshCPU, ::System::Boolean refreshGPU)
	{
		return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_POSTREFRESHPARTVISIBILITYBYRUNTIMEFLAG_OFFSET))(partInfo, refreshCPU, refreshGPU);
	}

	static ::System::Void PostRefreshPartVisibilityByRuntimeFlag_1(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::System::Boolean refreshCPU, ::System::Boolean refreshGPU)
	{
		return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_POSTREFRESHPARTVISIBILITYBYRUNTIMEFLAG_1_OFFSET))(goInfo, refreshCPU, refreshGPU);
	}

	static ::System::Void SetCPUPartEnable(::System::Boolean enable, ::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Lod::ELODLevel lod, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
	{
		return ((::System::Void(*)(::System::Boolean, ::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETCPUPARTENABLE_OFFSET))(enable, goInfo, assetSo, lod, lodRuntimeData);
	}

	static ::System::Void SetGPUPartEnable(::System::Boolean enable, ::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
	{
		return ((::System::Void(*)(::System::Boolean, ::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETGPUPARTENABLE_OFFSET))(enable, goInfo, lodRuntimeData);
	}

	static ::NPCCrowd::Lod::ELODLevel GetRealValidLODLevel(::NPCCrowd::Lod::ELODLevel curLod, ::COCJHGGDBCA* npcComp, ::System::Boolean useHighLevel)
	{
		return ((::NPCCrowd::Lod::ELODLevel(*)(::NPCCrowd::Lod::ELODLevel, ::COCJHGGDBCA*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_GETREALVALIDLODLEVEL_OFFSET))(curLod, npcComp, useHighLevel);
	}

	static ::System::Boolean IsLODResValid(::COCJHGGDBCA* npcComp, ::NPCCrowd::Lod::ELODLevel lod)
	{
		return ((::System::Boolean(*)(::COCJHGGDBCA*, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_ISLODRESVALID_OFFSET))(npcComp, lod);
	}

	static ::System::Int32 GetHideLodIndexWithResourceFallback(::COCJHGGDBCA* npcComp)
	{
		return ((::System::Int32(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_GETHIDELODINDEXWITHRESOURCEFALLBACK_OFFSET))(npcComp);
	}

	static ::System::Boolean IsSimpleModelLodResValid(::COCJHGGDBCA* npcComp)
	{
		return ((::System::Boolean(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_ISSIMPLEMODELLODRESVALID_OFFSET))(npcComp);
	}

	static ::System::Boolean IsGpuLodResValid(::COCJHGGDBCA* npcComp, ::NPCCrowd::Lod::ELODLevel lodLevel)
	{
		return ((::System::Boolean(*)(::COCJHGGDBCA*, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_ISGPULODRESVALID_OFFSET))(npcComp, lodLevel);
	}

	static ::System::Boolean IsCpuLodResValid(::COCJHGGDBCA* npcComp, ::NPCCrowd::Lod::ELODLevel lodLevel)
	{
		return ((::System::Boolean(*)(::COCJHGGDBCA*, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_ISCPULODRESVALID_OFFSET))(npcComp, lodLevel);
	}

	static ::System::Boolean HasAnyBodyPartResValid(::COCJHGGDBCA* npcComp, ::NPCCrowd::Lod::ELODLevel lodLevel, ::System::Boolean gpuMode)
	{
		return ((::System::Boolean(*)(::COCJHGGDBCA*, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_HASANYBODYPARTRESVALID_OFFSET))(npcComp, lodLevel, gpuMode);
	}

	static ::System::Boolean IsBodyPartIdResValid(::System::Collections::Generic::List_1<::System::Object*>* meshConfigList, ::System::Int32 partId, ::NPCCrowd::Lod::ELODLevel lodLevel, ::System::Boolean gpuMode)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_ISBODYPARTIDRESVALID_OFFSET))(meshConfigList, partId, lodLevel, gpuMode);
	}

	static ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* FindBodyPartMeshAssetById(::System::Collections::Generic::List_1<::System::Object*>* meshConfigList, ::System::Int32 partId)
	{
		return ((::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_FINDBODYPARTMESHASSETBYID_OFFSET))(meshConfigList, partId);
	}

	static ::System::Boolean IsAnyAccessorySimpleResValid(::COCJHGGDBCA* npcComp)
	{
		return ((::System::Boolean(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_ISANYACCESSORYSIMPLERESVALID_OFFSET))(npcComp);
	}

	static ::System::Boolean IsAnyAccessoryColorResValid(::COCJHGGDBCA* npcComp, ::NPCCrowd::Lod::ELODLevel lodLevel)
	{
		return ((::System::Boolean(*)(::COCJHGGDBCA*, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_ISANYACCESSORYCOLORRESVALID_OFFSET))(npcComp, lodLevel);
	}

	static ::System::Boolean IsAccessoryColorMeshValid(::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets* meshAss, ::NPCCrowd::Lod::ELODLevel lodLevel)
	{
		return ((::System::Boolean(*)(::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets*, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_ISACCESSORYCOLORMESHVALID_OFFSET))(meshAss, lodLevel);
	}

	static ::System::Void SetMeshGPULODAnim(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::Il2CppArray<::UnityEngine::Material*>* gpumats, ::UnityEngine::MeshRenderer* mr, ::NPCCrowd::Animation::NPCCrowdAnimationData* animationData, ::System::Int32 gpuAnimIndex, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData)
	{
		return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::Il2CppArray<::UnityEngine::Material*>*, ::UnityEngine::MeshRenderer*, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Int32, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETMESHGPULODANIM_OFFSET))(goInfo, gpumats, mr, animationData, gpuAnimIndex, runtimeData);
	}

	static ::System::Void OverridePartRendererMaterial(::UnityEngine::Renderer* renderer, ::NPCCrowdMaterialOverrideParamsInfo* partOverrideInfo, ::System::UInt16 matIndex)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*, ::NPCCrowdMaterialOverrideParamsInfo*, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_OVERRIDEPARTRENDERERMATERIAL_OFFSET))(renderer, partOverrideInfo, matIndex);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*> GetPartCPUMeshAsync(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* meshAss, ::NPCCrowd::Lod::ELODLevel lodLevel, ::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* assetRef, ::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*>(*)(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_GETPARTCPUMESHASYNC_OFFSET))(meshAss, lodLevel, assetRef, cancellationToken);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*> GetPartGPUMeshAsync(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* meshAss, ::NPCCrowd::Lod::ELODLevel lodLevel, ::System::Boolean useSimpleModelMode, ::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* assetRef, ::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*>(*)(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean, ::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_GETPARTGPUMESHASYNC_OFFSET))(meshAss, lodLevel, useSimpleModelMode, assetRef, cancellationToken);
	}

	static ::System::Void SetupAvatarCollider(::UnityEngine::Collider* cap, ::NPCAvatarMeshAssetsSO_FNPCAvatarCapsuleCollider collider)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::NPCAvatarMeshAssetsSO_FNPCAvatarCapsuleCollider))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETUPAVATARCOLLIDER_OFFSET))(cap, collider);
	}

	static ::System::Void SetupAvatarCollider_1(::COCJHGGDBCA* npcComponent, ::System::String* colliderKey)
	{
		return ((::System::Void(*)(::COCJHGGDBCA*, ::System::String*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETUPAVATARCOLLIDER_1_OFFSET))(npcComponent, colliderKey);
	}

	static ::System::Void EnableAvatarCollider(::COCJHGGDBCA* npcComponent)
	{
		return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_ENABLEAVATARCOLLIDER_OFFSET))(npcComponent);
	}

	static ::System::Void DisableAvatarCollider(::COCJHGGDBCA* npcComponent)
	{
		return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_DISABLEAVATARCOLLIDER_OFFSET))(npcComponent);
	}

	static ::System::Void CheckOrSetupNPCColliderSize(::GEIHCPAOKKK* modelComponent)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_CHECKORSETUPNPCCOLLIDERSIZE_OFFSET))(modelComponent);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* SetupNPCAvatarAnimatorSlotTransformExpose(::UnityEngine::Animator* animator, ::UnityEngine::GameObject* avatarGo, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::String*>>* slotInfos)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>*(*)(::UnityEngine::Animator*, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::String*>>*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETUPNPCAVATARANIMATORSLOTTRANSFORMEXPOSE_OFFSET))(animator, avatarGo, slotInfos);
	}

	static ::System::Void GetLODMaterials(::COCJHGGDBCA* npcComp, ::Il2CppArray<::UnityEngine::Material*>*& materials)
	{
		return ((::System::Void(*)(::COCJHGGDBCA*, ::Il2CppArray<::UnityEngine::Material*>*&))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_GETLODMATERIALS_OFFSET))(npcComp, materials);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid StartChangeMeshLOD(::COCJHGGDBCA* npcComp, ::GIGFDLPMNND* materialComponent, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::System::Boolean forceNoFade, ::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::COCJHGGDBCA*, ::GIGFDLPMNND*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_STARTCHANGEMESHLOD_OFFSET))(npcComp, materialComponent, oldLod, lod, forceNoFade, cancellationToken);
	}

	static ::System::Void SetLODChangeState(::COCJHGGDBCA* npcComp, ::System::Boolean changing)
	{
		return ((::System::Void(*)(::COCJHGGDBCA*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETLODCHANGESTATE_OFFSET))(npcComp, changing);
	}

	static ::NPCCrowd::Lod::NPCLODRendererItem CreateLODRendererItem(::UnityEngine::Renderer* r, ::System::Boolean matInstanced)
	{
		return ((::NPCCrowd::Lod::NPCLODRendererItem(*)(::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_CREATELODRENDERERITEM_OFFSET))(r, matInstanced);
	}

	static ::UnityEngine::Renderer* GetPartRenderer(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::System::Int32 index, ::NPCCrowd::Lod::ELODLevel lod, ::System::Boolean getGPU, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
	{
		return ((::UnityEngine::Renderer*(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::System::Int32, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_GETPARTRENDERER_OFFSET))(goInfo, index, lod, getGPU, lodRuntimeData);
	}

	static ::System::Void CollectAllRendererItems(::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData, ::NPCAvatarRuntimeData* avatarRuntimeData, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* accessories)
	{
		return ((::System::Void(*)(::NPCCrowd::Lod::NPCCrowdLodRuntimeData*, ::NPCAvatarRuntimeData*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_COLLECTALLRENDERERITEMS_OFFSET))(lodRuntimeData, avatarRuntimeData, oldLod, lod, accessories);
	}

	static ::System::Void SetAvatarPartMdbLOD(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData, ::System::Threading::CancellationToken cancellationToken)
	{
		return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETAVATARPARTMDBLOD_OFFSET))(goInfo, oldLod, lod, lodRuntimeData, cancellationToken);
	}

	static ::Cysharp::Threading::Tasks::UniTask SetAvatarPartMdbEnabledAfterLodTransition(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::UnityEngine::MdbComponent* mdbComponent, ::System::Boolean enabled, ::System::Threading::CancellationTokenSource* taskToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::UnityEngine::MdbComponent*, ::System::Boolean, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETAVATARPARTMDBENABLEDAFTERLODTRANSITION_OFFSET))(goInfo, mdbComponent, enabled, taskToken);
	}

	static ::Cysharp::Threading::Tasks::UniTask LoadNewLODAsset(::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData, ::NPCAvatarRuntimeData* avatarRuntimeData, ::GIGFDLPMNND* materialComponent, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::System::Threading::CancellationToken cancellationToken, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* accessories, ::System::Boolean useGpuLod, ::COCJHGGDBCA* npcCmp)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::NPCCrowd::Lod::NPCCrowdLodRuntimeData*, ::NPCAvatarRuntimeData*, ::GIGFDLPMNND*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Threading::CancellationToken, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*, ::System::Boolean, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_LOADNEWLODASSET_OFFSET))(lodRuntimeData, avatarRuntimeData, materialComponent, oldLod, lod, cancellationToken, accessories, useGpuLod, npcCmp);
	}

	static ::System::Void UpdateRenderEntityFlag(::UnityEngine::Renderer* renderer, ::System::Boolean isSimpleModel)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_UPDATERENDERENTITYFLAG_OFFSET))(renderer, isSimpleModel);
	}

	static ::System::Void PostFade(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* accessories, ::GIGFDLPMNND* materialComponent, ::System::Boolean useGpuLod, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
	{
		return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*, ::GIGFDLPMNND*, ::System::Boolean, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_POSTFADE_OFFSET))(goInfo, assetSo, oldLod, lod, accessories, materialComponent, useGpuLod, lodRuntimeData);
	}

	static ::System::Void SetRendererLODEnable(::UnityEngine::Renderer* renderer, ::System::Boolean enable, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Boolean, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETRENDERERLODENABLE_OFFSET))(renderer, enable, lodRuntimeData);
	}
};
