#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatConstValueRow; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATCONSTVALUEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6072B0)
#define RPG_GAMECORE_DICECOMBATCONSTVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D607170)

namespace RPG::GameCore
{
	class DiceCombatConstValueRow : public ::System::Object
	{
	public:
		::System::String* ConstValueName; // 0x10
		::RPG::GameCore::DynamicValue* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCONSTVALUEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatConstValueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatConstValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCONSTVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
