#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Formatters { class IMessagePackFormatter; }

namespace MessagePack::Unity
{
	inline static constexpr unsigned int UnityResolver_FormatterCache_1_TypeDefinitionIndex = 10143;

	template <typename T>
	class UnityResolver_FormatterCache_1 : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter** StaticGet_Formatter()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter**)UnitySDK::FromName("MessagePack.Unity", "FormatterCache`1")->GetStaticField(0x0);
		}

	};
}
