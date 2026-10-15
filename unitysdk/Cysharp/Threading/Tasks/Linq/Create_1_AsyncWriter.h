#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T>
	class Create_1_AsyncWriter : public ::System::Object
	{
	public:
		::System::Object* enumerator; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x0
	};
}
