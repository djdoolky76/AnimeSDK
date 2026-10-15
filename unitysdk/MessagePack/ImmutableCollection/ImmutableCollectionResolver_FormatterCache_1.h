#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Formatters { class IMessagePackFormatter; }

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int ImmutableCollectionResolver_FormatterCache_1_TypeDefinitionIndex = 7369;

	template <typename T>
	class ImmutableCollectionResolver_FormatterCache_1 : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter** StaticGet_Formatter()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter**)UnitySDK::FromName("MessagePack.ImmutableCollection", "FormatterCache`1")->GetStaticField(0x0);
		}

	};
}
