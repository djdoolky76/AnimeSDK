#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEnterShowcaseBattle; }

#define RPG_GAMECORE_CHIMERADUELENTERSHOWCASEBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59F180)
#define RPG_GAMECORE_CHIMERADUELENTERSHOWCASEBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59F190)
#define RPG_GAMECORE_CHIMERADUELENTERSHOWCASEBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59F0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEnterShowcaseBattle_TypeDefinitionIndex = 21740;

	class ChimeraDuelEnterShowcaseBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTERSHOWCASEBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEnterShowcaseBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEnterShowcaseBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTERSHOWCASEBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEnterShowcaseBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEnterShowcaseBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTERSHOWCASEBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
