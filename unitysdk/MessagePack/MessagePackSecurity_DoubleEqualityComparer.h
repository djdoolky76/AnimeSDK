#pragma once
#include "unitysdk/unitysdk.h"
namespace MessagePack { class MessagePackSecurity_DoubleEqualityComparer; }

#define MESSAGEPACK_MESSAGEPACKSECURITY_DOUBLEEQUALITYCOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBA1240)
#define MESSAGEPACK_MESSAGEPACKSECURITY_DOUBLEEQUALITYCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA11E0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_DOUBLEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BBA1160)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_DoubleEqualityComparer_TypeDefinitionIndex = 7207;

	class MessagePackSecurity_DoubleEqualityComparer
	{
	public:
		static ::MessagePack::MessagePackSecurity_DoubleEqualityComparer** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_DoubleEqualityComparer**)UnitySDK::FromName("MessagePack", "DoubleEqualityComparer")->GetStaticField(0x4DF10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DOUBLEEQUALITYCOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DOUBLEEQUALITYCOMPARER_CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::Double a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DOUBLEEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

	};
}
