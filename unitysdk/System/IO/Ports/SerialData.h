#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO::Ports
{
	inline static constexpr unsigned int SerialData_TypeDefinitionIndex = 4153;

	enum class SerialData : ::System::Int32
	{
		Chars = 1,
		Eof = 2,
	};
}
