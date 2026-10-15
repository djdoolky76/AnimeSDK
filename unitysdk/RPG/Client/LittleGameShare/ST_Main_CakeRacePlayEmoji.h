#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRacePlayEmoji; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYEMOJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F9280)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYEMOJI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2F9290)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYEMOJI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2F9190)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRacePlayEmoji_TypeDefinitionIndex = 10352;

	class ST_Main_CakeRacePlayEmoji : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYEMOJI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayEmoji* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayEmoji*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYEMOJI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayEmoji* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayEmoji*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYEMOJI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
