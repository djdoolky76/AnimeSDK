#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ST_Parkour_ShutdownEngine; }

#define RPG_CLIENT_ST_PARKOUR_SHUTDOWNENGINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D336AB0)
#define RPG_CLIENT_ST_PARKOUR_SHUTDOWNENGINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D336AC0)
#define RPG_CLIENT_ST_PARKOUR_SHUTDOWNENGINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3369F0)

namespace RPG::Client
{
	class ST_Parkour_ShutdownEngine : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_SHUTDOWNENGINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ST_Parkour_ShutdownEngine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ST_Parkour_ShutdownEngine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_SHUTDOWNENGINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ST_Parkour_ShutdownEngine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ST_Parkour_ShutdownEngine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_SHUTDOWNENGINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
