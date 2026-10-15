#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_FGOBNEAIPBG_TypeDefinitionIndex = 36094;

	class GeneratedMessagePackResolver_FGOBNEAIPBG : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Object*>** StaticGet_OFLAJJHOCEI()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Object*>**)UnitySDK::FromName("MessagePack", "FGOBNEAIPBG")->GetStaticField(0x0);
		}

	};
}
