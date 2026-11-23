#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace ABC
{
	inline static constexpr unsigned int MonoSingleton_1_TypeDefinitionIndex = 5540;

	template <typename T>
	class MonoSingleton_1 : public ::UnityEngine::MonoBehaviour
	{
	public:
		static T* StaticGet_F3D599139FC20B1E()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(MonoSingleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
