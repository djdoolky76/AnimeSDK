#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_RESOLVERS_EXPANDOOBJECTRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D47FD80)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int ExpandoObjectResolver_TypeDefinitionIndex = 30735;

	class ExpandoObjectResolver : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObjectResolver_TypeDefinitionIndex)->GetStaticField(0x26430);
		}
		static ::MessagePack::IFormatterResolver** StaticGet_Instance()
		{
			return (::MessagePack::IFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObjectResolver_TypeDefinitionIndex)->GetStaticField(0x26438);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_EXPANDOOBJECTRESOLVER__CCTOR_OFFSET))();
		}
	};
}
