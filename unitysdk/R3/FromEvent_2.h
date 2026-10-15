#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace R3
{
	template <typename T1, typename T2>
	class FromEvent_2
	{
	public:
		::System::Func_2<::System::Action*, T2>* _conversion_P; // 0x0
		::System::Action* _addHandler_P; // 0x0
		::System::Action* _removeHandler_P; // 0x0
		::System::Threading::CancellationToken _cancellationToken_P; // 0x0
	};
}
