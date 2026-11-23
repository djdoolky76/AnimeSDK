#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Game/GraphicsSettingEntryData.h"

#define ABC_GAME_GRAPHICSSETTINGDLSSENTRYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

namespace ABC::Game
{
	inline static constexpr unsigned int GraphicsSettingDLSSEntryData_TypeDefinitionIndex = 8691;

	class GraphicsSettingDLSSEntryData : public ::ABC::Game::GraphicsSettingEntryData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_GRAPHICSSETTINGDLSSENTRYDATA__CTOR_OFFSET))(this);
		}
	};
}
