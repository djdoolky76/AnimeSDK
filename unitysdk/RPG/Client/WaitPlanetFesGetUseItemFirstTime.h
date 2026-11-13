#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class WaitPlanetFesGetUseItemFirstTime; }

#define RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E7B20)
#define RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E4E7B30)
#define RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E4E7A60)

namespace RPG::Client
{
	inline static constexpr unsigned int WaitPlanetFesGetUseItemFirstTime_TypeDefinitionIndex = 10287;

	class WaitPlanetFesGetUseItemFirstTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::WaitPlanetFesGetUseItemFirstTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::WaitPlanetFesGetUseItemFirstTime*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::WaitPlanetFesGetUseItemFirstTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::WaitPlanetFesGetUseItemFirstTime*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITPLANETFESGETUSEITEMFIRSTTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
