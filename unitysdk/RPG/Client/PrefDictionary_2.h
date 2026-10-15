#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { template <typename T1, typename T2> class PrefDictionary_2; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int PrefDictionary_2_TypeDefinitionIndex = 35321;

	template <typename T1, typename T2>
	class PrefDictionary_2
	{
	public:
		::System::Action_2<T1, T2>* _OnValueChanged; // 0x0
		::System::Action_1<::RPG::Client::PrefDictionary_2<T1, T2>*>* _OnFlushCallback; // 0x0
	};
}
