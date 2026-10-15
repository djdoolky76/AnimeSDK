#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

namespace MessagePack::Unity
{
	inline static constexpr unsigned int UnityResolver_WithStandardResolver_FormatterCache_1_TypeDefinitionIndex = 10145;

	template <typename T>
	class UnityResolver_WithStandardResolver_FormatterCache_1 : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<T>** StaticGet_Formatter()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<T>**)UnitySDK::FromName("MessagePack.Unity", "FormatterCache`1")->GetStaticField(0x0);
		}

	};
}
