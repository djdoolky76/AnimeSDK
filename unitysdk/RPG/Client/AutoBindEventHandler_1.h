#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGCNFOOAFPO.h"
namespace System { class Action; }

namespace RPG::Client
{
	template <typename T>
	class AutoBindEventHandler_1 : public ::DGCNFOOAFPO
	{
	public:
		::System::Action* Delegate; // 0x0
	};
}
