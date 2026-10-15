#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameNavMapIconConfig; }

#define RPG_GAMECORE_LITTLEGAMENAVMAPICONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E52E0)
#define RPG_GAMECORE_LITTLEGAMENAVMAPICONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E52F0)
#define RPG_GAMECORE_LITTLEGAMENAVMAPICONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E52B0)

namespace RPG::GameCore
{
	class LittleGameNavMapIconConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsMapIcon; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 IconID; // 0x14
		::System::UInt32 MapInfoID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVMAPICONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameNavMapIconConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameNavMapIconConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVMAPICONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameNavMapIconConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameNavMapIconConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVMAPICONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
