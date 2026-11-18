#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO::Ports
{
	inline static constexpr unsigned int Handshake_TypeDefinitionIndex = 4151;

	enum class Handshake : ::System::Int32
	{
		None = 0,
		RequestToSend = 2,
		RequestToSendXOnXOff = 3,
		XOnXOff = 1,
	};
}
