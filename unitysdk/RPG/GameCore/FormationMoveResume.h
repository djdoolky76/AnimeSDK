#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationMoveResume; }

#define RPG_GAMECORE_FORMATIONMOVERESUME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BDA60)
#define RPG_GAMECORE_FORMATIONMOVERESUME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BDA70)
#define RPG_GAMECORE_FORMATIONMOVERESUME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BDA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMoveResume_TypeDefinitionIndex = 21258;

	class FormationMoveResume : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StreamId; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVERESUME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMoveResume* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMoveResume*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVERESUME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMoveResume* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMoveResume*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVERESUME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
