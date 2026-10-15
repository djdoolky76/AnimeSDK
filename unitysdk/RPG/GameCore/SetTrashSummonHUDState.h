#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TrashSummonPeriodState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTrashSummonHUDState; }

#define RPG_GAMECORE_SETTRASHSUMMONHUDSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC89A0)
#define RPG_GAMECORE_SETTRASHSUMMONHUDSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC89B0)
#define RPG_GAMECORE_SETTRASHSUMMONHUDSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC8970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTrashSummonHUDState_TypeDefinitionIndex = 23226;

	class SetTrashSummonHUDState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TrashSummonPeriodState PeriodState; // 0x18
		::System::Boolean IsEnhance; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRASHSUMMONHUDSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTrashSummonHUDState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTrashSummonHUDState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRASHSUMMONHUDSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTrashSummonHUDState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTrashSummonHUDState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRASHSUMMONHUDSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
