#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

namespace RPG::Client::LittleGame::FiveDim
{
	template <typename T1, typename T2>
	class SimpleStateMachine_2 : public ::System::Object
	{
	public:
		T1 CurrentState; // 0x0
		T2 CurrentStateEnum; // 0x0
		::RPG::PoolDictionary_2<T2, T2>* States; // 0x0
	};
}
