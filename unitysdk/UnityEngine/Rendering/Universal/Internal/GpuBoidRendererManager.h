#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

class GpuBoidManager;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER_DRAWBOIDMESH_OFFSET UNITYSDK_OFFSET(0x16E52EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER_PREPAREBOIDBUFFER_OFFSET UNITYSDK_OFFSET(0x16E52AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x16E52980)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x16E52A30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E53190)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x16E53180)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int GpuBoidRendererManager_TypeDefinitionIndex = 26607;

	class GpuBoidRendererManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::GpuBoidManager*>** StaticGet_activeBoidManager()
		{
			return (::System::Collections::Generic::List_1<::GpuBoidManager*>**)Il2CppClass::FromTypeDefinitionIndex(GpuBoidRendererManager_TypeDefinitionIndex)->GetStaticField(0x22120);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void Register(::GpuBoidManager* proxy)
		{
			return ((::System::Void(*)(::GpuBoidManager*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER_REGISTER_OFFSET))(proxy);
		}

		static ::System::Void UnRegister(::GpuBoidManager* proxy)
		{
			return ((::System::Void(*)(::GpuBoidManager*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER_UNREGISTER_OFFSET))(proxy);
		}

		static ::System::Void PrepareBoidBuffer(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler, ::UnityEngine::ComputeShader* cs)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::ProfilingSampler*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER_PREPAREBOIDBUFFER_OFFSET))(context, m_ProfilingSampler, cs);
		}

		static ::System::Void DrawBoidMesh(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDRENDERERMANAGER_DRAWBOIDMESH_OFFSET))(context, cmd, camera);
		}
	};
}
