#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourGameConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PARKOURGAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EEBE0)
#define RPG_GAMECORE_PARKOURGAMECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8EEBF0)
#define RPG_GAMECORE_PARKOURGAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EEB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourGameConfig_TypeDefinitionIndex = 16974;

	class ParkourGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::System::String* ConfigAssetPath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURGAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParkourGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParkourGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURGAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParkourGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParkourGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURGAMECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
