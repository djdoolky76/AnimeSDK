#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E0ACA436901608F6;
namespace ABC::Game { class GameSettingEntryData; }

#define ABC_GAME_GRAPHICSSETTINGGROUPDATA_BF3DC1EAD7F5A140_AB91383A073C278E_OFFSET UNITYSDK_OFFSET(0x22D8ED0)
#define ABC_GAME_GRAPHICSSETTINGGROUPDATA_BF3DC1EAD7F5A140__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Game
{
	inline static constexpr unsigned int GraphicsSettingGroupData_BF3DC1EAD7F5A140_TypeDefinitionIndex = 7240;

	class GraphicsSettingGroupData_BF3DC1EAD7F5A140 : public ::System::Object
	{
	public:
		::E0ACA436901608F6* B64A5C7D8262720D; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_GRAPHICSSETTINGGROUPDATA_BF3DC1EAD7F5A140__CTOR_OFFSET))(this);
		}

		::System::Boolean AB91383A073C278E(::ABC::Game::GameSettingEntryData* A5FB7225DA5C5A9B)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_GRAPHICSSETTINGGROUPDATA_BF3DC1EAD7F5A140_AB91383A073C278E_OFFSET))(this, A5FB7225DA5C5A9B);
		}
	};
}
