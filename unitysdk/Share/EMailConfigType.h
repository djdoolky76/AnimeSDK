#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMailConfigType_TypeDefinitionIndex = 10204;

	enum class EMailConfigType : ::System::Int16
	{
		Operation = 1,
		UserDefine = 2,
		Common = 0,
	};
}
