#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ObjectPool_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL_GET_1_OFFSET UNITYSDK_OFFSET(0x1ED9B790)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL_GET_OFFSET UNITYSDK_OFFSET(0x1ED9B710)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x1ED9B810)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED9BA20)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CommandBufferPool_TypeDefinitionIndex = 6042;

	class CommandBufferPool : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>** StaticGet_s_BufferPool()
		{
			return (::UnityEngine::NAPRenderPipeline0::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>**)Il2CppClass::FromTypeDefinitionIndex(CommandBufferPool_TypeDefinitionIndex)->GetStaticField(0x4DF0);
		}
		static ::System::Int32* StaticGet_MaxPoolSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CommandBufferPool_TypeDefinitionIndex)->GetStaticField(0x2300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::CommandBuffer* Get()
		{
			return ((::UnityEngine::Rendering::CommandBuffer*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL_GET_OFFSET))();
		}

		static ::UnityEngine::Rendering::CommandBuffer* Get_1(::System::String* name)
		{
			return ((::UnityEngine::Rendering::CommandBuffer*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL_GET_1_OFFSET))(name);
		}

		static ::System::Void Release(::UnityEngine::Rendering::CommandBuffer* buffer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL_RELEASE_OFFSET))(buffer);
		}
	};
}
