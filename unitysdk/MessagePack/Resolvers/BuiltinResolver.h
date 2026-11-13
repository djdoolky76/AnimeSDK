#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Resolvers { class BuiltinResolver; }

#define MESSAGEPACK_RESOLVERS_BUILTINRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF62400)
#define MESSAGEPACK_RESOLVERS_BUILTINRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF623F0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int BuiltinResolver_TypeDefinitionIndex = 7263;

	class BuiltinResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::BuiltinResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::BuiltinResolver**)UnitySDK::FromName("MessagePack.Resolvers", "BuiltinResolver")->GetStaticField(0x2EC70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_BUILTINRESOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_BUILTINRESOLVER_CCTOR_OFFSET))();
		}

	};
}
