#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Unit.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
namespace R3 { template <typename T> class Observer_1; }
namespace System { class Action; }

namespace R3
{
	inline static constexpr unsigned int FromEvent_1__FromEventPattern_TypeDefinitionIndex = 35912;

	template <typename T>
	class FromEvent_1__FromEventPattern : public ::System::Object
	{
	public:
		::R3::Observer_1<::R3::Unit>* observer; // 0x0
		::System::Action* removeHandler; // 0x0
		T registeredHandler; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x0
	};
}
