#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Resolvers { class StaticEnumResolver; }

#define MESSAGEPACK_RESOLVERS_STATICENUMRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF69EC0)
#define MESSAGEPACK_RESOLVERS_STATICENUMRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF69EB0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int StaticEnumResolver_TypeDefinitionIndex = 7288;

	class StaticEnumResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::StaticEnumResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::StaticEnumResolver**)UnitySDK::FromName("MessagePack.Resolvers", "StaticEnumResolver")->GetStaticField(0x2ECA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STATICENUMRESOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STATICENUMRESOLVER_CCTOR_OFFSET))();
		}

	};
}
