#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

namespace RPG::Client::Promises
{
	template <typename T>
	class Promise_1___c__DisplayClass51_1_1 : public ::System::Object
	{
	public:
		::System::Int32 itemSequence; // 0x0
		::System::Func_1<::RPG::Client::Promises::IPromise*>* fn; // 0x0
		::RPG::Client::Promises::Promise* newPromise; // 0x0
		::System::Object* CS___8__locals1; // 0x0
		::System::Action* __9__5; // 0x0
	};
}
