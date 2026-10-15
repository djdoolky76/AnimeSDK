#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Formatters { class IMessagePackFormatter; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int TypeFormatter_1_TypeDefinitionIndex = 7505;

	template <typename T>
	class TypeFormatter_1 : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter**)UnitySDK::FromName("MessagePack.Formatters", "TypeFormatter`1")->GetStaticField(0x0);
		}

	};
}
