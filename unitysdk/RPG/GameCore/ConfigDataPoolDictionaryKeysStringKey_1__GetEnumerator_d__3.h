#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryEnumeratorStringKey_1.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryKeysStringKey_1.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

namespace RPG::GameCore
{
	template <typename T1, typename T2, typename T3>
	class ConfigDataPoolDictionaryKeysStringKey_1__GetEnumerator_d__3 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::String* __2__current; // 0x0
		::RPG::GameCore::ConfigDataPoolDictionaryKeysStringKey_1<T1> __4__this; // 0x0
		::RPG::GameCore::ConfigDataPoolDictionaryEnumeratorStringKey_1<T1> _e_5__2; // 0x0
	};
}
