#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPG::Client::Promises
{
	template <typename T>
	class Promise_1___c__DisplayClass56_0_1 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Object*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*>* chain; // 0x0
	};
}
