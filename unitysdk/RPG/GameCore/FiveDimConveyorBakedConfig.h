#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimConveyorBakedConfig; }

#define RPG_GAMECORE_FIVEDIMCONVEYORBAKEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6887C0)
#define RPG_GAMECORE_FIVEDIMCONVEYORBAKEDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6886B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimConveyorBakedConfig_TypeDefinitionIndex = 16657;

	class FiveDimConveyorBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ConveyorFlipInitSpeed; // 0x10
		::System::Single ConveyorFlipTotalDuration; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONVEYORBAKEDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimConveyorBakedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimConveyorBakedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONVEYORBAKEDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
