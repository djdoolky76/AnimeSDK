#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise___c__DisplayClass56_0_1_TypeDefinitionIndex = 39560;

	template <typename T>
	class Promise___c__DisplayClass56_0_1 : public ::System::Object
	{
	public:
		::System::Func_1<::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>* chain; // 0x0
	};
}
