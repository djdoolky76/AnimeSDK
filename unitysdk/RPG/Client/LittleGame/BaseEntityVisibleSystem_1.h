#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class ILCMKHBNPPH;
namespace Entitas { class IGroup; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client::LittleGame { template <typename T> class IEntityVisibleService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ILevelVariableService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IQueryEntityService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IEntityVarServices_1; }
namespace System { class Object; }
namespace System { class String; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseEntityVisibleSystem_1_TypeDefinitionIndex = 42085;

	template <typename T>
	class BaseEntityVisibleSystem_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::IQueryEntityService_1<T>* _QueryService; // 0x0
		::RPG::Client::LittleGame::IEntityVisibleService_1<T>* _VisibleService; // 0x0
		::RPG::Client::LittleGame::FiveDim::IEntityVarServices_1<T>* _EntityVarService; // 0x0
		::RPG::Client::LittleGame::ILevelVariableService_1<T>* _LevelVarService; // 0x0
		::ILCMKHBNPPH* _LogService; // 0x0
		::Entitas::IGroup* _VisibilityGroup; // 0x0
		::Entitas::IGroup* _DitherChangeGroup; // 0x0
		::RPG::PoolDictionary_2<::System::String*, ::RPG::PoolList_1<::System::Int32>*>* _LevelVarToEntities; // 0x0
		::RPG::PoolDictionary_2<::System::Int32, ::System::Object*>* _LevelVarCallbackCaches; // 0x0
		::RPG::PoolDictionary_2<::System::Int32, ::System::Object*>* _VisibleCallbackCaches; // 0x0
		::RPG::PoolList_1<::System::ValueTuple>* _PendingInvisibleEntities; // 0x0
	};
}
