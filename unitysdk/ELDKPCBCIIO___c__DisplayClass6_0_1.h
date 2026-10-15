#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Action; }

inline static constexpr unsigned int ELDKPCBCIIO___c__DisplayClass6_0_1_TypeDefinitionIndex = 80621;

	template <typename T>
	class ELDKPCBCIIO___c__DisplayClass6_0_1 : public ::System::Object
	{
	public:
		::System::Action* onEnter; // 0x0
		::RPG::Client::Promises::Promise_1<::RPG::Client::LuaUIController*>* resultPromise; // 0x0
		::System::Action* onExit; // 0x0
	};
