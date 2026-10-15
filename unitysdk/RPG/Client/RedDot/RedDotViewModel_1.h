#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
#include "unitysdk/System/Object.h"
class JLODHPMMJFM;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Action; }
namespace System { class String; }

namespace RPG::Client::RedDot
{
	inline static constexpr unsigned int RedDotViewModel_1_TypeDefinitionIndex = 79192;

	template <typename T>
	class RedDotViewModel_1 : public ::System::Object
	{
	public:
		::JLODHPMMJFM* _RedDotService; // 0x0
		::System::Action* _OnServiceKeyChanged; // 0x0
		::System::String* _Key; // 0x0
		T _InstanceKey; // 0x0
		::R3::ReactiveProperty_1<::RPG::GameCore::RedDotType>* _RedDotType_k__BackingField; // 0x0
	};
}
