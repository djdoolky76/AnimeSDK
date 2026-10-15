#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Return_1__Return_TypeDefinitionIndex = 45547;

	template <typename T>
	class Return_1__Return : public ::System::Object
	{
	public:
		T value; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Boolean called; // 0x0
	};
}
