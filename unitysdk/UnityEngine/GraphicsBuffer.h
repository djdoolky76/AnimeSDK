#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ComputeBufferMode.h"
#include "unitysdk/UnityEngine/GraphicsBuffer_Target.h"

namespace System { class Array; }

#define UNITYENGINE_GRAPHICSBUFFER_DESTROYBUFFER_OFFSET UNITYSDK_OFFSET(0x1E5412E0)
#define UNITYENGINE_GRAPHICSBUFFER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E541190)
#define UNITYENGINE_GRAPHICSBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E541210)
#define UNITYENGINE_GRAPHICSBUFFER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E5410D0)
#define UNITYENGINE_GRAPHICSBUFFER_INITBUFFERWITHMODE_OFFSET UNITYSDK_OFFSET(0x1E5412F0)
#define UNITYENGINE_GRAPHICSBUFFER_INTERNALSETDATA_OFFSET UNITYSDK_OFFSET(0x1E541750)
#define UNITYENGINE_GRAPHICSBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1E541430)
#define UNITYENGINE_GRAPHICSBUFFER_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E541500)
#define UNITYENGINE_GRAPHICSBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E541300)

namespace UnityEngine
{
	inline static constexpr unsigned int GraphicsBuffer_TypeDefinitionIndex = 5204;

	class GraphicsBuffer : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::UnityEngine::GraphicsBuffer_Target target, ::UnityEngine::ComputeBufferMode mode, ::System::Int32 count, ::System::Int32 stride)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GraphicsBuffer_Target, ::UnityEngine::ComputeBufferMode, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICSBUFFER__CTOR_OFFSET))(this, target, mode, count, stride);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICSBUFFER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICSBUFFER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICSBUFFER_DISPOSE_1_OFFSET))(this, disposing);
		}

		static ::System::IntPtr InitBufferWithMode(::UnityEngine::GraphicsBuffer_Target target, ::UnityEngine::ComputeBufferMode mode, ::System::Int32 count, ::System::Int32 stride)
		{
			return ((::System::IntPtr(*)(::UnityEngine::GraphicsBuffer_Target, ::UnityEngine::ComputeBufferMode, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICSBUFFER_INITBUFFERWITHMODE_OFFSET))(target, mode, count, stride);
		}

		static ::System::Void DestroyBuffer(::UnityEngine::GraphicsBuffer* buf)
		{
			return ((::System::Void(*)(::UnityEngine::GraphicsBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICSBUFFER_DESTROYBUFFER_OFFSET))(buf);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICSBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Void SetData(::System::Array* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICSBUFFER_SETDATA_OFFSET))(this, data);
		}

		::System::Void InternalSetData(::System::Array* data, ::System::Int32 managedBufferStartIndex, ::System::Int32 graphicsBufferStartIndex, ::System::Int32 count, ::System::Int32 elemSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICSBUFFER_INTERNALSETDATA_OFFSET))(this, data, managedBufferStartIndex, graphicsBufferStartIndex, count, elemSize);
		}
	};
}
