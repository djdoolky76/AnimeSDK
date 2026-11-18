#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_HISTORYBUFFER_PINGPONG_OFFSET UNITYSDK_OFFSET(0x1E8EA620)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_HISTORYBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1E8EA000)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1E8EA6D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_HISTORYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EB090)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraApplyPass_HistoryBuffer_TypeDefinitionIndex = 27221;

	class LyraApplyPass_HistoryBuffer : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* LastIndirectHalfDiffuse; // 0x10
		::UnityEngine::RenderTexture* LastLum; // 0x18
		::UnityEngine::RenderTexture* CurLum; // 0x20
		::UnityEngine::RenderTexture* CurIndirectHalfDiffuse; // 0x28
		::UnityEngine::RenderTexture* CurFrameHalfDepth; // 0x30
		::UnityEngine::RenderTexture* LastFrameHalfDepth; // 0x38
		::UnityEngine::Matrix4x4 previousVP; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_HISTORYBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_HISTORYBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Void PingPong()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_HISTORYBUFFER_PINGPONG_OFFSET))(this);
		}

		::System::Boolean RelocateIfNeeded(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_HISTORYBUFFER_RELOCATEIFNEEDED_OFFSET))(this, desc);
		}
	};
}
