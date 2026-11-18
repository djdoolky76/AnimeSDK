#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2> class DictionaryPoolInstance_2; }

namespace Foundation
{
	inline static constexpr unsigned int ObjectDictionaryPool_2_TypeDefinitionIndex = 8007;

	template <typename T1, typename T2>
	class ObjectDictionaryPool_2 : public ::System::Object
	{
	public:
		static ::Foundation::DictionaryPoolInstance_2<T1, T2>** StaticGet__cache_k__BackingField()
		{
			return (::Foundation::DictionaryPoolInstance_2<T1, T2>**)Il2CppClass::FromTypeDefinitionIndex(ObjectDictionaryPool_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
