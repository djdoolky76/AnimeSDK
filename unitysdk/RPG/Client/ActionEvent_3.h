#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMILHGPLJHC;
class HGCEOEHGPPE;
namespace System { class Action; }
namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int ActionEvent_3_TypeDefinitionIndex = 59607;

	template <typename T1, typename T2, typename T3>
	class ActionEvent_3 : public ::System::Object
	{
	public:
		::System::Action* _Action; // 0x0
		::System::String* _Name; // 0x0
		::HGCEOEHGPPE* _Progress; // 0x0
		::EMILHGPLJHC* _RootProgress; // 0x0
	};
}
