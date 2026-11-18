#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

namespace MoleMole
{
	inline static constexpr unsigned int TwoValue_1_IKPIELAADAF_TypeDefinitionIndex = 81410;

	template <typename T>
	class TwoValue_1_IKPIELAADAF
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<T>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(TwoValue_1_IKPIELAADAF_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
