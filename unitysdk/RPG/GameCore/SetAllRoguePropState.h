#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAllRoguePropState; }

#define RPG_GAMECORE_SETALLROGUEPROPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA93D80)
#define RPG_GAMECORE_SETALLROGUEPROPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA93D90)
#define RPG_GAMECORE_SETALLROGUEPROPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA93D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAllRoguePropState_TypeDefinitionIndex = 20482;

	class SetAllRoguePropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLROGUEPROPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAllRoguePropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAllRoguePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLROGUEPROPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAllRoguePropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAllRoguePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLROGUEPROPSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
