#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryEnumeratorStringKey_1.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryValuesStringKey_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolDictionaryValuesStringKey_1__GetEnumerator_d__3_TypeDefinitionIndex = 10759;

	template <typename T1, typename T2, typename T3>
	class ConfigDataPoolDictionaryValuesStringKey_1__GetEnumerator_d__3 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T1 __2__current; // 0x0
		::RPG::GameCore::ConfigDataPoolDictionaryValuesStringKey_1<T2> __4__this; // 0x0
		::RPG::GameCore::ConfigDataPoolDictionaryEnumeratorStringKey_1<T2> _e_5__2; // 0x0
	};
}
