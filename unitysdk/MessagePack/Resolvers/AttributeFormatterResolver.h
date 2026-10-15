#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Resolvers { class AttributeFormatterResolver; }

#define MESSAGEPACK_RESOLVERS_ATTRIBUTEFORMATTERRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBCDC10)
#define MESSAGEPACK_RESOLVERS_ATTRIBUTEFORMATTERRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCDC00)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int AttributeFormatterResolver_TypeDefinitionIndex = 7250;

	class AttributeFormatterResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::AttributeFormatterResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::AttributeFormatterResolver**)UnitySDK::FromName("MessagePack.Resolvers", "AttributeFormatterResolver")->GetStaticField(0x26610);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_ATTRIBUTEFORMATTERRESOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_ATTRIBUTEFORMATTERRESOLVER_CCTOR_OFFSET))();
		}

	};
}
