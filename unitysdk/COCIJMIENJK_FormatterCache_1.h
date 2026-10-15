#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Formatters { class IMessagePackFormatter; }

inline static constexpr unsigned int COCIJMIENJK_FormatterCache_1_TypeDefinitionIndex = 37208;

	template <typename T>
	class COCIJMIENJK_FormatterCache_1 : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter** StaticGet_Formatter()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter**)UnitySDK::FromName("", "FormatterCache`1")->GetStaticField(0x0);
		}

	};
