#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	class UniTaskObservableExtensions_ThrowObservable_1 : public ::System::Object
	{
	public:
		::System::Exception* value; // 0x0
	};
}
