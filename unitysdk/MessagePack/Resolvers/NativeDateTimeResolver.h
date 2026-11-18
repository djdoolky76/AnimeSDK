#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_RESOLVERS_NATIVEDATETIMERESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF8C990)
#define MESSAGEPACK_RESOLVERS_NATIVEDATETIMERESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8CA80)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int NativeDateTimeResolver_TypeDefinitionIndex = 30198;

	class NativeDateTimeResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::NativeDateTimeResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::NativeDateTimeResolver**)Il2CppClass::FromTypeDefinitionIndex(NativeDateTimeResolver_TypeDefinitionIndex)->GetStaticField(0x26730);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(NativeDateTimeResolver_TypeDefinitionIndex)->GetStaticField(0x26738);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_NATIVEDATETIMERESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_NATIVEDATETIMERESOLVER__CTOR_OFFSET))(this);
		}
	};
}
