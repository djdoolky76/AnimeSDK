#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/MessageParser.h"
namespace System { template <typename T> class Func_1; }

namespace MiHoYo::SDK::Protobuf
{
	template <typename T>
	class MessageParser_1 : public ::MiHoYo::SDK::Protobuf::MessageParser
	{
	public:
		::System::Func_1<T>* factory; // 0x0
	};
}
