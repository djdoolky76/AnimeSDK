#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMJIDLCDFMI.h"
namespace RPG::Client::LittleGame { template <typename T> class IBillBoardService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ICameraService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ICurveService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IEffectService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IEntityScaledTimeService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IGenericEventService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IGenericViewService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IHoYoTagService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ILevelGraphService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ILevelVariableService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IMissionService_1; }
namespace RPG::Client::LittleGame { template <typename T> class INavigationService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IStateTreeService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ITriggerService_1; }

namespace RPG::Client::LittleGame
{
	template <typename T>
	class Services_1 : public ::EMJIDLCDFMI
	{
	public:
		::RPG::Client::LittleGame::IGenericViewService_1<T>* GenericViewService; // 0x0
		::RPG::Client::LittleGame::ICameraService_1<T>* CameraService; // 0x0
		::RPG::Client::LittleGame::ITriggerService_1<T>* TriggerService; // 0x0
		::RPG::Client::LittleGame::IStateTreeService_1<T>* StateTreeService; // 0x0
		::RPG::Client::LittleGame::INavigationService_1<T>* NavService; // 0x0
		::RPG::Client::LittleGame::IGenericEventService_1<T>* EventService; // 0x0
		::RPG::Client::LittleGame::ILevelGraphService_1<T>* LevelGraphService; // 0x0
		::RPG::Client::LittleGame::IHoYoTagService_1<T>* HoYoTagService; // 0x0
		::RPG::Client::LittleGame::ICurveService_1<T>* CurveService; // 0x0
		::RPG::Client::LittleGame::ILevelVariableService_1<T>* LevelVarService; // 0x0
		::RPG::Client::LittleGame::IEffectService_1<T>* EffectService; // 0x0
		::RPG::Client::LittleGame::IEntityScaledTimeService_1<T>* EntityScaledTimeService; // 0x0
		::RPG::Client::LittleGame::IBillBoardService_1<T>* BillBoardService; // 0x0
		::RPG::Client::LittleGame::IMissionService_1<T>* MissionService; // 0x0
	};
}
