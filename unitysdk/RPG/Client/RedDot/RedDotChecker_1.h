#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELENICENJKP;
namespace RPG::Client::RedDot { template <typename T> class RedDotState_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::RedDot
{
	inline static constexpr unsigned int RedDotChecker_1_TypeDefinitionIndex = 79157;

	template <typename T>
	class RedDotChecker_1 : public ::System::Object
	{
	public:
		::RPG::Client::RedDot::RedDotState_1<T>* _InstanceKeyState; // 0x0
		::System::Action_1<::System::String*>* _OnDirty; // 0x0
		::System::String* _Key_k__BackingField; // 0x0
		::ELENICENJKP* _Node_k__BackingField; // 0x0
	};
}
