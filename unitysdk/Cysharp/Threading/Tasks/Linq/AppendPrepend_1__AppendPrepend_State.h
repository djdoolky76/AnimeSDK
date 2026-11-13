#pragma once
#include "unitysdk/unitysdk.h"

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int AppendPrepend_1__AppendPrepend_State_TypeDefinitionIndex = 46254;

	enum class AppendPrepend_1__AppendPrepend_State : ::System::Byte
	{
		None = 0,
		RequirePrepend = 1,
		RequireAppend = 2,
		Completed = 3,
	};
}
