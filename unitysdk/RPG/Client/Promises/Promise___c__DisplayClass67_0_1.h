#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise___c__DisplayClass67_0_1_TypeDefinitionIndex = 9927;

	template <typename T>
	class Promise___c__DisplayClass67_0_1 : public ::System::Object
	{
	public:
		::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*>* chain; // 0x0
	};
}
