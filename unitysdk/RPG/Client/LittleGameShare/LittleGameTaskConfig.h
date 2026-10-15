#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class LittleGameTaskConfig; }

#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMETASKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F4A50)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMETASKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2F4990)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMETASKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2F4940)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGameTaskConfig_TypeDefinitionIndex = 10354;

	class LittleGameTaskConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMETASKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::LittleGameTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::LittleGameTaskConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMETASKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::LittleGameTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::LittleGameTaskConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMETASKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
