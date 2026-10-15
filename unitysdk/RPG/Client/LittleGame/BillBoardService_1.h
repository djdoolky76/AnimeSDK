#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IContext; }
namespace RPG::Client::LittleGame { template <typename T> class Services_1; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BillBoardService_1_TypeDefinitionIndex = 76477;

	template <typename T>
	class BillBoardService_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::Services_1<T>* _Services; // 0x0
		::Entitas::IContext* _Contexts; // 0x0
	};
}
