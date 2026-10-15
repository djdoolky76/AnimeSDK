#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace Cysharp::Threading::Tasks { class ExceptionHolder; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	class UniTaskCompletionSource_1 : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x0
		T result; // 0x0
		::Cysharp::Threading::Tasks::ExceptionHolder* exception; // 0x0
		::System::Object* gate; // 0x0
		::System::Action* singleContinuation; // 0x0
		::System::Object* singleState; // 0x0
		::System::Collections::Generic::List_1<::System::ValueTuple>* secondaryContinuationList; // 0x0
		::System::Int32 intStatus; // 0x0
		::System::Boolean handled; // 0x0
	};
}
