#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationMovePause; }

#define RPG_GAMECORE_FORMATIONMOVEPAUSE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EB3A0)
#define RPG_GAMECORE_FORMATIONMOVEPAUSE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6EB3B0)
#define RPG_GAMECORE_FORMATIONMOVEPAUSE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EB370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMovePause_TypeDefinitionIndex = 21257;

	class FormationMovePause : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StreamId; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEPAUSE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMovePause* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMovePause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEPAUSE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationMovePause* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationMovePause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEPAUSE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
