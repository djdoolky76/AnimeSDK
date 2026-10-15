#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DictionaryPool_2___c_TypeDefinitionIndex = 35498;

	template <typename T1, typename T2>
	class DictionaryPool_2___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.Rendering", "<>c")->GetStaticField(0x0);
		}

	};
}
