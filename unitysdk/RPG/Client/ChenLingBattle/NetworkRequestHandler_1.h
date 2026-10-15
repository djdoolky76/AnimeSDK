#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int NetworkRequestHandler_1_TypeDefinitionIndex = 76240;

	template <typename T>
	class NetworkRequestHandler_1 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* _Promise; // 0x0
	};
}
