#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Formatters { class IMessagePackFormatter; }

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int PrimitiveObjectResolver_FormatterCache_1_TypeDefinitionIndex = 7271;

	template <typename T>
	class PrimitiveObjectResolver_FormatterCache_1 : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter** StaticGet_Formatter()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter**)UnitySDK::FromName("MessagePack.Resolvers", "FormatterCache`1")->GetStaticField(0x0);
		}

	};
}
