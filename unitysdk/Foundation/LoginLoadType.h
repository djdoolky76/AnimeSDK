#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LoginLoadType_TypeDefinitionIndex = 8005;

	enum class LoginLoadType : ::System::Byte
	{
		Normal = 0,
		IEnumeratorLoader = 1,
	};
}
