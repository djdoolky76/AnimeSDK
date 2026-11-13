#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

#define UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F66A230)
#define UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F66A240)
#define UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F66A250)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeStack_RuntimeTypeHandleComparer_TypeDefinitionIndex = 36596;

	class VolumeStack_RuntimeTypeHandleComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::RuntimeTypeHandle a1, ::System::RuntimeTypeHandle a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMESTACK_RUNTIMETYPEHANDLECOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

	};
}
