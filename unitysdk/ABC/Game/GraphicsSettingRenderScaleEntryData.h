#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Game/GraphicsSettingEntryData.h"

#define ABC_GAME_GRAPHICSSETTINGRENDERSCALEENTRYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

namespace ABC::Game
{
	inline static constexpr unsigned int GraphicsSettingRenderScaleEntryData_TypeDefinitionIndex = 7324;

	class GraphicsSettingRenderScaleEntryData : public ::ABC::Game::GraphicsSettingEntryData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_GRAPHICSSETTINGRENDERSCALEENTRYDATA__CTOR_OFFSET))(this);
		}
	};
}
