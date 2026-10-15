#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace UnityEngine::Rendering
{
	template <typename T>
	class ListChangedEventArgs_1 : public ::System::EventArgs
	{
	public:
		::System::Int32 index; // 0x0
		T item; // 0x0
	};
}
