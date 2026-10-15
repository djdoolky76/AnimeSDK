#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

namespace SRF::Helpers
{
	template <typename T>
	class PropertyReference___c__DisplayClass13_0_1 : public ::System::Object
	{
	public:
		::System::Action* setter; // 0x0
		::System::Func_1<T>* getter; // 0x0
	};
}
