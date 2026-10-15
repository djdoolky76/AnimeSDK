#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterHeadConstraint; }

#define RPG_GAMECORE_CHARACTERHEADCONSTRAINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D571AB0)
#define RPG_GAMECORE_CHARACTERHEADCONSTRAINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5719A0)

namespace RPG::GameCore
{
	class CharacterHeadConstraint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single YawMax; // 0x10
		::System::Single PitchMax; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADCONSTRAINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterHeadConstraint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterHeadConstraint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADCONSTRAINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
