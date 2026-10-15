#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMechanismBarVisible; }

#define RPG_GAMECORE_SETMECHANISMBARVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB9720)
#define RPG_GAMECORE_SETMECHANISMBARVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB9730)
#define RPG_GAMECORE_SETMECHANISMBARVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB96E0)

namespace RPG::GameCore
{
	class SetMechanismBarVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18
		::System::Boolean Visible; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMECHANISMBARVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMechanismBarVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMechanismBarVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMECHANISMBARVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMechanismBarVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMechanismBarVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMECHANISMBARVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
