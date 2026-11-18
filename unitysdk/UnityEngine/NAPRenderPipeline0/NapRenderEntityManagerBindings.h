#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_ADDTOMANAGER_OFFSET UNITYSDK_OFFSET(0x1F18C130)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F18BFD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETBLENDLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1F18C090)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETBLENDLIGHTINDICES_OFFSET UNITYSDK_OFFSET(0x1F18C0A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETLIGHTINPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x1F18C070)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETLIGHTINPUTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1F18C080)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETLIGHTVISIBLEENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1F18C050)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETLIGHTVISIBLEENTITYROOTIDS_OFFSET UNITYSDK_OFFSET(0x1F18C060)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETNAPCBSNAPSHOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1F18C0B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETNAPCBSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1F18C0C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETNAPENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1F18C030)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETNAPENTITYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1F18C040)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETRENDERERBATCHENTRYCOUNT_OFFSET UNITYSDK_OFFSET(0x1F18C0F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETRENDERERBATCHENTRYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1F18C100)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETRENDERERVISIBILITYSNAPSHOTMETA_OFFSET UNITYSDK_OFFSET(0x1F18C0D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETRENDERERVISIBILITYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1F18C0E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETVISIBLEENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1F18C010)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETVISIBLEENTITYHANDLES_OFFSET UNITYSDK_OFFSET(0x1F18C020)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_PREPAREAFTERLIGHTLOOP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F18C120)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_PREPAREAFTERLIGHTLOOP_OFFSET UNITYSDK_OFFSET(0x1F18C110)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_PREPAREVISIBLEAFTERBONESYNC_OFFSET UNITYSDK_OFFSET(0x1F18C000)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_REMOVEFROMMANAGER_OFFSET UNITYSDK_OFFSET(0x1F18C140)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_SETCOMPUTESHADER_OFFSET UNITYSDK_OFFSET(0x1F18C150)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_UPDATEPERFRAME_OFFSET UNITYSDK_OFFSET(0x1F18BFE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_UPDATEVISIBILITYAFTERCULLING_OFFSET UNITYSDK_OFFSET(0x1F18BFF0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapRenderEntityManagerBindings_TypeDefinitionIndex = 6134;

	class NapRenderEntityManagerBindings : public ::System::Object
	{
	public:
		static ::System::Void Internal_DestroyInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_DESTROYINSTANCE_OFFSET))();
		}

		static ::System::Void Internal_UpdatePerFrame(::UnityEngine::Rendering::ScriptableRenderContext& context, ::Il2CppArray<::UnityEngine::Camera*>* cameras, ::System::Int32 cameraCount)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::Il2CppArray<::UnityEngine::Camera*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_UPDATEPERFRAME_OFFSET))(context, cameras, cameraCount);
		}

		static ::System::Void Internal_UpdateVisibilityAfterCulling(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean isPlanarReflectionCamera)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_UPDATEVISIBILITYAFTERCULLING_OFFSET))(postCullRenderingData, renderingData, isPlanarReflectionCamera);
		}

		static ::System::Void Internal_PrepareVisibleAfterBoneSync(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean isPlanarReflectionCamera)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_PREPAREVISIBLEAFTERBONESYNC_OFFSET))(postCullRenderingData, renderingData, isPlanarReflectionCamera);
		}

		static ::System::Int32 Internal_GetVisibleEntityCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETVISIBLEENTITYCOUNT_OFFSET))();
		}

		static ::System::Void Internal_GetVisibleEntityHandles(::Il2CppArray<::System::IntPtr>* handles, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::IntPtr>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETVISIBLEENTITYHANDLES_OFFSET))(handles, maxCount);
		}

		static ::System::Int32 Internal_GetNapEntityCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETNAPENTITYCOUNT_OFFSET))();
		}

		static ::System::Void Internal_GetNapEntitySnapshot(::Il2CppArray<::System::Int32>* rootIDs, ::Il2CppArray<::System::Int32>* priorities, ::Il2CppArray<::System::Byte>* visibleFlags, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETNAPENTITYSNAPSHOT_OFFSET))(rootIDs, priorities, visibleFlags, maxCount);
		}

		static ::System::Int32 Internal_GetLightVisibleEntityCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETLIGHTVISIBLEENTITYCOUNT_OFFSET))();
		}

		static ::System::Void Internal_GetLightVisibleEntityRootIDs(::Il2CppArray<::System::Int32>* rootIDs, ::Il2CppArray<::System::String*>* rootNames, ::Il2CppArray<::System::Byte>* visibleFlags, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETLIGHTVISIBLEENTITYROOTIDS_OFFSET))(rootIDs, rootNames, visibleFlags, maxCount);
		}

		static ::System::Int32 Internal_GetLightInputCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETLIGHTINPUTCOUNT_OFFSET))();
		}

		static ::System::Void Internal_GetLightInputSnapshot(::Il2CppArray<::System::Int32>* rootIDs, ::Il2CppArray<::System::Single>* floatValues, ::Il2CppArray<::System::Int32>* intValues, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETLIGHTINPUTSNAPSHOT_OFFSET))(rootIDs, floatValues, intValues, maxCount);
		}

		static ::System::Int32 Internal_GetBlendLightCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETBLENDLIGHTCOUNT_OFFSET))();
		}

		static ::System::Void Internal_GetBlendLightIndices(::Il2CppArray<::System::Int32>* indices, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETBLENDLIGHTINDICES_OFFSET))(indices, maxCount);
		}

		static ::System::Int32 Internal_GetNapCBSnapshotCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETNAPCBSNAPSHOTCOUNT_OFFSET))();
		}

		static ::System::Void Internal_GetNapCBSnapshot(::Il2CppArray<::System::Int32>* rootIDs, ::Il2CppArray<::System::Single>* data, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETNAPCBSNAPSHOT_OFFSET))(rootIDs, data, maxCount);
		}

		static ::System::Void Internal_GetRendererVisibilitySnapshotMeta(::Il2CppArray<::System::Int32>* meta)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETRENDERERVISIBILITYSNAPSHOTMETA_OFFSET))(meta);
		}

		static ::System::Void Internal_GetRendererVisibilitySnapshot(::Il2CppArray<::System::Int32>* rootIDs, ::Il2CppArray<::System::Int32>* rendererIDs, ::Il2CppArray<::System::Int64>* nativeHandles, ::Il2CppArray<::System::Int32>* rendererIndices, ::Il2CppArray<::System::Int32>* queryIndices, ::Il2CppArray<::System::Byte>* queryValid, ::Il2CppArray<::System::Byte>* queryResults, ::Il2CppArray<::System::Byte>* visibleFlags, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int64>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETRENDERERVISIBILITYSNAPSHOT_OFFSET))(rootIDs, rendererIDs, nativeHandles, rendererIndices, queryIndices, queryValid, queryResults, visibleFlags, maxCount);
		}

		static ::System::Int32 Internal_GetRendererBatchEntryCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETRENDERERBATCHENTRYCOUNT_OFFSET))();
		}

		static ::System::Void Internal_GetRendererBatchEntrySnapshot(::Il2CppArray<::System::Int32>* rendererIDs, ::Il2CppArray<::System::Int64>* nativeHandles, ::Il2CppArray<::System::Byte>* visibleFlags, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int64>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_GETRENDERERBATCHENTRYSNAPSHOT_OFFSET))(rendererIDs, nativeHandles, visibleFlags, maxCount);
		}

		static ::System::Void Internal_PrepareAfterLightLoop(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Vector4 avatarMainLightPosition)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_PREPAREAFTERLIGHTLOOP_OFFSET))(context, renderingData, postCullRenderingData, avatarMainLightPosition);
		}

		static ::System::Void Internal_AddToManager(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_ADDTOMANAGER_OFFSET))(nativeHandle);
		}

		static ::System::Void Internal_RemoveFromManager(::System::IntPtr nativeHandle, ::System::Boolean releaseResources)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_REMOVEFROMMANAGER_OFFSET))(nativeHandle, releaseResources);
		}

		static ::System::Void Internal_SetComputeShader(::UnityEngine::ComputeShader* computeShader)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_SETCOMPUTESHADER_OFFSET))(computeShader);
		}

		static ::System::Void Internal_PrepareAfterLightLoop_Injected(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Vector4& avatarMainLightPosition)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYMANAGERBINDINGS_INTERNAL_PREPAREAFTERLIGHTLOOP_INJECTED_OFFSET))(context, renderingData, postCullRenderingData, avatarMainLightPosition);
		}
	};
}
