#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
class HNNHKPKCMJD;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { class IGroup; }
namespace Entitas { template <typename T> class IMatcher_1; }
namespace RPG::Client::LittleGameShare { template <typename T> class ClientAutonomousSnapShotSendProcessor_1; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotSimulationSystem_1_TypeDefinitionIndex = 36942;

	template <typename T>
	class SnapshotSimulationSystem_1 : public ::System::Object
	{
	public:
		::HNNHKPKCMJD* _Instance; // 0x0
		::Entitas::IContext* _Context; // 0x0
		::Entitas::IMatcher_1<T>* _ReplicatedMatcher; // 0x0
		::Entitas::IGroup* _ReplicatedGroup; // 0x0
		::System::Int32 _ReplicatedComponentIndex; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* _CurDirtyEntity2Components; // 0x0
		::RPG::Client::LittleGameShare::ClientAutonomousSnapShotSendProcessor_1<T>* _clientAutonomousSnapShotSendProcessor; // 0x0
		::System::Action* OnComponentAdd; // 0x0
		::System::Action* OnComponentUpdate; // 0x0
		::System::Action* OnComponentRemoved; // 0x0
		::System::Action* OnEntityUpdateComplete; // 0x0
		::System::Action* OnEntityLoadView; // 0x0
	};
}
