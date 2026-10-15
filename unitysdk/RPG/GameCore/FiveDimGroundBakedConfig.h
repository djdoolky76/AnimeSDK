#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimGroundBakedConfig; }

#define RPG_GAMECORE_FIVEDIMGROUNDBAKEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C4900)
#define RPG_GAMECORE_FIVEDIMGROUNDBAKEDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C4760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGroundBakedConfig_TypeDefinitionIndex = 16652;

	class FiveDimGroundBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MaxSpeed; // 0x10
		::System::Single Acc; // 0x14
		::System::Single BrakeAcc; // 0x18
		::System::Single MaxBrakeAcc; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGROUNDBAKEDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGroundBakedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGroundBakedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGROUNDBAKEDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
