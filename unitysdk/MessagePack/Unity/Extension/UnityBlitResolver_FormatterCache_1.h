#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Formatters { class IMessagePackFormatter; }

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int UnityBlitResolver_FormatterCache_1_TypeDefinitionIndex = 10148;

	template <typename T>
	class UnityBlitResolver_FormatterCache_1 : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter** StaticGet_Formatter()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter**)UnitySDK::FromName("MessagePack.Unity.Extension", "FormatterCache`1")->GetStaticField(0x0);
		}

	};
}
