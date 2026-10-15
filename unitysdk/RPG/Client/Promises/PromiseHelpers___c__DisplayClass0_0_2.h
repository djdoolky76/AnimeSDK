#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace System { class Tuple; }

namespace RPG::Client::Promises
{
	template <typename T1, typename T2>
	class PromiseHelpers___c__DisplayClass0_0_2 : public ::System::Object
	{
	public:
		T1 val1; // 0x0
		::System::Int32 numUnresolved; // 0x0
		::RPG::Client::Promises::Promise* promise; // 0x0
		T2 val2; // 0x0
		::System::Boolean alreadyRejected; // 0x0
	};
}
