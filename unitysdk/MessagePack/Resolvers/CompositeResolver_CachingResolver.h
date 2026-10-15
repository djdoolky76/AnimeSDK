#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace MessagePack::Internal { template <typename T> class ThreadsafeTypeKeyHashTable_1; }

#define MESSAGEPACK_RESOLVERS_COMPOSITERESOLVER_CACHINGRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCDE20)

namespace MessagePack::Resolvers
{
	class CompositeResolver_CachingResolver : public ::System::Object
	{
	public:
		::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::MessagePack::Formatters::IMessagePackFormatter*>* formattersCache; // 0x10
		::Il2CppArray<::MessagePack::Formatters::IMessagePackFormatter*>* subFormatters; // 0x18
		::Il2CppArray<::MessagePack::IFormatterResolver*>* subResolvers; // 0x20
		::System::Void _ctor(::Il2CppArray<::MessagePack::Formatters::IMessagePackFormatter*>* a1, ::Il2CppArray<::MessagePack::IFormatterResolver*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MessagePack::Formatters::IMessagePackFormatter*>*, ::Il2CppArray<::MessagePack::IFormatterResolver*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_COMPOSITERESOLVER_CACHINGRESOLVER_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
