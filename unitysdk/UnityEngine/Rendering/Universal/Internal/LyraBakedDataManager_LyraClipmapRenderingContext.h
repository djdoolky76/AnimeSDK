#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraSectorCoord.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/LyraBakedDataManager_LyraClipmapRenderingContext_TemporaryBufferTag.h"
#include "unitysdk/UnityEngine/ComputeBufferMode.h"
#include "unitysdk/UnityEngine/ComputeBufferType.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraBakedDataManager_SceneVoxelVisualizer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CF803A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_GETCOMPUTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CF80580)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_INITED_OFFSET UNITYSDK_OFFSET(0x1CF804F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_REALLOCATERESOURCESIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1CF80AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_RELEASEALLOCATEDCOMPUTEBUFFERS_OFFSET UNITYSDK_OFFSET(0x1CF80810)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_RELEASERT_OFFSET UNITYSDK_OFFSET(0x1CF812B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1CF80410)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_RELOCATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1CF80A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_RESETALLOCATEDCOMPUTEBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1CF80530)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF80100)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_LyraClipmapRenderingContext_TypeDefinitionIndex = 26732;

	class LyraBakedDataManager_LyraClipmapRenderingContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::LyraSector::LyraSectorCoord>* m_ChangedSectorCoord; // 0x10
		::UnityEngine::Texture2D* m_AlbedoLutTex; // 0x18
		::UnityEngine::RenderTexture* m_ClipmapTexture; // 0x20
		::Il2CppArray<::UnityEngine::Vector3Int>* m_LastPartialUpdateOriginInPages; // 0x28
		::Il2CppArray<::UnityEngine::Vector4>* m_WorldToUVAddAndMul; // 0x30
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::ComputeBuffer*>*>* m_AllocatedBuffers; // 0x38
		::UnityEngine::RenderTexture* m_CompressedClipmapTexture; // 0x40
		::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_SceneVoxelVisualizer* m_Visualizer; // 0x48
		::UnityEngine::RenderTexture* m_EmissionClipmapTexture; // 0x50
		::Il2CppArray<::UnityEngine::Vector3Int>* m_FullUpdateOriginInPages; // 0x58
		::Il2CppArray<::UnityEngine::Vector4>* m_CenterAndExtent; // 0x60
		::System::UInt32 m_ComputeBufferSize; // 0x68
		::System::Boolean m_Enabled; // 0x6C
		::System::Boolean m_IsForDistanceField; // 0x6D
		::System::Boolean m_Inited; // 0x6E
		::System::Byte _padding0[0x1];
		::System::Int32 m_NumPropagatedSteps; // 0x70
		::System::Int32 m_DirtyClipmapToRefresh; // 0x74

		::System::Void _ctor(::System::Boolean isForDistanceField)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT__CTOR_OFFSET))(this, isForDistanceField);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_FINALIZE_OFFSET))(this);
		}

		::System::Boolean Inited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_INITED_OFFSET))(this);
		}

		::System::Void ResetAllocatedComputeBufferSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_RESETALLOCATEDCOMPUTEBUFFERSIZE_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* GetComputeBuffer(::System::Int32 clipmapIndex, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapRenderingContext_TemporaryBufferTag bufferTag, ::System::Int32 count, ::System::Int32 stride, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode usage, ::UnityEngine::RenderTextureFormat format)
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_LyraClipmapRenderingContext_TemporaryBufferTag, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType, ::UnityEngine::ComputeBufferMode, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_GETCOMPUTEBUFFER_OFFSET))(this, clipmapIndex, bufferTag, count, stride, type, usage, format);
		}

		::System::Void ReleaseAllocatedComputeBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_RELEASEALLOCATEDCOMPUTEBUFFERS_OFFSET))(this);
		}

		::System::Boolean RelocateIfNeeded(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_RELOCATEIFNEEDED_OFFSET))(this, desc);
		}

		::System::Boolean ReallocateResourcesIfNeeded(::UnityEngine::Vector3Int& clipmapTextureSize, ::UnityEngine::Vector3Int& emissionClipmapTextureSize)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3Int&, ::UnityEngine::Vector3Int&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_REALLOCATERESOURCESIFNEEDED_OFFSET))(this, clipmapTextureSize, emissionClipmapTextureSize);
		}

		::System::Void ReleaseRT(::UnityEngine::RenderTexture*& rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_RELEASERT_OFFSET))(this, rt);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPRENDERINGCONTEXT_RELEASE_OFFSET))(this);
		}
	};
}
