#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILCMKHBNPPH;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client::LittleGame { template <typename T> class IEventActionService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ILevelConfigService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ILevelVariableService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IMissionService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IQueryEntityService_1; }
namespace System { class Object; }
namespace System { class String; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseEntityLoadSystem_1_TypeDefinitionIndex = 42081;

	template <typename T>
	class BaseEntityLoadSystem_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ILevelConfigService_1<T>* _LevelConfigService; // 0x0
		::RPG::Client::LittleGame::ILevelVariableService_1<T>* _LevelVarService; // 0x0
		::RPG::Client::LittleGame::IMissionService_1<T>* _MissionService; // 0x0
		::RPG::Client::LittleGame::IEventActionService_1<T>* _ActionService; // 0x0
		::RPG::Client::LittleGame::IQueryEntityService_1<T>* _QueryService; // 0x0
		::ILCMKHBNPPH* _LogService; // 0x0
		::RPG::PoolDictionary_2<::System::String*, ::System::Object*>* _LevelVarCallbacks; // 0x0
		::RPG::PoolDictionary_2<::System::UInt32, ::System::Object*>* _SubMissionCallbacks; // 0x0
		::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>* _DyingEntities; // 0x0
	};
}
