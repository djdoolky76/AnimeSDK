#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T> class CameraExternalValue_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraExternalValueRegistry_1_TypeDefinitionIndex = 36183;

	template <typename T>
	class CameraExternalValueRegistry_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::PipelineCamera::CameraExternalValue_1<T>*>** StaticGet_ExternalValues()
		{
			return (::Il2CppArray<::PipelineCamera::CameraExternalValue_1<T>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraExternalValueRegistry_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
