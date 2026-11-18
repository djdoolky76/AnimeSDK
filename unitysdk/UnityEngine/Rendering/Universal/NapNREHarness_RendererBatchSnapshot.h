#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_RENDERERBATCHSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA51D00)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapNREHarness_RendererBatchSnapshot_TypeDefinitionIndex = 26858;

	class NapNREHarness_RendererBatchSnapshot : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* entries; // 0x10
		::System::Boolean valid; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 renderedFrameCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_RENDERERBATCHSNAPSHOT__CTOR_OFFSET))(this);
		}
	};
}
