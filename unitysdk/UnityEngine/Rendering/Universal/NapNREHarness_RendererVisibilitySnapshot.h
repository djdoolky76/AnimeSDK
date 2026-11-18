#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_RENDERERVISIBILITYSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D458E10)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapNREHarness_RendererVisibilitySnapshot_TypeDefinitionIndex = 26852;

	class NapNREHarness_RendererVisibilitySnapshot : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* records; // 0x10
		::System::Boolean valid; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 renderedFrameCount; // 0x1C
		::System::Int32 cameraInstanceID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_RENDERERVISIBILITYSNAPSHOT__CTOR_OFFSET))(this);
		}
	};
}
