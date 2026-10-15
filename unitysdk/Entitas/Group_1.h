#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { template <typename T> class GroupChanged_1; }
namespace Entitas { template <typename T> class GroupUpdated_1; }
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace Entitas
{
	template <typename T>
	class Group_1 : public ::System::Object
	{
	public:
		::Entitas::GroupChanged_1<T>* OnEntityAdded; // 0x0
		::Entitas::GroupChanged_1<T>* OnEntityRemoved; // 0x0
		::Entitas::GroupUpdated_1<T>* OnEntityUpdated; // 0x0
		::Entitas::IMatcher_1<T>* _matcher; // 0x0
		::System::Collections::Generic::HashSet_1<T>* _entities; // 0x0
		::Il2CppArray<T>* _entitiesCache; // 0x0
		T _singleEntityCache; // 0x0
		::System::String* _toStringCache; // 0x0
	};
}
