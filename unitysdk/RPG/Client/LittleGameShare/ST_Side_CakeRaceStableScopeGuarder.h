#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_Side_CakeRaceStableScopeGuarder; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESTABLESCOPEGUARDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FAC60)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESTABLESCOPEGUARDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2FAC70)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESTABLESCOPEGUARDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2FAB70)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Side_CakeRaceStableScopeGuarder_TypeDefinitionIndex = 10336;

	class ST_Side_CakeRaceStableScopeGuarder : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESTABLESCOPEGUARDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceStableScopeGuarder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceStableScopeGuarder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESTABLESCOPEGUARDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceStableScopeGuarder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceStableScopeGuarder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESTABLESCOPEGUARDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
