#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
namespace MessagePack { class MessagePackSecurity_DateTimeEqualityComparer; }

#define MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF55E70)
#define MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF55E10)
#define MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EF55DD0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_DateTimeEqualityComparer_TypeDefinitionIndex = 7219;

	class MessagePackSecurity_DateTimeEqualityComparer
	{
	public:
		static ::MessagePack::MessagePackSecurity_DateTimeEqualityComparer** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_DateTimeEqualityComparer**)UnitySDK::FromName("MessagePack", "DateTimeEqualityComparer")->GetStaticField(0x31CE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER_CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::DateTime a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

	};
}
