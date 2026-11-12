#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class PlanetFesClearSpinAnim; }

#define RPG_CLIENT_PLANETFESCLEARSPINANIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E538910)
#define RPG_CLIENT_PLANETFESCLEARSPINANIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E538920)
#define RPG_CLIENT_PLANETFESCLEARSPINANIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E538850)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesClearSpinAnim_TypeDefinitionIndex = 10290;

	class PlanetFesClearSpinAnim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCLEARSPINANIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::PlanetFesClearSpinAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::PlanetFesClearSpinAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCLEARSPINANIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::PlanetFesClearSpinAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::PlanetFesClearSpinAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESCLEARSPINANIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
