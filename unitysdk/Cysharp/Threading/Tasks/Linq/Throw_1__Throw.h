#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T>
	class Throw_1__Throw : public ::System::Object
	{
	public:
		::System::Exception* exception; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
	};
}
