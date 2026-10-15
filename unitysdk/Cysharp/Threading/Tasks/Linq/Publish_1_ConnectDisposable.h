#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Threading { class CancellationTokenSource; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T>
	class Publish_1_ConnectDisposable : public ::System::Object
	{
	public:
		::System::Threading::CancellationTokenSource* cancellationTokenSource; // 0x0
	};
}
