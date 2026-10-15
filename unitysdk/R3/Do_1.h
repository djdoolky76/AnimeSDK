#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
namespace R3 { class Observable; }
namespace System { class Action; }
namespace System { class Exception; }

namespace R3
{
	template <typename T>
	class Do_1
	{
	public:
		::R3::Observable* _source_P; // 0x0
		::System::Action* _onNext_P; // 0x0
		::System::Action* _onErrorResume_P; // 0x0
		::System::Action* _onCompleted_P; // 0x0
		::System::Action* _onDispose_P; // 0x0
		::System::Action* _onSubscribe_P; // 0x0
	};
}
