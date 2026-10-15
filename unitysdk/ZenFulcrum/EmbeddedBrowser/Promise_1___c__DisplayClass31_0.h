#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class Promise; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass31_0_TypeDefinitionIndex = 39521;

	template <typename T>
	class Promise_1___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Promise* resultPromise; // 0x0
		::System::Action* onRejected; // 0x0
	};
}
