#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class HashSetPoolInstance_1; }

namespace Foundation
{
	inline static constexpr unsigned int ObjectHashSetPool_1_TypeDefinitionIndex = 7856;

	template <typename T>
	class ObjectHashSetPool_1 : public ::System::Object
	{
	public:
		static ::Foundation::HashSetPoolInstance_1<T>** StaticGet__cache_k__BackingField()
		{
			return (::Foundation::HashSetPoolInstance_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ObjectHashSetPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
