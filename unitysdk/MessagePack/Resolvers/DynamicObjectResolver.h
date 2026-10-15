#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Internal { class DynamicAssemblyFactory; }
namespace MessagePack::Resolvers { class DynamicObjectResolver; }

#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBAD8E0)
#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBAD990)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicObjectResolver_TypeDefinitionIndex = 7258;

	class DynamicObjectResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::DynamicObjectResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicObjectResolver**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicObjectResolver")->GetStaticField(0x4E8B0);
		}

		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicObjectResolver")->GetStaticField(0x4E8B8);
		}

		static ::MessagePack::Internal::DynamicAssemblyFactory** StaticGet_DynamicAssemblyFactory()
		{
			return (::MessagePack::Internal::DynamicAssemblyFactory**)UnitySDK::FromName("MessagePack.Resolvers", "DynamicObjectResolver")->GetStaticField(0x4E8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER_CTOR_OFFSET))(this);
		}

	};
}
