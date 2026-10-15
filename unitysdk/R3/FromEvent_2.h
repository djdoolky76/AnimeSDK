#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

namespace R3
{
	inline static constexpr unsigned int FromEvent_2_TypeDefinitionIndex = 35914;

	template <typename T1, typename T2>
	class FromEvent_2
	{
	public:
		::System::Func_2<::System::Action_1<T1>*, T2>* _conversion_P; // 0x0
		::System::Action_1<T2>* _addHandler_P; // 0x0
		::System::Action_1<T2>* _removeHandler_P; // 0x0
		::System::Threading::CancellationToken _cancellationToken_P; // 0x0
	};
}
