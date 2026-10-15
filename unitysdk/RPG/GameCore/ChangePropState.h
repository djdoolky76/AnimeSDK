#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangePropState; }

#define RPG_GAMECORE_CHANGEPROPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D53A510)
#define RPG_GAMECORE_CHANGEPROPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D53A520)
#define RPG_GAMECORE_CHANGEPROPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D53A4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangePropState_TypeDefinitionIndex = 20456;

	class ChangePropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEPROPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangePropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEPROPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangePropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEPROPSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
