#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILCMKHBNPPH;
namespace RPG::Client::LittleGame { template <typename T> class ILevelVariableService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IMissionService_1; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseLevelConfigService_1_TypeDefinitionIndex = 42035;

	template <typename T>
	class BaseLevelConfigService_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ILevelVariableService_1<T>* _LevelVarService; // 0x0
		::RPG::Client::LittleGame::IMissionService_1<T>* _MissionService; // 0x0
		::ILCMKHBNPPH* _LogService; // 0x0
	};
}
