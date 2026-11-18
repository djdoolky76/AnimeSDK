#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { class ICameraDataBlenderBuilder; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleInternal_1; }
namespace System { class Object; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraSubModuleContainer_1_Item_TypeDefinitionIndex = 36197;

	template <typename T>
	struct alignas(8) CameraSubModuleContainer_1_Item
	{
		::System::Object* Status; // 0x0
		::PipelineCamera::ICameraSubModuleInternal_1<T>* SubModule; // 0x0
		::System::UInt64 UniqueId; // 0x0
		::PipelineCamera::ICameraDataBlenderBuilder* _blendIn; // 0x0
		::PipelineCamera::ICameraDataBlenderBuilder* _blendOut; // 0x0
	};
}
