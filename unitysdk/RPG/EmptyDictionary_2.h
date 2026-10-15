#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG
{
	inline static constexpr unsigned int EmptyDictionary_2_TypeDefinitionIndex = 6363;

	template <typename T1, typename T2>
	class EmptyDictionary_2 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<T1, T2>** StaticGet_Instance()
		{
			return (::System::Collections::Generic::Dictionary_2<T1, T2>**)UnitySDK::FromName("RPG", "EmptyDictionary`2")->GetStaticField(0x0);
		}

	};
}
