#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/MessageParser.h"
namespace System { template <typename T> class Func_1; }

namespace Google::Protobuf
{
	inline static constexpr unsigned int MessageParser_1_TypeDefinitionIndex = 5409;

	template <typename T>
	class MessageParser_1 : public ::Google::Protobuf::MessageParser
	{
	public:
		::System::Func_1<T>* factory; // 0x0
	};
}
