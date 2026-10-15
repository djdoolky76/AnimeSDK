#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { template <typename T> class ObjectPool_1; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DictionaryPool_2_TypeDefinitionIndex = 35497;

	template <typename T1, typename T2>
	class DictionaryPool_2 : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::Dictionary_2<T1, T2>*>** StaticGet_s_Pool()
		{
			return (::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::Dictionary_2<T1, T2>*>**)UnitySDK::FromName("UnityEngine.Rendering", "DictionaryPool`2")->GetStaticField(0x0);
		}

	};
}
