#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Threading { class CancellationTokenSource; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T>
	class ToObservable_1_CancellationTokenDisposable : public ::System::Object
	{
	public:
		::System::Threading::CancellationTokenSource* cts; // 0x0
	};
}
