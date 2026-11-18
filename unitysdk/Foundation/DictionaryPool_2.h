#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Foundation
{
	inline static constexpr unsigned int DictionaryPool_2_TypeDefinitionIndex = 8612;

	template <typename T1, typename T2>
	class DictionaryPool_2 : public ::System::Object
	{
	public:
		static ::Foundation::ObjectPool_1<::System::Collections::Generic::Dictionary_2<T1, T2>*>** StaticGet_s_Pool()
		{
			return (::Foundation::ObjectPool_1<::System::Collections::Generic::Dictionary_2<T1, T2>*>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryPool_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
