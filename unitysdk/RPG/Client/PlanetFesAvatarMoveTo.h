#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class PlanetFesAvatarMoveTo; }

#define RPG_CLIENT_PLANETFESAVATARMOVETO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D328FF0)
#define RPG_CLIENT_PLANETFESAVATARMOVETO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D329000)
#define RPG_CLIENT_PLANETFESAVATARMOVETO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D328FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarMoveTo_TypeDefinitionIndex = 10281;

	class PlanetFesAvatarMoveTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Position; // 0x18
		::System::Single Duration; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVETO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::PlanetFesAvatarMoveTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::PlanetFesAvatarMoveTo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVETO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::PlanetFesAvatarMoveTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::PlanetFesAvatarMoveTo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVETO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
