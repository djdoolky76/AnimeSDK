#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace MessagePack::Internal { template <typename T> class ThreadsafeTypeKeyHashTable_1; }

#define MESSAGEPACK_RESOLVERS_CACHINGFORMATTERRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF516D0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int CachingFormatterResolver_TypeDefinitionIndex = 30554;

	class CachingFormatterResolver : public ::System::Object
	{
	public:
		::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::MessagePack::Formatters::IMessagePackFormatter*>* formatters; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_CACHINGFORMATTERRESOLVER__CTOR_OFFSET))(this);
		}
	};
}
