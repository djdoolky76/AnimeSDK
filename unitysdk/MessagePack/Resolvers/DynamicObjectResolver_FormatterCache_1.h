#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Formatters { class IMessagePackFormatter; }

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicObjectResolver_FormatterCache_1_TypeDefinitionIndex = 7259;

	template <typename T>
	class DynamicObjectResolver_FormatterCache_1 : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter** StaticGet_Formatter()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter**)UnitySDK::FromName("MessagePack.Resolvers", "FormatterCache`1")->GetStaticField(0x0);
		}

	};
}
