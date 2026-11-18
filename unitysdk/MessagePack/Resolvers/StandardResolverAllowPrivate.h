#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_RESOLVERS_STANDARDRESOLVERALLOWPRIVATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CF4F0)
#define MESSAGEPACK_RESOLVERS_STANDARDRESOLVERALLOWPRIVATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CF660)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int StandardResolverAllowPrivate_TypeDefinitionIndex = 30494;

	class StandardResolverAllowPrivate : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::StandardResolverAllowPrivate** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::StandardResolverAllowPrivate**)Il2CppClass::FromTypeDefinitionIndex(StandardResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x27140);
		}
		static ::Il2CppArray<::MessagePack::IFormatterResolver*>** StaticGet_Resolvers()
		{
			return (::Il2CppArray<::MessagePack::IFormatterResolver*>**)Il2CppClass::FromTypeDefinitionIndex(StandardResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x27148);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(StandardResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x27150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STANDARDRESOLVERALLOWPRIVATE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STANDARDRESOLVERALLOWPRIVATE__CTOR_OFFSET))(this);
		}
	};
}
