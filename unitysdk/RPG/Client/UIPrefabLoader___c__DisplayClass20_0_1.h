#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class Action; }
namespace System { class String; }

namespace RPG::Client
{
	template <typename T>
	class UIPrefabLoader___c__DisplayClass20_0_1 : public ::System::Object
	{
	public:
		::RPG::Client::UIPrefabLoader* __4__this; // 0x0
		::System::String* path; // 0x0
		::System::Action* callback; // 0x0
	};
}
