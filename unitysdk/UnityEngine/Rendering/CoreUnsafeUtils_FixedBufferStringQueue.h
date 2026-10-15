#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_CLEAR_OFFSET UNITYSDK_OFFSET(0x3C66DB0)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_CTOR_OFFSET UNITYSDK_OFFSET(0x3C66C30)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x2F84370)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x2F84380)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_TRYPOP_OFFSET UNITYSDK_OFFSET(0x3C66D60)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_TRYPUSH_OFFSET UNITYSDK_OFFSET(0x3C66C70)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CoreUnsafeUtils_FixedBufferStringQueue_TypeDefinitionIndex = 35476;

	struct alignas(8) CoreUnsafeUtils_FixedBufferStringQueue
	{
		::PVOID m_ReadCursor; // 0x10
		::PVOID m_WriteCursor; // 0x18
		::PVOID m_BufferEnd; // 0x20
		::PVOID m_BufferStart; // 0x28
		::System::Int32 m_BufferLength; // 0x30
		::System::Int32 _Count_k__BackingField; // 0x34
		::System::Void _ctor(::PVOID a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_SET_COUNT_OFFSET))(this, a1);
		}

		::System::Boolean TryPush(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_TRYPUSH_OFFSET))(this, a1);
		}

		::System::Boolean TryPop(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_TRYPOP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_FIXEDBUFFERSTRINGQUEUE_CLEAR_OFFSET))(this);
		}

	};
}
