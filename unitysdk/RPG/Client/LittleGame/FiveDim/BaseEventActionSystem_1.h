#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class ICollector; }
namespace Entitas { class IGroup; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client::LittleGame { template <typename T> class IEntityScaledTimeService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimEventActionService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimEventService_1; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::Client::LittleGame::FiveDim
{
	template <typename T>
	class BaseEventActionSystem_1 : public ::System::Object
	{
	public:
		::Entitas::IGroup* _EventReceiverGroup; // 0x0
		::Entitas::IGroup* _EventEmitterGroup; // 0x0
		::Entitas::ICollector* _EventEmitterCollector; // 0x0
		::Entitas::IGroup* _DelayedActionGroup; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::PoolDictionary_2<::RPG::GameCore::LittleGameEvent*, ::System::Object*>*>* _EventCallbackCaches; // 0x0
		::RPG::Client::LittleGame::FiveDim::IFiveDimEventService_1<T>* _EventService; // 0x0
		::RPG::Client::LittleGame::FiveDim::IFiveDimEventActionService_1<T>* _ActionService; // 0x0
		::RPG::Client::LittleGame::IEntityScaledTimeService_1<T>* _TimeService; // 0x0
	};
}
