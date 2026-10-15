#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass35_0_TypeDefinitionIndex = 9877;

	template <typename T>
	class Promise_1___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* resultPromise; // 0x0
		::System::Action* onRejected; // 0x0
	};
}
