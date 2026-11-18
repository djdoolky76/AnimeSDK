#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NapGPUInstancedDataMode.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class GraphicsBuffer; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_NAPGPUINSTANCEDRENDERER_SETINSTANCEBUFFEROFFSET_OFFSET UNITYSDK_OFFSET(0x20072CF0)
#define UNITYENGINE_NAPGPUINSTANCEDRENDERER_SETINSTANCEBUFFER_OFFSET UNITYSDK_OFFSET(0x20072CE0)
#define UNITYENGINE_NAPGPUINSTANCEDRENDERER_SETINSTANCEMATRICES_OFFSET UNITYSDK_OFFSET(0x20072CC0)
#define UNITYENGINE_NAPGPUINSTANCEDRENDERER_SETINSTANCEVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x20072CD0)
#define UNITYENGINE_NAPGPUINSTANCEDRENDERER_SETLOCALBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x20072D10)
#define UNITYENGINE_NAPGPUINSTANCEDRENDERER_SETLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x20072D00)
#define UNITYENGINE_NAPGPUINSTANCEDRENDERER_SET_DATAMODE_OFFSET UNITYSDK_OFFSET(0x20072CB0)
#define UNITYENGINE_NAPGPUINSTANCEDRENDERER_SET_INSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x20072CA0)
#define UNITYENGINE_NAPGPUINSTANCEDRENDERER_SET_INSTANCEMESH_OFFSET UNITYSDK_OFFSET(0x20072C90)
#define UNITYENGINE_NAPGPUINSTANCEDRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x20072D20)

namespace UnityEngine
{
	inline static constexpr unsigned int NapGPUInstancedRenderer_TypeDefinitionIndex = 95404;

	class NapGPUInstancedRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPGPUINSTANCEDRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void set_instanceMesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPGPUINSTANCEDRENDERER_SET_INSTANCEMESH_OFFSET))(this, value);
		}

		::System::Void set_instanceCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPGPUINSTANCEDRENDERER_SET_INSTANCECOUNT_OFFSET))(this, value);
		}

		::System::Void set_dataMode(::UnityEngine::NapGPUInstancedDataMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapGPUInstancedDataMode))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPGPUINSTANCEDRENDERER_SET_DATAMODE_OFFSET))(this, value);
		}

		::System::Void SetInstanceMatrices(::Il2CppArray<::UnityEngine::Matrix4x4>* matrices, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPGPUINSTANCEDRENDERER_SETINSTANCEMATRICES_OFFSET))(this, matrices, count);
		}

		::System::Void SetInstanceVectorArray(::System::Int32 propertyId, ::Il2CppArray<::UnityEngine::Vector4>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPGPUINSTANCEDRENDERER_SETINSTANCEVECTORARRAY_OFFSET))(this, propertyId, values, count);
		}

		::System::Void SetInstanceBuffer(::UnityEngine::GraphicsBuffer* buffer, ::System::Int32 propertyId)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GraphicsBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPGPUINSTANCEDRENDERER_SETINSTANCEBUFFER_OFFSET))(this, buffer, propertyId);
		}

		::System::Void SetInstanceBufferOffset(::System::Int32 instanceOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPGPUINSTANCEDRENDERER_SETINSTANCEBUFFEROFFSET_OFFSET))(this, instanceOffset);
		}

		::System::Void SetLocalBounds(::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPGPUINSTANCEDRENDERER_SETLOCALBOUNDS_OFFSET))(this, bounds);
		}

		::System::Void SetLocalBounds_Injected(::UnityEngine::Bounds& bounds)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPGPUINSTANCEDRENDERER_SETLOCALBOUNDS_INJECTED_OFFSET))(this, bounds);
		}
	};
}
