#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class IFormatterResolver; }

#define MESSAGEPACK_INTERNAL_STANDARDRESOLVERHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0x174CA6B0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int StandardResolverHelper_TypeDefinitionIndex = 7355;

	class StandardResolverHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::MessagePack::IFormatterResolver*>** StaticGet_DefaultResolvers()
		{
			return (::Il2CppArray<::MessagePack::IFormatterResolver*>**)UnitySDK::FromName("MessagePack.Internal", "StandardResolverHelper")->GetStaticField(0x2ED90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_STANDARDRESOLVERHELPER_CCTOR_OFFSET))();
		}

	};
}
