#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class ICollector; }
namespace Entitas { class IGroup; }
namespace RPG::Client::LittleGame { template <typename T> class IEntityScaledTimeService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimDestructibleService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimEventService_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace RPG::Client::LittleGame::FiveDim
{
	template <typename T>
	class BaseDestructiblePropSystem_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FiveDim::IFiveDimDestructibleService_1<T>* _DestructibleService; // 0x0
		::RPG::Client::LittleGame::IEntityScaledTimeService_1<T>* _TimeService; // 0x0
		::RPG::Client::LittleGame::FiveDim::IFiveDimEventService_1<T>* _EventService; // 0x0
		::Entitas::IGroup* _DestructibleGroup; // 0x0
		::Entitas::ICollector* _DestructibleCollector; // 0x0
		::System::Collections::Generic::HashSet_1<::System::Int32>* _DestructingProps; // 0x0
		::System::Collections::Generic::HashSet_1<::System::Int32>* _RebuildingProps; // 0x0
	};
}
