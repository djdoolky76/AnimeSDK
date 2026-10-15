#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace RPG::Client::MechCraft::ViewModel
{
	template <typename T>
	class MechCraftDiySignal_1 : public ::System::Object
	{
	public:
		::System::Action* _Callbacks; // 0x0
		::System::Boolean _Disposed; // 0x0
	};
}
