#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class GCFreeLazy_1; }

namespace RPG
{
	template <typename T>
	class System_LazyDebugView_1 : public ::System::Object
	{
	public:
		::RPG::GCFreeLazy_1<T>* m_lazy; // 0x0
	};
}
