#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class AEKIOONKCIB;
class DJJLNLJPGMJ;
class MAIBPGFPLOJ;
namespace Entitas { class IContext; }
namespace Entitas { class IGroup; }
namespace Entitas { template <typename T> class IMatcher_1; }
namespace RPG::Client::LittleGameShare { template <typename T> class OrderedHashSet_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class MemoryStream; }

namespace RPG::Client::LittleGameShare
{
	template <typename T>
	class SnapshotSendSystem_1 : public ::System::Object
	{
	public:
		::AEKIOONKCIB* _Instance; // 0x0
		::Entitas::IContext* _Context; // 0x0
		::Entitas::IMatcher_1<T>* _ReplicatedMatcher; // 0x0
		::Entitas::IGroup* _ReplicatedGroup; // 0x0
		::System::Int32 _ReplicatedComponentIndex; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::LittleGameShare::OrderedHashSet_1<::System::Int32>*>* _PendingFullSyncPlayer2Entities; // 0x0
		::System::Collections::Generic::List_1<::System::ValueTuple>* _CurFullSyncedEntities; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* _CurDirtyEntity2Components; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::MAIBPGFPLOJ*>*>* _CurSendSnapShotData; // 0x0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _CurOnlinePlayers; // 0x0
		::System::IO::MemoryStream* _SerializeBuffer; // 0x0
		::DJJLNLJPGMJ* _SerializeWriter; // 0x0
		::System::UInt32 _LastSendQueueBusyLogTick; // 0x0
		::System::Int32 _SuppressedSendQueueBusyLogCount; // 0x0
		// static const ::System::Object MAX_FULL_SYNC_ENTITIES_PER_FRAME; // 0x0
		// static const ::System::Object MAX_SINGLE_SNAPSHOT_DATA_SIZE; // 0x0
		// static const ::System::Object COMPONENT_SNAPSHOT_HEADER_SIZE; // 0x0
		// static const ::System::Object ENTITY_SNAPSHOT_HEADER_SIZE; // 0x0
		// static const ::System::Object SEND_QUEUE_BUSY_LOG_INTERVAL_TICKS; // 0x0
	};
}
