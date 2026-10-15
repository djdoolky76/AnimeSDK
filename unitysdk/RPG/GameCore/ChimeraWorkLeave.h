#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
#include "unitysdk/RPG/GameCore/ChimeraWorkLeaveType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraWorkLeave; }

#define RPG_GAMECORE_CHIMERAWORKLEAVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D583BB0)
#define RPG_GAMECORE_CHIMERAWORKLEAVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D583BC0)
#define RPG_GAMECORE_CHIMERAWORKLEAVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D583B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkLeave_TypeDefinitionIndex = 15867;

	class ChimeraWorkLeave : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraWorkLeaveType LeaveType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKLEAVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraWorkLeave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraWorkLeave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKLEAVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraWorkLeave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraWorkLeave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKLEAVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
