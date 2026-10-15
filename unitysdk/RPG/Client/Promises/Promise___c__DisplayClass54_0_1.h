#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass54_0_1_TypeDefinitionIndex = 9916;

	template <typename T>
	class Promise___c__DisplayClass54_0_1 : public ::System::Object
	{
	public:
		::System::Func_1<::RPG::Client::Promises::IPromise*>* onResolved; // 0x0
		::RPG::Client::Promises::Promise* resultPromise; // 0x0
		::System::Func_2<::System::Exception*, ::RPG::Client::Promises::IPromise*>* onRejected; // 0x0
		::System::Action* __9__2; // 0x0
		::System::Action* __9__3; // 0x0
		::System::Action* __9__4; // 0x0
		::System::Action* __9__5; // 0x0
		::System::Action* __9__6; // 0x0
	};
}
