#pragma once
#include "unitysdk/unitysdk.h"
namespace MessagePack { class MessagePackSecurity_StringEqualityComparer; }
namespace System { class String; }

#define MESSAGEPACK_MESSAGEPACKSECURITY_STRINGEQUALITYCOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBC2990)
#define MESSAGEPACK_MESSAGEPACKSECURITY_STRINGEQUALITYCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC2970)
#define MESSAGEPACK_MESSAGEPACKSECURITY_STRINGEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BBC2860)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_StringEqualityComparer_TypeDefinitionIndex = 7210;

	class MessagePackSecurity_StringEqualityComparer
	{
	public:
		static ::MessagePack::MessagePackSecurity_StringEqualityComparer** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_StringEqualityComparer**)UnitySDK::FromName("MessagePack", "StringEqualityComparer")->GetStaticField(0x2C400);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_STRINGEQUALITYCOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_STRINGEQUALITYCOMPARER_CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_STRINGEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

	};
}
