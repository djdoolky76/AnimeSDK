#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
namespace System { class Action; }
namespace System { class Exception; }

namespace R3
{
	inline static constexpr unsigned int AnonymousObserver_1_TypeDefinitionIndex = 35923;

	template <typename T>
	class AnonymousObserver_1
	{
	public:
		::System::Action* _onNext_P; // 0x0
		::System::Action* _onErrorResume_P; // 0x0
		::System::Action* _onCompleted_P; // 0x0
	};
}
