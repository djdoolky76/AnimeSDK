#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client::Promises
{
	template <typename T>
	class Promise_1___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* resultPromise; // 0x0
		::System::Func_2<::System::Exception*, ::System::Object*>* onRejected; // 0x0
	};
}
