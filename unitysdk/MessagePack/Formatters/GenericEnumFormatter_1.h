#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace MessagePack::Formatters
{
	template <typename T>
	class GenericEnumFormatter_1 : public ::System::Object
	{
	public:
		::System::Object* serializer; // 0x0
		::System::Object* deserializer; // 0x0
	};
}
