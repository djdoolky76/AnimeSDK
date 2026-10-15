#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
namespace R3 { template <typename T> class Observer_1; }
namespace System { class Action; }
namespace System { class Exception; }

namespace R3
{
	inline static constexpr unsigned int Do_1__Do_TypeDefinitionIndex = 35942;

	template <typename T>
	class Do_1__Do
	{
	public:
		::R3::Observer_1<T>* _observer_P; // 0x0
		::System::Action* _onNext_P; // 0x0
		::System::Action* _onErrorResume_P; // 0x0
		::System::Action* _onCompleted_P; // 0x0
		::System::Action* _onDispose_P; // 0x0
	};
}
