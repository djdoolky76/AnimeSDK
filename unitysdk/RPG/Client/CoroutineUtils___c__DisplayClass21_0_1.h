#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ICoroutineGroupController; }

namespace RPG::Client
{
	template <typename T>
	class CoroutineUtils___c__DisplayClass21_0_1 : public ::System::Object
	{
	public:
		::System::Int32 frames; // 0x0
		T returnVal; // 0x0
		::RPG::Client::ICoroutineGroupController* ctrl; // 0x0
	};
}
