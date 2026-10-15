#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationMoveSetStreamSpeed; }

#define RPG_GAMECORE_FORMATIONMOVESETSTREAMSPEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EB820)
#define RPG_GAMECORE_FORMATIONMOVESETSTREAMSPEED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6EB830)
#define RPG_GAMECORE_FORMATIONMOVESETSTREAMSPEED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EB7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMoveSetStreamSpeed_TypeDefinitionIndex = 21259;

	class FormationMoveSetStreamSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StreamId; // 0x18
		::System::Single Speed; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVESETSTREAMSPEED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMoveSetStreamSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMoveSetStreamSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVESETSTREAMSPEED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMoveSetStreamSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMoveSetStreamSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVESETSTREAMSPEED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
