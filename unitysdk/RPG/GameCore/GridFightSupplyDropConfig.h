#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightSupplyDropType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSupplyDropConfig; }

#define RPG_GAMECORE_GRIDFIGHTSUPPLYDROPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA66330)
#define RPG_GAMECORE_GRIDFIGHTSUPPLYDROPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA661C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSupplyDropConfig_TypeDefinitionIndex = 10566;

	class GridFightSupplyDropConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::GridFightSupplyDropType type; // 0x10
		::System::UInt32 param; // 0x14
		::System::UInt32 ExtParam; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSUPPLYDROPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSupplyDropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSupplyDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSUPPLYDROPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
