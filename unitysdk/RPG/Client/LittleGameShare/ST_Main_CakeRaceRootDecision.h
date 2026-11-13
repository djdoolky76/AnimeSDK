#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceRootDecision; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEROOTDECISION_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C5760)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEROOTDECISION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7C5770)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEROOTDECISION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7CA050)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRaceRootDecision_TypeDefinitionIndex = 10350;

	class ST_Main_CakeRaceRootDecision : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEROOTDECISION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceRootDecision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceRootDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEROOTDECISION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceRootDecision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceRootDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEROOTDECISION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
