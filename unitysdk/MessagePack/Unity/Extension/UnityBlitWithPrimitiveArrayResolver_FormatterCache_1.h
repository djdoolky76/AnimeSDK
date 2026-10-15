#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int UnityBlitWithPrimitiveArrayResolver_FormatterCache_1_TypeDefinitionIndex = 10150;

	template <typename T>
	class UnityBlitWithPrimitiveArrayResolver_FormatterCache_1 : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<T>** StaticGet_Formatter()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<T>**)UnitySDK::FromName("MessagePack.Unity.Extension", "FormatterCache`1")->GetStaticField(0x0);
		}

	};
}
