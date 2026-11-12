#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Resolvers { class PrimitiveObjectResolver; }

#define MESSAGEPACK_RESOLVERS_PRIMITIVEOBJECTRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD5E220)
#define MESSAGEPACK_RESOLVERS_PRIMITIVEOBJECTRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5E290)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int PrimitiveObjectResolver_TypeDefinitionIndex = 7281;

	class PrimitiveObjectResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::PrimitiveObjectResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::PrimitiveObjectResolver**)UnitySDK::FromName("MessagePack.Resolvers", "PrimitiveObjectResolver")->GetStaticField(0x4F6E0);
		}

		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)UnitySDK::FromName("MessagePack.Resolvers", "PrimitiveObjectResolver")->GetStaticField(0x4F6E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_PRIMITIVEOBJECTRESOLVER_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_PRIMITIVEOBJECTRESOLVER_CTOR_OFFSET))(this);
		}

	};
}
