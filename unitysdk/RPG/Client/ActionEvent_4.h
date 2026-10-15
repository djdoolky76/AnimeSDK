#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMILHGPLJHC;
class HGCEOEHGPPE;
namespace System { class Action; }
namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int ActionEvent_4_TypeDefinitionIndex = 59608;

	template <typename T1, typename T2, typename T3, typename T4>
	class ActionEvent_4 : public ::System::Object
	{
	public:
		::System::Action* _Action; // 0x0
		::System::String* _Name; // 0x0
		::HGCEOEHGPPE* _Progress; // 0x0
		::EMILHGPLJHC* _RootProgress; // 0x0
	};
}
