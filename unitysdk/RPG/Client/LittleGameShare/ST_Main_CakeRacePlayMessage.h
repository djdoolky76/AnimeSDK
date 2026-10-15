#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRacePlayMessage; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYMESSAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D326F10)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYMESSAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D326F20)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYMESSAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D326E20)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRacePlayMessage_TypeDefinitionIndex = 10353;

	class ST_Main_CakeRacePlayMessage : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYMESSAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayMessage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYMESSAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayMessage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYMESSAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
