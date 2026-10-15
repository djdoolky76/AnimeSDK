#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Formatters { class IMessagePackFormatter; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ReplicationFormatterResolver_FormatterCache_1_TypeDefinitionIndex = 37065;

	template <typename T>
	class ReplicationFormatterResolver_FormatterCache_1 : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter** StaticGet_Formatter()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter**)UnitySDK::FromName("RPG.Client.LittleGameShare", "FormatterCache`1")->GetStaticField(0x0);
		}

	};
}
