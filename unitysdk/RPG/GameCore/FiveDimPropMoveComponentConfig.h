#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPropMoveComponentConfig; }

#define RPG_GAMECORE_FIVEDIMPROPMOVECOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D4120)
#define RPG_GAMECORE_FIVEDIMPROPMOVECOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D4130)
#define RPG_GAMECORE_FIVEDIMPROPMOVECOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D40F0)

namespace RPG::GameCore
{
	class FiveDimPropMoveComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean HasMove; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 PropMoveConfigID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPMOVECOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPropMoveComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPropMoveComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPMOVECOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPropMoveComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPropMoveComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPMOVECOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
