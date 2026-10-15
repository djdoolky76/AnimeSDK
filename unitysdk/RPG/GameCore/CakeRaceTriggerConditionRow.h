#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerConditionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceTriggerConditionRow; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACETRIGGERCONDITIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D553910)
#define RPG_GAMECORE_CAKERACETRIGGERCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D553780)

namespace RPG::GameCore
{
	class CakeRaceTriggerConditionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ParamList; // 0x10
		::RPG::GameCore::CakeRaceTriggerConditionType ConditionType; // 0x18
		::System::UInt32 ConditionID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETRIGGERCONDITIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceTriggerConditionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceTriggerConditionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETRIGGERCONDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
