#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4AEDD0)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GETDEFAULT_OFFSET UNITYSDK_OFFSET(0x1E4AECA0)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GET_1_OFFSET UNITYSDK_OFFSET(0x1E4AEC20)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GET_OFFSET UNITYSDK_OFFSET(0x1E4AEB70)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x1E4AED20)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBufferPool_TypeDefinitionIndex = 36398;

	class CommandBufferPool : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>** StaticGet_s_BufferPool()
		{
			return (::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>**)UnitySDK::FromName("UnityEngine.Rendering", "CommandBufferPool")->GetStaticField(0x5F190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::CommandBuffer* Get()
		{
			return ((::UnityEngine::Rendering::CommandBuffer*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GET_OFFSET))();
		}

		static ::UnityEngine::Rendering::CommandBuffer* Get_1(::System::String* a1)
		{
			return ((::UnityEngine::Rendering::CommandBuffer*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GET_1_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::CommandBuffer* GetDefault()
		{
			return ((::UnityEngine::Rendering::CommandBuffer*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GETDEFAULT_OFFSET))();
		}

		static ::System::Void Release(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_RELEASE_OFFSET))(a1);
		}

	};
}
