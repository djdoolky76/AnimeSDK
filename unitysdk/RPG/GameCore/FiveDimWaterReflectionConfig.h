#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimWaterReflectionItemType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimWaterReflectionConfig; }

#define RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E2A20)
#define RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E2A30)
#define RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E29F0)

namespace RPG::GameCore
{
	class FiveDimWaterReflectionConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsWaterReflection; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FiveDimWaterReflectionItemType ItemType; // 0x14
		::System::UInt32 SourceEntityID; // 0x18
		::System::UInt32 TargetEntityID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimWaterReflectionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimWaterReflectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimWaterReflectionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimWaterReflectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
