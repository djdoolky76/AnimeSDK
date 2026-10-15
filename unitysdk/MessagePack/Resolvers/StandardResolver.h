#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Resolvers { class StandardResolver; }

#define MESSAGEPACK_RESOLVERS_STANDARDRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBD53B0)
#define MESSAGEPACK_RESOLVERS_STANDARDRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD56F0)

namespace MessagePack::Resolvers
{
	class StandardResolver : public ::System::Object
	{
	public:
		static ::Il2CppArray<::MessagePack::IFormatterResolver*>** StaticGet_Resolvers()
		{
			return (::Il2CppArray<::MessagePack::IFormatterResolver*>**)UnitySDK::FromName("MessagePack.Resolvers", "StandardResolver")->GetStaticField(0x2CAB0);
		}

		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)UnitySDK::FromName("MessagePack.Resolvers", "StandardResolver")->GetStaticField(0x2CAB8);
		}

		static ::MessagePack::Resolvers::StandardResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::StandardResolver**)UnitySDK::FromName("MessagePack.Resolvers", "StandardResolver")->GetStaticField(0x2CAC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STANDARDRESOLVER_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STANDARDRESOLVER_CTOR_OFFSET))(this);
		}

	};
}
