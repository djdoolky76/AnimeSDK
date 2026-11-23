#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/EF8E73431D585F57.h"
#include "unitysdk/System/Object.h"

namespace ABC::Game { class GameSettingEntryData; }

#define ABC_GAME_GRAPHICSSETTINGGROUPDATA_E28EE72CB98B54C9_AB91383A073C278E_OFFSET UNITYSDK_OFFSET(0x22D8FB0)
#define ABC_GAME_GRAPHICSSETTINGGROUPDATA_E28EE72CB98B54C9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Game
{
	inline static constexpr unsigned int GraphicsSettingGroupData_E28EE72CB98B54C9_TypeDefinitionIndex = 7241;

	class GraphicsSettingGroupData_E28EE72CB98B54C9 : public ::System::Object
	{
	public:
		::E68AA4EB51923C98::EF8E73431D585F57 EE4A02DA386A8547; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_GRAPHICSSETTINGGROUPDATA_E28EE72CB98B54C9__CTOR_OFFSET))(this);
		}

		::System::Boolean AB91383A073C278E(::ABC::Game::GameSettingEntryData* A5FB7225DA5C5A9B)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_GRAPHICSSETTINGGROUPDATA_E28EE72CB98B54C9_AB91383A073C278E_OFFSET))(this, A5FB7225DA5C5A9B);
		}
	};
}
