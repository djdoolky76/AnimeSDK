#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ComponentSingleton_1_TypeDefinitionIndex = 17813;

	template <typename T>
	class ComponentSingleton_1 : public ::System::Object
	{
	public:
		static T* StaticGet_s_Instance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(ComponentSingleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
