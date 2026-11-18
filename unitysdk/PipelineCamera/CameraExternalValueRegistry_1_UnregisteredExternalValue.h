#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraExternalValueRegistry_1_UnregisteredExternalValue_TypeDefinitionIndex = 36184;

	template <typename T>
	class CameraExternalValueRegistry_1_UnregisteredExternalValue
	{
	public:
		static ::System::Object** StaticGet_Instance()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CameraExternalValueRegistry_1_UnregisteredExternalValue_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
