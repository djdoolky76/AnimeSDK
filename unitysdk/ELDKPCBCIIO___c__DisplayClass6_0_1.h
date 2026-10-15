#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }

	template <typename T>
	class ELDKPCBCIIO___c__DisplayClass6_0_1 : public ::System::Object
	{
	public:
		::System::Action* onEnter; // 0x0
		::RPG::Client::Promises::Promise* resultPromise; // 0x0
		::System::Action* onExit; // 0x0
	};
