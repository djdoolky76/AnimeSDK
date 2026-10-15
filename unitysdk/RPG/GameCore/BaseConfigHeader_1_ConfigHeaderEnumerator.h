#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { template <typename T> class BaseConfigHeader_1; }
namespace System { class Object; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseConfigHeader_1_ConfigHeaderEnumerator_TypeDefinitionIndex = 10834;

	template <typename T>
	struct alignas(8) BaseConfigHeader_1_ConfigHeaderEnumerator
	{
		::RPG::GameCore::BaseConfigHeader_1<T>* _header; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair*>* _rawEnumerator; // 0x0
	};
}
