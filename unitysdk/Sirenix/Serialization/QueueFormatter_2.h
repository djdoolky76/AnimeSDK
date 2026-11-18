#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int QueueFormatter_2_TypeDefinitionIndex = 7492;

	template <typename T1, typename T2>
	class QueueFormatter_2
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<T1>** StaticGet_TSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<T1>**)Il2CppClass::FromTypeDefinitionIndex(QueueFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_IsPlainQueue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(QueueFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
