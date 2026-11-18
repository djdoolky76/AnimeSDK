#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { class ICameraDataBlenderBuilder; }
namespace System { class Object; }

namespace PipelineCamera
{
	inline static constexpr unsigned int BaseCameraController_2_PipelineInstance_TypeDefinitionIndex = 36160;

	template <typename T1, typename T2>
	struct alignas(8) BaseCameraController_2_PipelineInstance
	{
		static ::System::Object** StaticGet_Invalid()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BaseCameraController_2_PipelineInstance_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::UInt64 UniqueId; // 0x0
		::System::Int32 Index; // 0x0
		::PipelineCamera::ICameraDataBlenderBuilder* BlendIn; // 0x0
		::PipelineCamera::ICameraDataBlenderBuilder* BlendOut; // 0x0
	};
}
