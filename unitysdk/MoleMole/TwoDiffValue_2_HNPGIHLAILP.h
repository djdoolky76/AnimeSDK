#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

namespace MoleMole
{
	inline static constexpr unsigned int TwoDiffValue_2_HNPGIHLAILP_TypeDefinitionIndex = 51691;

	template <typename T1, typename T2>
	class TwoDiffValue_2_HNPGIHLAILP
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<T1>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<T1>**)Il2CppClass::FromTypeDefinitionIndex(TwoDiffValue_2_HNPGIHLAILP_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<T2>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<T2>**)Il2CppClass::FromTypeDefinitionIndex(TwoDiffValue_2_HNPGIHLAILP_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
