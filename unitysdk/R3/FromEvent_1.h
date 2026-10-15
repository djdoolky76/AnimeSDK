#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

namespace R3
{
	inline static constexpr unsigned int FromEvent_1_TypeDefinitionIndex = 35911;

	template <typename T>
	class FromEvent_1
	{
	public:
		::System::Func_2<::System::Action*, T>* _conversion_P; // 0x0
		::System::Action_1<T>* _addHandler_P; // 0x0
		::System::Action_1<T>* _removeHandler_P; // 0x0
		::System::Threading::CancellationToken _cancellationToken_P; // 0x0
	};
}
