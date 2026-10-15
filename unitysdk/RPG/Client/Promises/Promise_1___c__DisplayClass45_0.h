#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client::Promises
{
	template <typename T>
	class Promise_1___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Object*, ::RPG::Client::Promises::IPromise*>* onResolved; // 0x0
		::RPG::Client::Promises::Promise* resultPromise; // 0x0
		::System::Action* onRejected; // 0x0
		::System::Action* __9__2; // 0x0
		::System::Action* __9__3; // 0x0
		::System::Action* __9__4; // 0x0
	};
}
