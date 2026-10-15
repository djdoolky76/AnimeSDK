#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HashSetPool_1___c_TypeDefinitionIndex = 35496;

	template <typename T>
	class HashSetPool_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.Rendering", "<>c")->GetStaticField(0x0);
		}

	};
}
