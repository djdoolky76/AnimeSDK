#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EA0003A5C5259723;
namespace ABC::Game { class GameSettingEntryData; }

#define ABC_GAME_LANGUAGESETTINGGROUPDATA_FF9845F7F8C23DCA_AB91383A073C278E_OFFSET UNITYSDK_OFFSET(0x1FECC10)
#define ABC_GAME_LANGUAGESETTINGGROUPDATA_FF9845F7F8C23DCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Game
{
	inline static constexpr unsigned int LanguageSettingGroupData_FF9845F7F8C23DCA_TypeDefinitionIndex = 8081;

	class LanguageSettingGroupData_FF9845F7F8C23DCA : public ::System::Object
	{
	public:
		::EA0003A5C5259723* A8FCB3492A807882; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_LANGUAGESETTINGGROUPDATA_FF9845F7F8C23DCA__CTOR_OFFSET))(this);
		}

		::System::Boolean AB91383A073C278E(::ABC::Game::GameSettingEntryData* A5FB7225DA5C5A9B)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_LANGUAGESETTINGGROUPDATA_FF9845F7F8C23DCA_AB91383A073C278E_OFFSET))(this, A5FB7225DA5C5A9B);
		}
	};
}
