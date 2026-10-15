#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ReversePropState; }

#define RPG_GAMECORE_REVERSEPROPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96BBB0)
#define RPG_GAMECORE_REVERSEPROPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96BBC0)
#define RPG_GAMECORE_REVERSEPROPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96BB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReversePropState_TypeDefinitionIndex = 22127;

	class ReversePropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVERSEPROPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReversePropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReversePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVERSEPROPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReversePropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReversePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVERSEPROPSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
