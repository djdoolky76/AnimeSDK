#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Repeat_1__Repeat_TypeDefinitionIndex = 45545;

	template <typename T>
	class Repeat_1__Repeat : public ::System::Object
	{
	public:
		T element; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 remaining; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
	};
}
