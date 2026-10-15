#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::HoyoTag
{
	template <typename T>
	class HoyoTagRuntimeContainerManager_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T, ::RPG::GameCore::HoyoTagContainer*>* _dictionary; // 0x0
	};
}
