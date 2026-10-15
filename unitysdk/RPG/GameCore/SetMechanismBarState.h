#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMechanismBarState; }

#define RPG_GAMECORE_SETMECHANISMBARSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB9520)
#define RPG_GAMECORE_SETMECHANISMBARSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB9530)
#define RPG_GAMECORE_SETMECHANISMBARSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB94F0)

namespace RPG::GameCore
{
	class SetMechanismBarState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18
		::System::Boolean Active; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMECHANISMBARSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMechanismBarState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMechanismBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMECHANISMBARSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMechanismBarState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMechanismBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMECHANISMBARSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
