#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }

namespace RPG
{
	inline static constexpr unsigned int EmptyPooledDictionary_2_TypeDefinitionIndex = 6365;

	template <typename T1, typename T2>
	class EmptyPooledDictionary_2 : public ::System::Object
	{
	public:
		static ::Collections::Pooled::PooledDictionary_2<T1, T2>** StaticGet_Instance()
		{
			return (::Collections::Pooled::PooledDictionary_2<T1, T2>**)UnitySDK::FromName("RPG", "EmptyPooledDictionary`2")->GetStaticField(0x0);
		}

	};
}
