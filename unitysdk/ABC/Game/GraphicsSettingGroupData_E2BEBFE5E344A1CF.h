#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::Game { class GameSettingEntryData; }
namespace ABC::Game { class GraphicsSettingEntryData; }

#define ABC_GAME_GRAPHICSSETTINGGROUPDATA_E2BEBFE5E344A1CF_AB91383A073C278E_OFFSET UNITYSDK_OFFSET(0x22D8DF0)
#define ABC_GAME_GRAPHICSSETTINGGROUPDATA_E2BEBFE5E344A1CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Game
{
	inline static constexpr unsigned int GraphicsSettingGroupData_E2BEBFE5E344A1CF_TypeDefinitionIndex = 7239;

	class GraphicsSettingGroupData_E2BEBFE5E344A1CF : public ::System::Object
	{
	public:
		::ABC::Game::GraphicsSettingEntryData* EA436361DE9F6B68; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_GRAPHICSSETTINGGROUPDATA_E2BEBFE5E344A1CF__CTOR_OFFSET))(this);
		}

		::System::Boolean AB91383A073C278E(::ABC::Game::GameSettingEntryData* A5FB7225DA5C5A9B)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_GRAPHICSSETTINGGROUPDATA_E2BEBFE5E344A1CF_AB91383A073C278E_OFFSET))(this, A5FB7225DA5C5A9B);
		}
	};
}
