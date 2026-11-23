#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/FE2C716718BC4ED1.h"
#include "unitysdk/System/Object.h"

namespace ABC::Game { class GameSettingEntryData; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class F875E7A8F1781006;

#define ABC_GAME_GAMESETTINGGROUPDATA_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x221ED20)
#define ABC_GAME_GAMESETTINGGROUPDATA_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x221EDE0)
#define ABC_GAME_GAMESETTINGGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x221EEE0)

namespace ABC::Game
{
	inline static constexpr unsigned int GameSettingGroupData_TypeDefinitionIndex = 9098;

	class GameSettingGroupData : public ::System::Object
	{
	public:
		::E68AA4EB51923C98::FE2C716718BC4ED1 groupType; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::ABC::Game::GameSettingEntryData*>* _entries; // 0x18

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGGROUPDATA_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::F875E7A8F1781006<::ABC::Game::GameSettingEntryData*>* GetEnumerator()
		{
			return ((::F875E7A8F1781006<::ABC::Game::GameSettingEntryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGGROUPDATA_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void _ctor(::E68AA4EB51923C98::FE2C716718BC4ED1 E8E45CE0AA06991E)
		{
			return ((::System::Void(*)(::PVOID, ::E68AA4EB51923C98::FE2C716718BC4ED1))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGGROUPDATA__CTOR_OFFSET))(this, E8E45CE0AA06991E);
		}
	};
}
