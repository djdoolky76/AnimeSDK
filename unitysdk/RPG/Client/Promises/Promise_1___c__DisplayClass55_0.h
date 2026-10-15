#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPG::Client::Promises
{
	template <typename T>
	class Promise_1___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* progress; // 0x0
		::RPG::Client::Promises::Promise* resultPromise; // 0x0
		::Il2CppArray<::System::Object*>* results; // 0x0
		::System::Int32 remainingCount; // 0x0
		::System::Action* __9__3; // 0x0
	};
}
