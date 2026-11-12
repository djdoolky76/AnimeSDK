#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Resolvers { class StandardResolver; }

#define MESSAGEPACK_RESOLVERS_STANDARDRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD5E320)
#define MESSAGEPACK_RESOLVERS_STANDARDRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5E660)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int StandardResolver_TypeDefinitionIndex = 7286;

	class StandardResolver : public ::System::Object
	{
	public:
		static ::Il2CppArray<::MessagePack::IFormatterResolver*>** StaticGet_Resolvers()
		{
			return (::Il2CppArray<::MessagePack::IFormatterResolver*>**)UnitySDK::FromName("MessagePack.Resolvers", "StandardResolver")->GetStaticField(0x4EFF0);
		}

		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)UnitySDK::FromName("MessagePack.Resolvers", "StandardResolver")->GetStaticField(0x4EFF8);
		}

		static ::MessagePack::Resolvers::StandardResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::StandardResolver**)UnitySDK::FromName("MessagePack.Resolvers", "StandardResolver")->GetStaticField(0x4F000);
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
