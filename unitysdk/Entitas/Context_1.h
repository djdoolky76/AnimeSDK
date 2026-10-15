#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace DesperateDevs::Utils { template <typename T> class ObjectPool_1; }
namespace Entitas { class ContextEntityChanged; }
namespace Entitas { class ContextGroupChanged; }
namespace Entitas { class ContextInfo; }
namespace Entitas { class EntityComponentChanged; }
namespace Entitas { class EntityComponentReplaced; }
namespace Entitas { class EntityEvent; }
namespace Entitas { class IAERC; }
namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }
namespace Entitas { class IEntityIndex; }
namespace Entitas { class IGroup; }
namespace Entitas { template <typename T> class GroupChanged_1; }
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Entitas
{
	template <typename T>
	class Context_1 : public ::System::Object
	{
	public:
		::Entitas::ContextEntityChanged* OnEntityCreated; // 0x0
		::Entitas::ContextEntityChanged* OnEntityWillBeDestroyed; // 0x0
		::Entitas::ContextEntityChanged* OnEntityDestroyed; // 0x0
		::Entitas::ContextGroupChanged* OnGroupCreated; // 0x0
		::System::Int32 _totalComponents; // 0x0
		::Il2CppArray<::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*>* _componentPools; // 0x0
		::Entitas::ContextInfo* _contextInfo; // 0x0
		::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>* _aercFactory; // 0x0
		::System::Func_1<T>* _entityFactory; // 0x0
		::System::Collections::Generic::HashSet_1<T>* _entities; // 0x0
		::System::Collections::Generic::Stack_1<T>* _reusableEntities; // 0x0
		::System::Collections::Generic::HashSet_1<T>* _retainedEntities; // 0x0
		::System::Collections::Generic::Dictionary_2<::Entitas::IMatcher_1<T>*, ::Entitas::IGroup*>* _groups; // 0x0
		::Il2CppArray<::System::Collections::Generic::List_1<::Entitas::IGroup*>*>* _groupsForIndex; // 0x0
		::DesperateDevs::Utils::ObjectPool_1<::System::Collections::Generic::List_1<::Entitas::GroupChanged_1<T>*>*>* _groupChangedListPool; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Entitas::IEntityIndex*>* _entityIndices; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, T>* _entitiesByCreationIndex; // 0x0
		::System::Int32 _creationIndex; // 0x0
		::Il2CppArray<T>* _entitiesCache; // 0x0
		::Entitas::EntityComponentChanged* _cachedEntityChanged; // 0x0
		::Entitas::EntityComponentReplaced* _cachedComponentReplaced; // 0x0
		::Entitas::EntityEvent* _cachedEntityReleased; // 0x0
		::Entitas::EntityEvent* _cachedDestroyEntity; // 0x0
	};
}
