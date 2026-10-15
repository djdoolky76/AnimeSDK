#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetSuiyangDeadAction; }

#define RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DB790)
#define RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DB7A0)
#define RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DB720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetSuiyangDeadAction_TypeDefinitionIndex = 18709;

	class FiveDimSetSuiyangDeadAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetSuiyangDeadAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetSuiyangDeadAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetSuiyangDeadAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetSuiyangDeadAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
