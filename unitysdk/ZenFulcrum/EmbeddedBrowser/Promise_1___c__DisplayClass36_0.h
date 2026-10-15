#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }
namespace ZenFulcrum::EmbeddedBrowser { class Promise; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass36_0_TypeDefinitionIndex = 39523;

	template <typename T>
	class Promise_1___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Object*, ::ZenFulcrum::EmbeddedBrowser::IPromise*>* onResolved; // 0x0
		::ZenFulcrum::EmbeddedBrowser::Promise* resultPromise; // 0x0
		::System::Action* onRejected; // 0x0
		::System::Action* __9__2; // 0x0
		::System::Action* __9__3; // 0x0
	};
}
