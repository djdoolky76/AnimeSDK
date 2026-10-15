#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ArgInfoType_TypeDefinitionIndex = 1296;

	enum class ArgInfoType : ::System::Byte
	{
		In = 0,
		Out = 1,
	};
}
