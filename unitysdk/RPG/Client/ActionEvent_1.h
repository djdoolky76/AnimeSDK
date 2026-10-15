#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMILHGPLJHC;
class HGCEOEHGPPE;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int ActionEvent_1_TypeDefinitionIndex = 59605;

	template <typename T>
	class ActionEvent_1 : public ::System::Object
	{
	public:
		::System::Action_1<T>* _Action; // 0x0
		::System::String* _Name; // 0x0
		::HGCEOEHGPPE* _Progress; // 0x0
		::EMILHGPLJHC* _RootProgress; // 0x0
	};
}
