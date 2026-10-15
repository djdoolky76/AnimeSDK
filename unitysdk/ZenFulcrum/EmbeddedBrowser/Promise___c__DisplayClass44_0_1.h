#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }
namespace ZenFulcrum::EmbeddedBrowser { class Promise; }

namespace ZenFulcrum::EmbeddedBrowser
{
	template <typename T>
	class Promise___c__DisplayClass44_0_1 : public ::System::Object
	{
	public:
		::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* onResolved; // 0x0
		::ZenFulcrum::EmbeddedBrowser::Promise* resultPromise; // 0x0
		::System::Action* onRejected; // 0x0
		::System::Action* __9__2; // 0x0
		::System::Action* __9__3; // 0x0
	};
}
