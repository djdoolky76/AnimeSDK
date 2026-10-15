#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/Object.h"

namespace System
{
	template <typename T>
	class WeakReference_1 : public ::System::Object
	{
	public:
		::System::Runtime::InteropServices::GCHandle handle; // 0x0
		::System::Boolean trackResurrection; // 0x0
	};
}
