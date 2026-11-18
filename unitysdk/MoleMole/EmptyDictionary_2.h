#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { template <typename T1, typename T2> class EmptyDictionary_2; }

namespace MoleMole
{
	inline static constexpr unsigned int EmptyDictionary_2_TypeDefinitionIndex = 90594;

	template <typename T1, typename T2>
	class EmptyDictionary_2
	{
	public:
		static ::MoleMole::EmptyDictionary_2<T1, T2>** StaticGet__emptyInstance()
		{
			return (::MoleMole::EmptyDictionary_2<T1, T2>**)Il2CppClass::FromTypeDefinitionIndex(EmptyDictionary_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
