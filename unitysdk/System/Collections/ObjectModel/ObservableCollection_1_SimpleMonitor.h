#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::ObjectModel
{
	template <typename T>
	class ObservableCollection_1_SimpleMonitor : public ::System::Object
	{
	public:
		::System::Int32 _busyCount; // 0x0
	};
}
