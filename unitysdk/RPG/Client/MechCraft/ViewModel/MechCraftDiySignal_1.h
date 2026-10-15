#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiySignal_1_TypeDefinitionIndex = 79621;

	template <typename T>
	class MechCraftDiySignal_1 : public ::System::Object
	{
	public:
		::System::Action* _Callbacks; // 0x0
		::System::Boolean _Disposed; // 0x0
	};
}
