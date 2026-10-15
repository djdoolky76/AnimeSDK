#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }

namespace RPG::Client::ChenLingBattle
{
	template <typename T>
	class NetworkRequestHandler_1 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* _Promise; // 0x0
	};
}
