#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
namespace MessagePack { class MessagePackSecurity_DateTimeOffsetEqualityComparer; }

#define MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEOFFSETEQUALITYCOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBA10C0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEOFFSETEQUALITYCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA1060)
#define MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEOFFSETEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BBA0FD0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_DateTimeOffsetEqualityComparer_TypeDefinitionIndex = 7209;

	class MessagePackSecurity_DateTimeOffsetEqualityComparer
	{
	public:
		static ::MessagePack::MessagePackSecurity_DateTimeOffsetEqualityComparer** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_DateTimeOffsetEqualityComparer**)UnitySDK::FromName("MessagePack", "DateTimeOffsetEqualityComparer")->GetStaticField(0x4DEE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEOFFSETEQUALITYCOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEOFFSETEQUALITYCOMPARER_CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::DateTimeOffset a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEOFFSETEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

	};
}
