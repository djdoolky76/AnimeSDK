#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Do_1_TypeDefinitionIndex = 45352;

	template <typename T>
	class Do_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* source; // 0x0
		::System::Action_1<T>* onNext; // 0x0
		::System::Action_1<::System::Exception*>* onError; // 0x0
		::System::Action* onCompleted; // 0x0
	};
}
