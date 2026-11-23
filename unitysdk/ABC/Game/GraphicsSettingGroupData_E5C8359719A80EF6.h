#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::Game { class GameSettingEntryData; }
namespace ABC::Game { class GraphicsSettingEntryData; }

#define ABC_GAME_GRAPHICSSETTINGGROUPDATA_E5C8359719A80EF6_F37C4F1EE8AC1F3F_OFFSET UNITYSDK_OFFSET(0x22D9190)
#define ABC_GAME_GRAPHICSSETTINGGROUPDATA_E5C8359719A80EF6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Game
{
	inline static constexpr unsigned int GraphicsSettingGroupData_E5C8359719A80EF6_TypeDefinitionIndex = 7242;

	class GraphicsSettingGroupData_E5C8359719A80EF6 : public ::System::Object
	{
	public:
		::ABC::Game::GraphicsSettingEntryData* EA436361DE9F6B68; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_GRAPHICSSETTINGGROUPDATA_E5C8359719A80EF6__CTOR_OFFSET))(this);
		}

		::System::Boolean F37C4F1EE8AC1F3F(::ABC::Game::GameSettingEntryData* A5FB7225DA5C5A9B)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_GRAPHICSSETTINGGROUPDATA_E5C8359719A80EF6_F37C4F1EE8AC1F3F_OFFSET))(this, A5FB7225DA5C5A9B);
		}
	};
}
