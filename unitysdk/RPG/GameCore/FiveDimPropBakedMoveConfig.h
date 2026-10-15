#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPropBakedMoveConfig; }

#define RPG_GAMECORE_FIVEDIMPROPBAKEDMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C9030)
#define RPG_GAMECORE_FIVEDIMPROPBAKEDMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D3EB0)
#define RPG_GAMECORE_FIVEDIMPROPBAKEDMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D34B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPropBakedMoveConfig_TypeDefinitionIndex = 16675;

	class FiveDimPropBakedMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single UnitLength; // 0x10
		::System::Single MaxSpeed; // 0x14
		::System::Single ColliderSizeX; // 0x18
		::System::Single ColliderSizeY; // 0x1C
		::RPG::MVector3 ColliderCenter; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPBAKEDMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPropBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPropBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPBAKEDMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPropBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPropBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPBAKEDMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
