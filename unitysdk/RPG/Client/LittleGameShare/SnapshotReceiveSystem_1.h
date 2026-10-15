#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNNHKPKCMJD;
class LAAOKALNHIO;
class PCOMPBCHHKC;
namespace Entitas { template <typename T> class Context_1; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotReceiveSystem_1_TypeDefinitionIndex = 36930;

	template <typename T>
	class SnapshotReceiveSystem_1 : public ::System::Object
	{
	public:
		::System::Action* OnPredicateFilterIncrementalFrameSnapshot; // 0x0
		::System::Action* OnFullFrameSnapshot; // 0x0
		::System::Action* OnApplyFrameSnapshot; // 0x0
		::HNNHKPKCMJD* _instance; // 0x0
		::Entitas::Context_1<T>* _context; // 0x0
		::System::Collections::Generic::Queue_1<::LAAOKALNHIO*>* _EntitySpawnQueue; // 0x0
		::System::Collections::Generic::Queue_1<::LAAOKALNHIO*>* _EntityDespawnQueue; // 0x0
		::System::UInt32 _LatestReceiveSnapshotTick_k__BackingField; // 0x0
		::System::UInt64 _LatestReceiveSnapshotTimeStampMs_k__BackingField; // 0x0
	};
}
