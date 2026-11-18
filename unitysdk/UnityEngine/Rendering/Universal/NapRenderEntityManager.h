#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ExtractBoneInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightFilter.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapCBProperty.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapRenderEntityPrepareInputCustom.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapLightData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapRenderEntityManager___c__DisplayClass109_0.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NapRenderEntity;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ADD_OFFSET UNITYSDK_OFFSET(0x16E7D260)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_COLLECTVISIBLENATIVEENTITIES_OFFSET UNITYSDK_OFFSET(0x16E7E4A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x16E7E140)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x16E7E0E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E7C5E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ENSUREMAPCAPACITY_OFFSET UNITYSDK_OFFSET(0x16E85E50)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ENSUREVISIBLENATIVEENTITYHANDLECAPACITY_OFFSET UNITYSDK_OFFSET(0x16E7E410)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_FINDENTITY_OFFSET UNITYSDK_OFFSET(0x16E7DFC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETBONEINFOMAP_OFFSET UNITYSDK_OFFSET(0x16E85D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETCHARACTERGPUDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x16E7C510)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETDUMMYGPUDATASIZE_OFFSET UNITYSDK_OFFSET(0x16E7D1F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETENTITY_OFFSET UNITYSDK_OFFSET(0x16E7E1D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GET_CHARACTERGPUDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x16E7C450)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x16E7C3F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_MARKPRIORITYDIRTY_OFFSET UNITYSDK_OFFSET(0x16E7E2A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_PREPAREAFTERCULLING_OFFSET UNITYSDK_OFFSET(0x16E80440)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_PREPAREAFTERLIGHTLOOP_OFFSET UNITYSDK_OFFSET(0x16E81AA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REBUILDNATIVEENTITYMAP_OFFSET UNITYSDK_OFFSET(0x16E7E2F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REGISTERNATIVEENTITY_OFFSET UNITYSDK_OFFSET(0x16E7D780)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x16E7DEF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REMOVE_OFFSET UNITYSDK_OFFSET(0x16E7D990)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SETASSETS_OFFSET UNITYSDK_OFFSET(0x16E7CB80)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SETUPDUMMYDATA_OFFSET UNITYSDK_OFFSET(0x16E7CBD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SET_CHARACTERGPUDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x16E7C4B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SHUTDOWNNATIVEBACKEND_OFFSET UNITYSDK_OFFSET(0x16E7C6F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SYNCNAPCB_OFFSET UNITYSDK_OFFSET(0x16E84B50)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UNREGISTERNATIVEENTITY_OFFSET UNITYSDK_OFFSET(0x16E7DE80)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEBONETRANSFORMSFORNATIVE_OFFSET UNITYSDK_OFFSET(0x16E7FFD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEGLOBALCHARACTERLIGHTDATA_OFFSET UNITYSDK_OFFSET(0x16E81D50)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATELIGHTDATA_OFFSET UNITYSDK_OFFSET(0x16E81EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEPERFRAME_OFFSET UNITYSDK_OFFSET(0x16E7E7B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E86440)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x16E860E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__PREPAREAFTERCULLING_G__GETLIGHTDIRECTION_103_0_OFFSET UNITYSDK_OFFSET(0x16E817F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__ANGLEATTENUATION_109_11_OFFSET UNITYSDK_OFFSET(0x16E86D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__CALCULATELIGHTWEIGHT_109_3_OFFSET UNITYSDK_OFFSET(0x16E869F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__CHECKDISTANCEOFAXIS_109_8_OFFSET UNITYSDK_OFFSET(0x16E84F20)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__DISTANCEATTENUATIONB_109_10_OFFSET UNITYSDK_OFFSET(0x16E86CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETKERNEL_109_5_OFFSET UNITYSDK_OFFSET(0x16E85A90)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETPUNCTUALLIGHTDATAFROMCOMPONENT_109_2_OFFSET UNITYSDK_OFFSET(0x16E85170)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETPUNCTUALLIGHTDATAFROMNAPLIGHTDATA_109_1_OFFSET UNITYSDK_OFFSET(0x16E859B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__ISBLACKCURTAIN_109_7_OFFSET UNITYSDK_OFFSET(0x16E869E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__SETPUNCTUALLIGHT_109_0_OFFSET UNITYSDK_OFFSET(0x16E85470)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__SORTLIGHTSIFNEEDED_109_6_OFFSET UNITYSDK_OFFSET(0x16E85560)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__TRYSETDIRECTIONOVERRIDE_109_4_OFFSET UNITYSDK_OFFSET(0x16E84F50)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderEntityManager_TypeDefinitionIndex = 26509;

	class NapRenderEntityManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchQueryIsAlive1()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22B40);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CacheIsRendererAlive()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22B48);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_FixShadowCoverageOutOfFrustum()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22B50);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_DispatchCompute()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22B58);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckValidAndActive()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22B60);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_EditorRebindBuffers()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22B68);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchUpdateVisibility_ResizeNativeList()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22B70);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_ReleaseTemp()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22B78);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_syncNapCB()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22B80);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_AddIndicatedLightsForPreview()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22B88);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_PrepareCharacterGiSampleData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22B90);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SortEntitiesByPriority()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22B98);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateMainLightsData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22BA0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CalculateCullingSphereCenter()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22BA8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchUpdateVisibility()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22BB0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchUpdateVisibility_CollectRenderers()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22BB8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectVisEntities_RebuildMap()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22BC0);
		}
		static ::System::Collections::Generic::List_1<::NapRenderEntity*>** StaticGet_avatarParticleArray()
		{
			return (::System::Collections::Generic::List_1<::NapRenderEntity*>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22BC8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_ResizeBoneInfoMap()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22BD0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateStencil()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22BD8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_updateLightGradient()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22BE0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdatePerFrame()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22BE8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CacheLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22BF0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_PrepareSharedVariables()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22BF8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_LightCulling()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22C00);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectLightDataAndComputeInputs()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22C08);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectInputs()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22C10);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectVisEntities()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22C18);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchQueryIsAlive0()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22C20);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CopyLightDataToNapCB()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22C28);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CacheCameraFields()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22C30);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_PrepareAfterCulling()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22C38);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectVisEntities_MapHandles()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22C40);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_prepareAfterLightLoop()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22C48);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_LightFilterTileLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22C50);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetNapCBProperties()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22C58);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectVisEntities_GetHandles()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22C60);
		}
		static ::UnityEngine::Rendering::Universal::LightFilter* StaticGet_lightFilter()
		{
			return (::UnityEngine::Rendering::Universal::LightFilter*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22C68);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22CD0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateVisibilities()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22CD8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetHeadBoneTransform()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22CE0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CharacterRendering()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22CE8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_LightFilterCull()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22CF0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateRamp()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22CF8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CullingResults_GetRenderVisibleInCurrentCam()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22D00);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SortLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22D08);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GlobalKeywordAndFields()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22D10);
		}
		static ::UnityEngine::Rendering::Universal::NapRenderEntityManager** StaticGet__instance_k__BackingField()
		{
			return (::UnityEngine::Rendering::Universal::NapRenderEntityManager**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22D18);
		}
		static ::System::Int32* StaticGet__StencilShadowBlendDebugMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x52A0);
		}
		static ::System::Int32* StaticGet__StencilShadowBlendSrc()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x52A4);
		}
		static ::System::Int32* StaticGet__StencilShadowBlendDst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x52A8);
		}
		static ::System::Boolean* StaticGet__CharacterGPUDataPrepared_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x52AC);
		}
		static ::System::Boolean* StaticGet_skipRenderLoopLogic()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x52AD);
		}
		::System::Collections::Generic::List_1<::NapRenderEntity*>* visibleNativeEntities; // 0x10
		::UnityEngine::ComputeBuffer* characterLights; // 0x18
		::System::Collections::Generic::List_1<::NapRenderEntity*>* Entities; // 0x20
		::Il2CppArray<::System::IntPtr>* visibleNativeEntityHandles; // 0x28
		::UnityEngine::ComputeBuffer* entityGpuDataBuffer; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* cachedCameraDatas; // 0x38
		::UnityEngine::ComputeBuffer* prepareInputBuffer; // 0x40
		::Il2CppArray<::UnityEngine::Vector4>* frustumePlaneVectors; // 0x48
		::UnityEngine::ComputeBuffer* gpuLightDatasForChar; // 0x50
		::UnityEngine::ComputeBuffer* debugBlendLightsBuffer; // 0x58
		::UnityEngine::ComputeBuffer* blendLightBuffer; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* visibilityQueryData; // 0x68
		::UnityEngine::ComputeShader* computeShader; // 0x70
		::Il2CppArray<::UnityEngine::Plane>* frustumePlanes; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::NapRenderEntity*>* nativeHandleToEntity; // 0x80
		::UnityEngine::ComputeBuffer* dummyGpuDataBuffer; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* aliveQueryData; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::NapRenderEntityPrepareInputCustom>* prepareInput; // 0x98
		::Unity::Collections::NativeHashMap_2<::System::UInt32, ::ExtractBoneInfo> _boneInfoMap; // 0xA0
		::System::Byte _padding0[0x8];
		::System::Boolean m_PreviousFrameGradientLightActive; // 0xB0
		::System::Boolean priorityDirty; // 0xB1
		::System::Byte _padding1[0x2];
		::System::Int32 previousCheckVisibilityFrameIndex; // 0xB4
		::Unity::Collections::NativeList_1<::System::Boolean> queryResult1; // 0xB8
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeList_1<::System::Boolean> queryResult0; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::NapRenderEntityManager* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::NapRenderEntityManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Boolean get_CharacterGPUDataPrepared()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GET_CHARACTERGPUDATAPREPARED_OFFSET))();
		}

		static ::System::Void set_CharacterGPUDataPrepared(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SET_CHARACTERGPUDATAPREPARED_OFFSET))(value);
		}

		::System::Boolean GetCharacterGPUDataPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETCHARACTERGPUDATAPREPARED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void ShutdownNativeBackend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SHUTDOWNNATIVEBACKEND_OFFSET))(this);
		}

		::System::Void SetAssets(::UnityEngine::ComputeShader* computeShader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SETASSETS_OFFSET))(this, computeShader);
		}

		::System::Void SetupDummyData(::UnityEngine::Rendering::ScriptableRenderContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SETUPDUMMYDATA_OFFSET))(this, context);
		}

		::System::Int32 GetDummyGPUDataSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETDUMMYGPUDATASIZE_OFFSET))(this);
		}

		::System::Void Add(::NapRenderEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ADD_OFFSET))(this, entity);
		}

		::System::Void Remove(::NapRenderEntity* entity, ::System::Boolean passiveRelease, ::System::Boolean doNotRelease)
		{
			return ((::System::Void(*)(::PVOID, ::NapRenderEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REMOVE_OFFSET))(this, entity, passiveRelease, doNotRelease);
		}

		::System::Void Remove_1(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REMOVE_1_OFFSET))(this, go);
		}

		::System::Boolean Contains(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_CONTAINS_OFFSET))(this, go);
		}

		::System::Boolean Contains_1(::NapRenderEntity* napRenderEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_CONTAINS_1_OFFSET))(this, napRenderEntity);
		}

		::System::Boolean FindEntity(::UnityEngine::GameObject* go, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_FINDENTITY_OFFSET))(this, go, index);
		}

		::System::Boolean GetEntity(::UnityEngine::GameObject* root, ::NapRenderEntity*& entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::NapRenderEntity*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETENTITY_OFFSET))(this, root, entity);
		}

		::System::Void MarkPriorityDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_MARKPRIORITYDIRTY_OFFSET))(this);
		}

		::System::Void RegisterNativeEntity(::NapRenderEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REGISTERNATIVEENTITY_OFFSET))(this, entity);
		}

		::System::Void UnregisterNativeEntity(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UNREGISTERNATIVEENTITY_OFFSET))(this, nativeHandle);
		}

		::System::Void RebuildNativeEntityMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REBUILDNATIVEENTITYMAP_OFFSET))(this);
		}

		::System::Void EnsureVisibleNativeEntityHandleCapacity(::System::Int32 visibleCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ENSUREVISIBLENATIVEENTITYHANDLECAPACITY_OFFSET))(this, visibleCount);
		}

		::System::Collections::Generic::List_1<::NapRenderEntity*>* CollectVisibleNativeEntities()
		{
			return ((::System::Collections::Generic::List_1<::NapRenderEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_COLLECTVISIBLENATIVEENTITIES_OFFSET))(this);
		}

		::System::Void UpdatePerFrame(::UnityEngine::Rendering::ScriptableRenderContext renderContext, ::Il2CppArray<::UnityEngine::Camera*>* cameras)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEPERFRAME_OFFSET))(this, renderContext, cameras);
		}

		::System::Void UpdateBoneTransformsForNative(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEBONETRANSFORMSFORNATIVE_OFFSET))(this, asset);
		}

		::System::Void PrepareAfterCulling(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingdata, ::System::Boolean isPlanarReflectionCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_PREPAREAFTERCULLING_OFFSET))(this, postCullRenderingData, renderingdata, isPlanarReflectionCamera);
		}

		::System::Void PrepareAfterLightLoop(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRendering)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_PREPAREAFTERLIGHTLOOP_OFFSET))(this, cmd, renderingData, postCullRendering);
		}

		::System::Void SyncNapCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SYNCNAPCB_OFFSET))(this);
		}

		::System::Void UpdateGlobalCharacterLightData(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEGLOBALCHARACTERLIGHTDATA_OFFSET))(this, cmd);
		}

		::System::Void UpdateLightData(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATELIGHTDATA_OFFSET))(this, cmd, renderingData, postCullRenderingData);
		}

		::Unity::Collections::NativeHashMap_2<::System::UInt32, ::ExtractBoneInfo> GetBoneInfoMap()
		{
			return ((::Unity::Collections::NativeHashMap_2<::System::UInt32, ::ExtractBoneInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETBONEINFOMAP_OFFSET))(this);
		}

		::System::Void EnsureMapCapacity(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ENSUREMAPCAPACITY_OFFSET))(this, size);
		}

		static ::System::Boolean _PrepareAfterCulling_g__GetLightDirection_103_0(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& data, ::UnityEngine::Vector3& direction)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__PREPAREAFTERCULLING_G__GETLIGHTDIRECTION_103_0_OFFSET))(data, direction);
		}

		static ::System::Boolean _UpdateLightData_g__IsBlackCurtain_109_7(::System::UInt32 renderingLayerMask)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__ISBLACKCURTAIN_109_7_OFFSET))(renderingLayerMask);
		}

		static ::System::Boolean _UpdateLightData_g__CheckDistanceOfAxis_109_8(::System::Single a, ::System::Single b, ::System::Single extent, ::System::Object*& param_3)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Object*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__CHECKDISTANCEOFAXIS_109_8_OFFSET))(a, b, extent, param_3);
		}

		static ::System::Void _UpdateLightData_g__SortLightsIfNeeded_109_6(::System::Collections::Generic::List_1<::System::Int32>* lights, ::System::Int32 maxCount, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass109_0& param_2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass109_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__SORTLIGHTSIFNEEDED_109_6_OFFSET))(lights, maxCount, param_2);
		}

		static ::System::Void _UpdateLightData_g__SetPunctualLight_109_0(::NapRenderEntity* entity, ::UnityEngine::Rendering::Universal::NapCBProperty& offset, ::UnityEngine::Vector4& positionWS_halfInvSmoothness, ::UnityEngine::Vector3& forward, ::UnityEngine::Vector4& distanceAndSpotAttenuation, ::UnityEngine::Color& colorForCharacter)
		{
			return ((::System::Void(*)(::NapRenderEntity*, ::UnityEngine::Rendering::Universal::NapCBProperty&, ::UnityEngine::Vector4&, ::UnityEngine::Vector3&, ::UnityEngine::Vector4&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__SETPUNCTUALLIGHT_109_0_OFFSET))(entity, offset, positionWS_halfInvSmoothness, forward, distanceAndSpotAttenuation, colorForCharacter);
		}

		static ::UnityEngine::NAPRenderPipeline0::NapLightData& _UpdateLightData_g__GetPunctualLightDataFromNapLightData_109_1(::System::Int32 lightIndex, ::UnityEngine::Vector4& positionWS_halfInvSmoothness)
		{
			return ((::UnityEngine::NAPRenderPipeline0::NapLightData&(*)(::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETPUNCTUALLIGHTDATAFROMNAPLIGHTDATA_109_1_OFFSET))(lightIndex, positionWS_halfInvSmoothness);
		}

		static ::UnityEngine::Color _UpdateLightData_g__GetPunctualLightDataFromComponent_109_2(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* uald, ::UnityEngine::Light* light, ::System::Single punctualLightFade, ::UnityEngine::Vector4& positionWS_halfInvSmoothness, ::UnityEngine::Vector3& forward, ::UnityEngine::Vector4& distanceAndSpotAttenuation, ::UnityEngine::Color& colorForCharacter)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*, ::UnityEngine::Light*, ::System::Single, ::UnityEngine::Vector4&, ::UnityEngine::Vector3&, ::UnityEngine::Vector4&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETPUNCTUALLIGHTDATAFROMCOMPONENT_109_2_OFFSET))(uald, light, punctualLightFade, positionWS_halfInvSmoothness, forward, distanceAndSpotAttenuation, colorForCharacter);
		}

		static ::System::Single _UpdateLightData_g__CalculateLightWeight_109_3(::UnityEngine::NAPRenderPipeline0::NapLightData lightData, ::NapRenderEntity* entity)
		{
			return ((::System::Single(*)(::UnityEngine::NAPRenderPipeline0::NapLightData, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__CALCULATELIGHTWEIGHT_109_3_OFFSET))(lightData, entity);
		}

		static ::System::Single _UpdateLightData_g__DistanceAttenuationB_109_10(::System::Single distanceSquare, ::System::Object*& param_1)
		{
			return ((::System::Single(*)(::System::Single, ::System::Object*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__DISTANCEATTENUATIONB_109_10_OFFSET))(distanceSquare, param_1);
		}

		static ::System::Single _UpdateLightData_g__AngleAttenuation_109_11(::System::Object*& param_0)
		{
			return ((::System::Single(*)(::System::Object*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__ANGLEATTENUATION_109_11_OFFSET))(param_0);
		}

		static ::System::Boolean _UpdateLightData_g__TrySetDirectionOverride_109_4(::NapRenderEntity* entity, ::UnityEngine::NAPRenderPipeline0::NapLightData& lightData, ::UnityEngine::Rendering::Universal::NapRenderEntityPrepareInputCustom& input)
		{
			return ((::System::Boolean(*)(::NapRenderEntity*, ::UnityEngine::NAPRenderPipeline0::NapLightData&, ::UnityEngine::Rendering::Universal::NapRenderEntityPrepareInputCustom&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__TRYSETDIRECTIONOVERRIDE_109_4_OFFSET))(entity, lightData, input);
		}

		static ::System::Int32 _UpdateLightData_g__GetKernel_109_5()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETKERNEL_109_5_OFFSET))();
		}
	};
}
