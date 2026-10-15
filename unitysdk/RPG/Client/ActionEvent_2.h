#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMILHGPLJHC;
class HGCEOEHGPPE;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int ActionEvent_2_TypeDefinitionIndex = 59606;

	template <typename T1, typename T2>
	class ActionEvent_2 : public ::System::Object
	{
	public:
		::System::Action_2<T1, T2>* _Action; // 0x0
		::System::String* _Name; // 0x0
		::HGCEOEHGPPE* _Progress; // 0x0
		::EMILHGPLJHC* _RootProgress; // 0x0
	};
}
