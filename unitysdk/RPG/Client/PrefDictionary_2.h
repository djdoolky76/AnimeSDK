#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { template <typename T1, typename T2> class PrefDictionary_2; }
namespace System { class Action; }

namespace RPG::Client
{
	template <typename T1, typename T2>
	class PrefDictionary_2
	{
	public:
		::System::Action* _OnValueChanged; // 0x0
		::System::Action* _OnFlushCallback; // 0x0
	};
}
