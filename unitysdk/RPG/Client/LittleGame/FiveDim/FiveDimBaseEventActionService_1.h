#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDJNAAOFMMJ;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::Client::LittleGame { template <typename T> class Services_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IEntityVarServices_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimDestructibleService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimEventService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimLevelVarService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimRotateService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimShakeService_1; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimBaseEventActionService_1_TypeDefinitionIndex = 76882;

	template <typename T>
	class FiveDimBaseEventActionService_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::Services_1<T>* _IServices; // 0x0
		::RPG::Client::LittleGame::FiveDim::IFiveDimEventService_1<T>* _EventService; // 0x0
		::RPG::Client::LittleGame::FiveDim::IFiveDimLevelVarService_1<T>* _LevelVarService; // 0x0
		::RPG::Client::LittleGame::FiveDim::IFiveDimShakeService_1<T>* _ShakeService; // 0x0
		::RPG::Client::LittleGame::FiveDim::IFiveDimRotateService_1<T>* _RotateService; // 0x0
		::RPG::Client::LittleGame::FiveDim::IFiveDimDestructibleService_1<T>* _DestructibleService; // 0x0
		::RPG::Client::LittleGame::FiveDim::IEntityVarServices_1<T>* _EntityVarServices; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::PoolHashSet_1<::System::String*>*>* _TriggerSelfEvent; // 0x0
		::System::Int32 _TriggerSelfEventCount; // 0x0
		::KDJNAAOFMMJ* _PlayMissionTalkTaskExecuter; // 0x0
		::RPG::GameCore::TaskContext* __TaskContext_k__BackingField; // 0x0
	};
}
