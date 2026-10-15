#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Object; }

namespace RPG::Client::Promises
{
	template <typename T>
	class Promise_1___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::System::Action* onComplete; // 0x0
		::RPG::Client::Promises::Promise* promise; // 0x0
	};
}
