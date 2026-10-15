#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/TRFCubeType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TRFCubeComponentConfig; }

#define RPG_GAMECORE_TRFCUBECOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB537B0)
#define RPG_GAMECORE_TRFCUBECOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB537C0)
#define RPG_GAMECORE_TRFCUBECOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB53760)

namespace RPG::GameCore
{
	class TRFCubeComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::TRFCubeType CubeType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFCUBECOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TRFCubeComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TRFCubeComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFCUBECOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TRFCubeComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TRFCubeComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFCUBECOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
