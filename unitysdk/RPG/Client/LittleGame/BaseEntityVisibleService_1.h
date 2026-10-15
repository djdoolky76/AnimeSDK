#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILCMKHBNPPH;
namespace RPG::Client::LittleGame { template <typename T> class IEventActionService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ILevelVariableService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IQueryEntityService_1; }

namespace RPG::Client::LittleGame
{
	template <typename T>
	class BaseEntityVisibleService_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::IQueryEntityService_1<T>* _QueryService; // 0x0
		::RPG::Client::LittleGame::IEventActionService_1<T>* _ActionService; // 0x0
		::RPG::Client::LittleGame::ILevelVariableService_1<T>* _LevelVarService; // 0x0
		::ILCMKHBNPPH* _LogService; // 0x0
	};
}
