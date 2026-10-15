#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class CommandBufferExt; }
namespace UnityEngine::Rendering { class ProfilingSampler; }

#define UNITYENGINE_RENDERING_PROFILINGSCOPE_BEGINPROFILE_1_OFFSET UNITYSDK_OFFSET(0x1F2C69D0)
#define UNITYENGINE_RENDERING_PROFILINGSCOPE_BEGINPROFILE_OFFSET UNITYSDK_OFFSET(0x1F2C69C0)
#define UNITYENGINE_RENDERING_PROFILINGSCOPE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x10B0)
#define UNITYENGINE_RENDERING_PROFILINGSCOPE_CTOR_OFFSET UNITYSDK_OFFSET(0x10B0)
#define UNITYENGINE_RENDERING_PROFILINGSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B0)
#define UNITYENGINE_RENDERING_PROFILINGSCOPE_ENDPROFILE_OFFSET UNITYSDK_OFFSET(0x1F2C69E0)

namespace UnityEngine::Rendering
{
	struct alignas(4) ProfilingScope
	{
		::System::Void _ctor(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::ProfilingSampler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ProfilingSampler*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSCOPE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::UnityEngine::Rendering::CommandBufferExt* a1, ::UnityEngine::Rendering::ProfilingSampler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBufferExt*, ::UnityEngine::Rendering::ProfilingSampler*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSCOPE_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSCOPE_DISPOSE_OFFSET))(this);
		}

		static ::System::Void BeginProfile(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::ProfilingSampler* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ProfilingSampler*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSCOPE_BEGINPROFILE_OFFSET))(a1, a2);
		}

		static ::System::Void BeginProfile_1(::UnityEngine::Rendering::CommandBufferExt* a1, ::UnityEngine::Rendering::ProfilingSampler* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::UnityEngine::Rendering::ProfilingSampler*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSCOPE_BEGINPROFILE_1_OFFSET))(a1, a2);
		}

		static ::System::Void EndProfile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PROFILINGSCOPE_ENDPROFILE_OFFSET))();
		}

	};
}
