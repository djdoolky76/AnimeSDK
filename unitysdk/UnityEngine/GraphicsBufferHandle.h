#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_GRAPHICSBUFFERHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3D5D40)
#define UNITYENGINE_GRAPHICSBUFFERHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x93D670)
#define UNITYENGINE_GRAPHICSBUFFERHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x84BCC0)

namespace UnityEngine
{
	inline static constexpr unsigned int GraphicsBufferHandle_TypeDefinitionIndex = 5203;

	struct alignas(4) GraphicsBufferHandle
	{
		::System::UInt64 value; // 0x10

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICSBUFFERHANDLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICSBUFFERHANDLE_EQUALS_OFFSET))(this, obj);
		}

		/*
		::System::Boolean Equals_1(::UnityEngine::GraphicsBufferHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GraphicsBufferHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICSBUFFERHANDLE_EQUALS_1_OFFSET))(this, other);
		}
		*/
	};
}
