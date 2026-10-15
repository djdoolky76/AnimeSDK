#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class WaitPlanetFesLargeBonus; }

#define RPG_CLIENT_WAITPLANETFESLARGEBONUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D337840)
#define RPG_CLIENT_WAITPLANETFESLARGEBONUS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D337850)
#define RPG_CLIENT_WAITPLANETFESLARGEBONUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D337780)

namespace RPG::Client
{
	inline static constexpr unsigned int WaitPlanetFesLargeBonus_TypeDefinitionIndex = 10276;

	class WaitPlanetFesLargeBonus : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITPLANETFESLARGEBONUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::WaitPlanetFesLargeBonus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::WaitPlanetFesLargeBonus*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITPLANETFESLARGEBONUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::WaitPlanetFesLargeBonus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::WaitPlanetFesLargeBonus*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITPLANETFESLARGEBONUS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
