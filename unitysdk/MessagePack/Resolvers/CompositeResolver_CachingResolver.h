#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MESSAGEPACK_RESOLVERS_COMPOSITERESOLVER_CACHINGRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2FF410)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int CompositeResolver_CachingResolver_TypeDefinitionIndex = 30333;

	class CompositeResolver_CachingResolver : public ::System::Object
	{
	public:
		::Il2CppArray<::MessagePack::Formatters::IMessagePackFormatter*>* subFormatters; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>* formattersCache; // 0x18
		::Il2CppArray<::MessagePack::IFormatterResolver*>* subResolvers; // 0x20

		::System::Void _ctor(::Il2CppArray<::MessagePack::Formatters::IMessagePackFormatter*>* subFormatters, ::Il2CppArray<::MessagePack::IFormatterResolver*>* subResolvers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MessagePack::Formatters::IMessagePackFormatter*>*, ::Il2CppArray<::MessagePack::IFormatterResolver*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_COMPOSITERESOLVER_CACHINGRESOLVER__CTOR_OFFSET))(this, subFormatters, subResolvers);
		}
	};
}
