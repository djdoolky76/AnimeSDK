#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FBehaviorHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class BehaviorManager_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int KeyBasedBehaviorManager_1_TypeDefinitionIndex = 9001;

	template <typename T>
	class KeyBasedBehaviorManager_1 : public ::System::Object
	{
	public:
		::Foundation::BehaviorManager_1<T>* _manager; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::FBehaviorHandle>* _keyToHandle; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Foundation::FBehaviorHandle>*>* _tagToHandles; // 0x0
	};
}
