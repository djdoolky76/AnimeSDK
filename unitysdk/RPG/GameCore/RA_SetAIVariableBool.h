#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ReactionTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RA_SetAIVariableBool; }
namespace System { class String; }

#define RPG_GAMECORE_RA_SETAIVARIABLEBOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D965220)
#define RPG_GAMECORE_RA_SETAIVARIABLEBOOL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D965230)
#define RPG_GAMECORE_RA_SETAIVARIABLEBOOL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9651F0)

namespace RPG::GameCore
{
	class RA_SetAIVariableBool : public ::RPG::GameCore::ReactionTaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::Boolean Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETAIVARIABLEBOOL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RA_SetAIVariableBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RA_SetAIVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETAIVARIABLEBOOL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RA_SetAIVariableBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RA_SetAIVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETAIVARIABLEBOOL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
